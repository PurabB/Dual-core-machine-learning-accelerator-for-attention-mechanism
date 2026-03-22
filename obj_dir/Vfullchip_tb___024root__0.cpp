// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfullchip_tb.h for the primary calling header

#include "Vfullchip_tb__pch.h"

VlCoroutine Vfullchip_tb___024root___eval_initial__TOP__Vtiming__0(Vfullchip_tb___024root* vlSelf);

void Vfullchip_tb___024root___eval_initial(Vfullchip_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___eval_initial\n"); );
    Vfullchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfullchip_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine Vfullchip_tb___024root___eval_initial__TOP__Vtiming__0(Vfullchip_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vfullchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ fullchip_tb__DOT__qk_file;
    fullchip_tb__DOT__qk_file = 0;
    IData/*31:0*/ fullchip_tb__DOT__qk_scan_file;
    fullchip_tb__DOT__qk_scan_file = 0;
    IData/*31:0*/ fullchip_tb__DOT__q;
    fullchip_tb__DOT__q = 0;
    IData/*19:0*/ fullchip_tb__DOT__temp5b;
    fullchip_tb__DOT__temp5b = 0;
    IData/*31:0*/ fullchip_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    fullchip_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ fullchip_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    fullchip_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ fullchip_tb__DOT__unnamedblk1_3__DOT____Vrepeat2;
    fullchip_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ fullchip_tb__DOT__unnamedblk1_4__DOT____Vrepeat3;
    fullchip_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ fullchip_tb__DOT__unnamedblk1_5__DOT____Vrepeat4;
    fullchip_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    IData/*31:0*/ fullchip_tb__DOT__unnamedblk1_6__DOT____Vrepeat5;
    fullchip_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    VlWide<5>/*159:0*/ __Vtemp_9;
    VlWide<5>/*159:0*/ __Vtemp_21;
    VlWide<5>/*159:0*/ __Vtemp_33;
    VlWide<5>/*159:0*/ __Vtemp_45;
    VlWide<5>/*159:0*/ __Vtemp_57;
    VlWide<5>/*159:0*/ __Vtemp_69;
    VlWide<5>/*159:0*/ __Vtemp_81;
    VlWide<5>/*159:0*/ __Vtemp_93;
    VlWide<5>/*159:0*/ __Vtemp_105;
    VlWide<5>/*159:0*/ __Vtemp_117;
    VlWide<5>/*159:0*/ __Vtemp_129;
    VlWide<5>/*159:0*/ __Vtemp_141;
    VlWide<5>/*159:0*/ __Vtemp_153;
    VlWide<5>/*159:0*/ __Vtemp_165;
    VlWide<5>/*159:0*/ __Vtemp_177;
    VlWide<5>/*159:0*/ __Vtemp_189;
    VlWide<5>/*159:0*/ __Vtemp_201;
    VlWide<5>/*159:0*/ __Vtemp_213;
    VlWide<5>/*159:0*/ __Vtemp_225;
    VlWide<5>/*159:0*/ __Vtemp_237;
    VlWide<5>/*159:0*/ __Vtemp_249;
    VlWide<5>/*159:0*/ __Vtemp_261;
    VlWide<5>/*159:0*/ __Vtemp_273;
    VlWide<5>/*159:0*/ __Vtemp_285;
    VlWide<5>/*159:0*/ __Vtemp_297;
    VlWide<5>/*159:0*/ __Vtemp_309;
    VlWide<5>/*159:0*/ __Vtemp_321;
    VlWide<5>/*159:0*/ __Vtemp_333;
    VlWide<5>/*159:0*/ __Vtemp_345;
    VlWide<5>/*159:0*/ __Vtemp_357;
    VlWide<5>/*159:0*/ __Vtemp_369;
    VlWide<5>/*159:0*/ __Vtemp_381;
    VlWide<5>/*159:0*/ __Vtemp_393;
    VlWide<5>/*159:0*/ __Vtemp_405;
    VlWide<5>/*159:0*/ __Vtemp_417;
    VlWide<5>/*159:0*/ __Vtemp_429;
    VlWide<5>/*159:0*/ __Vtemp_441;
    VlWide<5>/*159:0*/ __Vtemp_453;
    VlWide<5>/*159:0*/ __Vtemp_465;
    VlWide<5>/*159:0*/ __Vtemp_477;
    VlWide<5>/*159:0*/ __Vtemp_489;
    VlWide<5>/*159:0*/ __Vtemp_501;
    VlWide<5>/*159:0*/ __Vtemp_513;
    VlWide<5>/*159:0*/ __Vtemp_525;
    VlWide<5>/*159:0*/ __Vtemp_537;
    VlWide<5>/*159:0*/ __Vtemp_549;
    VlWide<5>/*159:0*/ __Vtemp_561;
    VlWide<5>/*159:0*/ __Vtemp_573;
    VlWide<5>/*159:0*/ __Vtemp_585;
    VlWide<5>/*159:0*/ __Vtemp_597;
    VlWide<5>/*159:0*/ __Vtemp_609;
    VlWide<5>/*159:0*/ __Vtemp_621;
    VlWide<5>/*159:0*/ __Vtemp_633;
    VlWide<5>/*159:0*/ __Vtemp_645;
    VlWide<5>/*159:0*/ __Vtemp_657;
    VlWide<5>/*159:0*/ __Vtemp_669;
    VlWide<5>/*159:0*/ __Vtemp_681;
    VlWide<5>/*159:0*/ __Vtemp_693;
    VlWide<5>/*159:0*/ __Vtemp_705;
    VlWide<5>/*159:0*/ __Vtemp_717;
    VlWide<5>/*159:0*/ __Vtemp_729;
    VlWide<5>/*159:0*/ __Vtemp_741;
    VlWide<5>/*159:0*/ __Vtemp_753;
    VlWide<5>/*159:0*/ __Vtemp_765;
    // Body
    vlSymsp->_vm_contextp__->dumpfile("fullchip_tb.vcd"s);
    VL_PRINTF_MT("-Info: verilog/fullchip_tb.sv:69: $dumpvar ignored, as Verilated without --trace\n");
    VL_WRITEF_NX("##### Q data reading #####\n",0);
    fullchip_tb__DOT__qk_file = VL_FOPEN_NN("qdata.txt"s
                                            , "r"s);
    ;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[0U][0U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[0U][1U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[0U][2U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[0U][3U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[0U][4U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[0U][5U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[0U][6U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[0U][7U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[1U][0U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[1U][1U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[1U][2U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[1U][3U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[1U][4U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[1U][5U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[1U][6U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[1U][7U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[2U][0U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[2U][1U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[2U][2U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[2U][3U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[2U][4U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[2U][5U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[2U][6U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[2U][7U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[3U][0U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[3U][1U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[3U][2U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[3U][3U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[3U][4U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[3U][5U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[3U][6U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[3U][7U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[4U][0U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[4U][1U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[4U][2U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[4U][3U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[4U][4U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[4U][5U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[4U][6U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[4U][7U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[5U][0U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[5U][1U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[5U][2U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[5U][3U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[5U][4U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[5U][5U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[5U][6U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[5U][7U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[6U][0U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[6U][1U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[6U][2U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[6U][3U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[6U][4U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[6U][5U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[6U][6U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[6U][7U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[7U][0U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[7U][1U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[7U][2U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[7U][3U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[7U][4U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[7U][5U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[7U][6U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__Q[7U][7U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    VL_FCLOSE_I(fullchip_tb__DOT__qk_file); VL_WRITEF_NX("##### K data reading #####\n",0);
    fullchip_tb__DOT__qk_file = VL_FOPEN_NN("kdata.txt"s
                                            , "r"s);
    ;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[0U][0U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[0U][1U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[0U][2U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[0U][3U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[0U][4U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[0U][5U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[0U][6U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[0U][7U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[1U][0U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[1U][1U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[1U][2U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[1U][3U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[1U][4U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[1U][5U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[1U][6U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[1U][7U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[2U][0U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[2U][1U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[2U][2U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[2U][3U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[2U][4U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[2U][5U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[2U][6U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[2U][7U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[3U][0U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[3U][1U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[3U][2U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[3U][3U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[3U][4U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[3U][5U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[3U][6U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[3U][7U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[4U][0U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[4U][1U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[4U][2U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[4U][3U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[4U][4U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[4U][5U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[4U][6U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[4U][7U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[5U][0U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[5U][1U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[5U][2U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[5U][3U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[5U][4U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[5U][5U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[5U][6U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[5U][7U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[6U][0U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[6U][1U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[6U][2U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[6U][3U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[6U][4U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[6U][5U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[6U][6U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[6U][7U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[7U][0U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[7U][1U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[7U][2U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[7U][3U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[7U][4U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[7U][5U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[7U][6U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    fullchip_tb__DOT__qk_scan_file = VL_FSCANF_INX(fullchip_tb__DOT__qk_file,"%#",0,
                                                   32,
                                                   &(vlSelfRef.fullchip_tb__DOT__captured_data)) ;
    vlSelfRef.fullchip_tb__DOT__K[7U][7U] = vlSelfRef.fullchip_tb__DOT__captured_data;
    VL_FCLOSE_I(fullchip_tb__DOT__qk_file); VL_WRITEF_NX("##### Expected multiplication result #####\n",0);
    vlSelfRef.fullchip_tb__DOT__result[0U][0U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[0U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [0U][0U]);
    __Vtemp_9[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                      >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                         << 0x00000014U));
    __Vtemp_9[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                      >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                         << 0x00000014U));
    __Vtemp_9[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                      >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                         << 0x00000014U));
    __Vtemp_9[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                      >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                         << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_9[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_9[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_9[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_9[4U];
    vlSelfRef.fullchip_tb__DOT__result[0U][1U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[0U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [0U][1U]);
    __Vtemp_21[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                       >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                          << 0x00000014U));
    __Vtemp_21[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                       >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                          << 0x00000014U));
    __Vtemp_21[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                       >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                          << 0x00000014U));
    __Vtemp_21[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                       >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                          << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_21[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_21[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_21[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_21[4U];
    vlSelfRef.fullchip_tb__DOT__result[0U][2U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[0U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [0U][2U]);
    __Vtemp_33[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                       >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                          << 0x00000014U));
    __Vtemp_33[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                       >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                          << 0x00000014U));
    __Vtemp_33[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                       >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                          << 0x00000014U));
    __Vtemp_33[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                       >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                          << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_33[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_33[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_33[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_33[4U];
    vlSelfRef.fullchip_tb__DOT__result[0U][3U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[0U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [0U][3U]);
    __Vtemp_45[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                       >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                          << 0x00000014U));
    __Vtemp_45[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                       >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                          << 0x00000014U));
    __Vtemp_45[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                       >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                          << 0x00000014U));
    __Vtemp_45[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                       >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                          << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_45[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_45[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_45[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_45[4U];
    vlSelfRef.fullchip_tb__DOT__result[0U][4U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[0U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [0U][4U]);
    __Vtemp_57[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                       >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                          << 0x00000014U));
    __Vtemp_57[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                       >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                          << 0x00000014U));
    __Vtemp_57[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                       >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                          << 0x00000014U));
    __Vtemp_57[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                       >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                          << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_57[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_57[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_57[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_57[4U];
    vlSelfRef.fullchip_tb__DOT__result[0U][5U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[0U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [0U][5U]);
    __Vtemp_69[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                       >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                          << 0x00000014U));
    __Vtemp_69[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                       >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                          << 0x00000014U));
    __Vtemp_69[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                       >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                          << 0x00000014U));
    __Vtemp_69[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                       >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                          << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_69[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_69[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_69[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_69[4U];
    vlSelfRef.fullchip_tb__DOT__result[0U][6U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[0U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [0U][6U]);
    __Vtemp_81[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                       >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                          << 0x00000014U));
    __Vtemp_81[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                       >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                          << 0x00000014U));
    __Vtemp_81[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                       >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                          << 0x00000014U));
    __Vtemp_81[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                       >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                          << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_81[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_81[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_81[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_81[4U];
    vlSelfRef.fullchip_tb__DOT__result[0U][7U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[0U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[0U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [0U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [0U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [0U][7U]);
    __Vtemp_93[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                       >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                          << 0x00000014U));
    __Vtemp_93[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                       >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                          << 0x00000014U));
    __Vtemp_93[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                       >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                          << 0x00000014U));
    __Vtemp_93[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                       >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                          << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_93[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_93[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_93[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_93[4U];
    VL_WRITEF_NX("prd @cycle 0: %40x\n",0,160,vlSelfRef.fullchip_tb__DOT__temp16b.data());
    vlSelfRef.fullchip_tb__DOT__result[1U][0U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[1U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [1U][0U]);
    __Vtemp_105[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_105[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_105[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_105[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_105[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_105[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_105[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_105[4U];
    vlSelfRef.fullchip_tb__DOT__result[1U][1U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[1U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [1U][1U]);
    __Vtemp_117[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_117[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_117[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_117[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_117[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_117[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_117[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_117[4U];
    vlSelfRef.fullchip_tb__DOT__result[1U][2U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[1U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [1U][2U]);
    __Vtemp_129[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_129[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_129[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_129[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_129[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_129[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_129[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_129[4U];
    vlSelfRef.fullchip_tb__DOT__result[1U][3U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[1U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [1U][3U]);
    __Vtemp_141[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_141[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_141[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_141[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_141[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_141[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_141[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_141[4U];
    vlSelfRef.fullchip_tb__DOT__result[1U][4U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[1U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [1U][4U]);
    __Vtemp_153[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_153[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_153[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_153[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_153[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_153[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_153[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_153[4U];
    vlSelfRef.fullchip_tb__DOT__result[1U][5U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[1U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [1U][5U]);
    __Vtemp_165[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_165[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_165[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_165[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_165[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_165[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_165[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_165[4U];
    vlSelfRef.fullchip_tb__DOT__result[1U][6U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[1U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [1U][6U]);
    __Vtemp_177[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_177[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_177[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_177[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_177[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_177[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_177[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_177[4U];
    vlSelfRef.fullchip_tb__DOT__result[1U][7U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[1U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[1U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [1U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [1U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [1U][7U]);
    __Vtemp_189[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_189[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_189[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_189[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_189[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_189[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_189[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_189[4U];
    VL_WRITEF_NX("prd @cycle 1: %40x\n",0,160,vlSelfRef.fullchip_tb__DOT__temp16b.data());
    vlSelfRef.fullchip_tb__DOT__result[2U][0U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[2U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [2U][0U]);
    __Vtemp_201[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_201[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_201[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_201[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_201[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_201[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_201[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_201[4U];
    vlSelfRef.fullchip_tb__DOT__result[2U][1U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[2U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [2U][1U]);
    __Vtemp_213[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_213[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_213[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_213[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_213[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_213[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_213[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_213[4U];
    vlSelfRef.fullchip_tb__DOT__result[2U][2U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[2U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [2U][2U]);
    __Vtemp_225[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_225[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_225[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_225[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_225[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_225[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_225[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_225[4U];
    vlSelfRef.fullchip_tb__DOT__result[2U][3U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[2U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [2U][3U]);
    __Vtemp_237[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_237[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_237[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_237[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_237[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_237[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_237[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_237[4U];
    vlSelfRef.fullchip_tb__DOT__result[2U][4U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[2U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [2U][4U]);
    __Vtemp_249[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_249[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_249[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_249[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_249[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_249[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_249[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_249[4U];
    vlSelfRef.fullchip_tb__DOT__result[2U][5U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[2U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [2U][5U]);
    __Vtemp_261[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_261[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_261[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_261[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_261[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_261[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_261[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_261[4U];
    vlSelfRef.fullchip_tb__DOT__result[2U][6U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[2U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [2U][6U]);
    __Vtemp_273[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_273[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_273[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_273[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_273[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_273[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_273[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_273[4U];
    vlSelfRef.fullchip_tb__DOT__result[2U][7U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[2U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[2U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [2U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [2U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [2U][7U]);
    __Vtemp_285[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_285[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_285[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_285[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_285[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_285[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_285[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_285[4U];
    VL_WRITEF_NX("prd @cycle 2: %40x\n",0,160,vlSelfRef.fullchip_tb__DOT__temp16b.data());
    vlSelfRef.fullchip_tb__DOT__result[3U][0U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[3U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [3U][0U]);
    __Vtemp_297[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_297[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_297[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_297[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_297[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_297[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_297[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_297[4U];
    vlSelfRef.fullchip_tb__DOT__result[3U][1U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[3U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [3U][1U]);
    __Vtemp_309[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_309[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_309[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_309[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_309[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_309[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_309[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_309[4U];
    vlSelfRef.fullchip_tb__DOT__result[3U][2U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[3U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [3U][2U]);
    __Vtemp_321[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_321[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_321[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_321[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_321[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_321[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_321[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_321[4U];
    vlSelfRef.fullchip_tb__DOT__result[3U][3U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[3U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [3U][3U]);
    __Vtemp_333[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_333[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_333[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_333[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_333[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_333[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_333[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_333[4U];
    vlSelfRef.fullchip_tb__DOT__result[3U][4U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[3U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [3U][4U]);
    __Vtemp_345[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_345[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_345[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_345[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_345[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_345[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_345[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_345[4U];
    vlSelfRef.fullchip_tb__DOT__result[3U][5U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[3U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [3U][5U]);
    __Vtemp_357[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_357[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_357[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_357[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_357[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_357[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_357[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_357[4U];
    vlSelfRef.fullchip_tb__DOT__result[3U][6U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[3U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [3U][6U]);
    __Vtemp_369[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_369[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_369[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_369[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_369[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_369[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_369[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_369[4U];
    vlSelfRef.fullchip_tb__DOT__result[3U][7U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[3U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[3U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [3U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [3U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [3U][7U]);
    __Vtemp_381[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_381[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_381[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_381[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_381[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_381[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_381[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_381[4U];
    VL_WRITEF_NX("prd @cycle 3: %40x\n",0,160,vlSelfRef.fullchip_tb__DOT__temp16b.data());
    vlSelfRef.fullchip_tb__DOT__result[4U][0U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[4U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [4U][0U]);
    __Vtemp_393[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_393[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_393[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_393[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_393[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_393[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_393[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_393[4U];
    vlSelfRef.fullchip_tb__DOT__result[4U][1U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[4U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [4U][1U]);
    __Vtemp_405[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_405[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_405[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_405[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_405[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_405[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_405[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_405[4U];
    vlSelfRef.fullchip_tb__DOT__result[4U][2U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[4U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [4U][2U]);
    __Vtemp_417[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_417[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_417[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_417[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_417[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_417[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_417[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_417[4U];
    vlSelfRef.fullchip_tb__DOT__result[4U][3U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[4U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [4U][3U]);
    __Vtemp_429[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_429[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_429[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_429[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_429[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_429[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_429[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_429[4U];
    vlSelfRef.fullchip_tb__DOT__result[4U][4U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[4U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [4U][4U]);
    __Vtemp_441[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_441[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_441[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_441[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_441[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_441[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_441[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_441[4U];
    vlSelfRef.fullchip_tb__DOT__result[4U][5U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[4U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [4U][5U]);
    __Vtemp_453[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_453[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_453[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_453[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_453[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_453[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_453[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_453[4U];
    vlSelfRef.fullchip_tb__DOT__result[4U][6U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[4U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [4U][6U]);
    __Vtemp_465[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_465[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_465[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_465[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_465[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_465[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_465[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_465[4U];
    vlSelfRef.fullchip_tb__DOT__result[4U][7U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[4U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[4U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [4U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [4U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [4U][7U]);
    __Vtemp_477[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_477[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_477[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_477[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_477[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_477[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_477[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_477[4U];
    VL_WRITEF_NX("prd @cycle 4: %40x\n",0,160,vlSelfRef.fullchip_tb__DOT__temp16b.data());
    vlSelfRef.fullchip_tb__DOT__result[5U][0U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[5U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [5U][0U]);
    __Vtemp_489[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_489[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_489[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_489[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_489[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_489[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_489[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_489[4U];
    vlSelfRef.fullchip_tb__DOT__result[5U][1U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[5U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [5U][1U]);
    __Vtemp_501[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_501[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_501[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_501[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_501[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_501[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_501[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_501[4U];
    vlSelfRef.fullchip_tb__DOT__result[5U][2U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[5U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [5U][2U]);
    __Vtemp_513[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_513[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_513[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_513[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_513[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_513[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_513[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_513[4U];
    vlSelfRef.fullchip_tb__DOT__result[5U][3U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[5U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [5U][3U]);
    __Vtemp_525[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_525[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_525[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_525[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_525[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_525[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_525[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_525[4U];
    vlSelfRef.fullchip_tb__DOT__result[5U][4U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[5U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [5U][4U]);
    __Vtemp_537[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_537[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_537[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_537[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_537[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_537[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_537[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_537[4U];
    vlSelfRef.fullchip_tb__DOT__result[5U][5U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[5U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [5U][5U]);
    __Vtemp_549[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_549[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_549[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_549[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_549[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_549[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_549[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_549[4U];
    vlSelfRef.fullchip_tb__DOT__result[5U][6U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[5U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [5U][6U]);
    __Vtemp_561[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_561[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_561[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_561[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_561[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_561[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_561[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_561[4U];
    vlSelfRef.fullchip_tb__DOT__result[5U][7U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[5U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[5U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [5U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [5U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [5U][7U]);
    __Vtemp_573[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_573[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_573[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_573[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_573[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_573[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_573[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_573[4U];
    VL_WRITEF_NX("prd @cycle 5: %40x\n",0,160,vlSelfRef.fullchip_tb__DOT__temp16b.data());
    vlSelfRef.fullchip_tb__DOT__result[6U][0U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[6U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [6U][0U]);
    __Vtemp_585[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_585[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_585[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_585[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_585[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_585[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_585[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_585[4U];
    vlSelfRef.fullchip_tb__DOT__result[6U][1U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[6U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [6U][1U]);
    __Vtemp_597[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_597[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_597[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_597[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_597[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_597[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_597[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_597[4U];
    vlSelfRef.fullchip_tb__DOT__result[6U][2U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[6U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [6U][2U]);
    __Vtemp_609[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_609[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_609[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_609[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_609[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_609[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_609[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_609[4U];
    vlSelfRef.fullchip_tb__DOT__result[6U][3U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[6U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [6U][3U]);
    __Vtemp_621[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_621[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_621[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_621[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_621[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_621[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_621[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_621[4U];
    vlSelfRef.fullchip_tb__DOT__result[6U][4U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[6U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [6U][4U]);
    __Vtemp_633[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_633[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_633[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_633[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_633[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_633[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_633[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_633[4U];
    vlSelfRef.fullchip_tb__DOT__result[6U][5U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[6U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [6U][5U]);
    __Vtemp_645[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_645[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_645[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_645[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_645[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_645[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_645[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_645[4U];
    vlSelfRef.fullchip_tb__DOT__result[6U][6U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[6U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [6U][6U]);
    __Vtemp_657[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_657[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_657[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_657[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_657[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_657[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_657[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_657[4U];
    vlSelfRef.fullchip_tb__DOT__result[6U][7U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[6U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[6U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [6U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [6U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [6U][7U]);
    __Vtemp_669[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_669[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_669[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_669[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_669[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_669[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_669[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_669[4U];
    VL_WRITEF_NX("prd @cycle 6: %40x\n",0,160,vlSelfRef.fullchip_tb__DOT__temp16b.data());
    vlSelfRef.fullchip_tb__DOT__result[7U][0U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[7U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][0U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [0U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [0U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [7U][0U]);
    __Vtemp_681[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_681[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_681[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_681[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_681[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_681[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_681[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_681[4U];
    vlSelfRef.fullchip_tb__DOT__result[7U][1U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[7U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][1U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [1U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [1U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [7U][1U]);
    __Vtemp_693[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_693[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_693[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_693[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_693[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_693[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_693[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_693[4U];
    vlSelfRef.fullchip_tb__DOT__result[7U][2U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[7U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][2U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [2U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [2U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [7U][2U]);
    __Vtemp_705[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_705[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_705[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_705[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_705[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_705[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_705[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_705[4U];
    vlSelfRef.fullchip_tb__DOT__result[7U][3U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[7U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][3U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [3U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [3U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [7U][3U]);
    __Vtemp_717[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_717[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_717[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_717[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_717[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_717[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_717[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_717[4U];
    vlSelfRef.fullchip_tb__DOT__result[7U][4U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[7U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][4U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [4U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [4U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [7U][4U]);
    __Vtemp_729[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_729[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_729[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_729[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_729[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_729[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_729[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_729[4U];
    vlSelfRef.fullchip_tb__DOT__result[7U][5U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[7U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][5U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [5U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [5U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [7U][5U]);
    __Vtemp_741[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_741[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_741[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_741[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_741[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_741[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_741[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_741[4U];
    vlSelfRef.fullchip_tb__DOT__result[7U][6U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[7U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][6U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [6U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [6U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [7U][6U]);
    __Vtemp_753[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_753[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_753[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_753[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_753[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_753[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_753[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_753[4U];
    vlSelfRef.fullchip_tb__DOT__result[7U][7U] = 0U;
    vlSelfRef.fullchip_tb__DOT__result[7U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [0U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [0U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [1U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [1U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [2U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [2U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [3U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [3U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [4U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [4U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [5U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [5U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [6U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [6U]));
    vlSelfRef.fullchip_tb__DOT__result[7U][7U] = (vlSelfRef.fullchip_tb__DOT__result
                                                  [7U]
                                                  [7U] 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              vlSelfRef.fullchip_tb__DOT__Q
                                                              [7U]
                                                              [7U], 
                                                              vlSelfRef.fullchip_tb__DOT__K
                                                              [7U]
                                                              [7U]));
    fullchip_tb__DOT__temp5b = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__result
                                [7U][7U]);
    __Vtemp_765[1U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                                           << 0x00000014U));
    __Vtemp_765[2U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[1U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                                           << 0x00000014U));
    __Vtemp_765[3U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[2U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                                           << 0x00000014U));
    __Vtemp_765[4U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[3U] 
                        >> 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__temp16b[4U] 
                                           << 0x00000014U));
    vlSelfRef.fullchip_tb__DOT__temp16b[0U] = ((vlSelfRef.fullchip_tb__DOT__temp16b[0U] 
                                                << 0x00000014U) 
                                               | fullchip_tb__DOT__temp5b);
    vlSelfRef.fullchip_tb__DOT__temp16b[1U] = __Vtemp_765[1U];
    vlSelfRef.fullchip_tb__DOT__temp16b[2U] = __Vtemp_765[2U];
    vlSelfRef.fullchip_tb__DOT__temp16b[3U] = __Vtemp_765[3U];
    vlSelfRef.fullchip_tb__DOT__temp16b[4U] = __Vtemp_765[4U];
    fullchip_tb__DOT__q = 8U;
    VL_WRITEF_NX("prd @cycle 7: %40x\n",0,160,vlSelfRef.fullchip_tb__DOT__temp16b.data());
    fullchip_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, fullchip_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/fullchip_tb.sv", 
                                             107);
        vlSelfRef.fullchip_tb__DOT__clk = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/fullchip_tb.sv", 
                                             107);
        vlSelfRef.fullchip_tb__DOT__clk = 1U;
        fullchip_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (fullchip_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    fullchip_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, fullchip_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/fullchip_tb.sv", 
                                             108);
        vlSelfRef.fullchip_tb__DOT__clk = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/fullchip_tb.sv", 
                                             108);
        vlSelfRef.fullchip_tb__DOT__clk = 1U;
        fullchip_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (fullchip_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.fullchip_tb__DOT__rst_n = 1U;
    VL_WRITEF_NX("##### Qmem writing #####\n",0);
    fullchip_tb__DOT__q = 0U;
    while (VL_GTS_III(32, 8U, fullchip_tb__DOT__q)) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/fullchip_tb.sv", 
                                             114);
        vlSelfRef.fullchip_tb__DOT__clk = 0U;
        vlSelfRef.fullchip_tb__DOT__qmem_wr = 1U;
        if (VL_LTS_III(32, 0U, fullchip_tb__DOT__q)) {
            vlSelfRef.fullchip_tb__DOT__qkmem_add = 
                (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.fullchip_tb__DOT__qkmem_add)));
        }
        vlSelfRef.fullchip_tb__DOT__mem_in = ((0xffffffffffffff00ULL 
                                               & vlSelfRef.fullchip_tb__DOT__mem_in) 
                                              | (IData)((IData)(
                                                                (0x000000ffU 
                                                                 & vlSelfRef.fullchip_tb__DOT__Q
                                                                 [
                                                                 (7U 
                                                                  & fullchip_tb__DOT__q)]
                                                                 [0U]))));
        vlSelfRef.fullchip_tb__DOT__mem_in = ((0xffffffffffff00ffULL 
                                               & vlSelfRef.fullchip_tb__DOT__mem_in) 
                                              | ((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.fullchip_tb__DOT__Q
                                                                  [
                                                                  (7U 
                                                                   & fullchip_tb__DOT__q)]
                                                                  [1U]))) 
                                                 << 8U));
        vlSelfRef.fullchip_tb__DOT__mem_in = ((0xffffffffff00ffffULL 
                                               & vlSelfRef.fullchip_tb__DOT__mem_in) 
                                              | ((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.fullchip_tb__DOT__Q
                                                                  [
                                                                  (7U 
                                                                   & fullchip_tb__DOT__q)]
                                                                  [2U]))) 
                                                 << 0x00000010U));
        vlSelfRef.fullchip_tb__DOT__mem_in = ((0xffffffff00ffffffULL 
                                               & vlSelfRef.fullchip_tb__DOT__mem_in) 
                                              | ((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.fullchip_tb__DOT__Q
                                                                  [
                                                                  (7U 
                                                                   & fullchip_tb__DOT__q)]
                                                                  [3U]))) 
                                                 << 0x00000018U));
        vlSelfRef.fullchip_tb__DOT__mem_in = ((0xffffff00ffffffffULL 
                                               & vlSelfRef.fullchip_tb__DOT__mem_in) 
                                              | ((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.fullchip_tb__DOT__Q
                                                                  [
                                                                  (7U 
                                                                   & fullchip_tb__DOT__q)]
                                                                  [4U]))) 
                                                 << 0x00000020U));
        vlSelfRef.fullchip_tb__DOT__mem_in = ((0xffff00ffffffffffULL 
                                               & vlSelfRef.fullchip_tb__DOT__mem_in) 
                                              | ((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.fullchip_tb__DOT__Q
                                                                  [
                                                                  (7U 
                                                                   & fullchip_tb__DOT__q)]
                                                                  [5U]))) 
                                                 << 0x00000028U));
        vlSelfRef.fullchip_tb__DOT__mem_in = ((0xff00ffffffffffffULL 
                                               & vlSelfRef.fullchip_tb__DOT__mem_in) 
                                              | ((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.fullchip_tb__DOT__Q
                                                                  [
                                                                  (7U 
                                                                   & fullchip_tb__DOT__q)]
                                                                  [6U]))) 
                                                 << 0x00000030U));
        vlSelfRef.fullchip_tb__DOT__mem_in = ((0x00ffffffffffffffULL 
                                               & vlSelfRef.fullchip_tb__DOT__mem_in) 
                                              | ((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.fullchip_tb__DOT__Q
                                                                  [
                                                                  (7U 
                                                                   & fullchip_tb__DOT__q)]
                                                                  [7U]))) 
                                                 << 0x00000038U));
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/fullchip_tb.sv", 
                                             119);
        vlSelfRef.fullchip_tb__DOT__clk = 1U;
        fullchip_tb__DOT__q = ((IData)(1U) + fullchip_tb__DOT__q);
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                         nullptr, "verilog/fullchip_tb.sv", 
                                         121);
    vlSelfRef.fullchip_tb__DOT__clk = 0U;
    vlSelfRef.fullchip_tb__DOT__qmem_wr = 0U;
    vlSelfRef.fullchip_tb__DOT__qkmem_add = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                         nullptr, "verilog/fullchip_tb.sv", 
                                         121);
    vlSelfRef.fullchip_tb__DOT__clk = 1U;
    VL_WRITEF_NX("##### Kmem writing #####\n",0);
    fullchip_tb__DOT__q = 0U;
    while (VL_GTS_III(32, 8U, fullchip_tb__DOT__q)) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/fullchip_tb.sv", 
                                             126);
        vlSelfRef.fullchip_tb__DOT__clk = 0U;
        vlSelfRef.fullchip_tb__DOT__kmem_wr = 1U;
        if (VL_LTS_III(32, 0U, fullchip_tb__DOT__q)) {
            vlSelfRef.fullchip_tb__DOT__qkmem_add = 
                (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.fullchip_tb__DOT__qkmem_add)));
        }
        vlSelfRef.fullchip_tb__DOT__mem_in = ((0xffffffffffffff00ULL 
                                               & vlSelfRef.fullchip_tb__DOT__mem_in) 
                                              | (IData)((IData)(
                                                                (0x000000ffU 
                                                                 & vlSelfRef.fullchip_tb__DOT__K
                                                                 [
                                                                 (7U 
                                                                  & fullchip_tb__DOT__q)]
                                                                 [0U]))));
        vlSelfRef.fullchip_tb__DOT__mem_in = ((0xffffffffffff00ffULL 
                                               & vlSelfRef.fullchip_tb__DOT__mem_in) 
                                              | ((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.fullchip_tb__DOT__K
                                                                  [
                                                                  (7U 
                                                                   & fullchip_tb__DOT__q)]
                                                                  [1U]))) 
                                                 << 8U));
        vlSelfRef.fullchip_tb__DOT__mem_in = ((0xffffffffff00ffffULL 
                                               & vlSelfRef.fullchip_tb__DOT__mem_in) 
                                              | ((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.fullchip_tb__DOT__K
                                                                  [
                                                                  (7U 
                                                                   & fullchip_tb__DOT__q)]
                                                                  [2U]))) 
                                                 << 0x00000010U));
        vlSelfRef.fullchip_tb__DOT__mem_in = ((0xffffffff00ffffffULL 
                                               & vlSelfRef.fullchip_tb__DOT__mem_in) 
                                              | ((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.fullchip_tb__DOT__K
                                                                  [
                                                                  (7U 
                                                                   & fullchip_tb__DOT__q)]
                                                                  [3U]))) 
                                                 << 0x00000018U));
        vlSelfRef.fullchip_tb__DOT__mem_in = ((0xffffff00ffffffffULL 
                                               & vlSelfRef.fullchip_tb__DOT__mem_in) 
                                              | ((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.fullchip_tb__DOT__K
                                                                  [
                                                                  (7U 
                                                                   & fullchip_tb__DOT__q)]
                                                                  [4U]))) 
                                                 << 0x00000020U));
        vlSelfRef.fullchip_tb__DOT__mem_in = ((0xffff00ffffffffffULL 
                                               & vlSelfRef.fullchip_tb__DOT__mem_in) 
                                              | ((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.fullchip_tb__DOT__K
                                                                  [
                                                                  (7U 
                                                                   & fullchip_tb__DOT__q)]
                                                                  [5U]))) 
                                                 << 0x00000028U));
        vlSelfRef.fullchip_tb__DOT__mem_in = ((0xff00ffffffffffffULL 
                                               & vlSelfRef.fullchip_tb__DOT__mem_in) 
                                              | ((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.fullchip_tb__DOT__K
                                                                  [
                                                                  (7U 
                                                                   & fullchip_tb__DOT__q)]
                                                                  [6U]))) 
                                                 << 0x00000030U));
        vlSelfRef.fullchip_tb__DOT__mem_in = ((0x00ffffffffffffffULL 
                                               & vlSelfRef.fullchip_tb__DOT__mem_in) 
                                              | ((QData)((IData)(
                                                                 (0x000000ffU 
                                                                  & vlSelfRef.fullchip_tb__DOT__K
                                                                  [
                                                                  (7U 
                                                                   & fullchip_tb__DOT__q)]
                                                                  [7U]))) 
                                                 << 0x00000038U));
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/fullchip_tb.sv", 
                                             131);
        vlSelfRef.fullchip_tb__DOT__clk = 1U;
        fullchip_tb__DOT__q = ((IData)(1U) + fullchip_tb__DOT__q);
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                         nullptr, "verilog/fullchip_tb.sv", 
                                         133);
    vlSelfRef.fullchip_tb__DOT__clk = 0U;
    vlSelfRef.fullchip_tb__DOT__kmem_wr = 0U;
    vlSelfRef.fullchip_tb__DOT__qkmem_add = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                         nullptr, "verilog/fullchip_tb.sv", 
                                         133);
    vlSelfRef.fullchip_tb__DOT__clk = 1U;
    fullchip_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 2U;
    while (VL_LTS_III(32, 0U, fullchip_tb__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/fullchip_tb.sv", 
                                             135);
        vlSelfRef.fullchip_tb__DOT__clk = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/fullchip_tb.sv", 
                                             135);
        vlSelfRef.fullchip_tb__DOT__clk = 1U;
        fullchip_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (fullchip_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    VL_WRITEF_NX("##### K loading to processor #####\n",0);
    fullchip_tb__DOT__q = 0U;
    while (VL_GTS_III(32, 9U, fullchip_tb__DOT__q)) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/fullchip_tb.sv", 
                                             140);
        vlSelfRef.fullchip_tb__DOT__clk = 0U;
        vlSelfRef.fullchip_tb__DOT__load = 1U;
        if ((1U == fullchip_tb__DOT__q)) {
            vlSelfRef.fullchip_tb__DOT__kmem_rd = 1U;
        }
        if (VL_LTS_III(32, 1U, fullchip_tb__DOT__q)) {
            vlSelfRef.fullchip_tb__DOT__qkmem_add = 
                (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.fullchip_tb__DOT__qkmem_add)));
        }
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/fullchip_tb.sv", 
                                             144);
        vlSelfRef.fullchip_tb__DOT__clk = 1U;
        fullchip_tb__DOT__q = ((IData)(1U) + fullchip_tb__DOT__q);
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                         nullptr, "verilog/fullchip_tb.sv", 
                                         146);
    vlSelfRef.fullchip_tb__DOT__clk = 0U;
    vlSelfRef.fullchip_tb__DOT__kmem_rd = 0U;
    vlSelfRef.fullchip_tb__DOT__qkmem_add = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                         nullptr, "verilog/fullchip_tb.sv", 
                                         146);
    vlSelfRef.fullchip_tb__DOT__clk = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                         nullptr, "verilog/fullchip_tb.sv", 
                                         147);
    vlSelfRef.fullchip_tb__DOT__clk = 0U;
    vlSelfRef.fullchip_tb__DOT__load = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                         nullptr, "verilog/fullchip_tb.sv", 
                                         147);
    vlSelfRef.fullchip_tb__DOT__clk = 1U;
    fullchip_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, fullchip_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/fullchip_tb.sv", 
                                             149);
        vlSelfRef.fullchip_tb__DOT__clk = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/fullchip_tb.sv", 
                                             149);
        vlSelfRef.fullchip_tb__DOT__clk = 1U;
        fullchip_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (fullchip_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    VL_WRITEF_NX("##### Execute #####\n",0);
    fullchip_tb__DOT__q = 0U;
    while (VL_GTS_III(32, 8U, fullchip_tb__DOT__q)) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/fullchip_tb.sv", 
                                             154);
        vlSelfRef.fullchip_tb__DOT__clk = 0U;
        vlSelfRef.fullchip_tb__DOT__execute = 1U;
        vlSelfRef.fullchip_tb__DOT__qmem_rd = 1U;
        if (VL_LTS_III(32, 0U, fullchip_tb__DOT__q)) {
            vlSelfRef.fullchip_tb__DOT__qkmem_add = 
                (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.fullchip_tb__DOT__qkmem_add)));
        }
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/fullchip_tb.sv", 
                                             158);
        vlSelfRef.fullchip_tb__DOT__clk = 1U;
        fullchip_tb__DOT__q = ((IData)(1U) + fullchip_tb__DOT__q);
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                         nullptr, "verilog/fullchip_tb.sv", 
                                         160);
    vlSelfRef.fullchip_tb__DOT__clk = 0U;
    vlSelfRef.fullchip_tb__DOT__qmem_rd = 0U;
    vlSelfRef.fullchip_tb__DOT__qkmem_add = 0U;
    vlSelfRef.fullchip_tb__DOT__execute = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                         nullptr, "verilog/fullchip_tb.sv", 
                                         160);
    vlSelfRef.fullchip_tb__DOT__clk = 1U;
    fullchip_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, fullchip_tb__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/fullchip_tb.sv", 
                                             162);
        vlSelfRef.fullchip_tb__DOT__clk = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/fullchip_tb.sv", 
                                             162);
        vlSelfRef.fullchip_tb__DOT__clk = 1U;
        fullchip_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (fullchip_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    VL_WRITEF_NX("##### Move OFIFO to PMEM #####\n",0);
    fullchip_tb__DOT__q = 0U;
    while (VL_GTS_III(32, 8U, fullchip_tb__DOT__q)) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/fullchip_tb.sv", 
                                             167);
        vlSelfRef.fullchip_tb__DOT__clk = 0U;
        vlSelfRef.fullchip_tb__DOT__ofifo_rd = 1U;
        vlSelfRef.fullchip_tb__DOT__pmem_wr = 1U;
        if (VL_LTS_III(32, 0U, fullchip_tb__DOT__q)) {
            vlSelfRef.fullchip_tb__DOT__pmem_add = 
                (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.fullchip_tb__DOT__pmem_add)));
        }
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/fullchip_tb.sv", 
                                             171);
        vlSelfRef.fullchip_tb__DOT__clk = 1U;
        fullchip_tb__DOT__q = ((IData)(1U) + fullchip_tb__DOT__q);
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                         nullptr, "verilog/fullchip_tb.sv", 
                                         173);
    vlSelfRef.fullchip_tb__DOT__clk = 0U;
    vlSelfRef.fullchip_tb__DOT__pmem_wr = 0U;
    vlSelfRef.fullchip_tb__DOT__pmem_add = 0U;
    vlSelfRef.fullchip_tb__DOT__ofifo_rd = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                         nullptr, "verilog/fullchip_tb.sv", 
                                         173);
    vlSelfRef.fullchip_tb__DOT__clk = 1U;
    fullchip_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 5U;
    while (VL_LTS_III(32, 0U, fullchip_tb__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/fullchip_tb.sv", 
                                             175);
        vlSelfRef.fullchip_tb__DOT__clk = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/fullchip_tb.sv", 
                                             175);
        vlSelfRef.fullchip_tb__DOT__clk = 1U;
        fullchip_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (fullchip_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
    }
    VL_WRITEF_NX("##### Read results from PMEM #####\n",0);
    fullchip_tb__DOT__q = 0U;
    while (VL_GTS_III(32, 8U, fullchip_tb__DOT__q)) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/fullchip_tb.sv", 
                                             180);
        vlSelfRef.fullchip_tb__DOT__clk = 0U;
        vlSelfRef.fullchip_tb__DOT__pmem_rd = 1U;
        vlSelfRef.fullchip_tb__DOT__pmem_add = (0x0000000fU 
                                                & fullchip_tb__DOT__q);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/fullchip_tb.sv", 
                                             183);
        vlSelfRef.fullchip_tb__DOT__clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/fullchip_tb.sv", 
                                             185);
        vlSelfRef.fullchip_tb__DOT__clk = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "verilog/fullchip_tb.sv", 
                                             185);
        vlSelfRef.fullchip_tb__DOT__clk = 1U;
        VL_WRITEF_NX("HW prd @cycle%2d: %40x\n",0,32,
                     fullchip_tb__DOT__q,160,vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_out.data());
        fullchip_tb__DOT__q = ((IData)(1U) + fullchip_tb__DOT__q);
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                         nullptr, "verilog/fullchip_tb.sv", 
                                         188);
    vlSelfRef.fullchip_tb__DOT__clk = 0U;
    vlSelfRef.fullchip_tb__DOT__pmem_rd = 0U;
    vlSelfRef.fullchip_tb__DOT__pmem_add = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                         nullptr, "verilog/fullchip_tb.sv", 
                                         188);
    vlSelfRef.fullchip_tb__DOT__clk = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "verilog/fullchip_tb.sv", 
                                         190);
    VL_FINISH_MT("verilog/fullchip_tb.sv", 190, "");
}
