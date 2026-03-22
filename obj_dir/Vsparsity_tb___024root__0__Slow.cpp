// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsparsity_tb.h for the primary calling header

#include "Vsparsity_tb__pch.h"

VL_ATTR_COLD void Vsparsity_tb___024root___eval_static__TOP(Vsparsity_tb___024root* vlSelf);

VL_ATTR_COLD void Vsparsity_tb___024root___eval_static(Vsparsity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___eval_static\n"); );
    Vsparsity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsparsity_tb___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__sparsity_tb__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__sparsity_tb__DOT__rst_n__0 = 0U;
}

VL_ATTR_COLD void Vsparsity_tb___024root___eval_static__TOP(Vsparsity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___eval_static__TOP\n"); );
    Vsparsity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sparsity_tb__DOT__rst_n = 0U;
    vlSelfRef.sparsity_tb__DOT__clk = 0U;
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
    vlSelfRef.sparsity_tb__DOT__enable_elem_sparsity = 0U;
    vlSelfRef.sparsity_tb__DOT__threshold_elem = 0U;
    vlSelfRef.sparsity_tb__DOT__enable_row_sparsity = 0U;
    vlSelfRef.sparsity_tb__DOT__threshold_row = 0U;
}

VL_ATTR_COLD void Vsparsity_tb___024root___eval_final(Vsparsity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___eval_final\n"); );
    Vsparsity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsparsity_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsparsity_tb___024root___eval_phase__stl(Vsparsity_tb___024root* vlSelf);

VL_ATTR_COLD void Vsparsity_tb___024root___eval_settle(Vsparsity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___eval_settle\n"); );
    Vsparsity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vsparsity_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("verilog/sparsity_tb.sv", 8, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vsparsity_tb___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vsparsity_tb___024root___eval_triggers__stl(Vsparsity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___eval_triggers__stl\n"); );
    Vsparsity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsparsity_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vsparsity_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsparsity_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vsparsity_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vsparsity_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vsparsity_tb___024root___stl_sequent__TOP__0(Vsparsity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___stl_sequent__TOP__0\n"); );
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
    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val[0U] 
        = (0x000fffffU & vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_out[0U]);
    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val[1U] 
        = (0x000fffffU & ((vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_out[1U] 
                           << 0x0000000cU) | (vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_out[0U] 
                                              >> 0x00000014U)));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val[2U] 
        = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_out[1U] 
                          >> 8U));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val[3U] 
        = (0x000fffffU & ((vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_out[2U] 
                           << 4U) | (vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_out[1U] 
                                     >> 0x0000001cU)));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val[4U] 
        = (0x000fffffU & ((vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_out[3U] 
                           << 0x00000010U) | (vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_out[2U] 
                                              >> 0x00000010U)));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val[5U] 
        = (0x000fffffU & (vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_out[3U] 
                          >> 4U));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val[6U] 
        = (0x000fffffU & ((vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_out[4U] 
                           << 8U) | (vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_out[3U] 
                                     >> 0x00000018U)));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val[7U] 
        = (vlSelfRef.sparsity_tb__DOT__dut__DOT__pmem_out[4U] 
           >> 0x0000000cU);
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__q_chain[1U] 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q;
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
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__en_chain[1U] 
        = vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__en_q;
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
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__en_chain[0U] 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__execute) 
           | (IData)(vlSelfRef.sparsity_tb__DOT__load));
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
    sparsity_tb__DOT__dut__DOT__wr_k = (1U & (vlSelfRef.sparsity_tb__DOT__inst 
                                              >> 6U));
    if (sparsity_tb__DOT__dut__DOT__wr_k) {
        sparsity_tb__DOT__dut__DOT__mac_in = vlSelfRef.sparsity_tb__DOT__dut__DOT__kmem_out;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__wr_k_chain[0U] = 1U;
    } else {
        sparsity_tb__DOT__dut__DOT__mac_in = vlSelfRef.sparsity_tb__DOT__dut__DOT__qmem_out;
        vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__wr_k_chain[0U] = 0U;
    }
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__q_chain[0U] 
        = sparsity_tb__DOT__dut__DOT__mac_in;
}

