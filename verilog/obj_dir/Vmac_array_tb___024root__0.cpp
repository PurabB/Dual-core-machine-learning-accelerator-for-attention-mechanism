// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmac_array_tb.h for the primary calling header

#include "Vmac_array_tb__pch.h"

VlCoroutine Vmac_array_tb___024root___eval_initial__TOP__Vtiming__0(Vmac_array_tb___024root* vlSelf);
VlCoroutine Vmac_array_tb___024root___eval_initial__TOP__Vtiming__1(Vmac_array_tb___024root* vlSelf);

void Vmac_array_tb___024root___eval_initial(Vmac_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_initial\n"); );
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmac_array_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vmac_array_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vmac_array_tb___024root___eval_initial__TOP__Vtiming__0(Vmac_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ mac_array_tb__DOT__query_vec;
    mac_array_tb__DOT__query_vec = 0;
    IData/*31:0*/ mac_array_tb__DOT__pass_cnt;
    mac_array_tb__DOT__pass_cnt = 0;
    IData/*31:0*/ mac_array_tb__DOT__fail_cnt;
    mac_array_tb__DOT__fail_cnt = 0;
    IData/*31:0*/ mac_array_tb__DOT__cyc;
    mac_array_tb__DOT__cyc = 0;
    IData/*31:0*/ mac_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    mac_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ mac_array_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    mac_array_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ mac_array_tb__DOT__unnamedblk1_3__DOT____Vrepeat2;
    mac_array_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ mac_array_tb__DOT__unnamedblk1_4__DOT____Vrepeat3;
    mac_array_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ mac_array_tb__DOT__unnamedblk1_5__DOT____Vrepeat4;
    mac_array_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    QData/*63:0*/ __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec = 0;
    IData/*31:0*/ __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 0;
    CData/*7:0*/ __Vtask_mac_array_tb__DOT__make_uniform_vec__1__val;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__1__val = 0;
    QData/*63:0*/ __Vtask_mac_array_tb__DOT__make_uniform_vec__1__vec;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__1__vec = 0;
    IData/*31:0*/ __Vtask_mac_array_tb__DOT__make_uniform_vec__1__i;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__1__i = 0;
    // Body
    vlSymsp->_vm_contextp__->dumpfile("mac_array_tb.vcd"s);
    VL_PRINTF_MT("-Info: mac_array_tb.sv:62: $dumpvar ignored, as Verilated without --trace\n");
    vlSelfRef.mac_array_tb__DOT__clk = 0U;
    vlSelfRef.mac_array_tb__DOT__rst_n = 0U;
    vlSelfRef.mac_array_tb__DOT__en = 0U;
    vlSelfRef.mac_array_tb__DOT__wr_k = 0U;
    vlSelfRef.mac_array_tb__DOT__in = 0ULL;
    mac_array_tb__DOT__pass_cnt = 0U;
    mac_array_tb__DOT__fail_cnt = 0U;
    vlSelfRef.mac_array_tb__DOT__captured[0U] = 0U;
    vlSelfRef.mac_array_tb__DOT__col_seen[0U] = 0U;
    vlSelfRef.mac_array_tb__DOT__captured[1U] = 0U;
    vlSelfRef.mac_array_tb__DOT__col_seen[1U] = 0U;
    vlSelfRef.mac_array_tb__DOT__captured[2U] = 0U;
    vlSelfRef.mac_array_tb__DOT__col_seen[2U] = 0U;
    vlSelfRef.mac_array_tb__DOT__captured[3U] = 0U;
    vlSelfRef.mac_array_tb__DOT__col_seen[3U] = 0U;
    vlSelfRef.mac_array_tb__DOT__captured[4U] = 0U;
    vlSelfRef.mac_array_tb__DOT__col_seen[4U] = 0U;
    vlSelfRef.mac_array_tb__DOT__captured[5U] = 0U;
    vlSelfRef.mac_array_tb__DOT__col_seen[5U] = 0U;
    vlSelfRef.mac_array_tb__DOT__captured[6U] = 0U;
    vlSelfRef.mac_array_tb__DOT__col_seen[6U] = 0U;
    vlSelfRef.mac_array_tb__DOT__captured[7U] = 0U;
    vlSelfRef.mac_array_tb__DOT__col_seen[7U] = 0U;
    mac_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, mac_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hd3cea39c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge mac_array_tb.clk)", 
                                                             "mac_array_tb.sv", 
                                                             72);
        mac_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (mac_array_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.mac_array_tb__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_hd3cea39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_array_tb.clk)", 
                                                         "mac_array_tb.sv", 
                                                         74);
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 0;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 0U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (1ULL | (0xffffffffffffff00ULL & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 1U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000000000100ULL | (0xffffffffffff00ffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 2U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000000010000ULL | (0xffffffffff00ffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 3U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000001000000ULL | (0xffffffff00ffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 4U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000100000000ULL | (0xffffff00ffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 5U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000010000000000ULL | (0xffff00ffffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 6U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0001000000000000ULL | (0xff00ffffffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 7U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0100000000000000ULL | (0x00ffffffffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 8U;
    vlSelfRef.mac_array_tb__DOT__key_vec[0U] = __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 0;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 0U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (2ULL | (0xffffffffffffff00ULL & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 1U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000000000200ULL | (0xffffffffffff00ffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 2U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000000020000ULL | (0xffffffffff00ffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 3U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000002000000ULL | (0xffffffff00ffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 4U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000200000000ULL | (0xffffff00ffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 5U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000020000000000ULL | (0xffff00ffffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 6U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0002000000000000ULL | (0xff00ffffffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 7U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0200000000000000ULL | (0x00ffffffffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 8U;
    vlSelfRef.mac_array_tb__DOT__key_vec[1U] = __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 0;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 0U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (3ULL | (0xffffffffffffff00ULL & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 1U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000000000300ULL | (0xffffffffffff00ffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 2U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000000030000ULL | (0xffffffffff00ffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 3U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000003000000ULL | (0xffffffff00ffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 4U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000300000000ULL | (0xffffff00ffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 5U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000030000000000ULL | (0xffff00ffffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 6U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0003000000000000ULL | (0xff00ffffffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 7U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0300000000000000ULL | (0x00ffffffffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 8U;
    vlSelfRef.mac_array_tb__DOT__key_vec[2U] = __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 0;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 0U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (4ULL | (0xffffffffffffff00ULL & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 1U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000000000400ULL | (0xffffffffffff00ffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 2U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000000040000ULL | (0xffffffffff00ffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 3U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000004000000ULL | (0xffffffff00ffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 4U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000400000000ULL | (0xffffff00ffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 5U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000040000000000ULL | (0xffff00ffffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 6U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0004000000000000ULL | (0xff00ffffffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 7U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0400000000000000ULL | (0x00ffffffffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 8U;
    vlSelfRef.mac_array_tb__DOT__key_vec[3U] = __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 0;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 0U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (5ULL | (0xffffffffffffff00ULL & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 1U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000000000500ULL | (0xffffffffffff00ffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 2U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000000050000ULL | (0xffffffffff00ffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 3U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000005000000ULL | (0xffffffff00ffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 4U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000500000000ULL | (0xffffff00ffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 5U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000050000000000ULL | (0xffff00ffffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 6U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0005000000000000ULL | (0xff00ffffffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 7U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0500000000000000ULL | (0x00ffffffffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 8U;
    vlSelfRef.mac_array_tb__DOT__key_vec[4U] = __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 0;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 0U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (6ULL | (0xffffffffffffff00ULL & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 1U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000000000600ULL | (0xffffffffffff00ffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 2U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000000060000ULL | (0xffffffffff00ffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 3U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000006000000ULL | (0xffffffff00ffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 4U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000600000000ULL | (0xffffff00ffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 5U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000060000000000ULL | (0xffff00ffffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 6U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0006000000000000ULL | (0xff00ffffffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 7U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0600000000000000ULL | (0x00ffffffffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 8U;
    vlSelfRef.mac_array_tb__DOT__key_vec[5U] = __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 0;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 0U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (7ULL | (0xffffffffffffff00ULL & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 1U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000000000700ULL | (0xffffffffffff00ffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 2U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000000070000ULL | (0xffffffffff00ffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 3U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000007000000ULL | (0xffffffff00ffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 4U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000700000000ULL | (0xffffff00ffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 5U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000070000000000ULL | (0xffff00ffffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 6U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0007000000000000ULL | (0xff00ffffffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 7U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0700000000000000ULL | (0x00ffffffffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 8U;
    vlSelfRef.mac_array_tb__DOT__key_vec[6U] = __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 0;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 0U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (8ULL | (0xffffffffffffff00ULL & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 1U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000000000800ULL | (0xffffffffffff00ffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 2U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000000080000ULL | (0xffffffffff00ffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 3U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000008000000ULL | (0xffffffff00ffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 4U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000000800000000ULL | (0xffffff00ffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 5U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0000080000000000ULL | (0xffff00ffffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 6U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0008000000000000ULL | (0xff00ffffffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 7U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec 
        = (0x0800000000000000ULL | (0x00ffffffffffffffULL 
                                    & __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__0__i = 8U;
    vlSelfRef.mac_array_tb__DOT__key_vec[7U] = __Vtask_mac_array_tb__DOT__make_uniform_vec__0__vec;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__1__val = 1U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__1__i = 0;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__1__i = 0U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__1__vec 
        = ((0xffffffffffffff00ULL & __Vtask_mac_array_tb__DOT__make_uniform_vec__1__vec) 
           | (IData)((IData)(__Vtask_mac_array_tb__DOT__make_uniform_vec__1__val)));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__1__i = 1U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__1__vec 
        = ((0xffffffffffff00ffULL & __Vtask_mac_array_tb__DOT__make_uniform_vec__1__vec) 
           | ((QData)((IData)(__Vtask_mac_array_tb__DOT__make_uniform_vec__1__val)) 
              << 8U));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__1__i = 2U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__1__vec 
        = ((0xffffffffff00ffffULL & __Vtask_mac_array_tb__DOT__make_uniform_vec__1__vec) 
           | ((QData)((IData)(__Vtask_mac_array_tb__DOT__make_uniform_vec__1__val)) 
              << 0x00000010U));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__1__i = 3U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__1__vec 
        = ((0xffffffff00ffffffULL & __Vtask_mac_array_tb__DOT__make_uniform_vec__1__vec) 
           | ((QData)((IData)(__Vtask_mac_array_tb__DOT__make_uniform_vec__1__val)) 
              << 0x00000018U));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__1__i = 4U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__1__vec 
        = ((0xffffff00ffffffffULL & __Vtask_mac_array_tb__DOT__make_uniform_vec__1__vec) 
           | ((QData)((IData)(__Vtask_mac_array_tb__DOT__make_uniform_vec__1__val)) 
              << 0x00000020U));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__1__i = 5U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__1__vec 
        = ((0xffff00ffffffffffULL & __Vtask_mac_array_tb__DOT__make_uniform_vec__1__vec) 
           | ((QData)((IData)(__Vtask_mac_array_tb__DOT__make_uniform_vec__1__val)) 
              << 0x00000028U));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__1__i = 6U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__1__vec 
        = ((0xff00ffffffffffffULL & __Vtask_mac_array_tb__DOT__make_uniform_vec__1__vec) 
           | ((QData)((IData)(__Vtask_mac_array_tb__DOT__make_uniform_vec__1__val)) 
              << 0x00000030U));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__1__i = 7U;
    __Vtask_mac_array_tb__DOT__make_uniform_vec__1__vec 
        = ((0x00ffffffffffffffULL & __Vtask_mac_array_tb__DOT__make_uniform_vec__1__vec) 
           | ((QData)((IData)(__Vtask_mac_array_tb__DOT__make_uniform_vec__1__val)) 
              << 0x00000038U));
    __Vtask_mac_array_tb__DOT__make_uniform_vec__1__i = 8U;
    mac_array_tb__DOT__query_vec = __Vtask_mac_array_tb__DOT__make_uniform_vec__1__vec;
    VL_WRITEF_NX("\n===== Phase 1: Loading Keys =====\n",0);
    mac_array_tb__DOT__cyc = 0U;
    while (VL_GTS_III(32, 0x0000000aU, mac_array_tb__DOT__cyc)) {
        co_await vlSelfRef.__VtrigSched_hd3cea35b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge mac_array_tb.clk)", 
                                                             "mac_array_tb.sv", 
                                                             88);
        vlSelfRef.mac_array_tb__DOT__en = 1U;
        vlSelfRef.mac_array_tb__DOT__wr_k = 1U;
        if ((VL_LTES_III(32, 2U, mac_array_tb__DOT__cyc) 
             & VL_GTES_III(32, 9U, mac_array_tb__DOT__cyc))) {
            vlSelfRef.mac_array_tb__DOT__in = vlSelfRef.mac_array_tb__DOT__key_vec
                [(7U & ((IData)(1U) - mac_array_tb__DOT__cyc))];
            VL_WRITEF_NX("  Cycle %0d: feeding key[%0d] (val=%0d)\n",0,
                         32,mac_array_tb__DOT__cyc,
                         32,((IData)(9U) - mac_array_tb__DOT__cyc),
                         32,((IData)(1U) + ((IData)(9U) 
                                            - mac_array_tb__DOT__cyc)));
        } else {
            vlSelfRef.mac_array_tb__DOT__in = 0ULL;
            VL_WRITEF_NX("  Cycle %0d: feeding zeros\n",0,
                         32,mac_array_tb__DOT__cyc);
        }
        mac_array_tb__DOT__cyc = ((IData)(1U) + mac_array_tb__DOT__cyc);
    }
    co_await vlSelfRef.__VtrigSched_hd3cea35b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mac_array_tb.clk)", 
                                                         "mac_array_tb.sv", 
                                                         102);
    vlSelfRef.mac_array_tb__DOT__en = 0U;
    vlSelfRef.mac_array_tb__DOT__wr_k = 0U;
    vlSelfRef.mac_array_tb__DOT__in = 0ULL;
    mac_array_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 5U;
    while (VL_LTS_III(32, 0U, mac_array_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_hd3cea39c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge mac_array_tb.clk)", 
                                                             "mac_array_tb.sv", 
                                                             104);
        mac_array_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (mac_array_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    VL_WRITEF_NX("\n===== Phase 2: Computing Q * K =====\n  Query: all elements = 1\n  Expected: col[c] = PR*(c+1) = 8*(c+1)\n",0);
    co_await vlSelfRef.__VtrigSched_hd3cea35b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge mac_array_tb.clk)", 
                                                         "mac_array_tb.sv", 
                                                         111);
    vlSelfRef.mac_array_tb__DOT__en = 1U;
    vlSelfRef.mac_array_tb__DOT__wr_k = 0U;
    vlSelfRef.mac_array_tb__DOT__in = mac_array_tb__DOT__query_vec;
    mac_array_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 9U;
    while (VL_LTS_III(32, 0U, mac_array_tb__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        co_await vlSelfRef.__VtrigSched_hd3cea35b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge mac_array_tb.clk)", 
                                                             "mac_array_tb.sv", 
                                                             117);
        mac_array_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (mac_array_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    vlSelfRef.mac_array_tb__DOT__en = 0U;
    vlSelfRef.mac_array_tb__DOT__in = 0ULL;
    mac_array_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0x0000000fU;
    while (VL_LTS_III(32, 0U, mac_array_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        co_await vlSelfRef.__VtrigSched_hd3cea39c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge mac_array_tb.clk)", 
                                                             "mac_array_tb.sv", 
                                                             121);
        mac_array_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (mac_array_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    VL_WRITEF_NX("\n===== Results (captured at fifo_wr) =====\n",0);
    if ((vlSelfRef.mac_array_tb__DOT__col_seen[0U] 
         & (8U == vlSelfRef.mac_array_tb__DOT__captured
            [0U]))) {
        VL_WRITEF_NX("  Column 0: out = %0d  PASS\n",0,
                     22,vlSelfRef.mac_array_tb__DOT__captured
                     [0U]);
        mac_array_tb__DOT__pass_cnt = ((IData)(1U) 
                                       + mac_array_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  Column 0: out = %0d (expected 8, seen=%0b)  FAIL\n",0,
                     22,vlSelfRef.mac_array_tb__DOT__captured
                     [0U],1,vlSelfRef.mac_array_tb__DOT__col_seen
                     [0U]);
        mac_array_tb__DOT__fail_cnt = ((IData)(1U) 
                                       + mac_array_tb__DOT__fail_cnt);
    }
    if ((vlSelfRef.mac_array_tb__DOT__col_seen[1U] 
         & (0x00000010U == vlSelfRef.mac_array_tb__DOT__captured
            [1U]))) {
        VL_WRITEF_NX("  Column 1: out = %0d  PASS\n",0,
                     22,vlSelfRef.mac_array_tb__DOT__captured
                     [1U]);
        mac_array_tb__DOT__pass_cnt = ((IData)(1U) 
                                       + mac_array_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  Column 1: out = %0d (expected 16, seen=%0b)  FAIL\n",0,
                     22,vlSelfRef.mac_array_tb__DOT__captured
                     [1U],1,vlSelfRef.mac_array_tb__DOT__col_seen
                     [1U]);
        mac_array_tb__DOT__fail_cnt = ((IData)(1U) 
                                       + mac_array_tb__DOT__fail_cnt);
    }
    if ((vlSelfRef.mac_array_tb__DOT__col_seen[2U] 
         & (0x00000018U == vlSelfRef.mac_array_tb__DOT__captured
            [2U]))) {
        VL_WRITEF_NX("  Column 2: out = %0d  PASS\n",0,
                     22,vlSelfRef.mac_array_tb__DOT__captured
                     [2U]);
        mac_array_tb__DOT__pass_cnt = ((IData)(1U) 
                                       + mac_array_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  Column 2: out = %0d (expected 24, seen=%0b)  FAIL\n",0,
                     22,vlSelfRef.mac_array_tb__DOT__captured
                     [2U],1,vlSelfRef.mac_array_tb__DOT__col_seen
                     [2U]);
        mac_array_tb__DOT__fail_cnt = ((IData)(1U) 
                                       + mac_array_tb__DOT__fail_cnt);
    }
    if ((vlSelfRef.mac_array_tb__DOT__col_seen[3U] 
         & (0x00000020U == vlSelfRef.mac_array_tb__DOT__captured
            [3U]))) {
        VL_WRITEF_NX("  Column 3: out = %0d  PASS\n",0,
                     22,vlSelfRef.mac_array_tb__DOT__captured
                     [3U]);
        mac_array_tb__DOT__pass_cnt = ((IData)(1U) 
                                       + mac_array_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  Column 3: out = %0d (expected 32, seen=%0b)  FAIL\n",0,
                     22,vlSelfRef.mac_array_tb__DOT__captured
                     [3U],1,vlSelfRef.mac_array_tb__DOT__col_seen
                     [3U]);
        mac_array_tb__DOT__fail_cnt = ((IData)(1U) 
                                       + mac_array_tb__DOT__fail_cnt);
    }
    if ((vlSelfRef.mac_array_tb__DOT__col_seen[4U] 
         & (0x00000028U == vlSelfRef.mac_array_tb__DOT__captured
            [4U]))) {
        VL_WRITEF_NX("  Column 4: out = %0d  PASS\n",0,
                     22,vlSelfRef.mac_array_tb__DOT__captured
                     [4U]);
        mac_array_tb__DOT__pass_cnt = ((IData)(1U) 
                                       + mac_array_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  Column 4: out = %0d (expected 40, seen=%0b)  FAIL\n",0,
                     22,vlSelfRef.mac_array_tb__DOT__captured
                     [4U],1,vlSelfRef.mac_array_tb__DOT__col_seen
                     [4U]);
        mac_array_tb__DOT__fail_cnt = ((IData)(1U) 
                                       + mac_array_tb__DOT__fail_cnt);
    }
    if ((vlSelfRef.mac_array_tb__DOT__col_seen[5U] 
         & (0x00000030U == vlSelfRef.mac_array_tb__DOT__captured
            [5U]))) {
        VL_WRITEF_NX("  Column 5: out = %0d  PASS\n",0,
                     22,vlSelfRef.mac_array_tb__DOT__captured
                     [5U]);
        mac_array_tb__DOT__pass_cnt = ((IData)(1U) 
                                       + mac_array_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  Column 5: out = %0d (expected 48, seen=%0b)  FAIL\n",0,
                     22,vlSelfRef.mac_array_tb__DOT__captured
                     [5U],1,vlSelfRef.mac_array_tb__DOT__col_seen
                     [5U]);
        mac_array_tb__DOT__fail_cnt = ((IData)(1U) 
                                       + mac_array_tb__DOT__fail_cnt);
    }
    if ((vlSelfRef.mac_array_tb__DOT__col_seen[6U] 
         & (0x00000038U == vlSelfRef.mac_array_tb__DOT__captured
            [6U]))) {
        VL_WRITEF_NX("  Column 6: out = %0d  PASS\n",0,
                     22,vlSelfRef.mac_array_tb__DOT__captured
                     [6U]);
        mac_array_tb__DOT__pass_cnt = ((IData)(1U) 
                                       + mac_array_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  Column 6: out = %0d (expected 56, seen=%0b)  FAIL\n",0,
                     22,vlSelfRef.mac_array_tb__DOT__captured
                     [6U],1,vlSelfRef.mac_array_tb__DOT__col_seen
                     [6U]);
        mac_array_tb__DOT__fail_cnt = ((IData)(1U) 
                                       + mac_array_tb__DOT__fail_cnt);
    }
    if ((vlSelfRef.mac_array_tb__DOT__col_seen[7U] 
         & (0x00000040U == vlSelfRef.mac_array_tb__DOT__captured
            [7U]))) {
        VL_WRITEF_NX("  Column 7: out = %0d  PASS\n",0,
                     22,vlSelfRef.mac_array_tb__DOT__captured
                     [7U]);
        mac_array_tb__DOT__pass_cnt = ((IData)(1U) 
                                       + mac_array_tb__DOT__pass_cnt);
    } else {
        VL_WRITEF_NX("  Column 7: out = %0d (expected 64, seen=%0b)  FAIL\n",0,
                     22,vlSelfRef.mac_array_tb__DOT__captured
                     [7U],1,vlSelfRef.mac_array_tb__DOT__col_seen
                     [7U]);
        mac_array_tb__DOT__fail_cnt = ((IData)(1U) 
                                       + mac_array_tb__DOT__fail_cnt);
    }
    VL_WRITEF_NX("\n===== Summary =====\n  PASS: %0d / %0d\n",0,
                 32,mac_array_tb__DOT__pass_cnt,32,
                 (mac_array_tb__DOT__pass_cnt + mac_array_tb__DOT__fail_cnt));
    if (VL_LTS_III(32, 0U, mac_array_tb__DOT__fail_cnt)) {
        VL_WRITEF_NX("  FAIL: %0d \342\200\224 check waveform for details\n",0,
                     32,mac_array_tb__DOT__fail_cnt);
    } else {
        VL_WRITEF_NX("  All tests passed!\n",0);
    }
    mac_array_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 5U;
    while (VL_LTS_III(32, 0U, mac_array_tb__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        co_await vlSelfRef.__VtrigSched_hd3cea39c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge mac_array_tb.clk)", 
                                                             "mac_array_tb.sv", 
                                                             144);
        mac_array_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (mac_array_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    VL_FINISH_MT("mac_array_tb.sv", 145, "");
}

VlCoroutine Vmac_array_tb___024root___eval_initial__TOP__Vtiming__1(Vmac_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "mac_array_tb.sv", 
                                             31);
        vlSelfRef.mac_array_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.mac_array_tb__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmac_array_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vmac_array_tb___024root___eval_triggers__act(Vmac_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_triggers__act\n"); );
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                       << 3U) 
                                                      | (((~ (IData)(vlSelfRef.mac_array_tb__DOT__clk)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mac_array_tb__DOT__clk__0)) 
                                                         << 2U)) 
                                                     | ((((~ (IData)(vlSelfRef.mac_array_tb__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mac_array_tb__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.mac_array_tb__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mac_array_tb__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__mac_array_tb__DOT__clk__0 
        = vlSelfRef.mac_array_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mac_array_tb__DOT__rst_n__0 
        = vlSelfRef.mac_array_tb__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmac_array_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vmac_array_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___trigger_anySet__act\n"); );
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

void Vmac_array_tb___024root___act_comb__TOP__0(Vmac_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___act_comb__TOP__0\n"); );
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mac_array_tb__DOT__dut__DOT__en_chain[0U] 
        = vlSelfRef.mac_array_tb__DOT__en;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__wr_k_chain[0U] 
        = vlSelfRef.mac_array_tb__DOT__wr_k;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__q_chain[0U] 
        = vlSelfRef.mac_array_tb__DOT__in;
}

void Vmac_array_tb___024root___eval_act(Vmac_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_act\n"); );
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
        Vmac_array_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vmac_array_tb___024root___nba_sequent__TOP__0(Vmac_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___nba_sequent__TOP__0\n"); );
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q = 0;
    CData/*0:0*/ __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q = 0;
    CData/*3:0*/ __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q = 0;
    CData/*0:0*/ __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q = 0;
    CData/*3:0*/ __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q = 0;
    CData/*0:0*/ __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q = 0;
    CData/*3:0*/ __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q = 0;
    CData/*0:0*/ __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q = 0;
    CData/*3:0*/ __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q = 0;
    CData/*0:0*/ __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q = 0;
    CData/*3:0*/ __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q = 0;
    CData/*0:0*/ __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q = 0;
    CData/*3:0*/ __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q = 0;
    CData/*0:0*/ __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q = 0;
    CData/*3:0*/ __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q = 0;
    CData/*0:0*/ __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v5;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v5;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v5;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v5;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v5;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v5;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v5;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v5;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 = 0;
    IData/*21:0*/ __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 = 0;
    CData/*0:0*/ __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0;
    // Body
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0U;
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0U;
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0U;
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0U;
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0U;
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0U;
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0U;
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0U;
    __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0U;
    if (vlSelfRef.mac_array_tb__DOT__rst_n) {
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q)))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q))))));
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 1U;
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 8U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 8U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x10U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x10U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x18U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x18U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x20U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x20U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x28U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x28U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x30U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x30U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x38U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x38U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][0U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][1U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][2U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][3U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][4U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][5U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][6U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][7U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][0U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][1U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][2U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][3U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][0U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][1U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q)))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q))))));
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 1U;
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 8U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 8U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x10U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x10U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x18U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x18U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x20U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x20U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x28U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x28U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x30U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x30U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x38U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x38U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][0U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][1U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][2U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][3U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][4U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][5U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][6U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][7U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][0U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][1U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][2U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][3U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][0U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][1U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q)))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q))))));
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 1U;
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 8U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 8U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x10U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x10U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x18U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x18U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x20U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x20U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x28U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x28U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x30U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x30U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x38U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x38U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][0U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][1U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][2U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][3U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][4U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][5U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][6U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][7U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][0U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][1U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][2U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][3U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][0U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][1U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q)))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q))))));
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 1U;
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 8U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 8U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x10U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x10U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x18U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x18U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x20U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x20U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x28U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x28U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x30U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x30U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x38U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x38U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][0U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][1U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][2U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][3U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][4U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][5U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][6U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][7U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][0U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][1U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][2U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][3U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][0U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][1U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q)))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q))))));
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 1U;
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 8U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 8U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x10U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x10U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x18U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x18U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x20U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x20U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x28U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x28U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x30U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x30U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x38U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x38U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][0U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][1U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][2U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][3U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][4U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][5U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][6U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][7U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][0U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][1U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][2U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][3U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][0U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][1U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q)))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q))))));
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 1U;
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 8U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 8U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x10U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x10U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x18U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x18U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x20U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x20U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x28U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x28U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x30U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x30U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x38U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x38U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][0U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][1U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][2U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][3U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][4U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][5U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][6U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][7U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][0U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][1U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][2U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][3U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][0U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][1U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q)))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q))))));
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 1U;
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 8U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 8U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x10U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x10U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x18U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x18U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x20U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x20U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x28U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x28U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x30U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x30U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x38U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x38U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][0U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][1U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][2U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][3U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][4U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][5U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][6U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][7U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][0U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][1U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][2U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][3U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][0U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][1U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q)))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q))))));
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 1U;
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 8U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 8U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x10U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x10U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x18U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x18U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x20U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x20U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x28U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x28U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x30U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x30U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 
            = (0x003fffffU & VL_MULS_III(22, (0x003fffffU 
                                              & VL_EXTENDS_II(22,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x38U))))), 
                                         (0x003fffffU 
                                          & VL_EXTENDS_II(22,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x38U)))))));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][0U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][1U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][2U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][3U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][4U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][5U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][6U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][7U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][0U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][1U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][2U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][3U]));
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 
            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][0U] + vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][1U]));
        if (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__en_q) {
            __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 
                = (1U & (~ (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__wr_k_q)));
            __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
            vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q 
                = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q;
            if (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__wr_k_q) {
                if ((1U == (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q))) {
                    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
                    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q 
                        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q;
                    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q = 0U;
                } else if (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q) {
                    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q)));
                }
            }
        } else {
            __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
            __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
        }
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe
            [0U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 1U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe
            [1U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 1U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe
            [2U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 1U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe
            [3U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 1U;
        if (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__en_q) {
            __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 
                = (1U & (~ (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__wr_k_q)));
            __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
            vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q 
                = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q;
            if (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__wr_k_q) {
                if ((2U == (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q))) {
                    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
                    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q 
                        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q;
                    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q = 0U;
                } else if (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q) {
                    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q)));
                }
            }
        } else {
            __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
            __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
        }
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe
            [0U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 1U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe
            [1U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 1U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe
            [2U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 1U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe
            [3U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 1U;
        if (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__en_q) {
            __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 
                = (1U & (~ (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__wr_k_q)));
            __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
            vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q 
                = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q;
            if (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__wr_k_q) {
                if ((3U == (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q))) {
                    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
                    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q 
                        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q;
                    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q = 0U;
                } else if (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q) {
                    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q)));
                }
            }
        } else {
            __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
            __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
        }
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe
            [0U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 1U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe
            [1U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 1U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe
            [2U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 1U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe
            [3U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 1U;
        if (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__en_q) {
            __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 
                = (1U & (~ (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__wr_k_q)));
            __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
            vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q 
                = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q;
            if (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__wr_k_q) {
                if ((4U == (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q))) {
                    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
                    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q 
                        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q;
                    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q = 0U;
                } else if (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q) {
                    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q)));
                }
            }
        } else {
            __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
            __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
        }
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe
            [0U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 1U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe
            [1U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 1U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe
            [2U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 1U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe
            [3U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 1U;
        if (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__en_q) {
            __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 
                = (1U & (~ (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__wr_k_q)));
            __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
            vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q 
                = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q;
            if (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__wr_k_q) {
                if ((5U == (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q))) {
                    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
                    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q 
                        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q;
                    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q = 0U;
                } else if (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q) {
                    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q)));
                }
            }
        } else {
            __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
            __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
        }
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe
            [0U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 1U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe
            [1U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 1U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe
            [2U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 1U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe
            [3U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 1U;
        if (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__en_q) {
            __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 
                = (1U & (~ (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__wr_k_q)));
            __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
            vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q 
                = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q;
            if (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__wr_k_q) {
                if ((6U == (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q))) {
                    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
                    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q 
                        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q;
                    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q = 0U;
                } else if (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q) {
                    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q)));
                }
            }
        } else {
            __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
            __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
        }
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe
            [0U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 1U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe
            [1U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 1U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe
            [2U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 1U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe
            [3U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 1U;
        if (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__en_q) {
            __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 
                = (1U & (~ (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__wr_k_q)));
            __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
            vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q 
                = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q;
            if (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__wr_k_q) {
                if ((7U == (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q))) {
                    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
                    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q 
                        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q;
                    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q = 0U;
                } else if (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q) {
                    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q)));
                }
            }
        } else {
            __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
            __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
        }
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe
            [0U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 1U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe
            [1U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 1U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe
            [2U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 1U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe
            [3U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 1U;
        if (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__en_q) {
            __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 
                = (1U & (~ (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__wr_k_q)));
            __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
            vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q 
                = vlSelfRef.mac_array_tb__DOT__dut__DOT__q_chain
                [0U];
            if (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__wr_k_q) {
                if ((8U == (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q))) {
                    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
                    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q 
                        = vlSelfRef.mac_array_tb__DOT__dut__DOT__q_chain
                        [0U];
                    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q = 0U;
                } else if (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q) {
                    __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q)));
                }
            }
        } else {
            __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
            __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
        }
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe
            [0U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 1U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe
            [1U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 1U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe
            [2U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 1U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe
            [3U];
        __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 
            = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 1U;
    } else {
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 1U;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 1U;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 1U;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 1U;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 1U;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 1U;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 1U;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 1U;
        __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
        __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q = 1U;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 1U;
        __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
        __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q = 1U;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 1U;
        __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
        __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q = 1U;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 1U;
        __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
        __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q = 1U;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 1U;
        __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
        __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q = 1U;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 1U;
        __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
        __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q = 1U;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 1U;
        __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
        __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q = 1U;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 1U;
        __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
        __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q = 1U;
        __VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 1U;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][7U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][7U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][7U] = 0U;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][7U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][7U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][7U] = 0U;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][7U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][7U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][7U] = 0U;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][7U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][7U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][7U] = 0U;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][7U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][7U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][7U] = 0U;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][7U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][7U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][7U] = 0U;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][7U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][7U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][7U] = 0U;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][7U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][7U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][4U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][5U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][6U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][7U] = 0U;
    }
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q 
        = __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q;
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v1) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v2) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v3) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v4) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v5) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] = 0U;
    }
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__en_q 
        = ((IData)(vlSelfRef.mac_array_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__en_q));
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__wr_k_q 
        = ((IData)(vlSelfRef.mac_array_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__wr_k_q));
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q 
        = __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q;
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v1) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v2) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v3) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v4) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v5) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] = 0U;
    }
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__en_q 
        = ((IData)(vlSelfRef.mac_array_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__en_q));
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__wr_k_q 
        = ((IData)(vlSelfRef.mac_array_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__wr_k_q));
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q 
        = __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q;
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v1) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v2) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v3) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v4) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v5) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] = 0U;
    }
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__en_q 
        = ((IData)(vlSelfRef.mac_array_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__en_q));
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__wr_k_q 
        = ((IData)(vlSelfRef.mac_array_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__wr_k_q));
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q 
        = __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q;
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v1) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v2) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v3) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v4) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v5) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] = 0U;
    }
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__en_q 
        = ((IData)(vlSelfRef.mac_array_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__en_q));
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__wr_k_q 
        = ((IData)(vlSelfRef.mac_array_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__wr_k_q));
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q 
        = __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q;
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v1) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v2) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v3) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v4) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v5) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] = 0U;
    }
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__en_q 
        = ((IData)(vlSelfRef.mac_array_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__en_q));
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__wr_k_q 
        = ((IData)(vlSelfRef.mac_array_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__wr_k_q));
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q 
        = __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q;
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v1) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v2) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v3) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v4) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v5) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] = 0U;
    }
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__en_q 
        = ((IData)(vlSelfRef.mac_array_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__en_q));
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__wr_k_q 
        = ((IData)(vlSelfRef.mac_array_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__wr_k_q));
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q 
        = __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q;
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v1) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v2) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v3) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v4) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v5) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] = 0U;
    }
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__en_q 
        = ((IData)(vlSelfRef.mac_array_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__en_q));
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__wr_k_q 
        = ((IData)(vlSelfRef.mac_array_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__wr_k_q));
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q 
        = __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = __Vdly__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q;
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v1) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v2) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v3) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v4) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] 
            = __VdlyVal__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    }
    if (__VdlySet__mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v5) {
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] = 0U;
        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] = 0U;
    }
    vlSelfRef.mac_array_tb__DOT__dut__DOT__q_chain[2U] 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__q_chain[3U] 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__q_chain[4U] 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__q_chain[5U] 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__q_chain[6U] 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__q_chain[7U] 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__q_chain[8U] 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__q_chain[1U] 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__en_q 
        = ((IData)(vlSelfRef.mac_array_tb__DOT__rst_n) 
           && vlSelfRef.mac_array_tb__DOT__dut__DOT__en_chain
           [0U]);
    vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__wr_k_q 
        = ((IData)(vlSelfRef.mac_array_tb__DOT__rst_n) 
           && vlSelfRef.mac_array_tb__DOT__dut__DOT__wr_k_chain
           [0U]);
    vlSelfRef.mac_array_tb__DOT__dut__DOT__en_chain[2U] 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__en_q;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__en_chain[3U] 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__en_q;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__en_chain[4U] 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__en_q;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__en_chain[5U] 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__en_q;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__en_chain[6U] 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__en_q;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__en_chain[7U] 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__en_q;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__en_chain[8U] 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__en_q;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__wr_k_chain[2U] 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__wr_k_q;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__wr_k_chain[3U] 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__wr_k_q;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__wr_k_chain[4U] 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__wr_k_q;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__wr_k_chain[5U] 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__wr_k_q;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__wr_k_chain[6U] 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__wr_k_q;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__wr_k_chain[7U] 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__wr_k_q;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__wr_k_chain[8U] 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__wr_k_q;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__en_chain[1U] 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__en_q;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__wr_k_chain[1U] 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__wr_k_q;
}

