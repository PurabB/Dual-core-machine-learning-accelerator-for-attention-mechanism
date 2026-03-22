// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfullchip_tb.h for the primary calling header

#include "Vfullchip_tb__pch.h"

VL_ATTR_COLD void Vfullchip_tb___024root___eval_static__TOP(Vfullchip_tb___024root* vlSelf);

VL_ATTR_COLD void Vfullchip_tb___024root___eval_static(Vfullchip_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___eval_static\n"); );
    Vfullchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfullchip_tb___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__fullchip_tb__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__fullchip_tb__DOT__rst_n__0 = 0U;
}

VL_ATTR_COLD void Vfullchip_tb___024root___eval_static__TOP(Vfullchip_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___eval_static__TOP\n"); );
    Vfullchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fullchip_tb__DOT__rst_n = 0U;
    vlSelfRef.fullchip_tb__DOT__clk = 0U;
    vlSelfRef.fullchip_tb__DOT__ofifo_rd = 0U;
    vlSelfRef.fullchip_tb__DOT__qmem_rd = 0U;
    vlSelfRef.fullchip_tb__DOT__qmem_wr = 0U;
    vlSelfRef.fullchip_tb__DOT__kmem_rd = 0U;
    vlSelfRef.fullchip_tb__DOT__kmem_wr = 0U;
    vlSelfRef.fullchip_tb__DOT__pmem_rd = 0U;
    vlSelfRef.fullchip_tb__DOT__pmem_wr = 0U;
    vlSelfRef.fullchip_tb__DOT__execute = 0U;
    vlSelfRef.fullchip_tb__DOT__load = 0U;
    vlSelfRef.fullchip_tb__DOT__qkmem_add = 0U;
    vlSelfRef.fullchip_tb__DOT__pmem_add = 0U;
}

