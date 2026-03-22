// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmac_array_tb.h for the primary calling header

#include "Vmac_array_tb__pch.h"

VL_ATTR_COLD void Vmac_array_tb___024root___eval_static(Vmac_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_static\n"); );
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__mac_array_tb__DOT__clk__0 
        = vlSelfRef.mac_array_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mac_array_tb__DOT__rst_n__0 
        = vlSelfRef.mac_array_tb__DOT__rst_n;
}

VL_ATTR_COLD void Vmac_array_tb___024root___eval_final(Vmac_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_final\n"); );
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmac_array_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmac_array_tb___024root___eval_phase__stl(Vmac_array_tb___024root* vlSelf);

VL_ATTR_COLD void Vmac_array_tb___024root___eval_settle(Vmac_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_settle\n"); );
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vmac_array_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("mac_array_tb.sv", 1, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vmac_array_tb___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vmac_array_tb___024root___eval_triggers__stl(Vmac_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_triggers__stl\n"); );
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmac_array_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vmac_array_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmac_array_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vmac_array_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vmac_array_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vmac_array_tb___024root___stl_sequent__TOP__0(Vmac_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___stl_sequent__TOP__0\n"); );
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.mac_array_tb__DOT__dut__DOT__en_chain[0U] 
        = vlSelfRef.mac_array_tb__DOT__en;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__wr_k_chain[0U] 
        = vlSelfRef.mac_array_tb__DOT__wr_k;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__q_chain[0U] 
        = vlSelfRef.mac_array_tb__DOT__in;
    vlSelfRef.mac_array_tb__DOT__dut__DOT__q_chain[1U] 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q;
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
    vlSelfRef.mac_array_tb__DOT__dut__DOT__en_chain[1U] 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__en_q;
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
    vlSelfRef.mac_array_tb__DOT__dut__DOT__wr_k_chain[1U] 
        = vlSelfRef.mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__wr_k_q;
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
}

VL_ATTR_COLD void Vmac_array_tb___024root___eval_stl(Vmac_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_stl\n"); );
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vmac_array_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vmac_array_tb___024root___eval_phase__stl(Vmac_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_phase__stl\n"); );
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmac_array_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vmac_array_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vmac_array_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vmac_array_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmac_array_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vmac_array_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge mac_array_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge mac_array_tb.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge mac_array_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmac_array_tb___024root___ctor_var_reset(Vmac_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___ctor_var_reset\n"); );
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->mac_array_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16145185101512187940ull);
    vlSelf->mac_array_tb__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15447798923592147129ull);
    vlSelf->mac_array_tb__DOT__en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5397683317467026988ull);
    vlSelf->mac_array_tb__DOT__wr_k = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7994157528805516355ull);
    vlSelf->mac_array_tb__DOT__in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14516517373817840191ull);
    VL_SCOPED_RAND_RESET_W(176, vlSelf->mac_array_tb__DOT__out, __VscopeHash, 15085282541818254982ull);
    vlSelf->mac_array_tb__DOT__fifo_wr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2579451851313403733ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->mac_array_tb__DOT__key_vec[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12803561657834242898ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->mac_array_tb__DOT__captured[__Vi0] = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 7764937589948140767ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->mac_array_tb__DOT__col_seen[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15243118064813839047ull);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->mac_array_tb__DOT__dut__DOT__en_chain[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13598134748917712567ull);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->mac_array_tb__DOT__dut__DOT__wr_k_chain[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1855409482377902242ull);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->mac_array_tb__DOT__dut__DOT__q_chain[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12429069996723620591ull);
    }
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2945292063675370163ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18112291639242836716ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6996247974471281049ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__wr_k_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11674111570938384271ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17016715771101526087ull);
    }
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11207560286192495930ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1573216596360031986ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9777104845993988031ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 13172558157592010010ull);
        }
    }
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13542920183528426413ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3538410559821744974ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15095458659493237009ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__wr_k_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1041497151804063008ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11958102257208277486ull);
    }
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15176516586648030025ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2288402753274497123ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 259871262116686298ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 298406699623074479ull);
        }
    }
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6952321834630926635ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15459237873954047668ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1766849749164493924ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__wr_k_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17523706913976045783ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17412670125273229010ull);
    }
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6433311686710615796ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11092221024235489734ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5146264689783813986ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 17895654989767910111ull);
        }
    }
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5685768264092457700ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4148236576816615701ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16720696292208954507ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__wr_k_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10386543337277375121ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10529957102709742598ull);
    }
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3046591718857267521ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16433188739205971791ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4718567361611539201ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5357493623713218728ull);
        }
    }
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14729181400833568217ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 52932188606143234ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13109176311453066799ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__wr_k_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5818625488646154731ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10751183807144624544ull);
    }
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6250348417310657638ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14536096464435017347ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18219343057174857591ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 14152326928345388932ull);
        }
    }
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15424287662293861913ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7452087178398737281ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4413969847718760409ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__wr_k_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3549429705802809038ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7483248188790091535ull);
    }
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 933697335253533340ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6952427340338695203ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17512999947537467214ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 17543512742921551469ull);
        }
    }
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9614665055590862826ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10129380126828635449ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1349231641505627823ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__wr_k_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8962527139643396847ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13182759319816701061ull);
    }
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2419711066585559837ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17599346146499273958ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1669095168020197259ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 17445729072735120099ull);
        }
    }
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1333310189064424822ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 985166797613154203ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10884507684440844661ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__wr_k_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8580446852296330647ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4634882716464003613ull);
    }
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9622699036210929986ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4557653248880809506ull);
    vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15185461917774441400ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5055613975823540439ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__mac_array_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3338209095403718954ull);
    vlSelf->__Vtrigprevexpr___TOP__mac_array_tb__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4304411536097971532ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