void Vmac_array_tb___024root___nba_sequent__TOP__1(Vmac_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___nba_sequent__TOP__1\n"); );
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*21:0*/ __Vfunc_mac_array_tb__DOT__get_out__2__Vfuncout;
    __Vfunc_mac_array_tb__DOT__get_out__2__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_mac_array_tb__DOT__get_out__3__Vfuncout;
    __Vfunc_mac_array_tb__DOT__get_out__3__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_mac_array_tb__DOT__get_out__4__Vfuncout;
    __Vfunc_mac_array_tb__DOT__get_out__4__Vfuncout = 0;
    // Body
    if (VL_UNLIKELY(((1U & (IData)(vlSelfRef.mac_array_tb__DOT__fifo_wr))))) {
        VL_WRITEF_NX("  T=%0t: fifo_wr[0] high, out[0] = %0d\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,22,
                     ([&]() {
                        __Vfunc_mac_array_tb__DOT__get_out__2__Vfuncout 
                            = (0x003fffffU & vlSelfRef.mac_array_tb__DOT__out[0U]);
                    }(), __Vfunc_mac_array_tb__DOT__get_out__2__Vfuncout));
        if ((0U != VL_EXTENDS_II(32,22, ([&]() {
                            __Vfunc_mac_array_tb__DOT__get_out__3__Vfuncout 
                                = (0x003fffffU & vlSelfRef.mac_array_tb__DOT__out[0U]);
                        }(), __Vfunc_mac_array_tb__DOT__get_out__3__Vfuncout)))) {
            __Vfunc_mac_array_tb__DOT__get_out__4__Vfuncout 
                = (0x003fffffU & vlSelfRef.mac_array_tb__DOT__out[0U]);
            vlSelfRef.mac_array_tb__DOT__captured[0U] 
                = __Vfunc_mac_array_tb__DOT__get_out__4__Vfuncout;
            vlSelfRef.mac_array_tb__DOT__col_seen[0U] = 1U;
        }
    }
    if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.mac_array_tb__DOT__fifo_wr))))) {
        VL_WRITEF_NX("  T=%0t: fifo_wr[1] high, out[1] = %0d\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,22,
                     ([&]() {
                        __Vfunc_mac_array_tb__DOT__get_out__2__Vfuncout 
                            = (0x003fffffU & ((vlSelfRef.mac_array_tb__DOT__out[1U] 
                                               << 0x0000000aU) 
                                              | (vlSelfRef.mac_array_tb__DOT__out[0U] 
                                                 >> 0x00000016U)));
                    }(), __Vfunc_mac_array_tb__DOT__get_out__2__Vfuncout));
        if ((0U != VL_EXTENDS_II(32,22, ([&]() {
                            __Vfunc_mac_array_tb__DOT__get_out__3__Vfuncout 
                                = (0x003fffffU & ((
                                                   vlSelfRef.mac_array_tb__DOT__out[1U] 
                                                   << 0x0000000aU) 
                                                  | (vlSelfRef.mac_array_tb__DOT__out[0U] 
                                                     >> 0x00000016U)));
                        }(), __Vfunc_mac_array_tb__DOT__get_out__3__Vfuncout)))) {
            __Vfunc_mac_array_tb__DOT__get_out__4__Vfuncout 
                = (0x003fffffU & ((vlSelfRef.mac_array_tb__DOT__out[1U] 
                                   << 0x0000000aU) 
                                  | (vlSelfRef.mac_array_tb__DOT__out[0U] 
                                     >> 0x00000016U)));
            vlSelfRef.mac_array_tb__DOT__captured[1U] 
                = __Vfunc_mac_array_tb__DOT__get_out__4__Vfuncout;
            vlSelfRef.mac_array_tb__DOT__col_seen[1U] = 1U;
        }
    }
    if (VL_UNLIKELY(((4U & (IData)(vlSelfRef.mac_array_tb__DOT__fifo_wr))))) {
        VL_WRITEF_NX("  T=%0t: fifo_wr[2] high, out[2] = %0d\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,22,
                     ([&]() {
                        __Vfunc_mac_array_tb__DOT__get_out__2__Vfuncout 
                            = (0x003fffffU & ((vlSelfRef.mac_array_tb__DOT__out[2U] 
                                               << 0x00000014U) 
                                              | (vlSelfRef.mac_array_tb__DOT__out[1U] 
                                                 >> 0x0000000cU)));
                    }(), __Vfunc_mac_array_tb__DOT__get_out__2__Vfuncout));
        if ((0U != VL_EXTENDS_II(32,22, ([&]() {
                            __Vfunc_mac_array_tb__DOT__get_out__3__Vfuncout 
                                = (0x003fffffU & ((
                                                   vlSelfRef.mac_array_tb__DOT__out[2U] 
                                                   << 0x00000014U) 
                                                  | (vlSelfRef.mac_array_tb__DOT__out[1U] 
                                                     >> 0x0000000cU)));
                        }(), __Vfunc_mac_array_tb__DOT__get_out__3__Vfuncout)))) {
            __Vfunc_mac_array_tb__DOT__get_out__4__Vfuncout 
                = (0x003fffffU & ((vlSelfRef.mac_array_tb__DOT__out[2U] 
                                   << 0x00000014U) 
                                  | (vlSelfRef.mac_array_tb__DOT__out[1U] 
                                     >> 0x0000000cU)));
            vlSelfRef.mac_array_tb__DOT__captured[2U] 
                = __Vfunc_mac_array_tb__DOT__get_out__4__Vfuncout;
            vlSelfRef.mac_array_tb__DOT__col_seen[2U] = 1U;
        }
    }
    if (VL_UNLIKELY(((8U & (IData)(vlSelfRef.mac_array_tb__DOT__fifo_wr))))) {
        VL_WRITEF_NX("  T=%0t: fifo_wr[3] high, out[3] = %0d\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,22,
                     ([&]() {
                        __Vfunc_mac_array_tb__DOT__get_out__2__Vfuncout 
                            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__out[2U] 
                                              >> 2U));
                    }(), __Vfunc_mac_array_tb__DOT__get_out__2__Vfuncout));
        if ((0U != VL_EXTENDS_II(32,22, ([&]() {
                            __Vfunc_mac_array_tb__DOT__get_out__3__Vfuncout 
                                = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__out[2U] 
                                                  >> 2U));
                        }(), __Vfunc_mac_array_tb__DOT__get_out__3__Vfuncout)))) {
            __Vfunc_mac_array_tb__DOT__get_out__4__Vfuncout 
                = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__out[2U] 
                                  >> 2U));
            vlSelfRef.mac_array_tb__DOT__captured[3U] 
                = __Vfunc_mac_array_tb__DOT__get_out__4__Vfuncout;
            vlSelfRef.mac_array_tb__DOT__col_seen[3U] = 1U;
        }
    }
    if (VL_UNLIKELY(((0x00000010U & (IData)(vlSelfRef.mac_array_tb__DOT__fifo_wr))))) {
        VL_WRITEF_NX("  T=%0t: fifo_wr[4] high, out[4] = %0d\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,22,
                     ([&]() {
                        __Vfunc_mac_array_tb__DOT__get_out__2__Vfuncout 
                            = (0x003fffffU & ((vlSelfRef.mac_array_tb__DOT__out[3U] 
                                               << 8U) 
                                              | (vlSelfRef.mac_array_tb__DOT__out[2U] 
                                                 >> 0x00000018U)));
                    }(), __Vfunc_mac_array_tb__DOT__get_out__2__Vfuncout));
        if ((0U != VL_EXTENDS_II(32,22, ([&]() {
                            __Vfunc_mac_array_tb__DOT__get_out__3__Vfuncout 
                                = (0x003fffffU & ((
                                                   vlSelfRef.mac_array_tb__DOT__out[3U] 
                                                   << 8U) 
                                                  | (vlSelfRef.mac_array_tb__DOT__out[2U] 
                                                     >> 0x00000018U)));
                        }(), __Vfunc_mac_array_tb__DOT__get_out__3__Vfuncout)))) {
            __Vfunc_mac_array_tb__DOT__get_out__4__Vfuncout 
                = (0x003fffffU & ((vlSelfRef.mac_array_tb__DOT__out[3U] 
                                   << 8U) | (vlSelfRef.mac_array_tb__DOT__out[2U] 
                                             >> 0x00000018U)));
            vlSelfRef.mac_array_tb__DOT__captured[4U] 
                = __Vfunc_mac_array_tb__DOT__get_out__4__Vfuncout;
            vlSelfRef.mac_array_tb__DOT__col_seen[4U] = 1U;
        }
    }
    if (VL_UNLIKELY(((0x00000020U & (IData)(vlSelfRef.mac_array_tb__DOT__fifo_wr))))) {
        VL_WRITEF_NX("  T=%0t: fifo_wr[5] high, out[5] = %0d\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,22,
                     ([&]() {
                        __Vfunc_mac_array_tb__DOT__get_out__2__Vfuncout 
                            = (0x003fffffU & ((vlSelfRef.mac_array_tb__DOT__out[4U] 
                                               << 0x00000012U) 
                                              | (vlSelfRef.mac_array_tb__DOT__out[3U] 
                                                 >> 0x0000000eU)));
                    }(), __Vfunc_mac_array_tb__DOT__get_out__2__Vfuncout));
        if ((0U != VL_EXTENDS_II(32,22, ([&]() {
                            __Vfunc_mac_array_tb__DOT__get_out__3__Vfuncout 
                                = (0x003fffffU & ((
                                                   vlSelfRef.mac_array_tb__DOT__out[4U] 
                                                   << 0x00000012U) 
                                                  | (vlSelfRef.mac_array_tb__DOT__out[3U] 
                                                     >> 0x0000000eU)));
                        }(), __Vfunc_mac_array_tb__DOT__get_out__3__Vfuncout)))) {
            __Vfunc_mac_array_tb__DOT__get_out__4__Vfuncout 
                = (0x003fffffU & ((vlSelfRef.mac_array_tb__DOT__out[4U] 
                                   << 0x00000012U) 
                                  | (vlSelfRef.mac_array_tb__DOT__out[3U] 
                                     >> 0x0000000eU)));
            vlSelfRef.mac_array_tb__DOT__captured[5U] 
                = __Vfunc_mac_array_tb__DOT__get_out__4__Vfuncout;
            vlSelfRef.mac_array_tb__DOT__col_seen[5U] = 1U;
        }
    }
    if (VL_UNLIKELY(((0x00000040U & (IData)(vlSelfRef.mac_array_tb__DOT__fifo_wr))))) {
        VL_WRITEF_NX("  T=%0t: fifo_wr[6] high, out[6] = %0d\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,22,
                     ([&]() {
                        __Vfunc_mac_array_tb__DOT__get_out__2__Vfuncout 
                            = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__out[4U] 
                                              >> 4U));
                    }(), __Vfunc_mac_array_tb__DOT__get_out__2__Vfuncout));
        if ((0U != VL_EXTENDS_II(32,22, ([&]() {
                            __Vfunc_mac_array_tb__DOT__get_out__3__Vfuncout 
                                = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__out[4U] 
                                                  >> 4U));
                        }(), __Vfunc_mac_array_tb__DOT__get_out__3__Vfuncout)))) {
            __Vfunc_mac_array_tb__DOT__get_out__4__Vfuncout 
                = (0x003fffffU & (vlSelfRef.mac_array_tb__DOT__out[4U] 
                                  >> 4U));
            vlSelfRef.mac_array_tb__DOT__captured[6U] 
                = __Vfunc_mac_array_tb__DOT__get_out__4__Vfuncout;
            vlSelfRef.mac_array_tb__DOT__col_seen[6U] = 1U;
        }
    }
    if (VL_UNLIKELY(((0x00000080U & (IData)(vlSelfRef.mac_array_tb__DOT__fifo_wr))))) {
        VL_WRITEF_NX("  T=%0t: fifo_wr[7] high, out[7] = %0d\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,22,
                     ([&]() {
                        __Vfunc_mac_array_tb__DOT__get_out__2__Vfuncout 
                            = (0x003fffffU & ((vlSelfRef.mac_array_tb__DOT__out[5U] 
                                               << 6U) 
                                              | (vlSelfRef.mac_array_tb__DOT__out[4U] 
                                                 >> 0x0000001aU)));
                    }(), __Vfunc_mac_array_tb__DOT__get_out__2__Vfuncout));
        if ((0U != VL_EXTENDS_II(32,22, ([&]() {
                            __Vfunc_mac_array_tb__DOT__get_out__3__Vfuncout 
                                = (0x003fffffU & ((
                                                   vlSelfRef.mac_array_tb__DOT__out[5U] 
                                                   << 6U) 
                                                  | (vlSelfRef.mac_array_tb__DOT__out[4U] 
                                                     >> 0x0000001aU)));
                        }(), __Vfunc_mac_array_tb__DOT__get_out__3__Vfuncout)))) {
            __Vfunc_mac_array_tb__DOT__get_out__4__Vfuncout 
                = (0x003fffffU & ((vlSelfRef.mac_array_tb__DOT__out[5U] 
                                   << 6U) | (vlSelfRef.mac_array_tb__DOT__out[4U] 
                                             >> 0x0000001aU)));
            vlSelfRef.mac_array_tb__DOT__captured[7U] 
                = __Vfunc_mac_array_tb__DOT__get_out__4__Vfuncout;
            vlSelfRef.mac_array_tb__DOT__col_seen[7U] = 1U;
        }
    }
}

