// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsparsity_tb.h for the primary calling header

#include "Vsparsity_tb__pch.h"

VlCoroutine Vsparsity_tb___024root___eval_initial__TOP__Vtiming__0(Vsparsity_tb___024root* vlSelf);

void Vsparsity_tb___024root___eval_initial(Vsparsity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___eval_initial\n"); );
    Vsparsity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsparsity_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine Vsparsity_tb___024root___eval_initial__TOP__Vtiming__0__0(Vsparsity_tb___024root* vlSelf);
VlCoroutine Vsparsity_tb___024root___eval_initial__TOP__Vtiming__0__1(Vsparsity_tb___024root* vlSelf);

VlCoroutine Vsparsity_tb___024root___eval_initial__TOP__Vtiming__0(Vsparsity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vsparsity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await Vsparsity_tb___024root___eval_initial__TOP__Vtiming__0__0(vlSelf);
    co_await Vsparsity_tb___024root___eval_initial__TOP__Vtiming__0__1(vlSelf);
}

VlCoroutine Vsparsity_tb___024root___eval_initial__TOP__Vtiming__0__0(Vsparsity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___eval_initial__TOP__Vtiming__0__0\n"); );
    Vsparsity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ sparsity_tb__DOT__qk_file;
    sparsity_tb__DOT__qk_file = 0;
    IData/*31:0*/ sparsity_tb__DOT__qk_scan_file;
    sparsity_tb__DOT__qk_scan_file = 0;
    IData/*31:0*/ sparsity_tb__DOT__gated_count;
    sparsity_tb__DOT__gated_count = 0;
    IData/*31:0*/ sparsity_tb__DOT__skipped_rows;
    sparsity_tb__DOT__skipped_rows = 0;
    IData/*31:0*/ __Vtask_sparsity_tb__DOT__run_full_pipeline__0__do_norm;
    __Vtask_sparsity_tb__DOT__run_full_pipeline__0__do_norm = 0;
    IData/*31:0*/ __Vtask_sparsity_tb__DOT__do_reset__1__sparsity_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_sparsity_tb__DOT__do_reset__1__sparsity_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_sparsity_tb__DOT__do_reset__1__sparsity_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_sparsity_tb__DOT__do_reset__1__sparsity_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_sparsity_tb__DOT__load_keys__6__sparsity_tb__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_sparsity_tb__DOT__load_keys__6__sparsity_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_sparsity_tb__DOT__load_keys__6__sparsity_tb__DOT__unnamedblk1_4__DOT____Vrepeat3;
    __Vtask_sparsity_tb__DOT__load_keys__6__sparsity_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ __Vtask_sparsity_tb__DOT__run_execute__9__sparsity_tb__DOT__unnamedblk1_5__DOT____Vrepeat4;
    __Vtask_sparsity_tb__DOT__run_execute__9__sparsity_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    IData/*31:0*/ __Vtask_sparsity_tb__DOT__ofifo_to_pmem__11__sparsity_tb__DOT__unnamedblk1_6__DOT____Vrepeat5;
    __Vtask_sparsity_tb__DOT__ofifo_to_pmem__11__sparsity_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    IData/*31:0*/ __Vtask_sparsity_tb__DOT__run_sfp_norm__13__sparsity_tb__DOT__unnamedblk1_7__DOT____Vrepeat6;
    __Vtask_sparsity_tb__DOT__run_sfp_norm__13__sparsity_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0;
    std::string __Vtask_sparsity_tb__DOT__verify_qk__17__label;
    // Body
    vlSymsp->_vm_contextp__->dumpfile("sparsity_tb.vcd"s);
    VL_PRINTF_MT("-Info: verilog/sparsity_tb.sv:236: $dumpvar ignored, as Verilated without --trace\n");
    sparsity_tb__DOT__qk_file = VL_FOPEN_NN("sparsity_qdata.txt"s
                                            , "r"s);
    ;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[0U][0U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[0U][1U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[0U][2U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[0U][3U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[0U][4U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[0U][5U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[0U][6U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[0U][7U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[1U][0U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[1U][1U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[1U][2U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[1U][3U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[1U][4U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[1U][5U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[1U][6U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[1U][7U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[2U][0U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[2U][1U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[2U][2U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[2U][3U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[2U][4U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[2U][5U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[2U][6U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[2U][7U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[3U][0U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[3U][1U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[3U][2U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[3U][3U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[3U][4U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[3U][5U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[3U][6U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[3U][7U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[4U][0U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[4U][1U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[4U][2U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[4U][3U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[4U][4U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[4U][5U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[4U][6U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[4U][7U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[5U][0U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[5U][1U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[5U][2U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[5U][3U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[5U][4U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[5U][5U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[5U][6U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[5U][7U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[6U][0U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[6U][1U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[6U][2U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[6U][3U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[6U][4U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[6U][5U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[6U][6U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[6U][7U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[7U][0U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[7U][1U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[7U][2U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[7U][3U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[7U][4U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[7U][5U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[7U][6U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__Q[7U][7U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    VL_FCLOSE_I(sparsity_tb__DOT__qk_file); sparsity_tb__DOT__qk_file 
        = VL_FOPEN_NN("sparsity_kdata.txt"s, "r"s);
    ;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[0U][0U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[0U][1U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[0U][2U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[0U][3U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[0U][4U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[0U][5U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[0U][6U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[0U][7U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[1U][0U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[1U][1U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[1U][2U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[1U][3U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[1U][4U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[1U][5U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[1U][6U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[1U][7U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[2U][0U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[2U][1U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[2U][2U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[2U][3U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[2U][4U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[2U][5U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[2U][6U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[2U][7U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[3U][0U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[3U][1U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[3U][2U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[3U][3U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[3U][4U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[3U][5U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[3U][6U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[3U][7U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[4U][0U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[4U][1U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[4U][2U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[4U][3U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[4U][4U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[4U][5U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[4U][6U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[4U][7U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[5U][0U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[5U][1U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[5U][2U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[5U][3U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[5U][4U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[5U][5U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[5U][6U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[5U][7U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[6U][0U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[6U][1U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[6U][2U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[6U][3U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[6U][4U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[6U][5U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[6U][6U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[6U][7U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[7U][0U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[7U][1U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[7U][2U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[7U][3U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[7U][4U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[7U][5U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[7U][6U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__K[7U][7U] = vlSelfRef.sparsity_tb__DOT__captured_data;
    VL_FCLOSE_I(sparsity_tb__DOT__qk_file); sparsity_tb__DOT__qk_file 
        = VL_FOPEN_NN("sparsity_thresholds.txt"s, "r"s);
    ;
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__threshold_elem = (0x000fffffU 
                                                  & vlSelfRef.sparsity_tb__DOT__captured_data);
    sparsity_tb__DOT__qk_scan_file = VL_FSCANF_INX(sparsity_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.sparsity_tb__DOT__captured_data)) ;
    vlSelfRef.sparsity_tb__DOT__threshold_row = (0x007fffffU 
                                                 & vlSelfRef.sparsity_tb__DOT__captured_data);
    VL_FCLOSE_I(sparsity_tb__DOT__qk_file); sparsity_tb__DOT__gated_count = 0U;
    sparsity_tb__DOT__skipped_rows = 0U;
    vlSelfRef.sparsity_tb__DOT__row_sums[0U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[0U][0U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[0U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[0U][0U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [0U][0U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [0U][0U]) : vlSelfRef.sparsity_tb__DOT__result
           [0U][0U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[0U]
         [0U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[0U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [0U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [0U]
                                                [0U]);
    vlSelfRef.sparsity_tb__DOT__result[0U][1U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[0U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[0U][1U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [0U][1U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [0U][1U]) : vlSelfRef.sparsity_tb__DOT__result
           [0U][1U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[0U]
         [1U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[0U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [0U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [0U]
                                                [1U]);
    vlSelfRef.sparsity_tb__DOT__result[0U][2U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[0U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[0U][2U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [0U][2U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [0U][2U]) : vlSelfRef.sparsity_tb__DOT__result
           [0U][2U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[0U]
         [2U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[0U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [0U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [0U]
                                                [2U]);
    vlSelfRef.sparsity_tb__DOT__result[0U][3U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[0U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[0U][3U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [0U][3U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [0U][3U]) : vlSelfRef.sparsity_tb__DOT__result
           [0U][3U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[0U]
         [3U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[0U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [0U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [0U]
                                                [3U]);
    vlSelfRef.sparsity_tb__DOT__result[0U][4U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[0U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[0U][4U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [0U][4U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [0U][4U]) : vlSelfRef.sparsity_tb__DOT__result
           [0U][4U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[0U]
         [4U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[0U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [0U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [0U]
                                                [4U]);
    vlSelfRef.sparsity_tb__DOT__result[0U][5U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[0U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[0U][5U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [0U][5U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [0U][5U]) : vlSelfRef.sparsity_tb__DOT__result
           [0U][5U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[0U]
         [5U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[0U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [0U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [0U]
                                                [5U]);
    vlSelfRef.sparsity_tb__DOT__result[0U][6U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[0U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[0U][6U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [0U][6U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [0U][6U]) : vlSelfRef.sparsity_tb__DOT__result
           [0U][6U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[0U]
         [6U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[0U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [0U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [0U]
                                                [6U]);
    vlSelfRef.sparsity_tb__DOT__result[0U][7U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[0U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[0U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [0U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [0U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[0U][7U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [0U][7U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [0U][7U]) : vlSelfRef.sparsity_tb__DOT__result
           [0U][7U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[0U]
         [7U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[0U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [0U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [0U]
                                                [7U]);
    if ((vlSelfRef.sparsity_tb__DOT__row_sums[0U] < vlSelfRef.sparsity_tb__DOT__threshold_row)) {
        sparsity_tb__DOT__skipped_rows = ((IData)(1U) 
                                          + sparsity_tb__DOT__skipped_rows);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[1U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[1U][0U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[1U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[1U][0U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [1U][0U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [1U][0U]) : vlSelfRef.sparsity_tb__DOT__result
           [1U][0U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[1U]
         [0U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[1U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [1U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [1U]
                                                [0U]);
    vlSelfRef.sparsity_tb__DOT__result[1U][1U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[1U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[1U][1U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [1U][1U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [1U][1U]) : vlSelfRef.sparsity_tb__DOT__result
           [1U][1U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[1U]
         [1U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[1U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [1U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [1U]
                                                [1U]);
    vlSelfRef.sparsity_tb__DOT__result[1U][2U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[1U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[1U][2U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [1U][2U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [1U][2U]) : vlSelfRef.sparsity_tb__DOT__result
           [1U][2U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[1U]
         [2U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[1U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [1U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [1U]
                                                [2U]);
    vlSelfRef.sparsity_tb__DOT__result[1U][3U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[1U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[1U][3U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [1U][3U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [1U][3U]) : vlSelfRef.sparsity_tb__DOT__result
           [1U][3U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[1U]
         [3U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[1U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [1U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [1U]
                                                [3U]);
    vlSelfRef.sparsity_tb__DOT__result[1U][4U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[1U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[1U][4U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [1U][4U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [1U][4U]) : vlSelfRef.sparsity_tb__DOT__result
           [1U][4U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[1U]
         [4U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[1U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [1U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [1U]
                                                [4U]);
    vlSelfRef.sparsity_tb__DOT__result[1U][5U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[1U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[1U][5U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [1U][5U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [1U][5U]) : vlSelfRef.sparsity_tb__DOT__result
           [1U][5U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[1U]
         [5U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[1U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [1U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [1U]
                                                [5U]);
    vlSelfRef.sparsity_tb__DOT__result[1U][6U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[1U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[1U][6U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [1U][6U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [1U][6U]) : vlSelfRef.sparsity_tb__DOT__result
           [1U][6U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[1U]
         [6U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[1U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [1U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [1U]
                                                [6U]);
    vlSelfRef.sparsity_tb__DOT__result[1U][7U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[1U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[1U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [1U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [1U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[1U][7U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [1U][7U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [1U][7U]) : vlSelfRef.sparsity_tb__DOT__result
           [1U][7U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[1U]
         [7U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[1U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [1U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [1U]
                                                [7U]);
    if ((vlSelfRef.sparsity_tb__DOT__row_sums[1U] < vlSelfRef.sparsity_tb__DOT__threshold_row)) {
        sparsity_tb__DOT__skipped_rows = ((IData)(1U) 
                                          + sparsity_tb__DOT__skipped_rows);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[2U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[2U][0U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[2U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[2U][0U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [2U][0U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [2U][0U]) : vlSelfRef.sparsity_tb__DOT__result
           [2U][0U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[2U]
         [0U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[2U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [2U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [2U]
                                                [0U]);
    vlSelfRef.sparsity_tb__DOT__result[2U][1U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[2U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[2U][1U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [2U][1U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [2U][1U]) : vlSelfRef.sparsity_tb__DOT__result
           [2U][1U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[2U]
         [1U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[2U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [2U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [2U]
                                                [1U]);
    vlSelfRef.sparsity_tb__DOT__result[2U][2U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[2U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[2U][2U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [2U][2U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [2U][2U]) : vlSelfRef.sparsity_tb__DOT__result
           [2U][2U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[2U]
         [2U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[2U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [2U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [2U]
                                                [2U]);
    vlSelfRef.sparsity_tb__DOT__result[2U][3U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[2U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[2U][3U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [2U][3U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [2U][3U]) : vlSelfRef.sparsity_tb__DOT__result
           [2U][3U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[2U]
         [3U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[2U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [2U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [2U]
                                                [3U]);
    vlSelfRef.sparsity_tb__DOT__result[2U][4U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[2U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[2U][4U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [2U][4U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [2U][4U]) : vlSelfRef.sparsity_tb__DOT__result
           [2U][4U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[2U]
         [4U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[2U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [2U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [2U]
                                                [4U]);
    vlSelfRef.sparsity_tb__DOT__result[2U][5U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[2U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[2U][5U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [2U][5U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [2U][5U]) : vlSelfRef.sparsity_tb__DOT__result
           [2U][5U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[2U]
         [5U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[2U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [2U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [2U]
                                                [5U]);
    vlSelfRef.sparsity_tb__DOT__result[2U][6U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[2U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[2U][6U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [2U][6U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [2U][6U]) : vlSelfRef.sparsity_tb__DOT__result
           [2U][6U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[2U]
         [6U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[2U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [2U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [2U]
                                                [6U]);
    vlSelfRef.sparsity_tb__DOT__result[2U][7U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[2U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[2U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [2U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [2U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[2U][7U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [2U][7U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [2U][7U]) : vlSelfRef.sparsity_tb__DOT__result
           [2U][7U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[2U]
         [7U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[2U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [2U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [2U]
                                                [7U]);
    if ((vlSelfRef.sparsity_tb__DOT__row_sums[2U] < vlSelfRef.sparsity_tb__DOT__threshold_row)) {
        sparsity_tb__DOT__skipped_rows = ((IData)(1U) 
                                          + sparsity_tb__DOT__skipped_rows);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[3U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[3U][0U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[3U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[3U][0U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [3U][0U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [3U][0U]) : vlSelfRef.sparsity_tb__DOT__result
           [3U][0U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[3U]
         [0U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[3U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [3U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [3U]
                                                [0U]);
    vlSelfRef.sparsity_tb__DOT__result[3U][1U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[3U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[3U][1U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [3U][1U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [3U][1U]) : vlSelfRef.sparsity_tb__DOT__result
           [3U][1U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[3U]
         [1U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[3U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [3U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [3U]
                                                [1U]);
    vlSelfRef.sparsity_tb__DOT__result[3U][2U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[3U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[3U][2U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [3U][2U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [3U][2U]) : vlSelfRef.sparsity_tb__DOT__result
           [3U][2U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[3U]
         [2U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[3U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [3U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [3U]
                                                [2U]);
    vlSelfRef.sparsity_tb__DOT__result[3U][3U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[3U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[3U][3U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [3U][3U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [3U][3U]) : vlSelfRef.sparsity_tb__DOT__result
           [3U][3U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[3U]
         [3U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[3U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [3U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [3U]
                                                [3U]);
    vlSelfRef.sparsity_tb__DOT__result[3U][4U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[3U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[3U][4U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [3U][4U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [3U][4U]) : vlSelfRef.sparsity_tb__DOT__result
           [3U][4U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[3U]
         [4U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[3U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [3U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [3U]
                                                [4U]);
    vlSelfRef.sparsity_tb__DOT__result[3U][5U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[3U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[3U][5U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [3U][5U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [3U][5U]) : vlSelfRef.sparsity_tb__DOT__result
           [3U][5U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[3U]
         [5U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[3U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [3U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [3U]
                                                [5U]);
    vlSelfRef.sparsity_tb__DOT__result[3U][6U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[3U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[3U][6U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [3U][6U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [3U][6U]) : vlSelfRef.sparsity_tb__DOT__result
           [3U][6U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[3U]
         [6U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[3U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [3U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [3U]
                                                [6U]);
    vlSelfRef.sparsity_tb__DOT__result[3U][7U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[3U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[3U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [3U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [3U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[3U][7U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [3U][7U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [3U][7U]) : vlSelfRef.sparsity_tb__DOT__result
           [3U][7U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[3U]
         [7U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[3U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [3U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [3U]
                                                [7U]);
    if ((vlSelfRef.sparsity_tb__DOT__row_sums[3U] < vlSelfRef.sparsity_tb__DOT__threshold_row)) {
        sparsity_tb__DOT__skipped_rows = ((IData)(1U) 
                                          + sparsity_tb__DOT__skipped_rows);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[4U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[4U][0U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[4U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[4U][0U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [4U][0U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [4U][0U]) : vlSelfRef.sparsity_tb__DOT__result
           [4U][0U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[4U]
         [0U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[4U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [4U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [4U]
                                                [0U]);
    vlSelfRef.sparsity_tb__DOT__result[4U][1U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[4U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[4U][1U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [4U][1U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [4U][1U]) : vlSelfRef.sparsity_tb__DOT__result
           [4U][1U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[4U]
         [1U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[4U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [4U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [4U]
                                                [1U]);
    vlSelfRef.sparsity_tb__DOT__result[4U][2U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[4U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[4U][2U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [4U][2U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [4U][2U]) : vlSelfRef.sparsity_tb__DOT__result
           [4U][2U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[4U]
         [2U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[4U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [4U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [4U]
                                                [2U]);
    vlSelfRef.sparsity_tb__DOT__result[4U][3U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[4U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[4U][3U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [4U][3U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [4U][3U]) : vlSelfRef.sparsity_tb__DOT__result
           [4U][3U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[4U]
         [3U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[4U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [4U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [4U]
                                                [3U]);
    vlSelfRef.sparsity_tb__DOT__result[4U][4U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[4U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[4U][4U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [4U][4U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [4U][4U]) : vlSelfRef.sparsity_tb__DOT__result
           [4U][4U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[4U]
         [4U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[4U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [4U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [4U]
                                                [4U]);
    vlSelfRef.sparsity_tb__DOT__result[4U][5U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[4U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[4U][5U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [4U][5U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [4U][5U]) : vlSelfRef.sparsity_tb__DOT__result
           [4U][5U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[4U]
         [5U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[4U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [4U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [4U]
                                                [5U]);
    vlSelfRef.sparsity_tb__DOT__result[4U][6U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[4U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[4U][6U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [4U][6U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [4U][6U]) : vlSelfRef.sparsity_tb__DOT__result
           [4U][6U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[4U]
         [6U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[4U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [4U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [4U]
                                                [6U]);
    vlSelfRef.sparsity_tb__DOT__result[4U][7U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[4U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[4U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [4U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [4U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[4U][7U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [4U][7U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [4U][7U]) : vlSelfRef.sparsity_tb__DOT__result
           [4U][7U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[4U]
         [7U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[4U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [4U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [4U]
                                                [7U]);
    if ((vlSelfRef.sparsity_tb__DOT__row_sums[4U] < vlSelfRef.sparsity_tb__DOT__threshold_row)) {
        sparsity_tb__DOT__skipped_rows = ((IData)(1U) 
                                          + sparsity_tb__DOT__skipped_rows);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[5U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[5U][0U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[5U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[5U][0U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [5U][0U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [5U][0U]) : vlSelfRef.sparsity_tb__DOT__result
           [5U][0U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[5U]
         [0U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[5U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [5U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [5U]
                                                [0U]);
    vlSelfRef.sparsity_tb__DOT__result[5U][1U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[5U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[5U][1U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [5U][1U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [5U][1U]) : vlSelfRef.sparsity_tb__DOT__result
           [5U][1U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[5U]
         [1U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[5U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [5U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [5U]
                                                [1U]);
    vlSelfRef.sparsity_tb__DOT__result[5U][2U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[5U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[5U][2U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [5U][2U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [5U][2U]) : vlSelfRef.sparsity_tb__DOT__result
           [5U][2U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[5U]
         [2U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[5U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [5U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [5U]
                                                [2U]);
    vlSelfRef.sparsity_tb__DOT__result[5U][3U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[5U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[5U][3U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [5U][3U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [5U][3U]) : vlSelfRef.sparsity_tb__DOT__result
           [5U][3U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[5U]
         [3U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[5U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [5U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [5U]
                                                [3U]);
    vlSelfRef.sparsity_tb__DOT__result[5U][4U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[5U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[5U][4U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [5U][4U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [5U][4U]) : vlSelfRef.sparsity_tb__DOT__result
           [5U][4U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[5U]
         [4U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[5U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [5U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [5U]
                                                [4U]);
    vlSelfRef.sparsity_tb__DOT__result[5U][5U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[5U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[5U][5U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [5U][5U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [5U][5U]) : vlSelfRef.sparsity_tb__DOT__result
           [5U][5U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[5U]
         [5U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[5U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [5U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [5U]
                                                [5U]);
    vlSelfRef.sparsity_tb__DOT__result[5U][6U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[5U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[5U][6U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [5U][6U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [5U][6U]) : vlSelfRef.sparsity_tb__DOT__result
           [5U][6U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[5U]
         [6U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[5U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [5U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [5U]
                                                [6U]);
    vlSelfRef.sparsity_tb__DOT__result[5U][7U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[5U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[5U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [5U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [5U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[5U][7U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [5U][7U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [5U][7U]) : vlSelfRef.sparsity_tb__DOT__result
           [5U][7U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[5U]
         [7U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[5U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [5U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [5U]
                                                [7U]);
    if ((vlSelfRef.sparsity_tb__DOT__row_sums[5U] < vlSelfRef.sparsity_tb__DOT__threshold_row)) {
        sparsity_tb__DOT__skipped_rows = ((IData)(1U) 
                                          + sparsity_tb__DOT__skipped_rows);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[6U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[6U][0U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[6U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[6U][0U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [6U][0U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [6U][0U]) : vlSelfRef.sparsity_tb__DOT__result
           [6U][0U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[6U]
         [0U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[6U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [6U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [6U]
                                                [0U]);
    vlSelfRef.sparsity_tb__DOT__result[6U][1U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[6U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[6U][1U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [6U][1U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [6U][1U]) : vlSelfRef.sparsity_tb__DOT__result
           [6U][1U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[6U]
         [1U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[6U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [6U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [6U]
                                                [1U]);
    vlSelfRef.sparsity_tb__DOT__result[6U][2U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[6U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[6U][2U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [6U][2U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [6U][2U]) : vlSelfRef.sparsity_tb__DOT__result
           [6U][2U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[6U]
         [2U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[6U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [6U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [6U]
                                                [2U]);
    vlSelfRef.sparsity_tb__DOT__result[6U][3U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[6U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[6U][3U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [6U][3U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [6U][3U]) : vlSelfRef.sparsity_tb__DOT__result
           [6U][3U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[6U]
         [3U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[6U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [6U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [6U]
                                                [3U]);
    vlSelfRef.sparsity_tb__DOT__result[6U][4U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[6U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[6U][4U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [6U][4U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [6U][4U]) : vlSelfRef.sparsity_tb__DOT__result
           [6U][4U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[6U]
         [4U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[6U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [6U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [6U]
                                                [4U]);
    vlSelfRef.sparsity_tb__DOT__result[6U][5U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[6U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[6U][5U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [6U][5U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [6U][5U]) : vlSelfRef.sparsity_tb__DOT__result
           [6U][5U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[6U]
         [5U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[6U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [6U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [6U]
                                                [5U]);
    vlSelfRef.sparsity_tb__DOT__result[6U][6U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[6U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[6U][6U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [6U][6U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [6U][6U]) : vlSelfRef.sparsity_tb__DOT__result
           [6U][6U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[6U]
         [6U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[6U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [6U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [6U]
                                                [6U]);
    vlSelfRef.sparsity_tb__DOT__result[6U][7U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[6U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[6U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [6U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [6U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[6U][7U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [6U][7U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [6U][7U]) : vlSelfRef.sparsity_tb__DOT__result
           [6U][7U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[6U]
         [7U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[6U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [6U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [6U]
                                                [7U]);
    if ((vlSelfRef.sparsity_tb__DOT__row_sums[6U] < vlSelfRef.sparsity_tb__DOT__threshold_row)) {
        sparsity_tb__DOT__skipped_rows = ((IData)(1U) 
                                          + sparsity_tb__DOT__skipped_rows);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[7U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[7U][0U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[7U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][0U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [0U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[7U][0U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [7U][0U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [7U][0U]) : vlSelfRef.sparsity_tb__DOT__result
           [7U][0U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[7U]
         [0U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[7U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [7U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [7U]
                                                [0U]);
    vlSelfRef.sparsity_tb__DOT__result[7U][1U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[7U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][1U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [1U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[7U][1U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [7U][1U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [7U][1U]) : vlSelfRef.sparsity_tb__DOT__result
           [7U][1U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[7U]
         [1U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[7U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [7U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [7U]
                                                [1U]);
    vlSelfRef.sparsity_tb__DOT__result[7U][2U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[7U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][2U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [2U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[7U][2U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [7U][2U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [7U][2U]) : vlSelfRef.sparsity_tb__DOT__result
           [7U][2U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[7U]
         [2U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[7U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [7U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [7U]
                                                [2U]);
    vlSelfRef.sparsity_tb__DOT__result[7U][3U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[7U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][3U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [3U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[7U][3U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [7U][3U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [7U][3U]) : vlSelfRef.sparsity_tb__DOT__result
           [7U][3U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[7U]
         [3U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[7U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [7U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [7U]
                                                [3U]);
    vlSelfRef.sparsity_tb__DOT__result[7U][4U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[7U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][4U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [4U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[7U][4U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [7U][4U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [7U][4U]) : vlSelfRef.sparsity_tb__DOT__result
           [7U][4U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[7U]
         [4U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[7U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [7U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [7U]
                                                [4U]);
    vlSelfRef.sparsity_tb__DOT__result[7U][5U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[7U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][5U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [5U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[7U][5U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [7U][5U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [7U][5U]) : vlSelfRef.sparsity_tb__DOT__result
           [7U][5U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[7U]
         [5U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[7U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [7U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [7U]
                                                [5U]);
    vlSelfRef.sparsity_tb__DOT__result[7U][6U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[7U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][6U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [6U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[7U][6U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [7U][6U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [7U][6U]) : vlSelfRef.sparsity_tb__DOT__result
           [7U][6U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[7U]
         [6U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[7U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [7U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [7U]
                                                [6U]);
    vlSelfRef.sparsity_tb__DOT__result[7U][7U] = 0U;
    vlSelfRef.sparsity_tb__DOT__result[7U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [0U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [0U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [1U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [1U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [2U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [2U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [3U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [3U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [4U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [4U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [5U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [5U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [6U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [6U]));
    vlSelfRef.sparsity_tb__DOT__result[7U][7U] = (vlSelfRef.sparsity_tb__DOT__result
                                                  [7U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.sparsity_tb__DOT__Q
                                                              [7U]
                                                              [7U], 
                                                              vlSelfRef.sparsity_tb__DOT__K
                                                              [7U]
                                                              [7U]));
    vlSelfRef.sparsity_tb__DOT__abs_result[7U][7U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__result
                      [7U][7U]) ? (- vlSelfRef.sparsity_tb__DOT__result
                                   [7U][7U]) : vlSelfRef.sparsity_tb__DOT__result
           [7U][7U]);
    if ((vlSelfRef.sparsity_tb__DOT__abs_result[7U]
         [7U] < vlSelfRef.sparsity_tb__DOT__threshold_elem)) {
        sparsity_tb__DOT__gated_count = ((IData)(1U) 
                                         + sparsity_tb__DOT__gated_count);
    }
    vlSelfRef.sparsity_tb__DOT__row_sums[7U] = (vlSelfRef.sparsity_tb__DOT__row_sums
                                                [7U] 
                                                + vlSelfRef.sparsity_tb__DOT__abs_result
                                                [7U]
                                                [7U]);
    vlSelfRef.sparsity_tb__DOT__q = 8U;
    if ((vlSelfRef.sparsity_tb__DOT__row_sums[7U] < vlSelfRef.sparsity_tb__DOT__threshold_row)) {
        sparsity_tb__DOT__skipped_rows = ((IData)(1U) 
                                          + sparsity_tb__DOT__skipped_rows);
    }
    VL_WRITEF_NX("===== Sparsity Test =====\nelem_threshold=%0#, row_threshold=%0#\nB1: %0d/64 gated (%.1f%%)\nB2: %0d/8 rows skipped (%.1f%%)\n",0,
                 20,vlSelfRef.sparsity_tb__DOT__threshold_elem,
                 23,vlSelfRef.sparsity_tb__DOT__threshold_row,
                 32,sparsity_tb__DOT__gated_count,64,
                 ((100.0 * VL_ISTOR_D_I(32, sparsity_tb__DOT__gated_count)) 
                  / 64.0),32,sparsity_tb__DOT__skipped_rows,
                 64,((100.0 * VL_ISTOR_D_I(32, sparsity_tb__DOT__skipped_rows)) 
                     / 8.0));
    vlSelfRef.sparsity_tb__DOT__pass_cnt = 0U;
    vlSelfRef.sparsity_tb__DOT__fail_cnt = 0U;
    VL_WRITEF_NX("\n===== Config 1: Baseline =====\n",0);
    vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity = 0U;
    vlSelfRef.sparsity_tb__DOT__enable_row_sparsity = 0U;
    __Vtask_sparsity_tb__DOT__run_full_pipeline__0__do_norm = 0U;
    __Vtask_sparsity_tb__DOT__do_reset__1__sparsity_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    vlSelfRef.sparsity_tb__DOT__rst_n = 0U;
    vlSelfRef.sparsity_tb__DOT__ofifo_rd = 0U;
    vlSelfRef.sparsity_tb__DOT__qmem_rd = 0U;
    vlSelfRef.sparsity_tb__DOT__qmem_wr = 0U;
    vlSelfRef.sparsity_tb__DOT__kmem_rd = 0U;
    vlSelfRef.sparsity_tb__DOT__kmem_wr = 0U;
    vlSelfRef.sparsity_tb__DOT__pmem_rd = 0U;
    vlSelfRef.sparsity_tb__DOT__pmem_wr = 0U;
    vlSelfRef.sparsity_tb__DOT__execute = 0U;
    vlSelfRef.sparsity_tb__DOT__load = 0U;
    vlSelfRef.sparsity_tb__DOT__sfp_start = 0U;
    vlSelfRef.sparsity_tb__DOT__sfp_sel = 0U;
    vlSelfRef.sparsity_tb__DOT__qkmem_add = 0U;
    vlSelfRef.sparsity_tb__DOT__pmem_add = 0U;
    __Vtask_sparsity_tb__DOT__do_reset__1__sparsity_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_sparsity_tb__DOT__do_reset__1__sparsity_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/sparsity_tb.sv", 
                                             88);
        vlSelfRef.sparsity_tb__DOT__clk = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/sparsity_tb.sv", 
                                             88);
        vlSelfRef.sparsity_tb__DOT__clk = 1U;
        __Vtask_sparsity_tb__DOT__do_reset__1__sparsity_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_sparsity_tb__DOT__do_reset__1__sparsity_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.sparsity_tb__DOT__rst_n = 1U;
    __Vtask_sparsity_tb__DOT__do_reset__1__sparsity_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_sparsity_tb__DOT__do_reset__1__sparsity_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/sparsity_tb.sv", 
                                             88);
        vlSelfRef.sparsity_tb__DOT__clk = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/sparsity_tb.sv", 
                                             88);
        vlSelfRef.sparsity_tb__DOT__clk = 1U;
        __Vtask_sparsity_tb__DOT__do_reset__1__sparsity_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_sparsity_tb__DOT__do_reset__1__sparsity_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.sparsity_tb__DOT__q = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.sparsity_tb__DOT__q)) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/sparsity_tb.sv", 
                                             104);
        vlSelfRef.sparsity_tb__DOT__clk = 0U;
        vlSelfRef.sparsity_tb__DOT__qmem_wr = 1U;
        if (VL_LTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__q)) {
            vlSelfRef.sparsity_tb__DOT__qkmem_add = 
                (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.sparsity_tb__DOT__qkmem_add)));
        }
        vlSelfRef.sparsity_tb__DOT__mem_in = ((0xffffffffffffff00ULL 
                                               & vlSelfRef.sparsity_tb__DOT__mem_in) 
                                              | (IData)((IData)(
                                                                (0x000000ffU 
                                                                 & vlSelfRef.sparsity_tb__DOT__Q
                                                                 [
                                                                 (7U 
                                                                  & vlSelfRef.sparsity_tb__DOT__q)]
                                                                 [0U]))));
        vlSelfRef.sparsity_tb__DOT__mem_in = ((0xffffffffffff00ffULL 
                                               & vlSelfRef.sparsity_tb__DOT__mem_in) 
                                              | ((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.sparsity_tb__DOT__Q
                                                                  [
                                                                  (7U 
                                                                   & vlSelfRef.sparsity_tb__DOT__q)]
                                                                  [1U]))) 
                                                 << 8U));
        vlSelfRef.sparsity_tb__DOT__mem_in = ((0xffffffffff00ffffULL 
                                               & vlSelfRef.sparsity_tb__DOT__mem_in) 
                                              | ((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.sparsity_tb__DOT__Q
                                                                  [
                                                                  (7U 
                                                                   & vlSelfRef.sparsity_tb__DOT__q)]
                                                                  [2U]))) 
                                                 << 0x00000010U));
        vlSelfRef.sparsity_tb__DOT__mem_in = ((0xffffffff00ffffffULL 
                                               & vlSelfRef.sparsity_tb__DOT__mem_in) 
                                              | ((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.sparsity_tb__DOT__Q
                                                                  [
                                                                  (7U 
                                                                   & vlSelfRef.sparsity_tb__DOT__q)]
                                                                  [3U]))) 
                                                 << 0x00000018U));
        vlSelfRef.sparsity_tb__DOT__mem_in = ((0xffffff00ffffffffULL 
                                               & vlSelfRef.sparsity_tb__DOT__mem_in) 
                                              | ((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.sparsity_tb__DOT__Q
                                                                  [
                                                                  (7U 
                                                                   & vlSelfRef.sparsity_tb__DOT__q)]
                                                                  [4U]))) 
                                                 << 0x00000020U));
        vlSelfRef.sparsity_tb__DOT__mem_in = ((0xffff00ffffffffffULL 
                                               & vlSelfRef.sparsity_tb__DOT__mem_in) 
                                              | ((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.sparsity_tb__DOT__Q
                                                                  [
                                                                  (7U 
                                                                   & vlSelfRef.sparsity_tb__DOT__q)]
                                                                  [5U]))) 
                                                 << 0x00000028U));
        vlSelfRef.sparsity_tb__DOT__mem_in = ((0xff00ffffffffffffULL 
                                               & vlSelfRef.sparsity_tb__DOT__mem_in) 
                                              | ((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.sparsity_tb__DOT__Q
                                                                  [
                                                                  (7U 
                                                                   & vlSelfRef.sparsity_tb__DOT__q)]
                                                                  [6U]))) 
                                                 << 0x00000030U));
        vlSelfRef.sparsity_tb__DOT__mem_in = ((0x00ffffffffffffffULL 
                                               & vlSelfRef.sparsity_tb__DOT__mem_in) 
                                              | ((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.sparsity_tb__DOT__Q
                                                                  [
                                                                  (7U 
                                                                   & vlSelfRef.sparsity_tb__DOT__q)]
                                                                  [7U]))) 
                                                 << 0x00000038U));
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/sparsity_tb.sv", 
                                             108);
        vlSelfRef.sparsity_tb__DOT__clk = 1U;
        vlSelfRef.sparsity_tb__DOT__q = ((IData)(1U) 
                                         + vlSelfRef.sparsity_tb__DOT__q);
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                         nullptr, "verilog/sparsity_tb.sv", 
                                         110);
    vlSelfRef.sparsity_tb__DOT__clk = 0U;
    vlSelfRef.sparsity_tb__DOT__qmem_wr = 0U;
    vlSelfRef.sparsity_tb__DOT__qkmem_add = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                         nullptr, "verilog/sparsity_tb.sv", 
                                         110);
    vlSelfRef.sparsity_tb__DOT__clk = 1U;
    vlSelfRef.sparsity_tb__DOT__q = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.sparsity_tb__DOT__q)) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/sparsity_tb.sv", 
                                             115);
        vlSelfRef.sparsity_tb__DOT__clk = 0U;
        vlSelfRef.sparsity_tb__DOT__kmem_wr = 1U;
        if (VL_LTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__q)) {
            vlSelfRef.sparsity_tb__DOT__qkmem_add = 
                (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.sparsity_tb__DOT__qkmem_add)));
        }
        vlSelfRef.sparsity_tb__DOT__mem_in = ((0xffffffffffffff00ULL 
                                               & vlSelfRef.sparsity_tb__DOT__mem_in) 
                                              | (IData)((IData)(
                                                                (0x000000ffU 
                                                                 & vlSelfRef.sparsity_tb__DOT__K
                                                                 [
                                                                 (7U 
                                                                  & vlSelfRef.sparsity_tb__DOT__q)]
                                                                 [0U]))));
        vlSelfRef.sparsity_tb__DOT__mem_in = ((0xffffffffffff00ffULL 
                                               & vlSelfRef.sparsity_tb__DOT__mem_in) 
                                              | ((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.sparsity_tb__DOT__K
                                                                  [
                                                                  (7U 
                                                                   & vlSelfRef.sparsity_tb__DOT__q)]
                                                                  [1U]))) 
                                                 << 8U));
        vlSelfRef.sparsity_tb__DOT__mem_in = ((0xffffffffff00ffffULL 
                                               & vlSelfRef.sparsity_tb__DOT__mem_in) 
                                              | ((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.sparsity_tb__DOT__K
                                                                  [
                                                                  (7U 
                                                                   & vlSelfRef.sparsity_tb__DOT__q)]
                                                                  [2U]))) 
                                                 << 0x00000010U));
        vlSelfRef.sparsity_tb__DOT__mem_in = ((0xffffffff00ffffffULL 
                                               & vlSelfRef.sparsity_tb__DOT__mem_in) 
                                              | ((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.sparsity_tb__DOT__K
                                                                  [
                                                                  (7U 
                                                                   & vlSelfRef.sparsity_tb__DOT__q)]
                                                                  [3U]))) 
                                                 << 0x00000018U));
        vlSelfRef.sparsity_tb__DOT__mem_in = ((0xffffff00ffffffffULL 
                                               & vlSelfRef.sparsity_tb__DOT__mem_in) 
                                              | ((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.sparsity_tb__DOT__K
                                                                  [
                                                                  (7U 
                                                                   & vlSelfRef.sparsity_tb__DOT__q)]
                                                                  [4U]))) 
                                                 << 0x00000020U));
        vlSelfRef.sparsity_tb__DOT__mem_in = ((0xffff00ffffffffffULL 
                                               & vlSelfRef.sparsity_tb__DOT__mem_in) 
                                              | ((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.sparsity_tb__DOT__K
                                                                  [
                                                                  (7U 
                                                                   & vlSelfRef.sparsity_tb__DOT__q)]
                                                                  [5U]))) 
                                                 << 0x00000028U));
        vlSelfRef.sparsity_tb__DOT__mem_in = ((0xff00ffffffffffffULL 
                                               & vlSelfRef.sparsity_tb__DOT__mem_in) 
                                              | ((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.sparsity_tb__DOT__K
                                                                  [
                                                                  (7U 
                                                                   & vlSelfRef.sparsity_tb__DOT__q)]
                                                                  [6U]))) 
                                                 << 0x00000030U));
        vlSelfRef.sparsity_tb__DOT__mem_in = ((0x00ffffffffffffffULL 
                                               & vlSelfRef.sparsity_tb__DOT__mem_in) 
                                              | ((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.sparsity_tb__DOT__K
                                                                  [
                                                                  (7U 
                                                                   & vlSelfRef.sparsity_tb__DOT__q)]
                                                                  [7U]))) 
                                                 << 0x00000038U));
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/sparsity_tb.sv", 
                                             119);
        vlSelfRef.sparsity_tb__DOT__clk = 1U;
        vlSelfRef.sparsity_tb__DOT__q = ((IData)(1U) 
                                         + vlSelfRef.sparsity_tb__DOT__q);
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                         nullptr, "verilog/sparsity_tb.sv", 
                                         121);
    vlSelfRef.sparsity_tb__DOT__clk = 0U;
    vlSelfRef.sparsity_tb__DOT__kmem_wr = 0U;
    vlSelfRef.sparsity_tb__DOT__qkmem_add = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                         nullptr, "verilog/sparsity_tb.sv", 
                                         121);
    vlSelfRef.sparsity_tb__DOT__clk = 1U;
    __Vtask_sparsity_tb__DOT__load_keys__6__sparsity_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    __Vtask_sparsity_tb__DOT__load_keys__6__sparsity_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    __Vtask_sparsity_tb__DOT__load_keys__6__sparsity_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_sparsity_tb__DOT__load_keys__6__sparsity_tb__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/sparsity_tb.sv", 
                                             88);
        vlSelfRef.sparsity_tb__DOT__clk = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/sparsity_tb.sv", 
                                             88);
        vlSelfRef.sparsity_tb__DOT__clk = 1U;
        __Vtask_sparsity_tb__DOT__load_keys__6__sparsity_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_sparsity_tb__DOT__load_keys__6__sparsity_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    vlSelfRef.sparsity_tb__DOT__q = 0U;
    while (VL_GTS_III(32, 9U, vlSelfRef.sparsity_tb__DOT__q)) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/sparsity_tb.sv", 
                                             127);
        vlSelfRef.sparsity_tb__DOT__clk = 0U;
        vlSelfRef.sparsity_tb__DOT__load = 1U;
        if ((1U == vlSelfRef.sparsity_tb__DOT__q)) {
            vlSelfRef.sparsity_tb__DOT__kmem_rd = 1U;
        }
        if (VL_LTS_III(32, 1U, vlSelfRef.sparsity_tb__DOT__q)) {
            vlSelfRef.sparsity_tb__DOT__qkmem_add = 
                (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.sparsity_tb__DOT__qkmem_add)));
        }
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/sparsity_tb.sv", 
                                             131);
        vlSelfRef.sparsity_tb__DOT__clk = 1U;
        vlSelfRef.sparsity_tb__DOT__q = ((IData)(1U) 
                                         + vlSelfRef.sparsity_tb__DOT__q);
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                         nullptr, "verilog/sparsity_tb.sv", 
                                         133);
    vlSelfRef.sparsity_tb__DOT__clk = 0U;
    vlSelfRef.sparsity_tb__DOT__kmem_rd = 0U;
    vlSelfRef.sparsity_tb__DOT__qkmem_add = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                         nullptr, "verilog/sparsity_tb.sv", 
                                         133);
    vlSelfRef.sparsity_tb__DOT__clk = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                         nullptr, "verilog/sparsity_tb.sv", 
                                         134);
    vlSelfRef.sparsity_tb__DOT__clk = 0U;
    vlSelfRef.sparsity_tb__DOT__load = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                         nullptr, "verilog/sparsity_tb.sv", 
                                         134);
    vlSelfRef.sparsity_tb__DOT__clk = 1U;
    __Vtask_sparsity_tb__DOT__load_keys__6__sparsity_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, __Vtask_sparsity_tb__DOT__load_keys__6__sparsity_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/sparsity_tb.sv", 
                                             88);
        vlSelfRef.sparsity_tb__DOT__clk = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/sparsity_tb.sv", 
                                             88);
        vlSelfRef.sparsity_tb__DOT__clk = 1U;
        __Vtask_sparsity_tb__DOT__load_keys__6__sparsity_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (__Vtask_sparsity_tb__DOT__load_keys__6__sparsity_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    __Vtask_sparsity_tb__DOT__run_execute__9__sparsity_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    vlSelfRef.sparsity_tb__DOT__q = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.sparsity_tb__DOT__q)) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/sparsity_tb.sv", 
                                             140);
        vlSelfRef.sparsity_tb__DOT__clk = 0U;
        vlSelfRef.sparsity_tb__DOT__execute = 1U;
        vlSelfRef.sparsity_tb__DOT__qmem_rd = 1U;
        if (VL_LTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__q)) {
            vlSelfRef.sparsity_tb__DOT__qkmem_add = 
                (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.sparsity_tb__DOT__qkmem_add)));
        }
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/sparsity_tb.sv", 
                                             143);
        vlSelfRef.sparsity_tb__DOT__clk = 1U;
        vlSelfRef.sparsity_tb__DOT__q = ((IData)(1U) 
                                         + vlSelfRef.sparsity_tb__DOT__q);
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                         nullptr, "verilog/sparsity_tb.sv", 
                                         145);
    vlSelfRef.sparsity_tb__DOT__clk = 0U;
    vlSelfRef.sparsity_tb__DOT__qmem_rd = 0U;
    vlSelfRef.sparsity_tb__DOT__qkmem_add = 0U;
    vlSelfRef.sparsity_tb__DOT__execute = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                         nullptr, "verilog/sparsity_tb.sv", 
                                         146);
    vlSelfRef.sparsity_tb__DOT__clk = 1U;
    __Vtask_sparsity_tb__DOT__run_execute__9__sparsity_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0x0000000cU;
    while (VL_LTS_III(32, 0U, __Vtask_sparsity_tb__DOT__run_execute__9__sparsity_tb__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/sparsity_tb.sv", 
                                             88);
        vlSelfRef.sparsity_tb__DOT__clk = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/sparsity_tb.sv", 
                                             88);
        vlSelfRef.sparsity_tb__DOT__clk = 1U;
        __Vtask_sparsity_tb__DOT__run_execute__9__sparsity_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (__Vtask_sparsity_tb__DOT__run_execute__9__sparsity_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    __Vtask_sparsity_tb__DOT__ofifo_to_pmem__11__sparsity_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    vlSelfRef.sparsity_tb__DOT__q = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.sparsity_tb__DOT__q)) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/sparsity_tb.sv", 
                                             152);
        vlSelfRef.sparsity_tb__DOT__clk = 0U;
        vlSelfRef.sparsity_tb__DOT__ofifo_rd = 1U;
        vlSelfRef.sparsity_tb__DOT__pmem_wr = 1U;
        if (VL_LTS_III(32, 0U, vlSelfRef.sparsity_tb__DOT__q)) {
            vlSelfRef.sparsity_tb__DOT__pmem_add = 
                (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.sparsity_tb__DOT__pmem_add)));
        }
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/sparsity_tb.sv", 
                                             155);
        vlSelfRef.sparsity_tb__DOT__clk = 1U;
        vlSelfRef.sparsity_tb__DOT__q = ((IData)(1U) 
                                         + vlSelfRef.sparsity_tb__DOT__q);
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                         nullptr, "verilog/sparsity_tb.sv", 
                                         157);
    vlSelfRef.sparsity_tb__DOT__clk = 0U;
    vlSelfRef.sparsity_tb__DOT__pmem_wr = 0U;
    vlSelfRef.sparsity_tb__DOT__pmem_add = 0U;
    vlSelfRef.sparsity_tb__DOT__ofifo_rd = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                         nullptr, "verilog/sparsity_tb.sv", 
                                         158);
    vlSelfRef.sparsity_tb__DOT__clk = 1U;
    __Vtask_sparsity_tb__DOT__ofifo_to_pmem__11__sparsity_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_sparsity_tb__DOT__ofifo_to_pmem__11__sparsity_tb__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/sparsity_tb.sv", 
                                             88);
        vlSelfRef.sparsity_tb__DOT__clk = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/sparsity_tb.sv", 
                                             88);
        vlSelfRef.sparsity_tb__DOT__clk = 1U;
        __Vtask_sparsity_tb__DOT__ofifo_to_pmem__11__sparsity_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (__Vtask_sparsity_tb__DOT__ofifo_to_pmem__11__sparsity_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
    }
    if ((0U != __Vtask_sparsity_tb__DOT__run_full_pipeline__0__do_norm)) {
        __Vtask_sparsity_tb__DOT__run_sfp_norm__13__sparsity_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0;
        vlSelfRef.sparsity_tb__DOT__q = 0U;
        while (VL_GTS_III(32, 8U, vlSelfRef.sparsity_tb__DOT__q)) {
            co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                                 nullptr, 
                                                 "verilog/sparsity_tb.sv", 
                                                 165);
            vlSelfRef.sparsity_tb__DOT__clk = 0U;
            vlSelfRef.sparsity_tb__DOT__pmem_rd = 1U;
            vlSelfRef.sparsity_tb__DOT__pmem_add = 
                (0x0000000fU & vlSelfRef.sparsity_tb__DOT__q);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                                 nullptr, 
                                                 "verilog/sparsity_tb.sv", 
                                                 165);
            vlSelfRef.sparsity_tb__DOT__clk = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                                 nullptr, 
                                                 "verilog/sparsity_tb.sv", 
                                                 167);
            vlSelfRef.sparsity_tb__DOT__clk = 0U;
            vlSelfRef.sparsity_tb__DOT__pmem_rd = 0U;
            vlSelfRef.sparsity_tb__DOT__sfp_start = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                                 nullptr, 
                                                 "verilog/sparsity_tb.sv", 
                                                 167);
            vlSelfRef.sparsity_tb__DOT__clk = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                                 nullptr, 
                                                 "verilog/sparsity_tb.sv", 
                                                 168);
            vlSelfRef.sparsity_tb__DOT__clk = 0U;
            vlSelfRef.sparsity_tb__DOT__sfp_start = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                                 nullptr, 
                                                 "verilog/sparsity_tb.sv", 
                                                 168);
            vlSelfRef.sparsity_tb__DOT__clk = 1U;
            while ((1U & (~ (IData)(vlSelfRef.sparsity_tb__DOT__sfp_done)))) {
                co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                                     nullptr, 
                                                     "verilog/sparsity_tb.sv", 
                                                     88);
                vlSelfRef.sparsity_tb__DOT__clk = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                                     nullptr, 
                                                     "verilog/sparsity_tb.sv", 
                                                     88);
                vlSelfRef.sparsity_tb__DOT__clk = 1U;
            }
            co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                                 nullptr, 
                                                 "verilog/sparsity_tb.sv", 
                                                 172);
            vlSelfRef.sparsity_tb__DOT__clk = 0U;
            vlSelfRef.sparsity_tb__DOT__sfp_sel = 1U;
            vlSelfRef.sparsity_tb__DOT__pmem_wr = 1U;
            vlSelfRef.sparsity_tb__DOT__pmem_add = 
                (0x0000000fU & vlSelfRef.sparsity_tb__DOT__q);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                                 nullptr, 
                                                 "verilog/sparsity_tb.sv", 
                                                 173);
            vlSelfRef.sparsity_tb__DOT__clk = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                                 nullptr, 
                                                 "verilog/sparsity_tb.sv", 
                                                 174);
            vlSelfRef.sparsity_tb__DOT__clk = 0U;
            vlSelfRef.sparsity_tb__DOT__sfp_sel = 0U;
            vlSelfRef.sparsity_tb__DOT__pmem_wr = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                                 nullptr, 
                                                 "verilog/sparsity_tb.sv", 
                                                 174);
            vlSelfRef.sparsity_tb__DOT__clk = 1U;
            vlSelfRef.sparsity_tb__DOT__q = ((IData)(1U) 
                                             + vlSelfRef.sparsity_tb__DOT__q);
        }
        __Vtask_sparsity_tb__DOT__run_sfp_norm__13__sparsity_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 = 3U;
        while (VL_LTS_III(32, 0U, __Vtask_sparsity_tb__DOT__run_sfp_norm__13__sparsity_tb__DOT__unnamedblk1_7__DOT____Vrepeat6)) {
            co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                                 nullptr, 
                                                 "verilog/sparsity_tb.sv", 
                                                 88);
            vlSelfRef.sparsity_tb__DOT__clk = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                                 nullptr, 
                                                 "verilog/sparsity_tb.sv", 
                                                 88);
            vlSelfRef.sparsity_tb__DOT__clk = 1U;
            __Vtask_sparsity_tb__DOT__run_sfp_norm__13__sparsity_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 
                = (__Vtask_sparsity_tb__DOT__run_sfp_norm__13__sparsity_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 
                   - (IData)(1U));
        }
    }
    vlSelfRef.sparsity_tb__DOT__q = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.sparsity_tb__DOT__q)) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/sparsity_tb.sv", 
                                             184);
        vlSelfRef.sparsity_tb__DOT__clk = 0U;
        vlSelfRef.sparsity_tb__DOT__pmem_rd = 1U;
        vlSelfRef.sparsity_tb__DOT__pmem_add = (0x0000000fU 
                                                & vlSelfRef.sparsity_tb__DOT__q);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/sparsity_tb.sv", 
                                             184);
        vlSelfRef.sparsity_tb__DOT__clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/sparsity_tb.sv", 
                                             185);
        vlSelfRef.sparsity_tb__DOT__clk = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/sparsity_tb.sv", 
                                             185);
        vlSelfRef.sparsity_tb__DOT__clk = 1U;
        vlSelfRef.sparsity_tb__DOT__hw_result[(7U & vlSelfRef.sparsity_tb__DOT__q)][0U] 
            = (0x000fffffU & vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_out[0U]);
        vlSelfRef.sparsity_tb__DOT__hw_result[(7U & vlSelfRef.sparsity_tb__DOT__q)][1U] 
            = (0x000fffffU & ((vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_out[1U] 
                               << 0x0000000cU) | (vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_out[0U] 
                                                  >> 0x00000014U)));
        vlSelfRef.sparsity_tb__DOT__hw_result[(7U & vlSelfRef.sparsity_tb__DOT__q)][2U] 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_out[1U] 
                              >> 8U));
        vlSelfRef.sparsity_tb__DOT__hw_result[(7U & vlSelfRef.sparsity_tb__DOT__q)][3U] 
            = (0x000fffffU & ((vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_out[2U] 
                               << 4U) | (vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_out[1U] 
                                         >> 0x0000001cU)));
        vlSelfRef.sparsity_tb__DOT__hw_result[(7U & vlSelfRef.sparsity_tb__DOT__q)][4U] 
            = (0x000fffffU & ((vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_out[3U] 
                               << 0x00000010U) | (vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_out[2U] 
                                                  >> 0x00000010U)));
        vlSelfRef.sparsity_tb__DOT__hw_result[(7U & vlSelfRef.sparsity_tb__DOT__q)][5U] 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_out[3U] 
                              >> 4U));
        vlSelfRef.sparsity_tb__DOT__hw_result[(7U & vlSelfRef.sparsity_tb__DOT__q)][6U] 
            = (0x000fffffU & ((vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_out[4U] 
                               << 8U) | (vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_out[3U] 
                                         >> 0x00000018U)));
        vlSelfRef.sparsity_tb__DOT__hw_result[(7U & vlSelfRef.sparsity_tb__DOT__q)][7U] 
            = (vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_out[4U] 
               >> 0x0000000cU);
        vlSelfRef.sparsity_tb__DOT__q = ((IData)(1U) 
                                         + vlSelfRef.sparsity_tb__DOT__q);
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                         nullptr, "verilog/sparsity_tb.sv", 
                                         189);
    vlSelfRef.sparsity_tb__DOT__clk = 0U;
    vlSelfRef.sparsity_tb__DOT__pmem_rd = 0U;
    vlSelfRef.sparsity_tb__DOT__pmem_add = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                         nullptr, "verilog/sparsity_tb.sv", 
                                         189);
    vlSelfRef.sparsity_tb__DOT__clk = 1U;
    __Vtask_sparsity_tb__DOT__verify_qk__17__label = "Baseline"s;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vtask_sparsity_tb__DOT__verify_qk__17__exp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10115955225946057937ull);
    vlSelf->__Vtask_sparsity_tb__DOT__verify_qk__17__kc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14063335854452394715ull);
    VL_WRITEF_NX("--- %@: Q*K verification ---\n",0,
                 -1,&(__Vtask_sparsity_tb__DOT__verify_qk__17__label));
    vlSelfRef.sparsity_tb__DOT__q = 0U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 7U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[0U][7U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[0U]
            [7U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [0U][0U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row0 col0(K7): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [0U][0U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 1U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 6U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[0U][6U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[0U]
            [6U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [0U][1U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row0 col1(K6): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [0U][1U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 2U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 5U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[0U][5U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[0U]
            [5U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [0U][2U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row0 col2(K5): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [0U][2U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 3U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 4U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[0U][4U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[0U]
            [4U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [0U][3U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row0 col3(K4): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [0U][3U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 4U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 3U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[0U][3U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[0U]
            [3U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [0U][4U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row0 col4(K3): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [0U][4U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 5U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 2U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[0U][2U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[0U]
            [2U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [0U][5U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row0 col5(K2): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [0U][5U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 6U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 1U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[0U][1U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[0U]
            [1U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [0U][6U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row0 col6(K1): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [0U][6U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 7U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 0U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[0U][0U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[0U]
            [0U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [0U][7U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row0 col7(K0): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [0U][7U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 8U;
    vlSelfRef.sparsity_tb__DOT__q = 0U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 7U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[1U][7U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[1U]
            [7U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [1U][0U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row1 col0(K7): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [1U][0U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 1U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 6U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[1U][6U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[1U]
            [6U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [1U][1U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row1 col1(K6): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [1U][1U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 2U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 5U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[1U][5U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[1U]
            [5U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [1U][2U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row1 col2(K5): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [1U][2U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 3U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 4U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[1U][4U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[1U]
            [4U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [1U][3U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row1 col3(K4): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [1U][3U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 4U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 3U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[1U][3U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[1U]
            [3U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [1U][4U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row1 col4(K3): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [1U][4U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 5U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 2U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[1U][2U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[1U]
            [2U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [1U][5U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row1 col5(K2): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [1U][5U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 6U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 1U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[1U][1U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[1U]
            [1U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [1U][6U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row1 col6(K1): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [1U][6U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 7U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 0U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[1U][0U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[1U]
            [0U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [1U][7U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row1 col7(K0): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [1U][7U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 8U;
    vlSelfRef.sparsity_tb__DOT__q = 0U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 7U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[2U][7U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[2U]
            [7U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [2U][0U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row2 col0(K7): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [2U][0U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 1U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 6U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[2U][6U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[2U]
            [6U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [2U][1U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row2 col1(K6): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [2U][1U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 2U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 5U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[2U][5U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[2U]
            [5U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [2U][2U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row2 col2(K5): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [2U][2U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 3U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 4U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[2U][4U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[2U]
            [4U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [2U][3U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row2 col3(K4): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [2U][3U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 4U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 3U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[2U][3U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[2U]
            [3U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [2U][4U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row2 col4(K3): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [2U][4U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 5U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 2U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[2U][2U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[2U]
            [2U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
}
