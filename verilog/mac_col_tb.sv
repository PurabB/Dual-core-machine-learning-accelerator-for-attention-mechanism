// Created by prof. Mingu Kang @VVIP Lab in UCSD ECE department
// Please do not spread this code without permission

`timescale 1ns / 1ps

module fullchip_tb;

  parameter int TOTAL_CYCLE = 8;  // how many streamed Q vectors will be processed
  parameter int BW = 8;  // Q & K vector bit precision
  parameter int BW_PSUM = 2 * BW + 4;  // partial sum bit precision
  parameter int PR = 16;  // how many products added in each dot product
  parameter int COL = 1;  // how many dot product units are equipped

  integer qk_file;  // file handler
  integer qk_scan_file;  // file handler


  integer captured_data;
  integer weight[COL*PR-1:0];
  `define NULL 0




  integer K[PR-1:0];
  integer Q[TOTAL_CYCLE-1:0][PR-1:0];
  integer result[TOTAL_CYCLE-1:0];
  integer sum[TOTAL_CYCLE-1:0];

  integer i, j, k, t, p, q, s, u, m;




  logic reset = 1;
  logic clk = 0;
  logic [PR*BW-1:0] mem_in;
  logic ofifo_rd = 0;
  logic [16:0] inst;
  logic qmem_rd = 0;
  logic qmem_wr = 0;
  logic kmem_rd = 0;
  logic kmem_wr = 0;
  logic pmem_rd = 0;
  logic pmem_wr = 0;
  logic execute = 0;
  logic load = 0;
  logic [3:0] qkmem_add = 0;
  logic [3:0] pmem_add = 0;

  always_comb begin
    inst[16]    = ofifo_rd;
    inst[15:12] = qkmem_add;
    inst[11:8]  = pmem_add;
    inst[7]     = execute;
    inst[6]     = load;
    inst[5]     = qmem_rd;
    inst[4]     = qmem_wr;
    inst[3]     = kmem_rd;
    inst[2]     = kmem_wr;
    inst[1]     = pmem_rd;
    inst[0]     = pmem_wr;
  end



  logic [BW_PSUM-1:0] temp5b;
  logic [BW_PSUM+3:0] temp_sum;
  logic [BW_PSUM*COL-1:0] temp16b;


  mac_col #(
      .BW(BW),
      .BW_PSUM(BW_PSUM),
      .COL(COL),
      .PR(PR)
  ) mac_col_instance (
      .reset(reset),
      .clk(clk),
      .mem_in(mem_in),
      .inst(inst)
  );


  initial begin

    $dumpfile("fullchip_tb.vcd");
    $dumpvars(0, fullchip_tb);



    ///// Q data txt reading /////

    $display("##### Q data txt reading #####");


    qk_file = $fopen("qdata.txt", "r");

    //// To get rid of first 3 lines in data file ////
    qk_scan_file = $fscanf(qk_file, "%s\n", captured_data);
    qk_scan_file = $fscanf(qk_file, "%s\n", captured_data);
    qk_scan_file = $fscanf(qk_file, "%s\n", captured_data);
    qk_scan_file = $fscanf(qk_file, "%s\n", captured_data);


    for (q = 0; q < COL; q = q + 1) begin
      for (j = 0; j < PR; j = j + 1) begin
        qk_scan_file = $fscanf(qk_file, "%d\n", captured_data);
        Q[q][j] = captured_data;
        //$display("%d\n", K[q][j]);
      end
    end
    /////////////////////////////////




    for (q = 0; q < 2; q = q + 1) begin
      #0.5 clk = 1'b0;
      #0.5 clk = 1'b1;
    end




    ///// K data txt reading /////

    $display("##### K data txt reading #####");

    for (q = 0; q < 10; q = q + 1) begin
      #0.5 clk = 1'b0;
      #0.5 clk = 1'b1;
    end
    reset = 0;

    qk_file = $fopen("kdata.txt", "r");

    //// To get rid of first 4 lines in data file ////
    qk_scan_file = $fscanf(qk_file, "%s\n", captured_data);
    qk_scan_file = $fscanf(qk_file, "%s\n", captured_data);
    qk_scan_file = $fscanf(qk_file, "%s\n", captured_data);
    qk_scan_file = $fscanf(qk_file, "%s\n", captured_data);




    for (j = 0; j < PR; j = j + 1) begin
      qk_scan_file = $fscanf(qk_file, "%d\n", captured_data);
      K[j] = captured_data;
      //$display("##### %d\n", K[q][j]);
    end
    /////////////////////////////////








    /////////////// Estimated result printing /////////////////


    $display("##### Estimated multiplication result #####");

    for (t = 0; t < TOTAL_CYCLE; t = t + 1) begin
      result[t] = 0;
    end

    for (t = 0; t < TOTAL_CYCLE; t = t + 1) begin
      for (k = 0; k < PR; k = k + 1) begin
        result[t] = result[t] + Q[t][k] * K[k];
      end

      temp5b  = result[t][q];
      temp16b = {temp16b[139:0], temp5b};

      // $display("%d %d %d %d %d %d %d %d",
      //   result[t][0], result[t][1], result[t][2],
      //   result[t][3], result[t][4], result[t][5],
      //   result[t][6], result[t][7]);
      $display("prd @cycle%2d: %40h", t, temp16b);
    end

    //////////////////////////////////////////////






    ///// Qmem writing  /////

    $display("##### Qmem writing  #####");

    for (q = 0; q < COL; q = q + 1) begin

      #0.5 clk = 1'b0;
      qmem_wr = 1;
      if (q > 0) qkmem_add = qkmem_add + 1;

      mem_in[1*BW-1:0*BW]   = Q[q][0];
      mem_in[2*BW-1:1*BW]   = Q[q][1];
      mem_in[3*BW-1:2*BW]   = Q[q][2];
      mem_in[4*BW-1:3*BW]   = Q[q][3];
      mem_in[5*BW-1:4*BW]   = Q[q][4];
      mem_in[6*BW-1:5*BW]   = Q[q][5];
      mem_in[7*BW-1:6*BW]   = Q[q][6];
      mem_in[8*BW-1:7*BW]   = Q[q][7];
      mem_in[9*BW-1:8*BW]   = Q[q][8];
      mem_in[10*BW-1:9*BW]  = Q[q][9];
      mem_in[11*BW-1:10*BW] = Q[q][10];
      mem_in[12*BW-1:11*BW] = Q[q][11];
      mem_in[13*BW-1:12*BW] = Q[q][12];
      mem_in[14*BW-1:13*BW] = Q[q][13];
      mem_in[15*BW-1:14*BW] = Q[q][14];
      mem_in[16*BW-1:15*BW] = Q[q][15];

      #0.5 clk = 1'b1;

    end


    #0.5 clk = 1'b0;
    qmem_wr   = 0;
    qkmem_add = 0;
    #0.5 clk = 1'b1;
    ///////////////////////////////////////////





    ///// Kmem writing  /////

    $display("##### Kmem writing #####");

    for (q = 0; q < COL; q = q + 1) begin

      #0.5 clk = 1'b0;
      kmem_wr = 1;
      if (q > 0) qkmem_add = qkmem_add + 1;

      mem_in[1*BW-1:0*BW]   = K[q][0];
      mem_in[2*BW-1:1*BW]   = K[q][1];
      mem_in[3*BW-1:2*BW]   = K[q][2];
      mem_in[4*BW-1:3*BW]   = K[q][3];
      mem_in[5*BW-1:4*BW]   = K[q][4];
      mem_in[6*BW-1:5*BW]   = K[q][5];
      mem_in[7*BW-1:6*BW]   = K[q][6];
      mem_in[8*BW-1:7*BW]   = K[q][7];
      mem_in[9*BW-1:8*BW]   = K[q][8];
      mem_in[10*BW-1:9*BW]  = K[q][9];
      mem_in[11*BW-1:10*BW] = K[q][10];
      mem_in[12*BW-1:11*BW] = K[q][11];
      mem_in[13*BW-1:12*BW] = K[q][12];
      mem_in[14*BW-1:13*BW] = K[q][13];
      mem_in[15*BW-1:14*BW] = K[q][14];
      mem_in[16*BW-1:15*BW] = K[q][15];

      #0.5 clk = 1'b1;

    end

    #0.5 clk = 1'b0;
    kmem_wr   = 0;
    qkmem_add = 0;
    #0.5 clk = 1'b1;
    ///////////////////////////////////////////



    for (q = 0; q < 2; q = q + 1) begin
      #0.5 clk = 1'b0;
      #0.5 clk = 1'b1;
    end




    /////  K data loading  /////
    $display("##### K data loading to processor #####");

    for (q = 0; q < COL + 1; q = q + 1) begin
      #0.5 clk = 1'b0;
      load = 1;
      if (q == 1) kmem_rd = 1;
      if (q > 1) begin
        qkmem_add = qkmem_add + 1;
      end

      #0.5 clk = 1'b1;
    end

    #0.5 clk = 1'b0;
    kmem_rd   = 0;
    qkmem_add = 0;
    #0.5 clk = 1'b1;

    #0.5 clk = 1'b0;
    load = 0;
    #0.5 clk = 1'b1;

    ///////////////////////////////////////////

    for (q = 0; q < 10; q = q + 1) begin
      #0.5 clk = 1'b0;
      #0.5 clk = 1'b1;
    end





    ///// execution  /////
    $display("##### execute #####");

    for (q = 0; q < COL; q = q + 1) begin
      #0.5 clk = 1'b0;
      execute = 1;
      qmem_rd = 1;

      if (q > 0) begin
        qkmem_add = qkmem_add + 1;
      end

      #0.5 clk = 1'b1;
    end

    #0.5 clk = 1'b0;
    qmem_rd   = 0;
    qkmem_add = 0;
    execute   = 0;
    #0.5 clk = 1'b1;


    ///////////////////////////////////////////

    for (q = 0; q < 10; q = q + 1) begin
      #0.5 clk = 1'b0;
      #0.5 clk = 1'b1;
    end




    ////////////// output fifo rd and wb to psum mem ///////////////////

    $display("##### move ofifo to pmem #####");

    for (q = 0; q < COL; q = q + 1) begin
      #0.5 clk = 1'b0;
      ofifo_rd = 1;
      pmem_wr  = 1;

      if (q > 0) begin
        pmem_add = pmem_add + 1;
      end

      #0.5 clk = 1'b1;
    end

    #0.5 clk = 1'b0;
    pmem_wr  = 0;
    pmem_add = 0;
    ofifo_rd = 0;
    #0.5 clk = 1'b1;

    ///////////////////////////////////////////




    #10 $finish;


  end

endmodule