void Vmac_array_tb___024root___nba_comb__TOP__0(Vmac_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___nba_comb__TOP__0\n"); );
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mac_array_tb__DOT__dut__DOT__q_chain[0U] 
        = vlSelfRef.mac_array_tb__DOT__in;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__en_chain[0U] 
        = vlSelfRef.mac_array_tb__DOT__en;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__wr_k_chain[0U] 
        = vlSelfRef.mac_array_tb__DOT__wr_k;
}

void Vmac_array_tb___024root___nba_sequent__TOP__2(Vmac_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___nba_sequent__TOP__2\n"); );
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mac_array_tb__DOT__fifo_wr = (((((vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe
                                                [4U] 
                                                << 3U) 
                                               | (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe
                                                  [4U] 
                                                  << 2U)) 
                                              | ((vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe
                                                  [4U] 
                                                  << 1U) 
                                                 | vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe
                                                 [4U])) 
                                             << 4U) 
                                            | (((vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe
                                                 [4U] 
                                                 << 3U) 
                                                | (vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe
                                                   [4U] 
                                                   << 2U)) 
                                               | ((vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe
                                                   [4U] 
                                                   << 1U) 
                                                  | vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe
                                                  [4U])));
    vlSelfRef.mac_array_tb__DOT__out[0U] = (IData)(
                                                   (((QData)((IData)(
                                                                     vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                     [3U]
                                                                     [0U])) 
                                                     << 0x00000016U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                      [3U]
                                                                      [0U]))));
    vlSelfRef.mac_array_tb__DOT__out[1U] = ((0xfffff000U 
                                             & vlSelfRef.mac_array_tb__DOT__out[1U]) 
                                            | (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                         [3U]
                                                                         [0U])) 
                                                         << 0x00000016U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                          [3U]
                                                                          [0U]))) 
                                                       >> 0x00000020U)));
    vlSelfRef.mac_array_tb__DOT__out[1U] = ((0x00000fffU 
                                             & vlSelfRef.mac_array_tb__DOT__out[1U]) 
                                            | ((IData)(
                                                       (((QData)((IData)(
                                                                         vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                         [3U]
                                                                         [0U])) 
                                                         << 0x00000016U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                          [3U]
                                                                          [0U])))) 
                                               << 0x0000000cU));
    vlSelfRef.mac_array_tb__DOT__out[2U] = ((0xff000000U 
                                             & vlSelfRef.mac_array_tb__DOT__out[2U]) 
                                            | (((IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                          [3U]
                                                                          [0U])) 
                                                          << 0x00000016U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                           [3U]
                                                                           [0U])))) 
                                                >> 0x00000014U) 
                                               | ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                             [3U]
                                                                             [0U])) 
                                                             << 0x00000016U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                              [3U]
                                                                              [0U]))) 
                                                           >> 0x00000020U)) 
                                                  << 0x0000000cU)));
    vlSelfRef.mac_array_tb__DOT__out[2U] = ((0x00ffffffU 
                                             & vlSelfRef.mac_array_tb__DOT__out[2U]) 
                                            | ((IData)(
                                                       (((QData)((IData)(
                                                                         vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                         [3U]
                                                                         [0U])) 
                                                         << 0x00000016U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                          [3U]
                                                                          [0U])))) 
                                               << 0x00000018U));
    vlSelfRef.mac_array_tb__DOT__out[3U] = (((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                       [3U]
                                                                       [0U])) 
                                                       << 0x00000016U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                        [3U]
                                                                        [0U])))) 
                                             >> 8U) 
                                            | ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                          [3U]
                                                                          [0U])) 
                                                          << 0x00000016U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                           [3U]
                                                                           [0U]))) 
                                                        >> 0x00000020U)) 
                                               << 0x00000018U));
    vlSelfRef.mac_array_tb__DOT__out[4U] = ((0xfffffff0U 
                                             & vlSelfRef.mac_array_tb__DOT__out[4U]) 
                                            | ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                          [3U]
                                                                          [0U])) 
                                                          << 0x00000016U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                           [3U]
                                                                           [0U]))) 
                                                        >> 0x00000020U)) 
                                               >> 8U));
    vlSelfRef.mac_array_tb__DOT__out[4U] = ((0x0000000fU 
                                             & vlSelfRef.mac_array_tb__DOT__out[4U]) 
                                            | ((IData)(
                                                       (((QData)((IData)(
                                                                         vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                         [3U]
                                                                         [0U])) 
                                                         << 0x00000016U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                          [3U]
                                                                          [0U])))) 
                                               << 4U));
    vlSelfRef.mac_array_tb__DOT__out[5U] = (0x0000ffffU 
                                            & (((IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                          [3U]
                                                                          [0U])) 
                                                          << 0x00000016U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                           [3U]
                                                                           [0U])))) 
                                                >> 0x0000001cU) 
                                               | ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                             [3U]
                                                                             [0U])) 
                                                             << 0x00000016U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                                                                              [3U]
                                                                              [0U]))) 
                                                           >> 0x00000020U)) 
                                                  << 4U)));
}