VL_ATTR_COLD void Vfullchip_tb___024root___eval_final(Vfullchip_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___eval_final\n"); );
    Vfullchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfullchip_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vfullchip_tb___024root___eval_phase__stl(Vfullchip_tb___024root* vlSelf);

VL_ATTR_COLD void Vfullchip_tb___024root___eval_settle(Vfullchip_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___eval_settle\n"); );
    Vfullchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vfullchip_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("verilog/fullchip_tb.sv", 3, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vfullchip_tb___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vfullchip_tb___024root___eval_triggers__stl(Vfullchip_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___eval_triggers__stl\n"); );
    Vfullchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfullchip_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vfullchip_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfullchip_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vfullchip_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vfullchip_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vfullchip_tb___024root___stl_sequent__TOP__0(Vfullchip_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___stl_sequent__TOP__0\n"); );
    Vfullchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ fullchip_tb__DOT__core_instance__DOT__mac_in;
    fullchip_tb__DOT__core_instance__DOT__mac_in = 0;
    CData/*0:0*/ fullchip_tb__DOT__core_instance__DOT__wr_k;
    fullchip_tb__DOT__core_instance__DOT__wr_k = 0;
    // Body
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__empty 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr) 
           == (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__rd_ptr));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__full 
        = (((0x0000003fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr)) 
            == (0x0000003fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__rd_ptr))) 
           & ((1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr) 
                     >> 6U)) != (1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__rd_ptr) 
                                       >> 6U))));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__empty 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr) 
           == (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__rd_ptr));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__full 
        = (((0x0000003fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr)) 
            == (0x0000003fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__rd_ptr))) 
           & ((1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr) 
                     >> 6U)) != (1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__rd_ptr) 
                                       >> 6U))));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__empty 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr) 
           == (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__rd_ptr));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__full 
        = (((0x0000003fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr)) 
            == (0x0000003fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__rd_ptr))) 
           & ((1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr) 
                     >> 6U)) != (1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__rd_ptr) 
                                       >> 6U))));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__empty 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr) 
           == (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__rd_ptr));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__full 
        = (((0x0000003fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr)) 
            == (0x0000003fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__rd_ptr))) 
           & ((1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr) 
                     >> 6U)) != (1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__rd_ptr) 
                                       >> 6U))));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__empty 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr) 
           == (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__rd_ptr));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__full 
        = (((0x0000003fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr)) 
            == (0x0000003fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__rd_ptr))) 
           & ((1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr) 
                     >> 6U)) != (1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__rd_ptr) 
                                       >> 6U))));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__empty 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr) 
           == (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__rd_ptr));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__full 
        = (((0x0000003fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr)) 
            == (0x0000003fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__rd_ptr))) 
           & ((1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr) 
                     >> 6U)) != (1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__rd_ptr) 
                                       >> 6U))));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__empty 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr) 
           == (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__rd_ptr));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__full 
        = (((0x0000003fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr)) 
            == (0x0000003fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__rd_ptr))) 
           & ((1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr) 
                     >> 6U)) != (1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__rd_ptr) 
                                       >> 6U))));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__empty 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr) 
           == (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__rd_ptr));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__full 
        = (((0x0000003fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr)) 
            == (0x0000003fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__rd_ptr))) 
           & ((1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr) 
                     >> 6U)) != (1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__rd_ptr) 
                                       >> 6U))));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT____Vcellinp__qmem_instance__CEN 
        = (1U & (~ ((IData)(vlSelfRef.fullchip_tb__DOT__qmem_rd) 
                    | (IData)(vlSelfRef.fullchip_tb__DOT__qmem_wr))));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT____Vcellinp__kmem_instance__CEN 
        = (1U & (~ ((IData)(vlSelfRef.fullchip_tb__DOT__kmem_rd) 
                    | (IData)(vlSelfRef.fullchip_tb__DOT__kmem_wr))));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT____Vcellinp__psum_mem_instance__CEN 
        = (1U & (~ ((IData)(vlSelfRef.fullchip_tb__DOT__pmem_rd) 
                    | (IData)(vlSelfRef.fullchip_tb__DOT__pmem_wr))));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__q_chain[1U] 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__q_chain[2U] 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__q_chain[3U] 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__q_chain[4U] 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__q_chain[5U] 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__q_chain[6U] 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__q_chain[7U] 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__q_chain[8U] 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__en_chain[1U] 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__en_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__en_chain[2U] 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__en_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__en_chain[3U] 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__en_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__en_chain[4U] 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__en_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__en_chain[5U] 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__en_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__en_chain[6U] 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__en_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__en_chain[7U] 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__en_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__en_chain[8U] 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__en_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__wr_k_chain[1U] 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__wr_k_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__wr_k_chain[2U] 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__wr_k_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__wr_k_chain[3U] 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__wr_k_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__wr_k_chain[4U] 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__wr_k_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__wr_k_chain[5U] 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__wr_k_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__wr_k_chain[6U] 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__wr_k_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__wr_k_chain[7U] 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__wr_k_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__wr_k_chain[8U] 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__wr_k_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__en_chain[0U] 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__execute) 
           | (IData)(vlSelfRef.fullchip_tb__DOT__load));
    fullchip_tb__DOT__core_instance__DOT__wr_k = vlSelfRef.fullchip_tb__DOT__load;
    if (fullchip_tb__DOT__core_instance__DOT__wr_k) {
        fullchip_tb__DOT__core_instance__DOT__mac_in 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__kmem_out;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__wr_k_chain[0U] = 1U;
    } else {
        fullchip_tb__DOT__core_instance__DOT__mac_in 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__qmem_out;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__wr_k_chain[0U] = 0U;
    }
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__q_chain[0U] 
        = fullchip_tb__DOT__core_instance__DOT__mac_in;
}