VL_ATTR_COLD void Vsparsity_tb___024root___eval_stl(Vsparsity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___eval_stl\n"); );
    Vsparsity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vsparsity_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vsparsity_tb___024root___eval_phase__stl(Vsparsity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___eval_phase__stl\n"); );
    Vsparsity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsparsity_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vsparsity_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vsparsity_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vsparsity_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsparsity_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vsparsity_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge sparsity_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge sparsity_tb.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsparsity_tb___024root___ctor_var_reset(Vsparsity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___ctor_var_reset\n"); );
    Vsparsity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->sparsity_tb__DOT__captured_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4612201296061968398ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->sparsity_tb__DOT__K[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8997213173209818249ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->sparsity_tb__DOT__Q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15477213000422683464ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->sparsity_tb__DOT__result[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15262132458972484604ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->sparsity_tb__DOT__abs_result[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3883522020291966252ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sparsity_tb__DOT__row_sums[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14799113429320672975ull);
    }
    vlSelf->sparsity_tb__DOT__q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 937994925309409410ull);
    vlSelf->sparsity_tb__DOT__pass_cnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13867831312072099169ull);
    vlSelf->sparsity_tb__DOT__fail_cnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10779302897919318296ull);
    vlSelf->sparsity_tb__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16700812448171808664ull);
    vlSelf->sparsity_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1966814534812871647ull);
    vlSelf->sparsity_tb__DOT__mem_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18417151666339632523ull);
    vlSelf->sparsity_tb__DOT__inst = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 17393231545842263259ull);
    vlSelf->sparsity_tb__DOT__ofifo_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4393136486517231845ull);
    vlSelf->sparsity_tb__DOT__qmem_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13674484815516748732ull);
    vlSelf->sparsity_tb__DOT__qmem_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13633309720295034082ull);
    vlSelf->sparsity_tb__DOT__kmem_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5728016616903629409ull);
    vlSelf->sparsity_tb__DOT__kmem_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7665649199046863514ull);
    vlSelf->sparsity_tb__DOT__pmem_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10172311211368236766ull);
    vlSelf->sparsity_tb__DOT__pmem_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8074690875248590963ull);
    vlSelf->sparsity_tb__DOT__execute = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7995622889937876805ull);
    vlSelf->sparsity_tb__DOT__load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 176987643252480643ull);
    vlSelf->sparsity_tb__DOT__sfp_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12668334590813489953ull);
    vlSelf->sparsity_tb__DOT__sfp_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17195534000585106791ull);
    vlSelf->sparsity_tb__DOT__qkmem_add = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1885258873105538159ull);
    vlSelf->sparsity_tb__DOT__pmem_add = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18275591059898455315ull);
    vlSelf->sparsity_tb__DOT__enable_elem_sparsity = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12873808806291615117ull);
    vlSelf->sparsity_tb__DOT__threshold_elem = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 15543507570152876438ull);
    vlSelf->sparsity_tb__DOT__enable_row_sparsity = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17962711971042202427ull);
    vlSelf->sparsity_tb__DOT__threshold_row = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12811334127940060775ull);
    vlSelf->sparsity_tb__DOT__sfp_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14983983156407655657ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->sparsity_tb__DOT__hw_result[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 681618949284398923ull);
        }
    }
    VL_SCOPED_RAND_RESET_W(160, vlSelf->sparsity_tb__DOT__dut__DOT__pmem_out, __VscopeHash, 1222469809621670208ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__kmem_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9347358349575102509ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__qmem_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10658280138620237655ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->sparsity_tb__DOT__dut__DOT__pmem_in, __VscopeHash, 11103475659830069011ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->sparsity_tb__DOT__dut__DOT__gated_array_out, __VscopeHash, 13654979567473380347ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__fifo_wr_gated = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3456502429143816237ull);
    vlSelf->sparsity_tb__DOT__dut__DOT____Vcellinp__qmem_instance__CEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4535999411804008439ull);
    vlSelf->sparsity_tb__DOT__dut__DOT____Vcellinp__kmem_instance__CEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13518287472842394401ull);
    vlSelf->sparsity_tb__DOT__dut__DOT____Vcellinp__psum_mem_instance__CEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13798751793050884824ull);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__en_chain[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12357460634394514896ull);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__wr_k_chain[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14462488544467690626ull);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__q_chain[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12339973184968518284ull);
    }
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1677625553441717044ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9994399156362686541ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10962185805967379186ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__wr_k_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16481359921422844932ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3601953424899233912ull);
    }
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18378454853151127772ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15774943870747723176ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12084717001704660376ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 17352341076537038608ull);
        }
    }
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7426797049089234460ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16992300980637624188ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4079734652030181484ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__wr_k_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10206425225216521978ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13553667655465141704ull);
    }
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8246818594088264378ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10506231518614260553ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5344088360310657767ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 4366327359844119763ull);
        }
    }
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8302605246570444115ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 293666523124698797ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7043092981792340246ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__wr_k_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15869770534790752537ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16972398413836797515ull);
    }
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14337514644219386434ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16923919156176117099ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6218591422013154230ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 9595908626961771028ull);
        }
    }
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5704364539053018457ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14066923666914419789ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10407519509261620169ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__wr_k_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4314631782863064219ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12030376395175371134ull);
    }
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13899904061542784295ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14834232843158679218ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17523764388770661396ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 14487631398422642761ull);
        }
    }
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9280251787809443469ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12693669660249397188ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8660273675684547610ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__wr_k_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3495230516535556519ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8912726437145476354ull);
    }
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 632055356432670237ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6937307867024407721ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5878193618053563534ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 11936651738346998317ull);
        }
    }
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4256666191988713013ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12303940127819830250ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6206297657087293132ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__wr_k_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 558318326073366956ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2548621985310210684ull);
    }
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 441488024060767983ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8817153391234218028ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6401889983415972350ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 5458244274581804501ull);
        }
    }
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17825310385866262997ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4072945741388493066ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17398689870915163210ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__wr_k_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16658298153660346981ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13183203307015272908ull);
    }
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 111656077755036814ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9179572842272739945ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7363659566798562188ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 10851843473710071368ull);
        }
    }
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7266531172565218293ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14808478533775160259ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3149774493589711666ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__wr_k_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3690126368578280939ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1277423420833720599ull);
    }
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2077857489342212715ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15009305759624738208ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 904576834916818981ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 11955830731672827459ull);
        }
    }
    vlSelf->sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5855623964502067322ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12214088169740032578ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7286022637226419966ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8904147108611518976ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17490627733852574015ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9132930883020159730ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10915702256842871801ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__sparsity_ctrl_inst__DOT____VdfgRegularize_h643dd447_0_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15633245516697576606ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14627594955833248144ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6169091748893194152ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17195600231177237304ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11478087297929322275ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 11068140656413191338ull);
    }
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13924578781164683110ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13729238018753518371ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9710988791569179828ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15283911330634510713ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 9046838155681404244ull);
    }
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 554170942023931726ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12440151931461714497ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10846211658173587880ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15649706035147062088ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 12505912387251886528ull);
    }
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13302012256000795695ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2836882987503462057ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14479430619355173351ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2069387703413437268ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 4941243783046903151ull);
    }
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9855594218365299506ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5771931533370488295ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 831966407163582458ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8847990192967312174ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 1444582011473870603ull);
    }
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3987613948628484705ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10877223358024839222ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18366289474418367225ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11362823694221171970ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 5881078383400050406ull);
    }
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15414717415526947367ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7070768645418197347ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7692766025945753772ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7923992452678192962ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 5651160770722960795ull);
    }
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11987967871122476770ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3154910637500737685ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2207398252279739618ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2910007820821574763ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->sparsity_tb__DOT__dut__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 901421027013630274ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__inp_val[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 8254252364041326794ull);
    }
    vlSelf->sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3960428919932096616ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__abs_r[__Vi0] = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14626828329537904842ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__sgn_r[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14451177513209221854ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__tree_r[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11621844405107321608ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__rem[__Vi0] = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3069407737411464305ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__quot[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11721390570374211991ull);
    }
    vlSelf->sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_reg = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 18192201692910311368ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__pipe_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2457472822098777732ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT__div_step = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5404530594018206134ull);
    vlSelf->sparsity_tb__DOT__dut__DOT__sfp_row_inst__DOT____Vlvbound_h60f13c37__0 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13533328969024533979ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->sparsity_tb__DOT__dut__DOT__qmem_instance__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3518871278891055986ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->sparsity_tb__DOT__dut__DOT__kmem_instance__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3452856456365447892ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(160, vlSelf->sparsity_tb__DOT__dut__DOT__psum_mem_instance__DOT__memory[__Vi0], __VscopeHash, 7752056077094539659ull);
    }
    vlSelf->__VdfgRegularize_h4af1c392_0_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15622883219554904228ull);
    vlSelf->__VdfgRegularize_h4af1c392_0_1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8399463045488174145ull);
    vlSelf->__VdfgRegularize_h4af1c392_0_2 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9592758376248906270ull);
    vlSelf->__VdfgRegularize_h4af1c392_0_3 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5398325360102644887ull);
    vlSelf->__VdfgRegularize_h4af1c392_0_4 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12797695593639495874ull);
    vlSelf->__VdfgRegularize_h4af1c392_0_5 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14640810569010940550ull);
    vlSelf->__VdfgRegularize_h4af1c392_0_6 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 72035722664994342ull);
    vlSelf->__VdfgRegularize_h4af1c392_0_7 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8381826735114697178ull);
    vlSelf->__Vtask_sparsity_tb__DOT__verify_qk__17__exp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10115955225946057937ull);
    vlSelf->__Vtask_sparsity_tb__DOT__verify_qk__17__kc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14063335854452394715ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__sparsity_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9089315085597952211ull);
    vlSelf->__Vtrigprevexpr___TOP__sparsity_tb__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17433420925201006381ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