void Vmac_array_tb___024root___eval_nba(Vmac_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_nba\n"); );
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmac_array_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmac_array_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmac_array_tb___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmac_array_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void Vmac_array_tb___024root___timing_commit(Vmac_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___timing_commit\n"); );
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_hd3cea39c__0.commit(
                                                   "@(posedge mac_array_tb.clk)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_hd3cea35b__0.commit(
                                                   "@(negedge mac_array_tb.clk)");
    }
}

void Vmac_array_tb___024root___timing_resume(Vmac_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___timing_resume\n"); );
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hd3cea39c__0.resume(
                                                   "@(posedge mac_array_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hd3cea35b__0.resume(
                                                   "@(negedge mac_array_tb.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vmac_array_tb___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vmac_array_tb___024root___eval_phase__act(Vmac_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_phase__act\n"); );
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vmac_array_tb___024root___eval_triggers__act(vlSelf);
    Vmac_array_tb___024root___timing_commit(vlSelf);
    Vmac_array_tb___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vmac_array_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vmac_array_tb___024root___timing_resume(vlSelf);
        Vmac_array_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vmac_array_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vmac_array_tb___024root___eval_phase__nba(Vmac_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_phase__nba\n"); );
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vmac_array_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vmac_array_tb___024root___eval_nba(vlSelf);
        Vmac_array_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vmac_array_tb___024root___eval(Vmac_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval\n"); );
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vmac_array_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("mac_array_tb.sv", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vmac_array_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("mac_array_tb.sv", 1, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vmac_array_tb___024root___eval_phase__act(vlSelf));
    } while (Vmac_array_tb___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vmac_array_tb___024root___eval_debug_assertions(Vmac_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_debug_assertions\n"); );
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
