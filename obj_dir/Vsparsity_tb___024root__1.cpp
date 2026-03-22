// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsparsity_tb.h for the primary calling header

#include "Vsparsity_tb__pch.h"

VlCoroutine Vsparsity_tb___024root___eval_initial__TOP__Vtiming__0__1(Vsparsity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___eval_initial__TOP__Vtiming__0__1\n"); );
    Vsparsity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_sparsity_tb__DOT__run_full_pipeline__18__do_norm;
    __Vtask_sparsity_tb__DOT__run_full_pipeline__18__do_norm = 0;
    IData/*31:0*/ __Vtask_sparsity_tb__DOT__do_reset__19__sparsity_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_sparsity_tb__DOT__do_reset__19__sparsity_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_sparsity_tb__DOT__do_reset__19__sparsity_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_sparsity_tb__DOT__do_reset__19__sparsity_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_sparsity_tb__DOT__load_keys__24__sparsity_tb__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_sparsity_tb__DOT__load_keys__24__sparsity_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_sparsity_tb__DOT__load_keys__24__sparsity_tb__DOT__unnamedblk1_4__DOT____Vrepeat3;
    __Vtask_sparsity_tb__DOT__load_keys__24__sparsity_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ __Vtask_sparsity_tb__DOT__run_execute__27__sparsity_tb__DOT__unnamedblk1_5__DOT____Vrepeat4;
    __Vtask_sparsity_tb__DOT__run_execute__27__sparsity_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    IData/*31:0*/ __Vtask_sparsity_tb__DOT__ofifo_to_pmem__29__sparsity_tb__DOT__unnamedblk1_6__DOT____Vrepeat5;
    __Vtask_sparsity_tb__DOT__ofifo_to_pmem__29__sparsity_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    IData/*31:0*/ __Vtask_sparsity_tb__DOT__run_sfp_norm__31__sparsity_tb__DOT__unnamedblk1_7__DOT____Vrepeat6;
    __Vtask_sparsity_tb__DOT__run_sfp_norm__31__sparsity_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0;
    std::string __Vtask_sparsity_tb__DOT__verify_qk__35__label;
    IData/*31:0*/ __Vtask_sparsity_tb__DOT__verify_qk__35__exp;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0;
    IData/*31:0*/ __Vtask_sparsity_tb__DOT__verify_qk__35__kc;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 0;
    IData/*31:0*/ __Vtask_sparsity_tb__DOT__run_full_pipeline__36__do_norm;
    __Vtask_sparsity_tb__DOT__run_full_pipeline__36__do_norm = 0;
    IData/*31:0*/ __Vtask_sparsity_tb__DOT__do_reset__37__sparsity_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_sparsity_tb__DOT__do_reset__37__sparsity_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_sparsity_tb__DOT__do_reset__37__sparsity_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_sparsity_tb__DOT__do_reset__37__sparsity_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_sparsity_tb__DOT__load_keys__42__sparsity_tb__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_sparsity_tb__DOT__load_keys__42__sparsity_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_sparsity_tb__DOT__load_keys__42__sparsity_tb__DOT__unnamedblk1_4__DOT____Vrepeat3;
    __Vtask_sparsity_tb__DOT__load_keys__42__sparsity_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ __Vtask_sparsity_tb__DOT__run_execute__45__sparsity_tb__DOT__unnamedblk1_5__DOT____Vrepeat4;
    __Vtask_sparsity_tb__DOT__run_execute__45__sparsity_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    IData/*31:0*/ __Vtask_sparsity_tb__DOT__ofifo_to_pmem__47__sparsity_tb__DOT__unnamedblk1_6__DOT____Vrepeat5;
    __Vtask_sparsity_tb__DOT__ofifo_to_pmem__47__sparsity_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    IData/*31:0*/ __Vtask_sparsity_tb__DOT__run_sfp_norm__49__sparsity_tb__DOT__unnamedblk1_7__DOT____Vrepeat6;
    __Vtask_sparsity_tb__DOT__run_sfp_norm__49__sparsity_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0;
    // Body
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [2U][5U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row2 col5(K2): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [2U][5U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 6U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 1U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[2U][1U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[2U]
            [1U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [2U][6U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row2 col6(K1): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [2U][6U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 7U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 0U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[2U][0U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[2U]
            [0U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [2U][7U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row2 col7(K0): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [2U][7U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 8U;
    vlSelfRef.sparsity_tb__DOT__q = 0U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 7U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[3U][7U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[3U]
            [7U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [3U][0U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row3 col0(K7): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [3U][0U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 1U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 6U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[3U][6U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[3U]
            [6U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [3U][1U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row3 col1(K6): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [3U][1U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 2U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 5U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[3U][5U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[3U]
            [5U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [3U][2U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row3 col2(K5): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [3U][2U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 3U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 4U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[3U][4U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[3U]
            [4U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [3U][3U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row3 col3(K4): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [3U][3U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 4U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 3U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[3U][3U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[3U]
            [3U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [3U][4U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row3 col4(K3): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [3U][4U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 5U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 2U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[3U][2U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[3U]
            [2U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [3U][5U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row3 col5(K2): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [3U][5U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 6U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 1U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[3U][1U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[3U]
            [1U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [3U][6U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row3 col6(K1): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [3U][6U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 7U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 0U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[3U][0U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[3U]
            [0U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [3U][7U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row3 col7(K0): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [3U][7U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 8U;
    vlSelfRef.sparsity_tb__DOT__q = 0U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 7U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[4U][7U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[4U]
            [7U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [4U][0U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row4 col0(K7): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [4U][0U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 1U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 6U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[4U][6U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[4U]
            [6U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [4U][1U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row4 col1(K6): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [4U][1U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 2U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 5U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[4U][5U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[4U]
            [5U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [4U][2U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row4 col2(K5): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [4U][2U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 3U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 4U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[4U][4U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[4U]
            [4U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [4U][3U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row4 col3(K4): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [4U][3U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 4U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 3U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[4U][3U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[4U]
            [3U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [4U][4U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row4 col4(K3): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [4U][4U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 5U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 2U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[4U][2U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[4U]
            [2U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [4U][5U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row4 col5(K2): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [4U][5U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 6U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 1U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[4U][1U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[4U]
            [1U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [4U][6U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row4 col6(K1): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [4U][6U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 7U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 0U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[4U][0U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[4U]
            [0U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [4U][7U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row4 col7(K0): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [4U][7U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 8U;
    vlSelfRef.sparsity_tb__DOT__q = 0U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 7U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[5U][7U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[5U]
            [7U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [5U][0U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row5 col0(K7): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [5U][0U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 1U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 6U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[5U][6U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[5U]
            [6U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [5U][1U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row5 col1(K6): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [5U][1U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 2U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 5U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[5U][5U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[5U]
            [5U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [5U][2U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row5 col2(K5): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [5U][2U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 3U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 4U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[5U][4U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[5U]
            [4U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [5U][3U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row5 col3(K4): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [5U][3U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 4U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 3U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[5U][3U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[5U]
            [3U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [5U][4U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row5 col4(K3): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [5U][4U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 5U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 2U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[5U][2U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[5U]
            [2U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [5U][5U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row5 col5(K2): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [5U][5U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 6U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 1U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[5U][1U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[5U]
            [1U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [5U][6U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row5 col6(K1): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [5U][6U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 7U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 0U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[5U][0U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[5U]
            [0U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [5U][7U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row5 col7(K0): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [5U][7U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 8U;
    vlSelfRef.sparsity_tb__DOT__q = 0U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 7U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[6U][7U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[6U]
            [7U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [6U][0U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row6 col0(K7): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [6U][0U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 1U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 6U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[6U][6U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[6U]
            [6U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [6U][1U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row6 col1(K6): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [6U][1U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 2U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 5U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[6U][5U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[6U]
            [5U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [6U][2U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row6 col2(K5): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [6U][2U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 3U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 4U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[6U][4U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[6U]
            [4U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [6U][3U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row6 col3(K4): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [6U][3U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 4U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 3U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[6U][3U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[6U]
            [3U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [6U][4U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row6 col4(K3): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [6U][4U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 5U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 2U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[6U][2U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[6U]
            [2U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [6U][5U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row6 col5(K2): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [6U][5U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 6U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 1U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[6U][1U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[6U]
            [1U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [6U][6U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row6 col6(K1): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [6U][6U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 7U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 0U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[6U][0U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[6U]
            [0U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [6U][7U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row6 col7(K0): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [6U][7U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 8U;
    vlSelfRef.sparsity_tb__DOT__q = 0U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 7U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[7U][7U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[7U]
            [7U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [7U][0U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row7 col0(K7): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [7U][0U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 1U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 6U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[7U][6U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[7U]
            [6U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [7U][1U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row7 col1(K6): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [7U][1U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 2U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 5U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[7U][5U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[7U]
            [5U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [7U][2U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row7 col2(K5): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [7U][2U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 3U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 4U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[7U][4U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[7U]
            [4U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [7U][3U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row7 col3(K4): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [7U][3U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 4U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 3U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[7U][3U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[7U]
            [3U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [7U][4U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row7 col4(K3): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [7U][4U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 5U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 2U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[7U][2U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[7U]
            [2U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [7U][5U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row7 col5(K2): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [7U][5U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 6U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 1U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[7U][1U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[7U]
            [1U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [7U][6U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row7 col6(K1): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [7U][6U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 7U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__kc = 0U;
    vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp 
        = vlSelfRef.sparsity_tb__DOT__result[7U][0U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[7U]
            [0U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [7U][7U] == (0x000fffffU & vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row7 col7(K0): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [7U][7U],32,vlSelfRef.__Vtask_sparsity_tb__DOT__verify_qk__17__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 8U;
    VL_WRITEF_NX("\n===== Config 2: B1 (element sparsity) =====\n",0);
    vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity = 1U;
    vlSelfRef.sparsity_tb__DOT__enable_row_sparsity = 0U;
    __Vtask_sparsity_tb__DOT__run_full_pipeline__18__do_norm = 0U;
    __Vtask_sparsity_tb__DOT__do_reset__19__sparsity_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_sparsity_tb__DOT__do_reset__19__sparsity_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
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
    __Vtask_sparsity_tb__DOT__do_reset__19__sparsity_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_sparsity_tb__DOT__do_reset__19__sparsity_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
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
        __Vtask_sparsity_tb__DOT__do_reset__19__sparsity_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_sparsity_tb__DOT__do_reset__19__sparsity_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.sparsity_tb__DOT__rst_n = 1U;
    __Vtask_sparsity_tb__DOT__do_reset__19__sparsity_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_sparsity_tb__DOT__do_reset__19__sparsity_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
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
        __Vtask_sparsity_tb__DOT__do_reset__19__sparsity_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_sparsity_tb__DOT__do_reset__19__sparsity_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
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
    __Vtask_sparsity_tb__DOT__load_keys__24__sparsity_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    __Vtask_sparsity_tb__DOT__load_keys__24__sparsity_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    __Vtask_sparsity_tb__DOT__load_keys__24__sparsity_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_sparsity_tb__DOT__load_keys__24__sparsity_tb__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
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
        __Vtask_sparsity_tb__DOT__load_keys__24__sparsity_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_sparsity_tb__DOT__load_keys__24__sparsity_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
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
    __Vtask_sparsity_tb__DOT__load_keys__24__sparsity_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, __Vtask_sparsity_tb__DOT__load_keys__24__sparsity_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
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
        __Vtask_sparsity_tb__DOT__load_keys__24__sparsity_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (__Vtask_sparsity_tb__DOT__load_keys__24__sparsity_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    __Vtask_sparsity_tb__DOT__run_execute__27__sparsity_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
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
    __Vtask_sparsity_tb__DOT__run_execute__27__sparsity_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0x0000000cU;
    while (VL_LTS_III(32, 0U, __Vtask_sparsity_tb__DOT__run_execute__27__sparsity_tb__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
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
        __Vtask_sparsity_tb__DOT__run_execute__27__sparsity_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (__Vtask_sparsity_tb__DOT__run_execute__27__sparsity_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    __Vtask_sparsity_tb__DOT__ofifo_to_pmem__29__sparsity_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
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
    __Vtask_sparsity_tb__DOT__ofifo_to_pmem__29__sparsity_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_sparsity_tb__DOT__ofifo_to_pmem__29__sparsity_tb__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
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
        __Vtask_sparsity_tb__DOT__ofifo_to_pmem__29__sparsity_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (__Vtask_sparsity_tb__DOT__ofifo_to_pmem__29__sparsity_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
    }
    if ((0U != __Vtask_sparsity_tb__DOT__run_full_pipeline__18__do_norm)) {
        __Vtask_sparsity_tb__DOT__run_sfp_norm__31__sparsity_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0;
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
        __Vtask_sparsity_tb__DOT__run_sfp_norm__31__sparsity_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 = 3U;
        while (VL_LTS_III(32, 0U, __Vtask_sparsity_tb__DOT__run_sfp_norm__31__sparsity_tb__DOT__unnamedblk1_7__DOT____Vrepeat6)) {
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
            __Vtask_sparsity_tb__DOT__run_sfp_norm__31__sparsity_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 
                = (__Vtask_sparsity_tb__DOT__run_sfp_norm__31__sparsity_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 
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
    __Vtask_sparsity_tb__DOT__verify_qk__35__label = "B1"s;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 0;
    VL_WRITEF_NX("--- %@: Q*K verification ---\n",0,
                 -1,&(__Vtask_sparsity_tb__DOT__verify_qk__35__label));
    vlSelfRef.sparsity_tb__DOT__q = 0U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 7U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[0U][7U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[0U]
            [7U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [0U][0U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row0 col0(K7): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [0U][0U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 1U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 6U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[0U][6U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[0U]
            [6U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [0U][1U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row0 col1(K6): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [0U][1U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 2U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 5U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[0U][5U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[0U]
            [5U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [0U][2U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row0 col2(K5): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [0U][2U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 3U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 4U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[0U][4U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[0U]
            [4U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [0U][3U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row0 col3(K4): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [0U][3U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 4U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 3U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[0U][3U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[0U]
            [3U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [0U][4U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row0 col4(K3): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [0U][4U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 5U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 2U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[0U][2U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[0U]
            [2U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [0U][5U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row0 col5(K2): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [0U][5U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 6U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 1U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[0U][1U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[0U]
            [1U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [0U][6U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row0 col6(K1): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [0U][6U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 7U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 0U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[0U][0U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[0U]
            [0U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [0U][7U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row0 col7(K0): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [0U][7U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 8U;
    vlSelfRef.sparsity_tb__DOT__q = 0U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 7U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[1U][7U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[1U]
            [7U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [1U][0U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row1 col0(K7): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [1U][0U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 1U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 6U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[1U][6U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[1U]
            [6U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [1U][1U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row1 col1(K6): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [1U][1U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 2U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 5U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[1U][5U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[1U]
            [5U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [1U][2U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row1 col2(K5): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [1U][2U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 3U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 4U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[1U][4U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[1U]
            [4U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [1U][3U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row1 col3(K4): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [1U][3U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 4U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 3U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[1U][3U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[1U]
            [3U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [1U][4U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row1 col4(K3): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [1U][4U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 5U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 2U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[1U][2U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[1U]
            [2U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [1U][5U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row1 col5(K2): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [1U][5U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 6U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 1U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[1U][1U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[1U]
            [1U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [1U][6U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row1 col6(K1): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [1U][6U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 7U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 0U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[1U][0U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[1U]
            [0U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [1U][7U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row1 col7(K0): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [1U][7U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 8U;
    vlSelfRef.sparsity_tb__DOT__q = 0U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 7U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[2U][7U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[2U]
            [7U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [2U][0U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row2 col0(K7): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [2U][0U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 1U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 6U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[2U][6U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[2U]
            [6U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [2U][1U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row2 col1(K6): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [2U][1U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 2U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 5U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[2U][5U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[2U]
            [5U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [2U][2U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row2 col2(K5): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [2U][2U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 3U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 4U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[2U][4U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[2U]
            [4U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [2U][3U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row2 col3(K4): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [2U][3U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 4U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 3U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[2U][3U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[2U]
            [3U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [2U][4U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row2 col4(K3): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [2U][4U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 5U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 2U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[2U][2U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[2U]
            [2U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [2U][5U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row2 col5(K2): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [2U][5U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 6U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 1U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[2U][1U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[2U]
            [1U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [2U][6U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row2 col6(K1): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [2U][6U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 7U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 0U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[2U][0U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[2U]
            [0U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [2U][7U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row2 col7(K0): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [2U][7U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 8U;
    vlSelfRef.sparsity_tb__DOT__q = 0U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 7U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[3U][7U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[3U]
            [7U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [3U][0U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row3 col0(K7): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [3U][0U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 1U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 6U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[3U][6U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[3U]
            [6U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [3U][1U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row3 col1(K6): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [3U][1U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 2U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 5U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[3U][5U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[3U]
            [5U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [3U][2U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row3 col2(K5): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [3U][2U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 3U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 4U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[3U][4U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[3U]
            [4U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [3U][3U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row3 col3(K4): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [3U][3U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 4U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 3U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[3U][3U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[3U]
            [3U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [3U][4U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row3 col4(K3): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [3U][4U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 5U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 2U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[3U][2U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[3U]
            [2U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [3U][5U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row3 col5(K2): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [3U][5U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 6U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 1U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[3U][1U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[3U]
            [1U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [3U][6U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row3 col6(K1): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [3U][6U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 7U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 0U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[3U][0U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[3U]
            [0U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [3U][7U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row3 col7(K0): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [3U][7U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 8U;
    vlSelfRef.sparsity_tb__DOT__q = 0U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 7U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[4U][7U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[4U]
            [7U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [4U][0U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row4 col0(K7): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [4U][0U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 1U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 6U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[4U][6U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[4U]
            [6U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [4U][1U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row4 col1(K6): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [4U][1U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 2U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 5U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[4U][5U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[4U]
            [5U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [4U][2U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row4 col2(K5): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [4U][2U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 3U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 4U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[4U][4U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[4U]
            [4U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [4U][3U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row4 col3(K4): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [4U][3U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 4U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 3U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[4U][3U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[4U]
            [3U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [4U][4U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row4 col4(K3): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [4U][4U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 5U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 2U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[4U][2U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[4U]
            [2U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [4U][5U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row4 col5(K2): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [4U][5U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 6U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 1U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[4U][1U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[4U]
            [1U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [4U][6U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row4 col6(K1): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [4U][6U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 7U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 0U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[4U][0U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[4U]
            [0U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [4U][7U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row4 col7(K0): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [4U][7U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 8U;
    vlSelfRef.sparsity_tb__DOT__q = 0U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 7U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[5U][7U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[5U]
            [7U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [5U][0U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row5 col0(K7): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [5U][0U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 1U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 6U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[5U][6U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[5U]
            [6U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [5U][1U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row5 col1(K6): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [5U][1U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 2U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 5U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[5U][5U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[5U]
            [5U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [5U][2U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row5 col2(K5): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [5U][2U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 3U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 4U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[5U][4U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[5U]
            [4U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [5U][3U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row5 col3(K4): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [5U][3U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 4U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 3U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[5U][3U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[5U]
            [3U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [5U][4U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row5 col4(K3): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [5U][4U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 5U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 2U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[5U][2U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[5U]
            [2U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [5U][5U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row5 col5(K2): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [5U][5U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 6U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 1U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[5U][1U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[5U]
            [1U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [5U][6U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row5 col6(K1): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [5U][6U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 7U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 0U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[5U][0U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[5U]
            [0U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [5U][7U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row5 col7(K0): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [5U][7U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 8U;
    vlSelfRef.sparsity_tb__DOT__q = 0U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 7U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[6U][7U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[6U]
            [7U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [6U][0U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row6 col0(K7): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [6U][0U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 1U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 6U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[6U][6U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[6U]
            [6U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [6U][1U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row6 col1(K6): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [6U][1U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 2U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 5U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[6U][5U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[6U]
            [5U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [6U][2U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row6 col2(K5): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [6U][2U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 3U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 4U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[6U][4U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[6U]
            [4U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [6U][3U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row6 col3(K4): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [6U][3U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 4U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 3U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[6U][3U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[6U]
            [3U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [6U][4U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row6 col4(K3): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [6U][4U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 5U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 2U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[6U][2U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[6U]
            [2U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [6U][5U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row6 col5(K2): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [6U][5U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 6U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 1U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[6U][1U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[6U]
            [1U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [6U][6U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row6 col6(K1): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [6U][6U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 7U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 0U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[6U][0U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[6U]
            [0U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [6U][7U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row6 col7(K0): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [6U][7U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 8U;
    vlSelfRef.sparsity_tb__DOT__q = 0U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 7U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[7U][7U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[7U]
            [7U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [7U][0U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row7 col0(K7): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [7U][0U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 1U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 6U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[7U][6U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[7U]
            [6U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [7U][1U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row7 col1(K6): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [7U][1U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 2U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 5U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[7U][5U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[7U]
            [5U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [7U][2U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row7 col2(K5): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [7U][2U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 3U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 4U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[7U][4U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[7U]
            [4U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [7U][3U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row7 col3(K4): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [7U][3U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 4U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 3U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[7U][3U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[7U]
            [3U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [7U][4U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row7 col4(K3): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [7U][4U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 5U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 2U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[7U][2U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[7U]
            [2U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [7U][5U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row7 col5(K2): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [7U][5U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 6U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 1U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[7U][1U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[7U]
            [1U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [7U][6U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row7 col6(K1): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [7U][6U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 7U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__kc = 0U;
    __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 
        vlSelfRef.sparsity_tb__DOT__result[7U][0U];
    if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
         & (vlSelfRef.sparsity_tb__DOT__abs_result[7U]
            [0U] < vlSelfRef.sparsity_tb__DOT__threshold_elem))) {
        __Vtask_sparsity_tb__DOT__verify_qk__35__exp = 0U;
    }
    if (VL_LIKELY(((vlSelfRef.sparsity_tb__DOT__hw_result
                    [7U][7U] == (0x000fffffU & __Vtask_sparsity_tb__DOT__verify_qk__35__exp))))) {
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  FAIL row7 col7(K0): HW=%0d exp=%0d\n",0,
                     20,vlSelfRef.sparsity_tb__DOT__hw_result
                     [7U][7U],32,__Vtask_sparsity_tb__DOT__verify_qk__35__exp);
        vlSelfRef.sparsity_tb__DOT__fail_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__fail_cnt);
    }
    vlSelfRef.sparsity_tb__DOT__q = 8U;
    VL_WRITEF_NX("\n===== Config 3: B1+B2 (element + row sparsity) =====\n",0);
    vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity = 1U;
    vlSelfRef.sparsity_tb__DOT__enable_row_sparsity = 1U;
    __Vtask_sparsity_tb__DOT__run_full_pipeline__36__do_norm = 1U;
    __Vtask_sparsity_tb__DOT__do_reset__37__sparsity_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_sparsity_tb__DOT__do_reset__37__sparsity_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
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
    __Vtask_sparsity_tb__DOT__do_reset__37__sparsity_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_sparsity_tb__DOT__do_reset__37__sparsity_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
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
        __Vtask_sparsity_tb__DOT__do_reset__37__sparsity_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_sparsity_tb__DOT__do_reset__37__sparsity_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.sparsity_tb__DOT__rst_n = 1U;
    __Vtask_sparsity_tb__DOT__do_reset__37__sparsity_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_sparsity_tb__DOT__do_reset__37__sparsity_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
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
        __Vtask_sparsity_tb__DOT__do_reset__37__sparsity_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_sparsity_tb__DOT__do_reset__37__sparsity_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
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
    __Vtask_sparsity_tb__DOT__load_keys__42__sparsity_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    __Vtask_sparsity_tb__DOT__load_keys__42__sparsity_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    __Vtask_sparsity_tb__DOT__load_keys__42__sparsity_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_sparsity_tb__DOT__load_keys__42__sparsity_tb__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
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
        __Vtask_sparsity_tb__DOT__load_keys__42__sparsity_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_sparsity_tb__DOT__load_keys__42__sparsity_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
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
    __Vtask_sparsity_tb__DOT__load_keys__42__sparsity_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, __Vtask_sparsity_tb__DOT__load_keys__42__sparsity_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
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
        __Vtask_sparsity_tb__DOT__load_keys__42__sparsity_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (__Vtask_sparsity_tb__DOT__load_keys__42__sparsity_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    __Vtask_sparsity_tb__DOT__run_execute__45__sparsity_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
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
    __Vtask_sparsity_tb__DOT__run_execute__45__sparsity_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0x0000000cU;
    while (VL_LTS_III(32, 0U, __Vtask_sparsity_tb__DOT__run_execute__45__sparsity_tb__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
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
        __Vtask_sparsity_tb__DOT__run_execute__45__sparsity_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (__Vtask_sparsity_tb__DOT__run_execute__45__sparsity_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    __Vtask_sparsity_tb__DOT__ofifo_to_pmem__47__sparsity_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
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
    __Vtask_sparsity_tb__DOT__ofifo_to_pmem__47__sparsity_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_sparsity_tb__DOT__ofifo_to_pmem__47__sparsity_tb__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
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
        __Vtask_sparsity_tb__DOT__ofifo_to_pmem__47__sparsity_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (__Vtask_sparsity_tb__DOT__ofifo_to_pmem__47__sparsity_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
    }
    if ((0U != __Vtask_sparsity_tb__DOT__run_full_pipeline__36__do_norm)) {
        __Vtask_sparsity_tb__DOT__run_sfp_norm__49__sparsity_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0;
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
        __Vtask_sparsity_tb__DOT__run_sfp_norm__49__sparsity_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 = 3U;
        while (VL_LTS_III(32, 0U, __Vtask_sparsity_tb__DOT__run_sfp_norm__49__sparsity_tb__DOT__unnamedblk1_7__DOT____Vrepeat6)) {
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
            __Vtask_sparsity_tb__DOT__run_sfp_norm__49__sparsity_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 
                = (__Vtask_sparsity_tb__DOT__run_sfp_norm__49__sparsity_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 
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
    VL_WRITEF_NX("--- B2: Row-level skip verification ---\n",0);
    if ((vlSelfRef.sparsity_tb__DOT__row_sums[0U] < vlSelfRef.sparsity_tb__DOT__threshold_row)) {
        vlSelfRef.sparsity_tb__DOT__q = 0U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [0U][0U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row0 col0: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [0U][0U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 1U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [0U][1U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row0 col1: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [0U][1U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 2U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [0U][2U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row0 col2: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [0U][2U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 3U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [0U][3U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row0 col3: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [0U][3U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 4U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [0U][4U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row0 col4: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [0U][4U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 5U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [0U][5U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row0 col5: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [0U][5U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 6U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [0U][6U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row0 col6: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [0U][6U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 7U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [0U][7U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row0 col7: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [0U][7U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 8U;
        VL_WRITEF_NX("  Row 0: SKIPPED (sum=%0d < %0#)\n",0,
                     32,vlSelfRef.sparsity_tb__DOT__row_sums
                     [0U],23,vlSelfRef.sparsity_tb__DOT__threshold_row);
    } else {
        VL_WRITEF_NX("  Row 0: NORMALIZED (sum=%0d)\n",0,
                     32,vlSelfRef.sparsity_tb__DOT__row_sums
                     [0U]);
        vlSelfRef.sparsity_tb__DOT__q = 0U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 1U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 2U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 3U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 4U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 5U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 6U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 7U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 8U;
    }
    if ((vlSelfRef.sparsity_tb__DOT__row_sums[1U] < vlSelfRef.sparsity_tb__DOT__threshold_row)) {
        vlSelfRef.sparsity_tb__DOT__q = 0U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [1U][0U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row1 col0: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [1U][0U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 1U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [1U][1U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row1 col1: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [1U][1U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 2U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [1U][2U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row1 col2: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [1U][2U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 3U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [1U][3U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row1 col3: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [1U][3U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 4U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [1U][4U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row1 col4: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [1U][4U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 5U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [1U][5U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row1 col5: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [1U][5U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 6U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [1U][6U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row1 col6: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [1U][6U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 7U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [1U][7U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row1 col7: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [1U][7U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 8U;
        VL_WRITEF_NX("  Row 1: SKIPPED (sum=%0d < %0#)\n",0,
                     32,vlSelfRef.sparsity_tb__DOT__row_sums
                     [1U],23,vlSelfRef.sparsity_tb__DOT__threshold_row);
    } else {
        VL_WRITEF_NX("  Row 1: NORMALIZED (sum=%0d)\n",0,
                     32,vlSelfRef.sparsity_tb__DOT__row_sums
                     [1U]);
        vlSelfRef.sparsity_tb__DOT__q = 0U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 1U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 2U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 3U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 4U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 5U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 6U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 7U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 8U;
    }
    if ((vlSelfRef.sparsity_tb__DOT__row_sums[2U] < vlSelfRef.sparsity_tb__DOT__threshold_row)) {
        vlSelfRef.sparsity_tb__DOT__q = 0U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [2U][0U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row2 col0: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [2U][0U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 1U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [2U][1U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row2 col1: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [2U][1U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 2U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [2U][2U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row2 col2: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [2U][2U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 3U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [2U][3U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row2 col3: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [2U][3U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 4U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [2U][4U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row2 col4: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [2U][4U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 5U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [2U][5U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row2 col5: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [2U][5U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 6U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [2U][6U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row2 col6: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [2U][6U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 7U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [2U][7U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row2 col7: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [2U][7U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 8U;
        VL_WRITEF_NX("  Row 2: SKIPPED (sum=%0d < %0#)\n",0,
                     32,vlSelfRef.sparsity_tb__DOT__row_sums
                     [2U],23,vlSelfRef.sparsity_tb__DOT__threshold_row);
    } else {
        VL_WRITEF_NX("  Row 2: NORMALIZED (sum=%0d)\n",0,
                     32,vlSelfRef.sparsity_tb__DOT__row_sums
                     [2U]);
        vlSelfRef.sparsity_tb__DOT__q = 0U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 1U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 2U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 3U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 4U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 5U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 6U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 7U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 8U;
    }
    if ((vlSelfRef.sparsity_tb__DOT__row_sums[3U] < vlSelfRef.sparsity_tb__DOT__threshold_row)) {
        vlSelfRef.sparsity_tb__DOT__q = 0U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [3U][0U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row3 col0: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [3U][0U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 1U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [3U][1U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row3 col1: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [3U][1U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 2U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [3U][2U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row3 col2: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [3U][2U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 3U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [3U][3U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row3 col3: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [3U][3U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 4U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [3U][4U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row3 col4: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [3U][4U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 5U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [3U][5U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row3 col5: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [3U][5U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 6U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [3U][6U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row3 col6: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [3U][6U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 7U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [3U][7U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row3 col7: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [3U][7U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 8U;
        VL_WRITEF_NX("  Row 3: SKIPPED (sum=%0d < %0#)\n",0,
                     32,vlSelfRef.sparsity_tb__DOT__row_sums
                     [3U],23,vlSelfRef.sparsity_tb__DOT__threshold_row);
    } else {
        VL_WRITEF_NX("  Row 3: NORMALIZED (sum=%0d)\n",0,
                     32,vlSelfRef.sparsity_tb__DOT__row_sums
                     [3U]);
        vlSelfRef.sparsity_tb__DOT__q = 0U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 1U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 2U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 3U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 4U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 5U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 6U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 7U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 8U;
    }
    if ((vlSelfRef.sparsity_tb__DOT__row_sums[4U] < vlSelfRef.sparsity_tb__DOT__threshold_row)) {
        vlSelfRef.sparsity_tb__DOT__q = 0U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [4U][0U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row4 col0: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [4U][0U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 1U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [4U][1U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row4 col1: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [4U][1U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 2U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [4U][2U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row4 col2: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [4U][2U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 3U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [4U][3U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row4 col3: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [4U][3U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 4U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [4U][4U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row4 col4: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [4U][4U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 5U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [4U][5U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row4 col5: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [4U][5U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 6U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [4U][6U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row4 col6: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [4U][6U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 7U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [4U][7U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row4 col7: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [4U][7U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 8U;
        VL_WRITEF_NX("  Row 4: SKIPPED (sum=%0d < %0#)\n",0,
                     32,vlSelfRef.sparsity_tb__DOT__row_sums
                     [4U],23,vlSelfRef.sparsity_tb__DOT__threshold_row);
    } else {
        VL_WRITEF_NX("  Row 4: NORMALIZED (sum=%0d)\n",0,
                     32,vlSelfRef.sparsity_tb__DOT__row_sums
                     [4U]);
        vlSelfRef.sparsity_tb__DOT__q = 0U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 1U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 2U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 3U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 4U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 5U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 6U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 7U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 8U;
    }
    if ((vlSelfRef.sparsity_tb__DOT__row_sums[5U] < vlSelfRef.sparsity_tb__DOT__threshold_row)) {
        vlSelfRef.sparsity_tb__DOT__q = 0U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [5U][0U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row5 col0: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [5U][0U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 1U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [5U][1U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row5 col1: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [5U][1U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 2U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [5U][2U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row5 col2: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [5U][2U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 3U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [5U][3U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row5 col3: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [5U][3U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 4U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [5U][4U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row5 col4: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [5U][4U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 5U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [5U][5U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row5 col5: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [5U][5U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 6U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [5U][6U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row5 col6: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [5U][6U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 7U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [5U][7U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row5 col7: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [5U][7U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 8U;
        VL_WRITEF_NX("  Row 5: SKIPPED (sum=%0d < %0#)\n",0,
                     32,vlSelfRef.sparsity_tb__DOT__row_sums
                     [5U],23,vlSelfRef.sparsity_tb__DOT__threshold_row);
    } else {
        VL_WRITEF_NX("  Row 5: NORMALIZED (sum=%0d)\n",0,
                     32,vlSelfRef.sparsity_tb__DOT__row_sums
                     [5U]);
        vlSelfRef.sparsity_tb__DOT__q = 0U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 1U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 2U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 3U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 4U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 5U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 6U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 7U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 8U;
    }
    if ((vlSelfRef.sparsity_tb__DOT__row_sums[6U] < vlSelfRef.sparsity_tb__DOT__threshold_row)) {
        vlSelfRef.sparsity_tb__DOT__q = 0U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [6U][0U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row6 col0: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [6U][0U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 1U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [6U][1U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row6 col1: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [6U][1U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 2U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [6U][2U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row6 col2: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [6U][2U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 3U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [6U][3U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row6 col3: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [6U][3U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 4U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [6U][4U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row6 col4: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [6U][4U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 5U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [6U][5U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row6 col5: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [6U][5U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 6U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [6U][6U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row6 col6: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [6U][6U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 7U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [6U][7U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row6 col7: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [6U][7U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 8U;
        VL_WRITEF_NX("  Row 6: SKIPPED (sum=%0d < %0#)\n",0,
                     32,vlSelfRef.sparsity_tb__DOT__row_sums
                     [6U],23,vlSelfRef.sparsity_tb__DOT__threshold_row);
    } else {
        VL_WRITEF_NX("  Row 6: NORMALIZED (sum=%0d)\n",0,
                     32,vlSelfRef.sparsity_tb__DOT__row_sums
                     [6U]);
        vlSelfRef.sparsity_tb__DOT__q = 0U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 1U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 2U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 3U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 4U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 5U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 6U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 7U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 8U;
    }
    if ((vlSelfRef.sparsity_tb__DOT__row_sums[7U] < vlSelfRef.sparsity_tb__DOT__threshold_row)) {
        vlSelfRef.sparsity_tb__DOT__q = 0U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [7U][0U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row7 col0: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [7U][0U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 1U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [7U][1U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row7 col1: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [7U][1U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 2U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [7U][2U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row7 col2: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [7U][2U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 3U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [7U][3U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row7 col3: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [7U][3U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 4U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [7U][4U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row7 col4: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [7U][4U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 5U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [7U][5U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row7 col5: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [7U][5U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 6U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [7U][6U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row7 col6: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [7U][6U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 7U;
        if (VL_LIKELY(((0U == VL_EXTENDS_II(32,20, 
                                            vlSelfRef.sparsity_tb__DOT__hw_result
                                            [7U][7U]))))) {
            vlSelfRef.sparsity_tb__DOT__pass_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        } else {
            VL_WRITEF_NX("  FAIL row7 col7: skipped row not zero (%0d)\n",0,
                         20,vlSelfRef.sparsity_tb__DOT__hw_result
                         [7U][7U]);
            vlSelfRef.sparsity_tb__DOT__fail_cnt = 
                ((IData)(1U) + vlSelfRef.sparsity_tb__DOT__fail_cnt);
        }
        vlSelfRef.sparsity_tb__DOT__q = 8U;
        VL_WRITEF_NX("  Row 7: SKIPPED (sum=%0d < %0#)\n",0,
                     32,vlSelfRef.sparsity_tb__DOT__row_sums
                     [7U],23,vlSelfRef.sparsity_tb__DOT__threshold_row);
    } else {
        VL_WRITEF_NX("  Row 7: NORMALIZED (sum=%0d)\n",0,
                     32,vlSelfRef.sparsity_tb__DOT__row_sums
                     [7U]);
        vlSelfRef.sparsity_tb__DOT__q = 0U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 1U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 2U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 3U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 4U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 5U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 6U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 7U;
        vlSelfRef.sparsity_tb__DOT__pass_cnt = ((IData)(1U) 
                                                + vlSelfRef.sparsity_tb__DOT__pass_cnt);
        vlSelfRef.sparsity_tb__DOT__q = 8U;
    }
    VL_WRITEF_NX("\n===== SUMMARY =====\nPASS: %0d  FAIL: %0d\n",0,
                 32,vlSelfRef.sparsity_tb__DOT__pass_cnt,
                 32,vlSelfRef.sparsity_tb__DOT__fail_cnt);
    if ((0U == vlSelfRef.sparsity_tb__DOT__fail_cnt)) {
        VL_WRITEF_NX("ALL TESTS PASSED!\n",0);
    } else {
        VL_WRITEF_NX("SOME TESTS FAILED!\n",0);
    }
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "verilog/sparsity_tb.sv", 
                                         339);
    VL_FINISH_MT("verilog/sparsity_tb.sv", 339, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsparsity_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vsparsity_tb___024root___eval_triggers__act(Vsparsity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___eval_triggers__act\n"); );
    Vsparsity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U) 
                                                     | ((((~ (IData)(vlSelfRef.sparsity_tb__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sparsity_tb__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.sparsity_tb__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sparsity_tb__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__sparsity_tb__DOT__clk__0 
        = vlSelfRef.sparsity_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sparsity_tb__DOT__rst_n__0 
        = vlSelfRef.sparsity_tb__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsparsity_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vsparsity_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vsparsity_tb___024root___act_sequent__TOP__0(Vsparsity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___act_sequent__TOP__0\n"); );
    Vsparsity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ sparsity_tb__DOT__dut__DOT__mac_in;
    sparsity_tb__DOT__dut__DOT__mac_in = 0;
    CData/*0:0*/ sparsity_tb__DOT__dut__DOT__wr_k;
    sparsity_tb__DOT__dut__DOT__wr_k = 0;
    CData/*0:0*/ sparsity_tb__DOT__dut__DOT__sfp_sel;
    sparsity_tb__DOT__dut__DOT__sfp_sel = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_6;
    // Body
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__en_chain[0U] 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__execute) 
           | (IData)(vlSelfRef.sparsity_tb__DOT__load));
    vlSelfRef.sparsity_tb__DOT__dut__DOT____Vcellinp__qmem_instance__CEN 
        = (1U & (~ ((IData)(vlSelfRef.sparsity_tb__DOT__qmem_rd) 
                    | (IData)(vlSelfRef.sparsity_tb__DOT__qmem_wr))));
    vlSelfRef.sparsity_tb__DOT__dut__DOT____Vcellinp__kmem_instance__CEN 
        = (1U & (~ ((IData)(vlSelfRef.sparsity_tb__DOT__kmem_rd) 
                    | (IData)(vlSelfRef.sparsity_tb__DOT__kmem_wr))));
    vlSelfRef.sparsity_tb__DOT__dut__DOT____Vcellinp__psum_mem_instance__CEN 
        = (1U & (~ ((IData)(vlSelfRef.sparsity_tb__DOT__pmem_rd) 
                    | (IData)(vlSelfRef.sparsity_tb__DOT__pmem_wr))));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_7 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
           & ((0x000fffffU & ((0x00080000U & vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                               [3U][0U]) ? ((IData)(1U) 
                                            + (~ VL_EXTENDS_II(20,20, 
                                                               vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                               [3U]
                                                               [0U])))
                               : vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [3U][0U])) < vlSelfRef.sparsity_tb__DOT__threshold_elem));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_6 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
           & ((0x000fffffU & ((0x00080000U & vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                               [3U][0U]) ? ((IData)(1U) 
                                            + (~ VL_EXTENDS_II(20,20, 
                                                               vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                               [3U]
                                                               [0U])))
                               : vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [3U][0U])) < vlSelfRef.sparsity_tb__DOT__threshold_elem));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_5 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
           & ((0x000fffffU & ((0x00080000U & vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                               [3U][0U]) ? ((IData)(1U) 
                                            + (~ VL_EXTENDS_II(20,20, 
                                                               vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                               [3U]
                                                               [0U])))
                               : vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [3U][0U])) < vlSelfRef.sparsity_tb__DOT__threshold_elem));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_4 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
           & ((0x000fffffU & ((0x00080000U & vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                               [3U][0U]) ? ((IData)(1U) 
                                            + (~ VL_EXTENDS_II(20,20, 
                                                               vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                               [3U]
                                                               [0U])))
                               : vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [3U][0U])) < vlSelfRef.sparsity_tb__DOT__threshold_elem));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_3 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
           & ((0x000fffffU & ((0x00080000U & vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                               [3U][0U]) ? ((IData)(1U) 
                                            + (~ VL_EXTENDS_II(20,20, 
                                                               vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                               [3U]
                                                               [0U])))
                               : vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [3U][0U])) < vlSelfRef.sparsity_tb__DOT__threshold_elem));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_2 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
           & ((0x000fffffU & ((0x00080000U & vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                               [3U][0U]) ? ((IData)(1U) 
                                            + (~ VL_EXTENDS_II(20,20, 
                                                               vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                               [3U]
                                                               [0U])))
                               : vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [3U][0U])) < vlSelfRef.sparsity_tb__DOT__threshold_elem));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_1 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
           & ((0x000fffffU & ((0x00080000U & vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                               [3U][0U]) ? ((IData)(1U) 
                                            + (~ VL_EXTENDS_II(20,20, 
                                                               vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                               [3U]
                                                               [0U])))
                               : vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [3U][0U])) < vlSelfRef.sparsity_tb__DOT__threshold_elem));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_0 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity) 
           & ((0x000fffffU & ((0x00080000U & vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                               [3U][0U]) ? ((IData)(1U) 
                                            + (~ VL_EXTENDS_II(20,20, 
                                                               vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                               [3U]
                                                               [0U])))
                               : vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [3U][0U])) < vlSelfRef.sparsity_tb__DOT__threshold_elem));
    vlSelfRef.sparsity_tb__DOT__inst = ((((IData)(vlSelfRef.sparsity_tb__DOT__sfp_sel) 
                                          << 0x00000012U) 
                                         | (((IData)(vlSelfRef.sparsity_tb__DOT__sfp_start) 
                                             << 0x00000011U) 
                                            | (((IData)(vlSelfRef.sparsity_tb__DOT__ofifo_rd) 
                                                << 0x00000010U) 
                                               | ((IData)(vlSelfRef.sparsity_tb__DOT__qkmem_add) 
                                                  << 0x0000000cU)))) 
                                        | ((((IData)(vlSelfRef.sparsity_tb__DOT__pmem_add) 
                                             << 8U) 
                                            | (((IData)(vlSelfRef.sparsity_tb__DOT__execute) 
                                                << 7U) 
                                               | ((IData)(vlSelfRef.sparsity_tb__DOT__load) 
                                                  << 6U))) 
                                           | ((((IData)(vlSelfRef.sparsity_tb__DOT__qmem_rd) 
                                                << 5U) 
                                               | (((IData)(vlSelfRef.sparsity_tb__DOT__qmem_wr) 
                                                   << 4U) 
                                                  | ((IData)(vlSelfRef.sparsity_tb__DOT__kmem_rd) 
                                                     << 3U))) 
                                              | (((IData)(vlSelfRef.sparsity_tb__DOT__kmem_wr) 
                                                  << 2U) 
                                                 | (((IData)(vlSelfRef.sparsity_tb__DOT__pmem_rd) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.sparsity_tb__DOT__pmem_wr))))));
    sparsity_tb__DOT__dut__DOT__wr_k = (1U & (vlSelfRef.sparsity_tb__DOT__inst 
                                              >> 6U));
    sparsity_tb__DOT__dut__DOT__mac_in = ((IData)(sparsity_tb__DOT__dut__DOT__wr_k)
                                           ? vlSelfRef.sparsity_tb__DOT__dut__DOT__kmem_out
                                           : vlSelfRef.sparsity_tb__DOT__dut__DOT__qmem_out);
    sparsity_tb__DOT__dut__DOT__sfp_sel = (1U & (vlSelfRef.sparsity_tb__DOT__inst 
                                                 >> 0x12U));
    __Vtemp_1[1U] = (((IData)((((QData)((IData)(((0x000ffc00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_0) 
                                                                    >> 9U)))) 
                                                     << 0x0000000aU)) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_0)))) 
                                << 0x00000014U) | (QData)((IData)(
                                                                  ((0x000ffc00U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_1) 
                                                                                >> 9U)))) 
                                                                       << 0x0000000aU)) 
                                                                   | (IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_1)))))) 
                      << 8U) | (IData)(((((QData)((IData)(
                                                          ((0x000ffc00U 
                                                            & ((- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_2) 
                                                                              >> 9U)))) 
                                                               << 0x0000000aU)) 
                                                           | (IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_2)))) 
                                          << 0x00000014U) 
                                         | (QData)((IData)(
                                                           ((0x000ffc00U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_3) 
                                                                               >> 9U)))) 
                                                                << 0x0000000aU)) 
                                                            | (IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_3))))) 
                                        >> 0x00000020U)));
    __Vtemp_1[2U] = (((IData)((((QData)((IData)(((0x000ffc00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_0) 
                                                                    >> 9U)))) 
                                                     << 0x0000000aU)) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_0)))) 
                                << 0x00000014U) | (QData)((IData)(
                                                                  ((0x000ffc00U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_1) 
                                                                                >> 9U)))) 
                                                                       << 0x0000000aU)) 
                                                                   | (IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_1)))))) 
                      >> 0x00000018U) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    ((0x000ffc00U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_0) 
                                                                                >> 9U)))) 
                                                                         << 0x0000000aU)) 
                                                                     | (IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_0)))) 
                                                    << 0x00000014U) 
                                                   | (QData)((IData)(
                                                                     ((0x000ffc00U 
                                                                       & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_1) 
                                                                                >> 9U)))) 
                                                                          << 0x0000000aU)) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_1))))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    __Vtemp_2[1U] = (((IData)((((QData)((IData)(((0x000ffc00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_4) 
                                                                    >> 9U)))) 
                                                     << 0x0000000aU)) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_4)))) 
                                << 0x00000014U) | (QData)((IData)(
                                                                  ((0x000ffc00U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_5) 
                                                                                >> 9U)))) 
                                                                       << 0x0000000aU)) 
                                                                   | (IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_5)))))) 
                      << 8U) | (IData)(((((QData)((IData)(
                                                          ((0x000ffc00U 
                                                            & ((- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_6) 
                                                                              >> 9U)))) 
                                                               << 0x0000000aU)) 
                                                           | (IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_6)))) 
                                          << 0x00000014U) 
                                         | (QData)((IData)(
                                                           ((0x000ffc00U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_7) 
                                                                               >> 9U)))) 
                                                                << 0x0000000aU)) 
                                                            | (IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_7))))) 
                                        >> 0x00000020U)));
    __Vtemp_2[2U] = (((IData)((((QData)((IData)(((0x000ffc00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_4) 
                                                                    >> 9U)))) 
                                                     << 0x0000000aU)) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_4)))) 
                                << 0x00000014U) | (QData)((IData)(
                                                                  ((0x000ffc00U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_5) 
                                                                                >> 9U)))) 
                                                                       << 0x0000000aU)) 
                                                                   | (IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_5)))))) 
                      >> 0x00000018U) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    ((0x000ffc00U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_4) 
                                                                                >> 9U)))) 
                                                                         << 0x0000000aU)) 
                                                                     | (IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_4)))) 
                                                    << 0x00000014U) 
                                                   | (QData)((IData)(
                                                                     ((0x000ffc00U 
                                                                       & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_5) 
                                                                                >> 9U)))) 
                                                                          << 0x0000000aU)) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_5))))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    __Vtemp_6[2U] = (((IData)((((QData)((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q
                                                [(0x0000003fU 
                                                  & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                << 0x00000014U) | (QData)((IData)(
                                                                  vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q
                                                                  [
                                                                  (0x0000003fU 
                                                                   & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__rd_ptr))])))) 
                      << 0x00000010U) | (((IData)((
                                                   ((QData)((IData)(
                                                                    vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q
                                                                    [
                                                                    (0x0000003fU 
                                                                     & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                                    << 0x00000014U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q
                                                                     [
                                                                     (0x0000003fU 
                                                                      & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__rd_ptr))])))) 
                                          >> 0x00000018U) 
                                         | ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q
                                                                       [
                                                                       (0x0000003fU 
                                                                        & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                                       << 0x00000014U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q
                                                                        [
                                                                        (0x0000003fU 
                                                                         & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__rd_ptr))]))) 
                                                     >> 0x00000020U)) 
                                            << 8U)));
    __Vtemp_6[3U] = (((IData)((((QData)((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q
                                                [(0x0000003fU 
                                                  & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                << 0x00000014U) | (QData)((IData)(
                                                                  vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q
                                                                  [
                                                                  (0x0000003fU 
                                                                   & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__rd_ptr))])))) 
                      >> 0x00000010U) | (((IData)((
                                                   ((QData)((IData)(
                                                                    vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q
                                                                    [
                                                                    (0x0000003fU 
                                                                     & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                                    << 0x00000014U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q
                                                                     [
                                                                     (0x0000003fU 
                                                                      & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__rd_ptr))])))) 
                                          << 0x00000018U) 
                                         | ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q
                                                                       [
                                                                       (0x0000003fU 
                                                                        & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                                       << 0x00000014U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q
                                                                        [
                                                                        (0x0000003fU 
                                                                         & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__rd_ptr))]))) 
                                                     >> 0x00000020U)) 
                                            << 0x00000010U)));
    __Vtemp_6[4U] = (((0x0000ffffU & ((IData)((((QData)((IData)(
                                                                vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q
                                                                [
                                                                (0x0000003fU 
                                                                 & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                                << 0x00000014U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q
                                                                 [
                                                                 (0x0000003fU 
                                                                  & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__rd_ptr))])))) 
                                      >> 8U)) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q
                                                                            [
                                                                            (0x0000003fU 
                                                                             & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                                            << 0x00000014U) 
                                                           | (QData)((IData)(
                                                                             vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q
                                                                             [
                                                                             (0x0000003fU 
                                                                              & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__rd_ptr))]))) 
                                                          >> 0x00000020U)) 
                                                 >> 0x00000010U)) 
                     | ((0x00ff0000U & ((IData)((((QData)((IData)(
                                                                  vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q
                                                                  [
                                                                  (0x0000003fU 
                                                                   & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                                  << 0x00000014U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q
                                                                   [
                                                                   (0x0000003fU 
                                                                    & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__rd_ptr))])))) 
                                        >> 8U)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q
                                                                              [
                                                                              (0x0000003fU 
                                                                               & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                                              << 0x00000014U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q
                                                                               [
                                                                               (0x0000003fU 
                                                                                & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__rd_ptr))]))) 
                                                            >> 0x00000020U)) 
                                                   << 0x00000018U)));
    if (sparsity_tb__DOT__dut__DOT__sfp_sel) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_in[0U] 
            = (IData)((((QData)((IData)(((0x000ffc00U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_6) 
                                                            >> 9U)))) 
                                             << 0x0000000aU)) 
                                         | (IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_6)))) 
                        << 0x00000014U) | (QData)((IData)(
                                                          ((0x000ffc00U 
                                                            & ((- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_7) 
                                                                              >> 9U)))) 
                                                               << 0x0000000aU)) 
                                                           | (IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_7))))));
        vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_in[1U] 
            = __Vtemp_2[1U];
        vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_in[2U] 
            = (((IData)((((QData)((IData)(((0x000ffc00U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_2) 
                                                              >> 9U)))) 
                                               << 0x0000000aU)) 
                                           | (IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_2)))) 
                          << 0x00000014U) | (QData)((IData)(
                                                            ((0x000ffc00U 
                                                              & ((- (IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_3) 
                                                                                >> 9U)))) 
                                                                 << 0x0000000aU)) 
                                                             | (IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_3)))))) 
                << 0x00000010U) | __Vtemp_2[2U]);
        vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_in[3U] 
            = (((IData)((((QData)((IData)(((0x000ffc00U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_2) 
                                                              >> 9U)))) 
                                               << 0x0000000aU)) 
                                           | (IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_2)))) 
                          << 0x00000014U) | (QData)((IData)(
                                                            ((0x000ffc00U 
                                                              & ((- (IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_3) 
                                                                                >> 9U)))) 
                                                                 << 0x0000000aU)) 
                                                             | (IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_3)))))) 
                >> 0x00000010U) | (__Vtemp_1[1U] << 0x00000010U));
        vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_in[4U] 
            = ((__Vtemp_1[1U] >> 0x00000010U) | (__Vtemp_1[2U] 
                                                 << 0x00000010U));
    } else {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_in[0U] 
            = (IData)((((QData)((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q
                                        [(0x0000003fU 
                                          & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                        << 0x00000014U) | (QData)((IData)(
                                                          vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q
                                                          [
                                                          (0x0000003fU 
                                                           & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__rd_ptr))]))));
        vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_in[1U] 
            = (((IData)((((QData)((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q
                                          [(0x0000003fU 
                                            & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                          << 0x00000014U) | (QData)((IData)(
                                                            vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q
                                                            [
                                                            (0x0000003fU 
                                                             & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__rd_ptr))])))) 
                << 8U) | (IData)(((((QData)((IData)(
                                                    vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q
                                                    [
                                                    (0x0000003fU 
                                                     & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                    << 0x00000014U) 
                                   | (QData)((IData)(
                                                     vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q
                                                     [
                                                     (0x0000003fU 
                                                      & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__rd_ptr))]))) 
                                  >> 0x00000020U)));
        vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_in[2U] 
            = __Vtemp_6[2U];
        vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_in[3U] 
            = __Vtemp_6[3U];
        vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_in[4U] 
            = __Vtemp_6[4U];
    }
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__wr_k_chain[0U] 
        = sparsity_tb__DOT__dut__DOT__wr_k;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__q_chain[0U] 
        = sparsity_tb__DOT__dut__DOT__mac_in;
}

void Vsparsity_tb___024root___eval_act(Vsparsity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___eval_act\n"); );
    Vsparsity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        Vsparsity_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vsparsity_tb___024root___nba_sequent__TOP__0(Vsparsity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___nba_sequent__TOP__0\n"); );
    Vsparsity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr;
    __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr = 0;
    CData/*6:0*/ __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr;
    __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr = 0;
    CData/*6:0*/ __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr;
    __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr = 0;
    CData/*6:0*/ __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr;
    __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr = 0;
    CData/*6:0*/ __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr;
    __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr = 0;
    CData/*6:0*/ __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr;
    __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr = 0;
    CData/*6:0*/ __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr;
    __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr = 0;
    CData/*6:0*/ __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr;
    __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*5:0*/ __VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*5:0*/ __VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*5:0*/ __VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*5:0*/ __VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*5:0*/ __VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*5:0*/ __VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*5:0*/ __VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*5:0*/ __VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    QData/*63:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__qmem_instance__DOT__memory__v0;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__qmem_instance__DOT__memory__v0 = 0;
    CData/*3:0*/ __VdlyDim0__sparsity_tb__DOT__dut__DOT__qmem_instance__DOT__memory__v0;
    __VdlyDim0__sparsity_tb__DOT__dut__DOT__qmem_instance__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__qmem_instance__DOT__memory__v0;
    __VdlySet__sparsity_tb__DOT__dut__DOT__qmem_instance__DOT__memory__v0 = 0;
    QData/*63:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__kmem_instance__DOT__memory__v0;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__kmem_instance__DOT__memory__v0 = 0;
    CData/*3:0*/ __VdlyDim0__sparsity_tb__DOT__dut__DOT__kmem_instance__DOT__memory__v0;
    __VdlyDim0__sparsity_tb__DOT__dut__DOT__kmem_instance__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__kmem_instance__DOT__memory__v0;
    __VdlySet__sparsity_tb__DOT__dut__DOT__kmem_instance__DOT__memory__v0 = 0;
    VlWide<5>/*159:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory__v0;
    VL_ZERO_W(160, __VdlyVal__sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory__v0);
    CData/*3:0*/ __VdlyDim0__sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory__v0;
    __VdlyDim0__sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory__v0;
    __VdlySet__sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory__v0 = 0;
    // Body
    __VdlySet__sparsity_tb__DOT__dut__DOT__qmem_instance__DOT__memory__v0 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__kmem_instance__DOT__memory__v0 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory__v0 = 0U;
    __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr;
    __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr;
    __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr;
    __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr;
    __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr;
    __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr;
    __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr;
    __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr;
    __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q__v0 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q__v0 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q__v0 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q__v0 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q__v0 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q__v0 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q__v0 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q__v0 = 0U;
    if ((1U & (~ ((~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT____Vcellinp__qmem_instance__CEN)) 
                  & (~ (IData)(vlSelfRef.sparsity_tb__DOT__qmem_wr)))))) {
        if (((~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT____Vcellinp__qmem_instance__CEN)) 
             & (IData)(vlSelfRef.sparsity_tb__DOT__qmem_wr))) {
            __VdlyVal__sparsity_tb__DOT__dut__DOT__qmem_instance__DOT__memory__v0 
                = vlSelfRef.sparsity_tb__DOT__mem_in;
            __VdlyDim0__sparsity_tb__DOT__dut__DOT__qmem_instance__DOT__memory__v0 
                = vlSelfRef.sparsity_tb__DOT__qkmem_add;
            __VdlySet__sparsity_tb__DOT__dut__DOT__qmem_instance__DOT__memory__v0 = 1U;
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT____Vcellinp__kmem_instance__CEN)) 
                  & (~ (IData)(vlSelfRef.sparsity_tb__DOT__kmem_wr)))))) {
        if (((~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT____Vcellinp__kmem_instance__CEN)) 
             & (IData)(vlSelfRef.sparsity_tb__DOT__kmem_wr))) {
            __VdlyVal__sparsity_tb__DOT__dut__DOT__kmem_instance__DOT__memory__v0 
                = vlSelfRef.sparsity_tb__DOT__mem_in;
            __VdlyDim0__sparsity_tb__DOT__dut__DOT__kmem_instance__DOT__memory__v0 
                = vlSelfRef.sparsity_tb__DOT__qkmem_add;
            __VdlySet__sparsity_tb__DOT__dut__DOT__kmem_instance__DOT__memory__v0 = 1U;
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT____Vcellinp__psum_mem_instance__CEN)) 
                  & (~ (IData)(vlSelfRef.sparsity_tb__DOT__pmem_wr)))))) {
        if (((~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT____Vcellinp__psum_mem_instance__CEN)) 
             & (IData)(vlSelfRef.sparsity_tb__DOT__pmem_wr))) {
            __VdlyVal__sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory__v0[0U] 
                = vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_in[0U];
            __VdlyVal__sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory__v0[1U] 
                = vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_in[1U];
            __VdlyVal__sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory__v0[2U] 
                = vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_in[2U];
            __VdlyVal__sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory__v0[3U] 
                = vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_in[3U];
            __VdlyVal__sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory__v0[4U] 
                = vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_in[4U];
            __VdlyDim0__sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory__v0 
                = vlSelfRef.sparsity_tb__DOT__pmem_add;
            __VdlySet__sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory__v0 = 1U;
        }
    }
    if (vlSelfRef.sparsity_tb__DOT__rst_n) {
        if (((IData)(vlSelfRef.sparsity_tb__DOT__ofifo_rd) 
             & (~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__empty)))) {
            vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__rd_ptr 
                = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.sparsity_tb__DOT__ofifo_rd) 
             & (~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__empty)))) {
            vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__rd_ptr 
                = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.sparsity_tb__DOT__ofifo_rd) 
             & (~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__empty)))) {
            vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__rd_ptr 
                = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.sparsity_tb__DOT__ofifo_rd) 
             & (~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__empty)))) {
            vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__rd_ptr 
                = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.sparsity_tb__DOT__ofifo_rd) 
             & (~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__empty)))) {
            vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__rd_ptr 
                = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.sparsity_tb__DOT__ofifo_rd) 
             & (~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__empty)))) {
            vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__rd_ptr 
                = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.sparsity_tb__DOT__ofifo_rd) 
             & (~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__empty)))) {
            vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__rd_ptr 
                = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.sparsity_tb__DOT__ofifo_rd) 
             & (~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__empty)))) {
            vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__rd_ptr 
                = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__rd_ptr)));
        }
        if ((1U & ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__fifo_wr_gated) 
                   & (~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__full))))) {
            __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr 
                = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr)));
        }
        if ((1U & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__fifo_wr_gated))) {
            __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q__v0 
                = (0x000fffffU & vlSelfRef.sparsity_tb__DOT__dut__DOT__gated_array_out[0U]);
            __VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q__v0 
                = (0x0000003fU & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr));
            __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q__v0 = 1U;
        }
        if ((1U & (((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__fifo_wr_gated) 
                    >> 1U) & (~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__full))))) {
            __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr 
                = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr)));
        }
        if ((2U & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__fifo_wr_gated))) {
            __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q__v0 
                = (0x000fffffU & ((vlSelfRef.sparsity_tb__DOT__dut__DOT__gated_array_out[1U] 
                                   << 0x0000000cU) 
                                  | (vlSelfRef.sparsity_tb__DOT__dut__DOT__gated_array_out[0U] 
                                     >> 0x00000014U)));
            __VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q__v0 
                = (0x0000003fU & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr));
            __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q__v0 = 1U;
        }
        if ((1U & (((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__fifo_wr_gated) 
                    >> 2U) & (~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__full))))) {
            __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr 
                = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr)));
        }
        if ((4U & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__fifo_wr_gated))) {
            __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q__v0 
                = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__gated_array_out[1U] 
                                  >> 8U));
            __VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q__v0 
                = (0x0000003fU & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr));
            __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q__v0 = 1U;
        }
        if ((1U & (((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__fifo_wr_gated) 
                    >> 3U) & (~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__full))))) {
            __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr 
                = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr)));
        }
        if ((8U & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__fifo_wr_gated))) {
            __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q__v0 
                = (0x000fffffU & ((vlSelfRef.sparsity_tb__DOT__dut__DOT__gated_array_out[2U] 
                                   << 4U) | (vlSelfRef.sparsity_tb__DOT__dut__DOT__gated_array_out[1U] 
                                             >> 0x0000001cU)));
            __VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q__v0 
                = (0x0000003fU & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr));
            __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q__v0 = 1U;
        }
        if ((1U & (((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__fifo_wr_gated) 
                    >> 4U) & (~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__full))))) {
            __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr 
                = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr)));
        }
        if ((0x00000010U & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__fifo_wr_gated))) {
            __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q__v0 
                = (0x000fffffU & ((vlSelfRef.sparsity_tb__DOT__dut__DOT__gated_array_out[3U] 
                                   << 0x00000010U) 
                                  | (vlSelfRef.sparsity_tb__DOT__dut__DOT__gated_array_out[2U] 
                                     >> 0x00000010U)));
            __VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q__v0 
                = (0x0000003fU & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr));
            __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q__v0 = 1U;
        }
        if ((1U & (((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__fifo_wr_gated) 
                    >> 5U) & (~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__full))))) {
            __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr 
                = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr)));
        }
        if ((0x00000020U & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__fifo_wr_gated))) {
            __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q__v0 
                = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__gated_array_out[3U] 
                                  >> 4U));
            __VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q__v0 
                = (0x0000003fU & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr));
            __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q__v0 = 1U;
        }
        if ((1U & (((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__fifo_wr_gated) 
                    >> 6U) & (~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__full))))) {
            __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr 
                = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr)));
        }
        if ((0x00000040U & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__fifo_wr_gated))) {
            __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q__v0 
                = (0x000fffffU & ((vlSelfRef.sparsity_tb__DOT__dut__DOT__gated_array_out[4U] 
                                   << 8U) | (vlSelfRef.sparsity_tb__DOT__dut__DOT__gated_array_out[3U] 
                                             >> 0x00000018U)));
            __VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q__v0 
                = (0x0000003fU & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr));
            __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q__v0 = 1U;
        }
        if ((IData)((((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__fifo_wr_gated) 
                      >> 7U) & (~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__full))))) {
            __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr 
                = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr)));
        }
        if ((0x00000080U & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__fifo_wr_gated))) {
            __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q__v0 
                = (vlSelfRef.sparsity_tb__DOT__dut__DOT__gated_array_out[4U] 
                   >> 0x0000000cU);
            __VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q__v0 
                = (0x0000003fU & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr));
            __VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q__v0 = 1U;
        }
    } else {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__rd_ptr = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__rd_ptr = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__rd_ptr = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__rd_ptr = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__rd_ptr = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__rd_ptr = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__rd_ptr = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__rd_ptr = 0U;
        __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr = 0U;
        __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr = 0U;
        __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr = 0U;
        __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr = 0U;
        __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr = 0U;
        __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr = 0U;
        __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr = 0U;
        __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr = 0U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT____Vcellinp__qmem_instance__CEN)) 
               & (~ (IData)(vlSelfRef.sparsity_tb__DOT__qmem_wr))))) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__qmem_out 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__qmem_instance__DOT__memory
            [vlSelfRef.sparsity_tb__DOT__qkmem_add];
    }
    if ((1U & ((~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT____Vcellinp__kmem_instance__CEN)) 
               & (~ (IData)(vlSelfRef.sparsity_tb__DOT__kmem_wr))))) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__kmem_out 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__kmem_instance__DOT__memory
            [vlSelfRef.sparsity_tb__DOT__qkmem_add];
    }
    if ((1U & ((~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT____Vcellinp__psum_mem_instance__CEN)) 
               & (~ (IData)(vlSelfRef.sparsity_tb__DOT__pmem_wr))))) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_out[0U] 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory
            [vlSelfRef.sparsity_tb__DOT__pmem_add][0U];
        vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_out[1U] 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory
            [vlSelfRef.sparsity_tb__DOT__pmem_add][1U];
        vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_out[2U] 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory
            [vlSelfRef.sparsity_tb__DOT__pmem_add][2U];
        vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_out[3U] 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory
            [vlSelfRef.sparsity_tb__DOT__pmem_add][3U];
        vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_out[4U] 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory
            [vlSelfRef.sparsity_tb__DOT__pmem_add][4U];
    }
    vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr 
        = __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr;
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q[__VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q__v0] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q__v0;
    }
    vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr 
        = __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr;
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q[__VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q__v0] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q__v0;
    }
    vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr 
        = __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr;
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q[__VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q__v0] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q__v0;
    }
    vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr 
        = __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr;
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q[__VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q__v0] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q__v0;
    }
    vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr 
        = __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr;
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q[__VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q__v0] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q__v0;
    }
    vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr 
        = __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr;
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q[__VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q__v0] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q__v0;
    }
    vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr 
        = __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr;
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q[__VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q__v0] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q__v0;
    }
    vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr 
        = __Vdly__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr;
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q[__VdlyDim0__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q__v0] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q__v0;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__qmem_instance__DOT__memory__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__qmem_instance__DOT__memory[__VdlyDim0__sparsity_tb__DOT__dut__DOT__qmem_instance__DOT__memory__v0] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__qmem_instance__DOT__memory__v0;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__kmem_instance__DOT__memory__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__kmem_instance__DOT__memory[__VdlyDim0__sparsity_tb__DOT__dut__DOT__kmem_instance__DOT__memory__v0] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__kmem_instance__DOT__memory__v0;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory[__VdlyDim0__sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory__v0][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory__v0[0U];
        vlSelfRef.sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory[__VdlyDim0__sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory__v0][1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory__v0[1U];
        vlSelfRef.sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory[__VdlyDim0__sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory__v0][2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory__v0[2U];
        vlSelfRef.sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory[__VdlyDim0__sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory__v0][3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory__v0[3U];
        vlSelfRef.sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory[__VdlyDim0__sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory__v0][4U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory__v0[4U];
    }
    vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__empty 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr) 
           == (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__rd_ptr));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__full 
        = (((0x0000003fU & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr)) 
            == (0x0000003fU & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__rd_ptr))) 
           & ((1U & ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr) 
                     >> 6U)) != (1U & ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__rd_ptr) 
                                       >> 6U))));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__empty 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr) 
           == (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__rd_ptr));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__full 
        = (((0x0000003fU & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr)) 
            == (0x0000003fU & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__rd_ptr))) 
           & ((1U & ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr) 
                     >> 6U)) != (1U & ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__rd_ptr) 
                                       >> 6U))));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__empty 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr) 
           == (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__rd_ptr));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__full 
        = (((0x0000003fU & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr)) 
            == (0x0000003fU & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__rd_ptr))) 
           & ((1U & ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr) 
                     >> 6U)) != (1U & ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__rd_ptr) 
                                       >> 6U))));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__empty 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr) 
           == (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__rd_ptr));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__full 
        = (((0x0000003fU & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr)) 
            == (0x0000003fU & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__rd_ptr))) 
           & ((1U & ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr) 
                     >> 6U)) != (1U & ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__rd_ptr) 
                                       >> 6U))));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__empty 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr) 
           == (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__rd_ptr));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__full 
        = (((0x0000003fU & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr)) 
            == (0x0000003fU & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__rd_ptr))) 
           & ((1U & ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr) 
                     >> 6U)) != (1U & ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__rd_ptr) 
                                       >> 6U))));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__empty 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr) 
           == (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__rd_ptr));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__full 
        = (((0x0000003fU & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr)) 
            == (0x0000003fU & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__rd_ptr))) 
           & ((1U & ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr) 
                     >> 6U)) != (1U & ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__rd_ptr) 
                                       >> 6U))));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__empty 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr) 
           == (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__rd_ptr));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__full 
        = (((0x0000003fU & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr)) 
            == (0x0000003fU & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__rd_ptr))) 
           & ((1U & ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr) 
                     >> 6U)) != (1U & ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__rd_ptr) 
                                       >> 6U))));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__empty 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr) 
           == (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__rd_ptr));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__full 
        = (((0x0000003fU & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr)) 
            == (0x0000003fU & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__rd_ptr))) 
           & ((1U & ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr) 
                     >> 6U)) != (1U & ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__rd_ptr) 
                                       >> 6U))));
}

void Vsparsity_tb___024root___nba_sequent__TOP__1(Vsparsity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___nba_sequent__TOP__1\n"); );
    Vsparsity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q = 0;
    CData/*0:0*/ __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q = 0;
    CData/*3:0*/ __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q = 0;
    CData/*0:0*/ __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q = 0;
    CData/*3:0*/ __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q = 0;
    CData/*0:0*/ __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q = 0;
    CData/*3:0*/ __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q = 0;
    CData/*0:0*/ __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q = 0;
    CData/*3:0*/ __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q = 0;
    CData/*0:0*/ __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q = 0;
    CData/*3:0*/ __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q = 0;
    CData/*0:0*/ __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q = 0;
    CData/*3:0*/ __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q = 0;
    CData/*0:0*/ __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q = 0;
    CData/*3:0*/ __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q = 0;
    CData/*0:0*/ __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q = 0;
    CData/*1:0*/ __Vdly__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt;
    __Vdly__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt = 0;
    CData/*1:0*/ __Vdly__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__state;
    __Vdly__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__state = 0;
    IData/*22:0*/ __Vdly__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_reg;
    __Vdly__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_reg = 0;
    CData/*3:0*/ __Vdly__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_step;
    __Vdly__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_step = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v5;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v5;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v5;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v5;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v5;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v5;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v5;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v5;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 = 0;
    IData/*19:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v0;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v0 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v0;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v0 = 0;
    IData/*22:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v0;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v0 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v1;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v1 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v1;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v1 = 0;
    IData/*22:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v1;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v1 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v2;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v2 = 0;
    IData/*22:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v2;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v2 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v3;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v3 = 0;
    IData/*22:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v3;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v3 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v4;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v4 = 0;
    IData/*22:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v4;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v4 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v5;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v5 = 0;
    IData/*22:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v5;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v5 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v6;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v6 = 0;
    IData/*22:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v6;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v6 = 0;
    CData/*0:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v7;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v7 = 0;
    IData/*22:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v7;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v7 = 0;
    IData/*22:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v0;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v0 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v0;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v0 = 0;
    IData/*22:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v1;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v1 = 0;
    CData/*1:0*/ __VdlyDim1__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v1;
    __VdlyDim1__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v1 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v1;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v1 = 0;
    IData/*22:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v2;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v2 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v2;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v2 = 0;
    IData/*22:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v3;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v3 = 0;
    CData/*1:0*/ __VdlyDim1__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v3;
    __VdlyDim1__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v3 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v3;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v3 = 0;
    IData/*22:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v4;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v4 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v4;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v4 = 0;
    IData/*22:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v5;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v5 = 0;
    CData/*1:0*/ __VdlyDim1__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v5;
    __VdlyDim1__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v5 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v5;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v5 = 0;
    IData/*22:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v6;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v6 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v6;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v6 = 0;
    IData/*22:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v7;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v7 = 0;
    CData/*1:0*/ __VdlyDim1__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v7;
    __VdlyDim1__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v7 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v7;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v7 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v0;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v0 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v1;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v1 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v8;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v8 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v9;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v9 = 0;
    IData/*23:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v0;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v0 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v0;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v0 = 0;
    IData/*23:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v1;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v1 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v1;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v1 = 0;
    IData/*23:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v2;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v2 = 0;
    IData/*23:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v3;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v3 = 0;
    IData/*23:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v4;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v4 = 0;
    IData/*23:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v5;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v5 = 0;
    IData/*23:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v6;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v6 = 0;
    IData/*23:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v7;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v7 = 0;
    SData/*9:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v24;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v24 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v24;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v24 = 0;
    IData/*23:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v8;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v8 = 0;
    SData/*9:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v25;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v25 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v25;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v25 = 0;
    IData/*23:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v9;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v9 = 0;
    SData/*9:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v26;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v26 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v26;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v26 = 0;
    IData/*23:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v10;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v10 = 0;
    SData/*9:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v27;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v27 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v27;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v27 = 0;
    IData/*23:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v11;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v11 = 0;
    SData/*9:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v28;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v28 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v28;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v28 = 0;
    IData/*23:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v12;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v12 = 0;
    SData/*9:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v29;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v29 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v29;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v29 = 0;
    IData/*23:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v13;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v13 = 0;
    SData/*9:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v30;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v30 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v30;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v30 = 0;
    IData/*23:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v14;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v14 = 0;
    SData/*9:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v31;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v31 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v31;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v31 = 0;
    IData/*23:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v15;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v15 = 0;
    SData/*9:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v32;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v32 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v32;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v32 = 0;
    IData/*23:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v16;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v16 = 0;
    SData/*9:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v33;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v33 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v33;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v33 = 0;
    IData/*23:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v17;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v17 = 0;
    SData/*9:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v34;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v34 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v34;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v34 = 0;
    IData/*23:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v18;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v18 = 0;
    SData/*9:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v35;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v35 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v35;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v35 = 0;
    IData/*23:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v19;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v19 = 0;
    SData/*9:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v36;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v36 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v36;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v36 = 0;
    IData/*23:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v20;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v20 = 0;
    SData/*9:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v37;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v37 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v37;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v37 = 0;
    IData/*23:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v21;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v21 = 0;
    SData/*9:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v38;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v38 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v38;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v38 = 0;
    IData/*23:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v22;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v22 = 0;
    SData/*9:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v39;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v39 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v39;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v39 = 0;
    IData/*23:0*/ __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v23;
    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v23 = 0;
    CData/*0:0*/ __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v8;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v8 = 0;
    VlWide<5>/*159:0*/ __Vtemp_3;
    // Body
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0U;
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0U;
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0U;
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0U;
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0U;
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0U;
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0U;
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0U;
    __Vdly__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt;
    __Vdly__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__state 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__state;
    __Vdly__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_reg 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_reg;
    __Vdly__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_step 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_step;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v0 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v1 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v2 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v3 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v4 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v5 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v6 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v7 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v0 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v1 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v0 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v1 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v8 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v9 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v24 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v25 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v26 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v27 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v28 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v29 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v30 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v31 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v32 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v33 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v34 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v35 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v36 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v37 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v38 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v39 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v0 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v1 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v8 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0U;
    __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0U;
    __Vtemp_3[2U] = (((IData)((((QData)((IData)(((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_5)
                                                  ? 0U
                                                  : 
                                                 vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                 [3U]
                                                 [0U]))) 
                                << 0x00000014U) | (QData)((IData)(
                                                                  ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_4)
                                                                    ? 0U
                                                                    : 
                                                                   vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                   [3U]
                                                                   [0U]))))) 
                      << 0x00000010U) | (((IData)((
                                                   ((QData)((IData)(
                                                                    ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_3)
                                                                      ? 0U
                                                                      : 
                                                                     vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                     [3U]
                                                                     [0U]))) 
                                                    << 0x00000014U) 
                                                   | (QData)((IData)(
                                                                     ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_2)
                                                                       ? 0U
                                                                       : 
                                                                      vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                      [3U]
                                                                      [0U]))))) 
                                          >> 0x00000018U) 
                                         | ((IData)(
                                                    ((((QData)((IData)(
                                                                       ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_3)
                                                                         ? 0U
                                                                         : 
                                                                        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                        [3U]
                                                                        [0U]))) 
                                                       << 0x00000014U) 
                                                      | (QData)((IData)(
                                                                        ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_2)
                                                                          ? 0U
                                                                          : 
                                                                         vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                         [3U]
                                                                         [0U])))) 
                                                     >> 0x00000020U)) 
                                            << 8U)));
    __Vtemp_3[3U] = (((IData)((((QData)((IData)(((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_5)
                                                  ? 0U
                                                  : 
                                                 vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                 [3U]
                                                 [0U]))) 
                                << 0x00000014U) | (QData)((IData)(
                                                                  ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_4)
                                                                    ? 0U
                                                                    : 
                                                                   vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                   [3U]
                                                                   [0U]))))) 
                      >> 0x00000010U) | (((IData)((
                                                   ((QData)((IData)(
                                                                    ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_7)
                                                                      ? 0U
                                                                      : 
                                                                     vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                     [3U]
                                                                     [0U]))) 
                                                    << 0x00000014U) 
                                                   | (QData)((IData)(
                                                                     ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_6)
                                                                       ? 0U
                                                                       : 
                                                                      vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                      [3U]
                                                                      [0U]))))) 
                                          << 0x00000018U) 
                                         | ((IData)(
                                                    ((((QData)((IData)(
                                                                       ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_5)
                                                                         ? 0U
                                                                         : 
                                                                        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                        [3U]
                                                                        [0U]))) 
                                                       << 0x00000014U) 
                                                      | (QData)((IData)(
                                                                        ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_4)
                                                                          ? 0U
                                                                          : 
                                                                         vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                         [3U]
                                                                         [0U])))) 
                                                     >> 0x00000020U)) 
                                            << 0x00000010U)));
    __Vtemp_3[4U] = (((0x0000ffffU & ((IData)((((QData)((IData)(
                                                                ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_7)
                                                                  ? 0U
                                                                  : 
                                                                 vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                 [3U]
                                                                 [0U]))) 
                                                << 0x00000014U) 
                                               | (QData)((IData)(
                                                                 ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_6)
                                                                   ? 0U
                                                                   : 
                                                                  vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                  [3U]
                                                                  [0U]))))) 
                                      >> 8U)) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_5)
                                                                              ? 0U
                                                                              : 
                                                                             vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                             [3U]
                                                                             [0U]))) 
                                                            << 0x00000014U) 
                                                           | (QData)((IData)(
                                                                             ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_4)
                                                                               ? 0U
                                                                               : 
                                                                              vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                              [3U]
                                                                              [0U])))) 
                                                          >> 0x00000020U)) 
                                                 >> 0x00000010U)) 
                     | ((0x00ff0000U & ((IData)((((QData)((IData)(
                                                                  ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_7)
                                                                    ? 0U
                                                                    : 
                                                                   vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                   [3U]
                                                                   [0U]))) 
                                                  << 0x00000014U) 
                                                 | (QData)((IData)(
                                                                   ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_6)
                                                                     ? 0U
                                                                     : 
                                                                    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                    [3U]
                                                                    [0U]))))) 
                                        >> 8U)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_7)
                                                                                ? 0U
                                                                                : 
                                                                               vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                               [3U]
                                                                               [0U]))) 
                                                              << 0x00000014U) 
                                                             | (QData)((IData)(
                                                                               ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_6)
                                                                                 ? 0U
                                                                                 : 
                                                                                vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                                [3U]
                                                                                [0U])))) 
                                                            >> 0x00000020U)) 
                                                   << 0x00000018U)));
    if (vlSelfRef.sparsity_tb__DOT__rst_n) {
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q)))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q))))));
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 1U;
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 8U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 8U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x10U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x10U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x18U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x18U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x20U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x20U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x28U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x28U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x30U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x30U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x38U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x38U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][0U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][1U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][2U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][3U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][4U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][5U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][6U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][7U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][0U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][1U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][2U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][3U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][0U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][1U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q)))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q))))));
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 1U;
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 8U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 8U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x10U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x10U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x18U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x18U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x20U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x20U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x28U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x28U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x30U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x30U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x38U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x38U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][0U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][1U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][2U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][3U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][4U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][5U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][6U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][7U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][0U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][1U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][2U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][3U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][0U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][1U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q)))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q))))));
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 1U;
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 8U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 8U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x10U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x10U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x18U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x18U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x20U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x20U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x28U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x28U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x30U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x30U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x38U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x38U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][0U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][1U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][2U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][3U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][4U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][5U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][6U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][7U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][0U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][1U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][2U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][3U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][0U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][1U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q)))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q))))));
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 1U;
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 8U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 8U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x10U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x10U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x18U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x18U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x20U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x20U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x28U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x28U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x30U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x30U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x38U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x38U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][0U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][1U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][2U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][3U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][4U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][5U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][6U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][7U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][0U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][1U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][2U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][3U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][0U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][1U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q)))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q))))));
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 1U;
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 8U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 8U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x10U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x10U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x18U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x18U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x20U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x20U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x28U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x28U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x30U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x30U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x38U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x38U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][0U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][1U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][2U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][3U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][4U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][5U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][6U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][7U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][0U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][1U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][2U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][3U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][0U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][1U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q)))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q))))));
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 1U;
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 8U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 8U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x10U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x10U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x18U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x18U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x20U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x20U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x28U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x28U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x30U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x30U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x38U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x38U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][0U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][1U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][2U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][3U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][4U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][5U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][6U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][7U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][0U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][1U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][2U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][3U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][0U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][1U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q)))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q))))));
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 1U;
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 8U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 8U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x10U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x10U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x18U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x18U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x20U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x20U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x28U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x28U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x30U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x30U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x38U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x38U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][0U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][1U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][2U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][3U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][4U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][5U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][6U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][7U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][0U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][1U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][2U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][3U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][0U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][1U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q)))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q))))));
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 1U;
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 8U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 8U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x10U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x10U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x18U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x18U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x20U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x20U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x28U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x28U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x30U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x30U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x38U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x38U)))))));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][0U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][1U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][2U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][3U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][4U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][5U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][6U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][7U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][0U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][1U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][2U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][3U]));
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 
            = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][0U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][1U]));
        vlSelfRef.sparsity_tb__DOT__sfp_done = 0U;
        if ((0U == (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__state))) {
            if (vlSelfRef.sparsity_tb__DOT__sfp_start) {
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v0 
                    = (1U & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                             [0U] >> 0x13U));
                __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v0 = 1U;
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v0 
                    = ((0x00080000U & vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                        [0U]) ? (0x000fffffU & (- vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                                                [0U]))
                        : vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                       [0U]);
                __Vdly__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt = 0U;
                __Vdly__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__state = 1U;
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v1 
                    = (1U & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                             [1U] >> 0x13U));
                __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v1 = 1U;
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v1 
                    = ((0x00080000U & vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                        [1U]) ? (0x000fffffU & (- vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                                                [1U]))
                        : vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                       [1U]);
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v2 
                    = (1U & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                             [2U] >> 0x13U));
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v2 
                    = ((0x00080000U & vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                        [2U]) ? (0x000fffffU & (- vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                                                [2U]))
                        : vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                       [2U]);
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v3 
                    = (1U & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                             [3U] >> 0x13U));
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v3 
                    = ((0x00080000U & vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                        [3U]) ? (0x000fffffU & (- vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                                                [3U]))
                        : vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                       [3U]);
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v4 
                    = (1U & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                             [4U] >> 0x13U));
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v4 
                    = ((0x00080000U & vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                        [4U]) ? (0x000fffffU & (- vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                                                [4U]))
                        : vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                       [4U]);
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v5 
                    = (1U & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                             [5U] >> 0x13U));
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v5 
                    = ((0x00080000U & vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                        [5U]) ? (0x000fffffU & (- vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                                                [5U]))
                        : vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                       [5U]);
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v6 
                    = (1U & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                             [6U] >> 0x13U));
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v6 
                    = ((0x00080000U & vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                        [6U]) ? (0x000fffffU & (- vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                                                [6U]))
                        : vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                       [6U]);
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v7 
                    = (1U & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                             [7U] >> 0x13U));
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v7 
                    = ((0x00080000U & vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                        [7U]) ? (0x000fffffU & (- vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                                                [7U]))
                        : vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val
                       [7U]);
            }
        } else if ((1U == (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__state))) {
            if ((3U > (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt))) {
                if ((0U == (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt))) {
                    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v0 
                        = (0x007fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r
                                          [0U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r
                                          [1U]));
                    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v0 = 1U;
                    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v2 
                        = (0x007fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r
                                          [2U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r
                                          [3U]));
                    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v2 = 1U;
                    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v4 
                        = (0x007fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r
                                          [4U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r
                                          [5U]));
                    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v4 = 1U;
                    __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v6 
                        = (0x007fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r
                                          [6U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r
                                          [7U]));
                    __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v6 = 1U;
                } else {
                    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT____Vlvbound_h60f13c37__0 
                        = (0x007fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r
                                          [((2U >= 
                                             (3U & 
                                              ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                               - (IData)(1U))))
                                             ? (3U 
                                                & ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                                   - (IData)(1U)))
                                             : 0U)]
                                          [0U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r
                                          [((2U >= 
                                             (3U & 
                                              ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                               - (IData)(1U))))
                                             ? (3U 
                                                & ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                                   - (IData)(1U)))
                                             : 0U)]
                                          [1U]));
                    if ((2U >= (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt))) {
                        __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v1 
                            = vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT____Vlvbound_h60f13c37__0;
                        __VdlyDim1__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v1 
                            = vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt;
                        __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v1 = 1U;
                    }
                    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT____Vlvbound_h60f13c37__0 
                        = (0x007fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r
                                          [((2U >= 
                                             (3U & 
                                              ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                               - (IData)(1U))))
                                             ? (3U 
                                                & ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                                   - (IData)(1U)))
                                             : 0U)]
                                          [2U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r
                                          [((2U >= 
                                             (3U & 
                                              ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                               - (IData)(1U))))
                                             ? (3U 
                                                & ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                                   - (IData)(1U)))
                                             : 0U)]
                                          [3U]));
                    if ((2U >= (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt))) {
                        __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v3 
                            = vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT____Vlvbound_h60f13c37__0;
                        __VdlyDim1__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v3 
                            = vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt;
                        __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v3 = 1U;
                    }
                    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT____Vlvbound_h60f13c37__0 
                        = (0x007fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r
                                          [((2U >= 
                                             (3U & 
                                              ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                               - (IData)(1U))))
                                             ? (3U 
                                                & ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                                   - (IData)(1U)))
                                             : 0U)]
                                          [4U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r
                                          [((2U >= 
                                             (3U & 
                                              ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                               - (IData)(1U))))
                                             ? (3U 
                                                & ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                                   - (IData)(1U)))
                                             : 0U)]
                                          [5U]));
                    if ((2U >= (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt))) {
                        __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v5 
                            = vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT____Vlvbound_h60f13c37__0;
                        __VdlyDim1__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v5 
                            = vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt;
                        __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v5 = 1U;
                    }
                    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT____Vlvbound_h60f13c37__0 
                        = (0x007fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r
                                          [((2U >= 
                                             (3U & 
                                              ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                               - (IData)(1U))))
                                             ? (3U 
                                                & ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                                   - (IData)(1U)))
                                             : 0U)]
                                          [6U] + vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r
                                          [((2U >= 
                                             (3U & 
                                              ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                               - (IData)(1U))))
                                             ? (3U 
                                                & ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                                   - (IData)(1U)))
                                             : 0U)]
                                          [7U]));
                    if ((2U >= (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt))) {
                        __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v7 
                            = vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT____Vlvbound_h60f13c37__0;
                        __VdlyDim1__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v7 
                            = vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt;
                        __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v7 = 1U;
                    }
                }
                __Vdly__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt)));
            } else if (((IData)(vlSelfRef.sparsity_tb__DOT__enable_row_sparsity) 
                        & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r
                           [2U][0U] < vlSelfRef.sparsity_tb__DOT__threshold_row))) {
                __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v0 = 1U;
                vlSelfRef.sparsity_tb__DOT__sfp_done = 1U;
                __Vdly__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__state = 0U;
                __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v1 = 1U;
            } else if ((0U == vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r
                        [2U][0U])) {
                __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v8 = 1U;
                vlSelfRef.sparsity_tb__DOT__sfp_done = 1U;
                __Vdly__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__state = 0U;
                __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v9 = 1U;
            } else {
                __Vdly__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_reg 
                    = vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r
                    [2U][0U];
                __Vdly__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_step = 0U;
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v0 
                    = vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r
                    [0U];
                __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v0 = 1U;
                __Vdly__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__state = 2U;
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v1 
                    = vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r
                    [1U];
                __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v1 = 1U;
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v2 
                    = vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r
                    [2U];
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v3 
                    = vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r
                    [3U];
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v4 
                    = vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r
                    [4U];
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v5 
                    = vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r
                    [5U];
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v6 
                    = vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r
                    [6U];
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v7 
                    = vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r
                    [7U];
            }
        } else if ((2U == (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__state))) {
            if (((0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                              vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem
                                              [0U], 1U)) 
                 >= vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_reg)) {
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v24 
                    = (1U | (0x000003feU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                            [0U] << 1U)));
                __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v24 = 1U;
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v8 
                    = (0x00ffffffU & (VL_SHIFTL_III(24,24,32, 
                                                    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem
                                                    [0U], 1U) 
                                      - vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_reg));
            } else {
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v25 
                    = (0x000003feU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                      [0U] << 1U));
                __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v25 = 1U;
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v9 
                    = (0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                                   vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem
                                                   [0U], 1U));
            }
            if ((9U == (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_step))) {
                vlSelfRef.sparsity_tb__DOT__sfp_done = 1U;
                __Vdly__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__state = 0U;
            } else {
                __Vdly__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_step 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_step)));
            }
            if (((0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                              vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem
                                              [1U], 1U)) 
                 >= vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_reg)) {
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v26 
                    = (1U | (0x000003feU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                            [1U] << 1U)));
                __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v26 = 1U;
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v10 
                    = (0x00ffffffU & (VL_SHIFTL_III(24,24,32, 
                                                    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem
                                                    [1U], 1U) 
                                      - vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_reg));
            } else {
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v27 
                    = (0x000003feU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                      [1U] << 1U));
                __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v27 = 1U;
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v11 
                    = (0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                                   vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem
                                                   [1U], 1U));
            }
            if (((0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                              vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem
                                              [2U], 1U)) 
                 >= vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_reg)) {
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v28 
                    = (1U | (0x000003feU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                            [2U] << 1U)));
                __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v28 = 1U;
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v12 
                    = (0x00ffffffU & (VL_SHIFTL_III(24,24,32, 
                                                    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem
                                                    [2U], 1U) 
                                      - vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_reg));
            } else {
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v29 
                    = (0x000003feU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                      [2U] << 1U));
                __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v29 = 1U;
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v13 
                    = (0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                                   vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem
                                                   [2U], 1U));
            }
            if (((0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                              vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem
                                              [3U], 1U)) 
                 >= vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_reg)) {
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v30 
                    = (1U | (0x000003feU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                            [3U] << 1U)));
                __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v30 = 1U;
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v14 
                    = (0x00ffffffU & (VL_SHIFTL_III(24,24,32, 
                                                    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem
                                                    [3U], 1U) 
                                      - vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_reg));
            } else {
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v31 
                    = (0x000003feU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                      [3U] << 1U));
                __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v31 = 1U;
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v15 
                    = (0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                                   vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem
                                                   [3U], 1U));
            }
            if (((0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                              vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem
                                              [4U], 1U)) 
                 >= vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_reg)) {
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v32 
                    = (1U | (0x000003feU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                            [4U] << 1U)));
                __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v32 = 1U;
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v16 
                    = (0x00ffffffU & (VL_SHIFTL_III(24,24,32, 
                                                    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem
                                                    [4U], 1U) 
                                      - vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_reg));
            } else {
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v33 
                    = (0x000003feU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                      [4U] << 1U));
                __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v33 = 1U;
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v17 
                    = (0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                                   vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem
                                                   [4U], 1U));
            }
            if (((0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                              vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem
                                              [5U], 1U)) 
                 >= vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_reg)) {
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v34 
                    = (1U | (0x000003feU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                            [5U] << 1U)));
                __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v34 = 1U;
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v18 
                    = (0x00ffffffU & (VL_SHIFTL_III(24,24,32, 
                                                    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem
                                                    [5U], 1U) 
                                      - vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_reg));
            } else {
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v35 
                    = (0x000003feU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                      [5U] << 1U));
                __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v35 = 1U;
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v19 
                    = (0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                                   vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem
                                                   [5U], 1U));
            }
            if (((0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                              vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem
                                              [6U], 1U)) 
                 >= vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_reg)) {
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v36 
                    = (1U | (0x000003feU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                            [6U] << 1U)));
                __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v36 = 1U;
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v20 
                    = (0x00ffffffU & (VL_SHIFTL_III(24,24,32, 
                                                    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem
                                                    [6U], 1U) 
                                      - vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_reg));
            } else {
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v37 
                    = (0x000003feU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                      [6U] << 1U));
                __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v37 = 1U;
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v21 
                    = (0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                                   vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem
                                                   [6U], 1U));
            }
            if (((0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                              vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem
                                              [7U], 1U)) 
                 >= vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_reg)) {
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v38 
                    = (1U | (0x000003feU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                            [7U] << 1U)));
                __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v38 = 1U;
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v22 
                    = (0x00ffffffU & (VL_SHIFTL_III(24,24,32, 
                                                    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem
                                                    [7U], 1U) 
                                      - vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_reg));
            } else {
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v39 
                    = (0x000003feU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                      [7U] << 1U));
                __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v39 = 1U;
                __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v23 
                    = (0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                                   vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem
                                                   [7U], 1U));
            }
        } else {
            __Vdly__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__state = 0U;
        }
        vlSelfRef.sparsity_tb__DOT__dut__DOT__fifo_wr_gated 
            = (((((vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe
                   [4U] << 3U) | (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe
                                  [4U] << 2U)) | ((
                                                   vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe
                                                   [4U] 
                                                   << 1U) 
                                                  | vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe
                                                  [4U])) 
                << 4U) | (((vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe
                            [4U] << 3U) | (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe
                                           [4U] << 2U)) 
                          | ((vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe
                              [4U] << 1U) | vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe
                             [4U])));
        vlSelfRef.sparsity_tb__DOT__dut__DOT__gated_array_out[0U] 
            = (IData)((((QData)((IData)(((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_1)
                                          ? 0U : vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                         [3U][0U]))) 
                        << 0x00000014U) | (QData)((IData)(
                                                          ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_0)
                                                            ? 0U
                                                            : 
                                                           vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                           [3U]
                                                           [0U])))));
        vlSelfRef.sparsity_tb__DOT__dut__DOT__gated_array_out[1U] 
            = (((IData)((((QData)((IData)(((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_3)
                                            ? 0U : 
                                           vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                           [3U][0U]))) 
                          << 0x00000014U) | (QData)((IData)(
                                                            ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_2)
                                                              ? 0U
                                                              : 
                                                             vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                             [3U]
                                                             [0U]))))) 
                << 8U) | (IData)(((((QData)((IData)(
                                                    ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_1)
                                                      ? 0U
                                                      : 
                                                     vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                     [3U]
                                                     [0U]))) 
                                    << 0x00000014U) 
                                   | (QData)((IData)(
                                                     ((IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_0)
                                                       ? 0U
                                                       : 
                                                      vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                      [3U]
                                                      [0U])))) 
                                  >> 0x00000020U)));
        vlSelfRef.sparsity_tb__DOT__dut__DOT__gated_array_out[2U] 
            = __Vtemp_3[2U];
        vlSelfRef.sparsity_tb__DOT__dut__DOT__gated_array_out[3U] 
            = __Vtemp_3[3U];
        vlSelfRef.sparsity_tb__DOT__dut__DOT__gated_array_out[4U] 
            = __Vtemp_3[4U];
        if (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__en_q) {
            __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 
                = (1U & (~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__wr_k_q)));
            __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
            vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q 
                = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q;
            if (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__wr_k_q) {
                if ((1U == (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q))) {
                    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
                    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q 
                        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q;
                    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q = 0U;
                } else if (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q) {
                    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q)));
                }
            }
        } else {
            __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
            __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
        }
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe
            [0U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 1U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe
            [1U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 1U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe
            [2U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 1U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe
            [3U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 1U;
        if (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__en_q) {
            __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 
                = (1U & (~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__wr_k_q)));
            __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
            vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q 
                = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q;
            if (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__wr_k_q) {
                if ((2U == (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q))) {
                    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
                    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q 
                        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q;
                    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q = 0U;
                } else if (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q) {
                    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q)));
                }
            }
        } else {
            __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
            __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
        }
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe
            [0U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 1U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe
            [1U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 1U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe
            [2U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 1U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe
            [3U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 1U;
        if (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__en_q) {
            __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 
                = (1U & (~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__wr_k_q)));
            __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
            vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q 
                = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q;
            if (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__wr_k_q) {
                if ((3U == (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q))) {
                    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
                    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q 
                        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q;
                    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q = 0U;
                } else if (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q) {
                    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q)));
                }
            }
        } else {
            __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
            __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
        }
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe
            [0U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 1U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe
            [1U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 1U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe
            [2U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 1U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe
            [3U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 1U;
        if (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__en_q) {
            __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 
                = (1U & (~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__wr_k_q)));
            __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
            vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q 
                = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q;
            if (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__wr_k_q) {
                if ((4U == (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q))) {
                    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
                    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q 
                        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q;
                    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q = 0U;
                } else if (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q) {
                    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q)));
                }
            }
        } else {
            __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
            __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
        }
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe
            [0U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 1U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe
            [1U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 1U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe
            [2U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 1U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe
            [3U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 1U;
        if (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__en_q) {
            __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 
                = (1U & (~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__wr_k_q)));
            __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
            vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q 
                = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q;
            if (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__wr_k_q) {
                if ((5U == (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q))) {
                    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
                    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q 
                        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q;
                    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q = 0U;
                } else if (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q) {
                    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q)));
                }
            }
        } else {
            __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
            __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
        }
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe
            [0U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 1U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe
            [1U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 1U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe
            [2U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 1U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe
            [3U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 1U;
        if (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__en_q) {
            __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 
                = (1U & (~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__wr_k_q)));
            __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
            vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q 
                = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q;
            if (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__wr_k_q) {
                if ((6U == (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q))) {
                    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
                    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q 
                        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q;
                    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q = 0U;
                } else if (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q) {
                    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q)));
                }
            }
        } else {
            __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
            __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
        }
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe
            [0U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 1U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe
            [1U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 1U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe
            [2U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 1U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe
            [3U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 1U;
        if (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__en_q) {
            __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 
                = (1U & (~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__wr_k_q)));
            __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
            vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q 
                = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q;
            if (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__wr_k_q) {
                if ((7U == (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q))) {
                    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
                    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q 
                        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q;
                    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q = 0U;
                } else if (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q) {
                    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q)));
                }
            }
        } else {
            __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
            __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
        }
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe
            [0U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 1U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe
            [1U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 1U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe
            [2U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 1U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe
            [3U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 1U;
        if (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__en_q) {
            __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 
                = (1U & (~ (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__wr_k_q)));
            __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
            vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q 
                = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__q_chain
                [0U];
            if (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__wr_k_q) {
                if ((8U == (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q))) {
                    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
                    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q 
                        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__q_chain
                        [0U];
                    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q = 0U;
                } else if (vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q) {
                    __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q)));
                }
            }
        } else {
            __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
            __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
        }
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe
            [0U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 1U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe
            [1U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 1U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe
            [2U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 1U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe
            [3U];
        __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 
            = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 1U;
    } else {
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 1U;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 1U;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 1U;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 1U;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 1U;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 1U;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 1U;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 1U;
        __Vdly__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__state = 0U;
        vlSelfRef.sparsity_tb__DOT__sfp_done = 0U;
        __Vdly__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt = 0U;
        __Vdly__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_step = 0U;
        __Vdly__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_reg = 0U;
        __VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v8 = 1U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__fifo_wr_gated = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__gated_array_out[0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__gated_array_out[1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__gated_array_out[2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__gated_array_out[3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__gated_array_out[4U] = 0U;
        __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
        __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q = 1U;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 1U;
        __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
        __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q = 1U;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 1U;
        __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
        __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q = 1U;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 1U;
        __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
        __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q = 1U;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 1U;
        __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
        __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q = 1U;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 1U;
        __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
        __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q = 1U;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 1U;
        __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
        __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q = 1U;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 1U;
        __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
        __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q = 1U;
        __VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 1U;
    }
    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt 
        = __Vdly__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__state 
        = __Vdly__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__state;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_reg 
        = __Vdly__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_reg;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_step 
        = __Vdly__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_step;
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r[0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v0;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r[0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v0;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v1) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r[1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v1;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r[2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v2;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r[3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v3;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r[4U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v4;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r[5U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v5;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r[6U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v6;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r[7U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v7;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r[1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v1;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r[2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v2;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r[3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v3;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r[4U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v4;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r[5U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v5;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r[6U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v6;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r[7U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r__v7;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[0U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v0;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v1) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[__VdlyDim1__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v1][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v1;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v2) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[0U][1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v2;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v3) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[__VdlyDim1__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v3][1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v3;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v4) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[0U][2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v4;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v5) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[__VdlyDim1__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v5][2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v5;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v6) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[0U][3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v6;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v7) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[__VdlyDim1__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v7][3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r__v7;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v0;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v1) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v1;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v2;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v3;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[4U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v4;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[5U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v5;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[6U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v6;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[7U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v7;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v24) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v8;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v25) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v9;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v26) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v10;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v27) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v11;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v28) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v12;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v29) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v13;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v30) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v14;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v31) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v15;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v32) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[4U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v16;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v33) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[4U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v17;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v34) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[5U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v18;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v35) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[5U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v19;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v36) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[6U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v20;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v37) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[6U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v21;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v38) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[7U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v22;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v39) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[7U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v23;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[0U] = 0U;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v1) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[7U] = 0U;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v8) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[0U] = 0U;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v9) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[7U] = 0U;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[0U] = 0U;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem__v1) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[7U] = 0U;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v24) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v24;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v25) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v25;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v26) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v26;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v27) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v27;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v28) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v28;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v29) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v29;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v30) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v30;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v31) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v31;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v32) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[4U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v32;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v33) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[4U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v33;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v34) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[5U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v34;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v35) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[5U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v35;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v36) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[6U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v36;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v37) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[6U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v37;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v38) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[7U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v38;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v39) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[7U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot__v39;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r__v8) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r[0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r[1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r[2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r[3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r[4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r[5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r[6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r[7U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[0U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[1U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[2U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[0U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[1U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[2U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[0U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[1U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[2U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[0U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[1U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[2U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[0U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[1U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[2U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[0U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[1U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[2U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[0U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[1U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[2U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[0U][7U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[1U][7U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[2U][7U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[7U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r[0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r[1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r[2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r[3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r[4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r[5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r[6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r[7U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[7U] = 0U;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][7U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][7U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][7U] = 0U;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][7U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][7U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][7U] = 0U;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][7U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][7U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][7U] = 0U;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][7U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][7U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][7U] = 0U;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][7U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][7U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][7U] = 0U;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][7U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][7U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][7U] = 0U;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][7U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][7U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][7U] = 0U;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][7U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][7U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][4U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][5U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][6U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][7U] = 0U;
    }
    vlSelfRef.__VdfgRegularize_h4af1c392_0_0 = (0x000003ffU 
                                                & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r
                                                   [7U]
                                                    ? 
                                                   (- 
                                                    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                                    [7U])
                                                    : 
                                                   vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                                   [7U]));
    vlSelfRef.__VdfgRegularize_h4af1c392_0_1 = (0x000003ffU 
                                                & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r
                                                   [6U]
                                                    ? 
                                                   (- 
                                                    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                                    [6U])
                                                    : 
                                                   vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                                   [6U]));
    vlSelfRef.__VdfgRegularize_h4af1c392_0_2 = (0x000003ffU 
                                                & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r
                                                   [5U]
                                                    ? 
                                                   (- 
                                                    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                                    [5U])
                                                    : 
                                                   vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                                   [5U]));
    vlSelfRef.__VdfgRegularize_h4af1c392_0_3 = (0x000003ffU 
                                                & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r
                                                   [4U]
                                                    ? 
                                                   (- 
                                                    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                                    [4U])
                                                    : 
                                                   vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                                   [4U]));
    vlSelfRef.__VdfgRegularize_h4af1c392_0_4 = (0x000003ffU 
                                                & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r
                                                   [3U]
                                                    ? 
                                                   (- 
                                                    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                                    [3U])
                                                    : 
                                                   vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                                   [3U]));
    vlSelfRef.__VdfgRegularize_h4af1c392_0_5 = (0x000003ffU 
                                                & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r
                                                   [2U]
                                                    ? 
                                                   (- 
                                                    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                                    [2U])
                                                    : 
                                                   vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                                   [2U]));
    vlSelfRef.__VdfgRegularize_h4af1c392_0_6 = (0x000003ffU 
                                                & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r
                                                   [1U]
                                                    ? 
                                                   (- 
                                                    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                                    [1U])
                                                    : 
                                                   vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                                   [1U]));
    vlSelfRef.__VdfgRegularize_h4af1c392_0_7 = (0x000003ffU 
                                                & (vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r
                                                   [0U]
                                                    ? 
                                                   (- 
                                                    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                                    [0U])
                                                    : 
                                                   vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot
                                                   [0U]));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q 
        = __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q;
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v1) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v2) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v3) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v4) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v5) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] = 0U;
    }
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__wr_k_q 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__wr_k_q));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__en_q 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__en_q));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q 
        = __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q;
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v1) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v2) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v3) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v4) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v5) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] = 0U;
    }
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__wr_k_q 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__wr_k_q));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__en_q 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__en_q));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q 
        = __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q;
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v1) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v2) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v3) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v4) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v5) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] = 0U;
    }
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__wr_k_q 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__wr_k_q));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__en_q 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__en_q));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q 
        = __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q;
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v1) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v2) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v3) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v4) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v5) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] = 0U;
    }
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__wr_k_q 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__wr_k_q));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__en_q 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__en_q));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q 
        = __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q;
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v1) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v2) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v3) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v4) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v5) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] = 0U;
    }
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__wr_k_q 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__wr_k_q));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__en_q 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__en_q));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q 
        = __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q;
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v1) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v2) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v3) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v4) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v5) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] = 0U;
    }
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__wr_k_q 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__wr_k_q));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__en_q 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__en_q));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q 
        = __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q;
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v1) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v2) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v3) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v4) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v5) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] = 0U;
    }
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__wr_k_q 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__wr_k_q));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__en_q 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__en_q));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q 
        = __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = __Vdly__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q;
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v1) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v2) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v3) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v4) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] 
            = __VdlyVal__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    }
    if (__VdlySet__sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v5) {
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] = 0U;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] = 0U;
    }
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__q_chain[2U] 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__q_chain[3U] 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__q_chain[4U] 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__q_chain[5U] 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__q_chain[6U] 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__q_chain[7U] 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__q_chain[8U] 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__q_chain[1U] 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__wr_k_q 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__rst_n) 
           && vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__wr_k_chain
           [0U]);
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__en_q 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__rst_n) 
           && vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__en_chain
           [0U]);
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__wr_k_chain[2U] 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__wr_k_q;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__wr_k_chain[3U] 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__wr_k_q;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__wr_k_chain[4U] 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__wr_k_q;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__wr_k_chain[5U] 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__wr_k_q;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__wr_k_chain[6U] 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__wr_k_q;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__wr_k_chain[7U] 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__wr_k_q;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__wr_k_chain[8U] 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__wr_k_q;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__en_chain[2U] 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__en_q;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__en_chain[3U] 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__en_q;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__en_chain[4U] 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__en_q;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__en_chain[5U] 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__en_q;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__en_chain[6U] 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__en_q;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__en_chain[7U] 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__en_q;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__en_chain[8U] 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__en_q;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__wr_k_chain[1U] 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__wr_k_q;
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__en_chain[1U] 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__en_q;
}
