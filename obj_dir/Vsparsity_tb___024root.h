// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsparsity_tb.h for the primary calling header

#ifndef VERILATED_VSPARSITY_TB___024ROOT_H_
#define VERILATED_VSPARSITY_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsparsity_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsparsity_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ sparsity_tb__DOT__rst_n;
        CData/*0:0*/ sparsity_tb__DOT__clk;
        CData/*0:0*/ sparsity_tb__DOT__ofifo_rd;
        CData/*0:0*/ sparsity_tb__DOT__qmem_rd;
        CData/*0:0*/ sparsity_tb__DOT__qmem_wr;
        CData/*0:0*/ sparsity_tb__DOT__kmem_rd;
        CData/*0:0*/ sparsity_tb__DOT__kmem_wr;
        CData/*0:0*/ sparsity_tb__DOT__pmem_rd;
        CData/*0:0*/ sparsity_tb__DOT__pmem_wr;
        CData/*0:0*/ sparsity_tb__DOT__execute;
        CData/*0:0*/ sparsity_tb__DOT__load;
        CData/*0:0*/ sparsity_tb__DOT__sfp_start;
        CData/*0:0*/ sparsity_tb__DOT__sfp_sel;
        CData/*3:0*/ sparsity_tb__DOT__qkmem_add;
        CData/*3:0*/ sparsity_tb__DOT__pmem_add;
        CData/*0:0*/ sparsity_tb__DOT__enable_elem_sparsity;
        CData/*0:0*/ sparsity_tb__DOT__enable_row_sparsity;
        CData/*0:0*/ sparsity_tb__DOT__sfp_done;
        CData/*7:0*/ sparsity_tb__DOT__dut__DOT__fifo_wr_gated;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT____Vcellinp__qmem_instance__CEN;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT____Vcellinp__kmem_instance__CEN;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT____Vcellinp__psum_mem_instance__CEN;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q;
        CData/*3:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__en_q;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__wr_k_q;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q;
        CData/*3:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__en_q;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__wr_k_q;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q;
        CData/*3:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__en_q;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__wr_k_q;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q;
        CData/*3:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__en_q;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__wr_k_q;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q;
        CData/*3:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__en_q;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__wr_k_q;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q;
        CData/*3:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__en_q;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__wr_k_q;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q;
        CData/*3:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__en_q;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__wr_k_q;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q;
        CData/*3:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__en_q;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__wr_k_q;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_0;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_1;
    };
    struct {
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_2;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_3;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_4;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_5;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_6;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_7;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__full;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__empty;
        CData/*6:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__rd_ptr;
        CData/*6:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__full;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__empty;
        CData/*6:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__rd_ptr;
        CData/*6:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__full;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__empty;
        CData/*6:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__rd_ptr;
        CData/*6:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__full;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__empty;
        CData/*6:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__rd_ptr;
        CData/*6:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__full;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__empty;
        CData/*6:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__rd_ptr;
        CData/*6:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__full;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__empty;
        CData/*6:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__rd_ptr;
        CData/*6:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__full;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__empty;
        CData/*6:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__rd_ptr;
        CData/*6:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__full;
        CData/*0:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__empty;
        CData/*6:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__rd_ptr;
        CData/*6:0*/ sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr;
        CData/*1:0*/ sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__state;
        CData/*1:0*/ sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt;
        CData/*3:0*/ sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_step;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sparsity_tb__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sparsity_tb__DOT__rst_n__0;
        SData/*9:0*/ __VdfgRegularize_h4af1c392_0_0;
        SData/*9:0*/ __VdfgRegularize_h4af1c392_0_1;
        SData/*9:0*/ __VdfgRegularize_h4af1c392_0_2;
        SData/*9:0*/ __VdfgRegularize_h4af1c392_0_3;
        SData/*9:0*/ __VdfgRegularize_h4af1c392_0_4;
        SData/*9:0*/ __VdfgRegularize_h4af1c392_0_5;
        SData/*9:0*/ __VdfgRegularize_h4af1c392_0_6;
        SData/*9:0*/ __VdfgRegularize_h4af1c392_0_7;
        IData/*31:0*/ sparsity_tb__DOT__captured_data;
        IData/*31:0*/ sparsity_tb__DOT__q;
        IData/*31:0*/ sparsity_tb__DOT__pass_cnt;
        IData/*31:0*/ sparsity_tb__DOT__fail_cnt;
        IData/*18:0*/ sparsity_tb__DOT__inst;
        IData/*19:0*/ sparsity_tb__DOT__threshold_elem;
        IData/*22:0*/ sparsity_tb__DOT__threshold_row;
        VlWide<5>/*159:0*/ sparsity_tb__DOT__dut__DOT__pmem_out;
        VlWide<5>/*159:0*/ sparsity_tb__DOT__dut__DOT__pmem_in;
        VlWide<5>/*159:0*/ sparsity_tb__DOT__dut__DOT__gated_array_out;
        IData/*22:0*/ sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_reg;
        IData/*22:0*/ sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT____Vlvbound_h60f13c37__0;
    };
    struct {
        IData/*31:0*/ __Vtask_sparsity_tb__DOT__verify_qk__17__exp;
        IData/*31:0*/ __Vtask_sparsity_tb__DOT__verify_qk__17__kc;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ sparsity_tb__DOT__mem_in;
        QData/*63:0*/ sparsity_tb__DOT__dut__DOT__kmem_out;
        QData/*63:0*/ sparsity_tb__DOT__dut__DOT__qmem_out;
        QData/*63:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q;
        QData/*63:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q;
        QData/*63:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q;
        QData/*63:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q;
        QData/*63:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q;
        QData/*63:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q;
        QData/*63:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q;
        QData/*63:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q;
        QData/*63:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q;
        QData/*63:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q;
        QData/*63:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q;
        QData/*63:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q;
        QData/*63:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q;
        QData/*63:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q;
        QData/*63:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q;
        QData/*63:0*/ sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 8>, 8> sparsity_tb__DOT__K;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 8>, 8> sparsity_tb__DOT__Q;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 8>, 8> sparsity_tb__DOT__result;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 8>, 8> sparsity_tb__DOT__abs_result;
        VlUnpacked<IData/*31:0*/, 8> sparsity_tb__DOT__row_sums;
        VlUnpacked<VlUnpacked<IData/*19:0*/, 8>, 8> sparsity_tb__DOT__hw_result;
        VlUnpacked<CData/*0:0*/, 9> sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__en_chain;
        VlUnpacked<CData/*0:0*/, 9> sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__wr_k_chain;
        VlUnpacked<QData/*63:0*/, 9> sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__q_chain;
        VlUnpacked<CData/*0:0*/, 5> sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe;
        VlUnpacked<VlUnpacked<IData/*19:0*/, 8>, 4> sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data;
        VlUnpacked<CData/*0:0*/, 5> sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe;
        VlUnpacked<VlUnpacked<IData/*19:0*/, 8>, 4> sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data;
        VlUnpacked<CData/*0:0*/, 5> sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe;
        VlUnpacked<VlUnpacked<IData/*19:0*/, 8>, 4> sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data;
        VlUnpacked<CData/*0:0*/, 5> sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe;
        VlUnpacked<VlUnpacked<IData/*19:0*/, 8>, 4> sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data;
        VlUnpacked<CData/*0:0*/, 5> sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe;
        VlUnpacked<VlUnpacked<IData/*19:0*/, 8>, 4> sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data;
        VlUnpacked<CData/*0:0*/, 5> sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe;
        VlUnpacked<VlUnpacked<IData/*19:0*/, 8>, 4> sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data;
        VlUnpacked<CData/*0:0*/, 5> sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe;
        VlUnpacked<VlUnpacked<IData/*19:0*/, 8>, 4> sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data;
        VlUnpacked<CData/*0:0*/, 5> sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe;
        VlUnpacked<VlUnpacked<IData/*19:0*/, 8>, 4> sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data;
        VlUnpacked<IData/*19:0*/, 64> sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q;
        VlUnpacked<IData/*19:0*/, 64> sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q;
        VlUnpacked<IData/*19:0*/, 64> sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q;
        VlUnpacked<IData/*19:0*/, 64> sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q;
        VlUnpacked<IData/*19:0*/, 64> sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q;
        VlUnpacked<IData/*19:0*/, 64> sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q;
        VlUnpacked<IData/*19:0*/, 64> sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q;
        VlUnpacked<IData/*19:0*/, 64> sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q;
        VlUnpacked<IData/*19:0*/, 8> sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val;
        VlUnpacked<IData/*22:0*/, 8> sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r;
        VlUnpacked<CData/*0:0*/, 8> sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r;
        VlUnpacked<VlUnpacked<IData/*22:0*/, 8>, 3> sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r;
        VlUnpacked<IData/*23:0*/, 8> sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem;
        VlUnpacked<SData/*9:0*/, 8> sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot;
        VlUnpacked<QData/*63:0*/, 16> sparsity_tb__DOT__dut__DOT__qmem_instance__DOT__memory;
        VlUnpacked<QData/*63:0*/, 16> sparsity_tb__DOT__dut__DOT__kmem_instance__DOT__memory;
        VlUnpacked<VlWide<5>/*159:0*/, 16> sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory;
    };
    struct {
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vsparsity_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsparsity_tb___024root(Vsparsity_tb__Syms* symsp, const char* v__name);
    ~Vsparsity_tb___024root();
    VL_UNCOPYABLE(Vsparsity_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