VL_ATTR_COLD void Vfullchip_tb___024root___eval_stl(Vfullchip_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___eval_stl\n"); );
    Vfullchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vfullchip_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vfullchip_tb___024root___eval_phase__stl(Vfullchip_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___eval_phase__stl\n"); );
    Vfullchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vfullchip_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vfullchip_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vfullchip_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vfullchip_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfullchip_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vfullchip_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge fullchip_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge fullchip_tb.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfullchip_tb___024root___ctor_var_reset(Vfullchip_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___ctor_var_reset\n"); );
    Vfullchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->fullchip_tb__DOT__captured_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18215896558090044906ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->fullchip_tb__DOT__K[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2791315960264149260ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->fullchip_tb__DOT__Q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3658817297107357740ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->fullchip_tb__DOT__result[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10468480839729131550ull);
        }
    }
    vlSelf->fullchip_tb__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15895181487699521483ull);
    vlSelf->fullchip_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2179641919425227558ull);
    vlSelf->fullchip_tb__DOT__mem_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17098260472745021798ull);
    vlSelf->fullchip_tb__DOT__ofifo_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1586587705065041936ull);
    vlSelf->fullchip_tb__DOT__qmem_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5466934922097158243ull);
    vlSelf->fullchip_tb__DOT__qmem_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11949421811541815848ull);
    vlSelf->fullchip_tb__DOT__kmem_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15496071571669101744ull);
    vlSelf->fullchip_tb__DOT__kmem_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5710342690184643717ull);
    vlSelf->fullchip_tb__DOT__pmem_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16275572294908964740ull);
    vlSelf->fullchip_tb__DOT__pmem_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12873863744008242604ull);
    vlSelf->fullchip_tb__DOT__execute = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5205023015769365049ull);
    vlSelf->fullchip_tb__DOT__load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12110858526142415273ull);
    vlSelf->fullchip_tb__DOT__qkmem_add = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17036617449493834495ull);
    vlSelf->fullchip_tb__DOT__pmem_add = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4363289229821373682ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->fullchip_tb__DOT__temp16b, __VscopeHash, 10173109145739702438ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->fullchip_tb__DOT__core_instance__DOT__pmem_out, __VscopeHash, 16849606482329273384ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__kmem_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11043281382234215022ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__qmem_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17277663394680659388ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT____Vcellinp__qmem_instance__CEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5579876490240272279ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT____Vcellinp__kmem_instance__CEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9206327287833456548ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT____Vcellinp__psum_mem_instance__CEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13477529332769735240ull);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__en_chain[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4607844760194300903ull);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__wr_k_chain[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13472587508326044926ull);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__q_chain[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12691547579490444283ull);
    }
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6895574636905357041ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1527573946871963531ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9766378353274486811ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__wr_k_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9757801206893136890ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13168048413688627179ull);
    }
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5446890801132953547ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4156828377176048382ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13138792401397012283ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 11792596534013480268ull);
        }
    }
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10758484129108804337ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2125174319767919491ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3261821108862024030ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__wr_k_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12552413857041218495ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4268948257848703708ull);
    }
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11090813418719903658ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13486219149171730569ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9214250370625736407ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 15729908979158624246ull);
        }
    }
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1872133687426509612ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6840020018236055365ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1137990063472588103ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__wr_k_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18214487529175515243ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16491645449502345933ull);
    }
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17630531623237748121ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18312454996050836417ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1065183723520450867ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 6650323441407712971ull);
        }
    }
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10242017896117411069ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13112417263496827835ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14146229496127268676ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__wr_k_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2085668080749450783ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2107883057930206369ull);
    }
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7841465173936142217ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6212094023152674300ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10542596710985944914ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 2711527256647358354ull);
        }
    }
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9683252706000474149ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 354874126070279046ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8677983656710070596ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__wr_k_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10386630345121315543ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11210920798427502005ull);
    }
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11041212432276553317ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10617221529654960207ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2069292041429398233ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 12022053146086340446ull);
        }
    }
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6230322810109645145ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8924720679049997979ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4804686787658152088ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__wr_k_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16662320729687135813ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9242290682865371968ull);
    }
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9573087986507825676ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2515098221927390001ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4191850670451208178ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 1813471556065411347ull);
        }
    }
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2998274291046727672ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10548489963029754504ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7154971778372847179ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__wr_k_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3401794281489314351ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18203877127973839611ull);
    }
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9541856475232053363ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13783299783513667287ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 974794694600413104ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 6349733387581281631ull);
        }
    }
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15102005930197412715ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13380305450732420828ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15526097799821274098ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__wr_k_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5682584239632178758ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15460383568541984699ull);
    }
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5781906855095913024ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6311611416883105285ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8002042360015987296ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 6833418731016747001ull);
        }
    }
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1257866913204686434ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16967913443653262145ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8618881980494526456ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1348015240742458445ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 16214652641074637582ull);
    }
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4546414283539856099ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10420790883892530060ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5901321047174318596ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 934549509118460680ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 1752405947747144583ull);
    }
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7243463937410900672ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13561307444110822147ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1718752528370946090ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9444551584141648379ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 13969219189620645730ull);
    }
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12139125791115646322ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7545540397383477015ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16361629010906148631ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1290826947976690940ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 1787305089289720021ull);
    }
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2055622951643871851ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10850330992671325078ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2165878927712388095ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5516380893041300453ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 10106166229567309201ull);
    }
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18412116596192653833ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1651170014467948742ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4429252827619397373ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10364717029294480076ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 14988672601734642679ull);
    }
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14251177610107715206ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12301920724992764216ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 615723604208857057ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3467634872660632904ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 4195880028328003571ull);
    }
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15823116155807122045ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5123732159256064207ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1323802097630675527ull);
    vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9905375945023472487ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 5938556409967417356ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->fullchip_tb__DOT__core_instance__DOT__qmem_instance__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13104412315463552021ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->fullchip_tb__DOT__core_instance__DOT__kmem_instance__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16159058871848076251ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(160, vlSelf->fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory[__Vi0], __VscopeHash, 2460796564553814774ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__fullchip_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11544741238163413367ull);
    vlSelf->__Vtrigprevexpr___TOP__fullchip_tb__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11160965850437089704ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
