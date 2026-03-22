// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfullchip_tb.h for the primary calling header

#include "Vfullchip_tb__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfullchip_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vfullchip_tb___024root___eval_triggers__act(Vfullchip_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___eval_triggers__act\n"); );
    Vfullchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U) 
                                                     | ((((~ (IData)(vlSelfRef.fullchip_tb__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fullchip_tb__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.fullchip_tb__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fullchip_tb__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__fullchip_tb__DOT__clk__0 
        = vlSelfRef.fullchip_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__fullchip_tb__DOT__rst_n__0 
        = vlSelfRef.fullchip_tb__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfullchip_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vfullchip_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___trigger_anySet__act\n"); );
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

void Vfullchip_tb___024root___act_sequent__TOP__0(Vfullchip_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___act_sequent__TOP__0\n"); );
    Vfullchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ fullchip_tb__DOT__core_instance__DOT__mac_in;
    fullchip_tb__DOT__core_instance__DOT__mac_in = 0;
    CData/*0:0*/ fullchip_tb__DOT__core_instance__DOT__wr_k;
    fullchip_tb__DOT__core_instance__DOT__wr_k = 0;
    CData/*0:0*/ fullchip_tb__DOT__core_instance__DOT__sfp_sel;
    fullchip_tb__DOT__core_instance__DOT__sfp_sel = 0;
    VlWide<5>/*159:0*/ __Vtemp_13;
    // Body
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__en_chain[0U] 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__execute) 
           | (IData)(vlSelfRef.fullchip_tb__DOT__load));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT____Vcellinp__qmem_instance__CEN 
        = (1U & (~ ((IData)(vlSelfRef.fullchip_tb__DOT__qmem_rd) 
                    | (IData)(vlSelfRef.fullchip_tb__DOT__qmem_wr))));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT____Vcellinp__kmem_instance__CEN 
        = (1U & (~ ((IData)(vlSelfRef.fullchip_tb__DOT__kmem_rd) 
                    | (IData)(vlSelfRef.fullchip_tb__DOT__kmem_wr))));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT____Vcellinp__psum_mem_instance__CEN 
        = (1U & (~ ((IData)(vlSelfRef.fullchip_tb__DOT__pmem_rd) 
                    | (IData)(vlSelfRef.fullchip_tb__DOT__pmem_wr))));
    vlSelfRef.fullchip_tb__DOT__inst = ((((IData)(vlSelfRef.fullchip_tb__DOT__sfp_sel) 
                                          << 0x00000012U) 
                                         | (((IData)(vlSelfRef.fullchip_tb__DOT__sfp_start) 
                                             << 0x00000011U) 
                                            | (((IData)(vlSelfRef.fullchip_tb__DOT__ofifo_rd) 
                                                << 0x00000010U) 
                                               | ((IData)(vlSelfRef.fullchip_tb__DOT__qkmem_add) 
                                                  << 0x0000000cU)))) 
                                        | ((((IData)(vlSelfRef.fullchip_tb__DOT__pmem_add) 
                                             << 8U) 
                                            | (((IData)(vlSelfRef.fullchip_tb__DOT__execute) 
                                                << 7U) 
                                               | ((IData)(vlSelfRef.fullchip_tb__DOT__load) 
                                                  << 6U))) 
                                           | ((((IData)(vlSelfRef.fullchip_tb__DOT__qmem_rd) 
                                                << 5U) 
                                               | (((IData)(vlSelfRef.fullchip_tb__DOT__qmem_wr) 
                                                   << 4U) 
                                                  | ((IData)(vlSelfRef.fullchip_tb__DOT__kmem_rd) 
                                                     << 3U))) 
                                              | (((IData)(vlSelfRef.fullchip_tb__DOT__kmem_wr) 
                                                  << 2U) 
                                                 | (((IData)(vlSelfRef.fullchip_tb__DOT__pmem_rd) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.fullchip_tb__DOT__pmem_wr))))));
    fullchip_tb__DOT__core_instance__DOT__wr_k = (1U 
                                                  & (vlSelfRef.fullchip_tb__DOT__inst 
                                                     >> 6U));
    fullchip_tb__DOT__core_instance__DOT__mac_in = 
        ((IData)(fullchip_tb__DOT__core_instance__DOT__wr_k)
          ? vlSelfRef.fullchip_tb__DOT__core_instance__DOT__kmem_out
          : vlSelfRef.fullchip_tb__DOT__core_instance__DOT__qmem_out);
    fullchip_tb__DOT__core_instance__DOT__sfp_sel = 
        (1U & (vlSelfRef.fullchip_tb__DOT__inst >> 0x12U));
    __Vtemp_13[2U] = (((IData)((((QData)((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q
                                                 [(0x0000000fU 
                                                   & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                 << 0x00000014U) | (QData)((IData)(
                                                                   vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q
                                                                   [
                                                                   (0x0000000fU 
                                                                    & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__rd_ptr))])))) 
                       << 0x00000010U) | (((IData)(
                                                   (((QData)((IData)(
                                                                     vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q
                                                                     [
                                                                     (0x0000000fU 
                                                                      & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                                     << 0x00000014U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q
                                                                      [
                                                                      (0x0000000fU 
                                                                       & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__rd_ptr))])))) 
                                           >> 0x00000018U) 
                                          | ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q
                                                                        [
                                                                        (0x0000000fU 
                                                                         & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                                        << 0x00000014U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q
                                                                         [
                                                                         (0x0000000fU 
                                                                          & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__rd_ptr))]))) 
                                                      >> 0x00000020U)) 
                                             << 8U)));
    __Vtemp_13[3U] = (((IData)((((QData)((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q
                                                 [(0x0000000fU 
                                                   & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                 << 0x00000014U) | (QData)((IData)(
                                                                   vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q
                                                                   [
                                                                   (0x0000000fU 
                                                                    & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__rd_ptr))])))) 
                       >> 0x00000010U) | (((IData)(
                                                   (((QData)((IData)(
                                                                     vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q
                                                                     [
                                                                     (0x0000000fU 
                                                                      & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                                     << 0x00000014U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q
                                                                      [
                                                                      (0x0000000fU 
                                                                       & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__rd_ptr))])))) 
                                           << 0x00000018U) 
                                          | ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q
                                                                        [
                                                                        (0x0000000fU 
                                                                         & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                                        << 0x00000014U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q
                                                                         [
                                                                         (0x0000000fU 
                                                                          & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__rd_ptr))]))) 
                                                      >> 0x00000020U)) 
                                             << 0x00000010U)));
    __Vtemp_13[4U] = (((0x0000ffffU & ((IData)((((QData)((IData)(
                                                                 vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q
                                                                 [
                                                                 (0x0000000fU 
                                                                  & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                                 << 0x00000014U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q
                                                                  [
                                                                  (0x0000000fU 
                                                                   & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__rd_ptr))])))) 
                                       >> 8U)) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q
                                                                             [
                                                                             (0x0000000fU 
                                                                              & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                                             << 0x00000014U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q
                                                                              [
                                                                              (0x0000000fU 
                                                                               & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__rd_ptr))]))) 
                                                           >> 0x00000020U)) 
                                                  >> 0x00000010U)) 
                      | ((0x00ff0000U & ((IData)((((QData)((IData)(
                                                                   vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q
                                                                   [
                                                                   (0x0000000fU 
                                                                    & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                                   << 0x00000014U) 
                                                  | (QData)((IData)(
                                                                    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q
                                                                    [
                                                                    (0x0000000fU 
                                                                     & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__rd_ptr))])))) 
                                         >> 8U)) | 
                         ((IData)(((((QData)((IData)(
                                                     vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q
                                                     [
                                                     (0x0000000fU 
                                                      & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                     << 0x00000014U) 
                                    | (QData)((IData)(
                                                      vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q
                                                      [
                                                      (0x0000000fU 
                                                       & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__rd_ptr))]))) 
                                   >> 0x00000020U)) 
                          << 0x00000018U)));
    if (fullchip_tb__DOT__core_instance__DOT__sfp_sel) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_in[0U] 
            = (IData)((((QData)((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                        [2U])) << 0x00000028U) 
                       | (QData)((IData)(((vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                           [1U] << 0x00000014U) 
                                          | vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                          [0U])))));
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_in[1U] 
            = ((vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                [3U] << 0x0000001cU) | (IData)(((((QData)((IData)(
                                                                  vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                                                  [2U])) 
                                                  << 0x00000028U) 
                                                 | (QData)((IData)(
                                                                   ((vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                                                     [1U] 
                                                                     << 0x00000014U) 
                                                                    | vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                                                    [0U])))) 
                                                >> 0x00000020U)));
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_in[2U] 
            = ((vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                [4U] << 0x00000010U) | (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                        [3U] >> 4U));
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_in[3U] 
            = ((vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                [6U] << 0x00000018U) | (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                        [5U] << 4U));
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_in[4U] 
            = ((vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                [7U] << 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                        [6U] >> 8U));
    } else {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_in[0U] 
            = (IData)((((QData)((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q
                                        [(0x0000000fU 
                                          & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                        << 0x00000014U) | (QData)((IData)(
                                                          vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q
                                                          [
                                                          (0x0000000fU 
                                                           & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__rd_ptr))]))));
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_in[1U] 
            = (((IData)((((QData)((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q
                                          [(0x0000000fU 
                                            & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                          << 0x00000014U) | (QData)((IData)(
                                                            vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q
                                                            [
                                                            (0x0000000fU 
                                                             & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__rd_ptr))])))) 
                << 8U) | (IData)(((((QData)((IData)(
                                                    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q
                                                    [
                                                    (0x0000000fU 
                                                     & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                    << 0x00000014U) 
                                   | (QData)((IData)(
                                                     vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q
                                                     [
                                                     (0x0000000fU 
                                                      & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__rd_ptr))]))) 
                                  >> 0x00000020U)));
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_in[2U] 
            = __Vtemp_13[2U];
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_in[3U] 
            = __Vtemp_13[3U];
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_in[4U] 
            = __Vtemp_13[4U];
    }
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__wr_k_chain[0U] 
        = fullchip_tb__DOT__core_instance__DOT__wr_k;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__q_chain[0U] 
        = fullchip_tb__DOT__core_instance__DOT__mac_in;
}

void Vfullchip_tb___024root___eval_act(Vfullchip_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___eval_act\n"); );
    Vfullchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        Vfullchip_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vfullchip_tb___024root___nba_sequent__TOP__0(Vfullchip_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___nba_sequent__TOP__0\n"); );
    Vfullchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr = 0;
    CData/*4:0*/ __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr = 0;
    CData/*4:0*/ __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr = 0;
    CData/*4:0*/ __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr = 0;
    CData/*4:0*/ __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr = 0;
    CData/*4:0*/ __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr = 0;
    CData/*4:0*/ __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr = 0;
    CData/*4:0*/ __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*3:0*/ __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*3:0*/ __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*3:0*/ __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*3:0*/ __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*3:0*/ __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*3:0*/ __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*3:0*/ __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*3:0*/ __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q__v0;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q__v0 = 0;
    QData/*63:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__qmem_instance__DOT__memory__v0;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__qmem_instance__DOT__memory__v0 = 0;
    CData/*3:0*/ __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__qmem_instance__DOT__memory__v0;
    __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__qmem_instance__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__qmem_instance__DOT__memory__v0;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__qmem_instance__DOT__memory__v0 = 0;
    QData/*63:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__kmem_instance__DOT__memory__v0;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__kmem_instance__DOT__memory__v0 = 0;
    CData/*3:0*/ __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__kmem_instance__DOT__memory__v0;
    __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__kmem_instance__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__kmem_instance__DOT__memory__v0;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__kmem_instance__DOT__memory__v0 = 0;
    VlWide<5>/*159:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory__v0;
    VL_ZERO_W(160, __VdlyVal__fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory__v0);
    CData/*3:0*/ __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory__v0;
    __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory__v0;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory__v0 = 0;
    // Body
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__qmem_instance__DOT__memory__v0 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__kmem_instance__DOT__memory__v0 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory__v0 = 0U;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q__v0 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q__v0 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q__v0 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q__v0 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q__v0 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q__v0 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q__v0 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q__v0 = 0U;
    if ((1U & (~ ((~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT____Vcellinp__qmem_instance__CEN)) 
                  & (~ (IData)(vlSelfRef.fullchip_tb__DOT__qmem_wr)))))) {
        if (((~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT____Vcellinp__qmem_instance__CEN)) 
             & (IData)(vlSelfRef.fullchip_tb__DOT__qmem_wr))) {
            __VdlyVal__fullchip_tb__DOT__core_instance__DOT__qmem_instance__DOT__memory__v0 
                = vlSelfRef.fullchip_tb__DOT__mem_in;
            __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__qmem_instance__DOT__memory__v0 
                = vlSelfRef.fullchip_tb__DOT__qkmem_add;
            __VdlySet__fullchip_tb__DOT__core_instance__DOT__qmem_instance__DOT__memory__v0 = 1U;
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT____Vcellinp__kmem_instance__CEN)) 
                  & (~ (IData)(vlSelfRef.fullchip_tb__DOT__kmem_wr)))))) {
        if (((~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT____Vcellinp__kmem_instance__CEN)) 
             & (IData)(vlSelfRef.fullchip_tb__DOT__kmem_wr))) {
            __VdlyVal__fullchip_tb__DOT__core_instance__DOT__kmem_instance__DOT__memory__v0 
                = vlSelfRef.fullchip_tb__DOT__mem_in;
            __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__kmem_instance__DOT__memory__v0 
                = vlSelfRef.fullchip_tb__DOT__qkmem_add;
            __VdlySet__fullchip_tb__DOT__core_instance__DOT__kmem_instance__DOT__memory__v0 = 1U;
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT____Vcellinp__psum_mem_instance__CEN)) 
                  & (~ (IData)(vlSelfRef.fullchip_tb__DOT__pmem_wr)))))) {
        if (((~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT____Vcellinp__psum_mem_instance__CEN)) 
             & (IData)(vlSelfRef.fullchip_tb__DOT__pmem_wr))) {
            __VdlyVal__fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory__v0[0U] 
                = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_in[0U];
            __VdlyVal__fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory__v0[1U] 
                = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_in[1U];
            __VdlyVal__fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory__v0[2U] 
                = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_in[2U];
            __VdlyVal__fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory__v0[3U] 
                = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_in[3U];
            __VdlyVal__fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory__v0[4U] 
                = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_in[4U];
            __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory__v0 
                = vlSelfRef.fullchip_tb__DOT__pmem_add;
            __VdlySet__fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory__v0 = 1U;
        }
    }
    if (vlSelfRef.fullchip_tb__DOT__rst_n) {
        if (((IData)(vlSelfRef.fullchip_tb__DOT__ofifo_rd) 
             & (~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__empty)))) {
            vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__rd_ptr 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.fullchip_tb__DOT__ofifo_rd) 
             & (~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__empty)))) {
            vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__rd_ptr 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.fullchip_tb__DOT__ofifo_rd) 
             & (~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__empty)))) {
            vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__rd_ptr 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.fullchip_tb__DOT__ofifo_rd) 
             & (~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__empty)))) {
            vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__rd_ptr 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.fullchip_tb__DOT__ofifo_rd) 
             & (~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__empty)))) {
            vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__rd_ptr 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.fullchip_tb__DOT__ofifo_rd) 
             & (~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__empty)))) {
            vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__rd_ptr 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.fullchip_tb__DOT__ofifo_rd) 
             & (~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__empty)))) {
            vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__rd_ptr 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.fullchip_tb__DOT__ofifo_rd) 
             & (~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__empty)))) {
            vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__rd_ptr 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__rd_ptr)));
        }
        if ((vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe
             [4U] & (~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__full)))) {
            __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr)));
        }
        if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe
            [4U]) {
            __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q__v0 
                = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                [3U][0U];
            __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q__v0 
                = (0x0000000fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr));
            __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q__v0 = 1U;
        }
        if ((vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe
             [4U] & (~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__full)))) {
            __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr)));
        }
        if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe
            [4U]) {
            __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q__v0 
                = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                [3U][0U];
            __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q__v0 
                = (0x0000000fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr));
            __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q__v0 = 1U;
        }
        if ((vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe
             [4U] & (~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__full)))) {
            __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr)));
        }
        if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe
            [4U]) {
            __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q__v0 
                = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                [3U][0U];
            __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q__v0 
                = (0x0000000fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr));
            __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q__v0 = 1U;
        }
        if ((vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe
             [4U] & (~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__full)))) {
            __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr)));
        }
        if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe
            [4U]) {
            __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q__v0 
                = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                [3U][0U];
            __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q__v0 
                = (0x0000000fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr));
            __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q__v0 = 1U;
        }
        if ((vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe
             [4U] & (~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__full)))) {
            __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr)));
        }
        if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe
            [4U]) {
            __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q__v0 
                = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                [3U][0U];
            __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q__v0 
                = (0x0000000fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr));
            __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q__v0 = 1U;
        }
        if ((vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe
             [4U] & (~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__full)))) {
            __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr)));
        }
        if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe
            [4U]) {
            __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q__v0 
                = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                [3U][0U];
            __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q__v0 
                = (0x0000000fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr));
            __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q__v0 = 1U;
        }
        if ((vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe
             [4U] & (~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__full)))) {
            __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr)));
        }
        if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe
            [4U]) {
            __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q__v0 
                = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                [3U][0U];
            __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q__v0 
                = (0x0000000fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr));
            __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q__v0 = 1U;
        }
        if ((vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe
             [4U] & (~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__full)))) {
            __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr)));
        }
        if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe
            [4U]) {
            __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q__v0 
                = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                [3U][0U];
            __VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q__v0 
                = (0x0000000fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr));
            __VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q__v0 = 1U;
        }
    } else {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__rd_ptr = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__rd_ptr = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__rd_ptr = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__rd_ptr = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__rd_ptr = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__rd_ptr = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__rd_ptr = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__rd_ptr = 0U;
        __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr = 0U;
        __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr = 0U;
        __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr = 0U;
        __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr = 0U;
        __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr = 0U;
        __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr = 0U;
        __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr = 0U;
        __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr = 0U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT____Vcellinp__qmem_instance__CEN)) 
               & (~ (IData)(vlSelfRef.fullchip_tb__DOT__qmem_wr))))) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__qmem_out 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__qmem_instance__DOT__memory
            [vlSelfRef.fullchip_tb__DOT__qkmem_add];
    }
    if ((1U & ((~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT____Vcellinp__kmem_instance__CEN)) 
               & (~ (IData)(vlSelfRef.fullchip_tb__DOT__kmem_wr))))) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__kmem_out 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__kmem_instance__DOT__memory
            [vlSelfRef.fullchip_tb__DOT__qkmem_add];
    }
    if ((1U & ((~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT____Vcellinp__psum_mem_instance__CEN)) 
               & (~ (IData)(vlSelfRef.fullchip_tb__DOT__pmem_wr))))) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_out[0U] 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory
            [vlSelfRef.fullchip_tb__DOT__pmem_add][0U];
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_out[1U] 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory
            [vlSelfRef.fullchip_tb__DOT__pmem_add][1U];
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_out[2U] 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory
            [vlSelfRef.fullchip_tb__DOT__pmem_add][2U];
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_out[3U] 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory
            [vlSelfRef.fullchip_tb__DOT__pmem_add][3U];
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_out[4U] 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory
            [vlSelfRef.fullchip_tb__DOT__pmem_add][4U];
    }
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr 
        = __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr;
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q[__VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q__v0] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q__v0;
    }
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr 
        = __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr;
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q[__VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q__v0] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q__v0;
    }
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr 
        = __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr;
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q[__VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q__v0] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q__v0;
    }
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr 
        = __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr;
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q[__VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q__v0] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q__v0;
    }
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr 
        = __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr;
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q[__VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q__v0] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q__v0;
    }
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr 
        = __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr;
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q[__VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q__v0] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q__v0;
    }
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr 
        = __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr;
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q[__VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q__v0] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q__v0;
    }
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr 
        = __Vdly__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr;
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q[__VdlyDim0__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q__v0] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q__v0;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__qmem_instance__DOT__memory__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__qmem_instance__DOT__memory[__VdlyDim0__fullchip_tb__DOT__core_instance__DOT__qmem_instance__DOT__memory__v0] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__qmem_instance__DOT__memory__v0;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__kmem_instance__DOT__memory__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__kmem_instance__DOT__memory[__VdlyDim0__fullchip_tb__DOT__core_instance__DOT__kmem_instance__DOT__memory__v0] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__kmem_instance__DOT__memory__v0;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory[__VdlyDim0__fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory__v0][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory__v0[0U];
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory[__VdlyDim0__fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory__v0][1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory__v0[1U];
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory[__VdlyDim0__fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory__v0][2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory__v0[2U];
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory[__VdlyDim0__fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory__v0][3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory__v0[3U];
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory[__VdlyDim0__fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory__v0][4U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__psum_mem_instance__DOT__memory__v0[4U];
    }
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__empty 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr) 
           == (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__rd_ptr));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__full 
        = (((0x0000000fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr)) 
            == (0x0000000fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__rd_ptr))) 
           & ((1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__wr_ptr) 
                     >> 4U)) != (1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__rd_ptr) 
                                       >> 4U))));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__empty 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr) 
           == (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__rd_ptr));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__full 
        = (((0x0000000fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr)) 
            == (0x0000000fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__rd_ptr))) 
           & ((1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__wr_ptr) 
                     >> 4U)) != (1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__rd_ptr) 
                                       >> 4U))));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__empty 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr) 
           == (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__rd_ptr));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__full 
        = (((0x0000000fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr)) 
            == (0x0000000fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__rd_ptr))) 
           & ((1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__wr_ptr) 
                     >> 4U)) != (1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__rd_ptr) 
                                       >> 4U))));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__empty 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr) 
           == (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__rd_ptr));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__full 
        = (((0x0000000fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr)) 
            == (0x0000000fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__rd_ptr))) 
           & ((1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__wr_ptr) 
                     >> 4U)) != (1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__rd_ptr) 
                                       >> 4U))));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__empty 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr) 
           == (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__rd_ptr));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__full 
        = (((0x0000000fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr)) 
            == (0x0000000fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__rd_ptr))) 
           & ((1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__wr_ptr) 
                     >> 4U)) != (1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__rd_ptr) 
                                       >> 4U))));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__empty 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr) 
           == (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__rd_ptr));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__full 
        = (((0x0000000fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr)) 
            == (0x0000000fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__rd_ptr))) 
           & ((1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__wr_ptr) 
                     >> 4U)) != (1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__rd_ptr) 
                                       >> 4U))));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__empty 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr) 
           == (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__rd_ptr));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__full 
        = (((0x0000000fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr)) 
            == (0x0000000fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__rd_ptr))) 
           & ((1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__wr_ptr) 
                     >> 4U)) != (1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__rd_ptr) 
                                       >> 4U))));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__empty 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr) 
           == (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__rd_ptr));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__full 
        = (((0x0000000fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr)) 
            == (0x0000000fU & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__rd_ptr))) 
           & ((1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__wr_ptr) 
                     >> 4U)) != (1U & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__rd_ptr) 
                                       >> 4U))));
}

void Vfullchip_tb___024root___nba_sequent__TOP__1(Vfullchip_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___nba_sequent__TOP__1\n"); );
    Vfullchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q = 0;
    CData/*0:0*/ __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q = 0;
    CData/*3:0*/ __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q = 0;
    CData/*0:0*/ __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q = 0;
    CData/*3:0*/ __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q = 0;
    CData/*0:0*/ __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q = 0;
    CData/*3:0*/ __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q = 0;
    CData/*0:0*/ __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q = 0;
    CData/*3:0*/ __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q = 0;
    CData/*0:0*/ __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q = 0;
    CData/*3:0*/ __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q = 0;
    CData/*0:0*/ __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q = 0;
    CData/*3:0*/ __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q = 0;
    CData/*0:0*/ __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q = 0;
    CData/*3:0*/ __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q = 0;
    CData/*0:0*/ __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q = 0;
    CData/*1:0*/ __Vdly__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt = 0;
    CData/*1:0*/ __Vdly__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__state;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__state = 0;
    IData/*22:0*/ __Vdly__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_reg;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_reg = 0;
    CData/*3:0*/ __Vdly__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_step;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_step = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v5;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v5;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v5;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v5;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v5;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v5;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v5;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v5;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 = 0;
    IData/*19:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0;
    IData/*22:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v0;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v0 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v0;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v0 = 0;
    IData/*22:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v1;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v1 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v1;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v1 = 0;
    IData/*22:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v2;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v2 = 0;
    IData/*22:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v3;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v3 = 0;
    IData/*22:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v4;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v4 = 0;
    IData/*22:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v5;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v5 = 0;
    IData/*22:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v6;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v6 = 0;
    IData/*22:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v7;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v7 = 0;
    IData/*22:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v0;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v0 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v0;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v0 = 0;
    IData/*22:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v1;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v1 = 0;
    CData/*1:0*/ __VdlyDim1__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v1;
    __VdlyDim1__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v1 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v1;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v1 = 0;
    IData/*22:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v2;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v2 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v2;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v2 = 0;
    IData/*22:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v3;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v3 = 0;
    CData/*1:0*/ __VdlyDim1__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v3;
    __VdlyDim1__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v3 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v3;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v3 = 0;
    IData/*22:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v4;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v4 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v4;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v4 = 0;
    IData/*22:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v5;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v5 = 0;
    CData/*1:0*/ __VdlyDim1__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v5;
    __VdlyDim1__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v5 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v5;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v5 = 0;
    IData/*22:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v6;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v6 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v6;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v6 = 0;
    IData/*22:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v7;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v7 = 0;
    CData/*1:0*/ __VdlyDim1__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v7;
    __VdlyDim1__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v7 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v7;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v7 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v0;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v0 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v1;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v1 = 0;
    IData/*23:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v0;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v0 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v0;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v0 = 0;
    IData/*23:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v1;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v1 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v1;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v1 = 0;
    IData/*23:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v2;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v2 = 0;
    IData/*23:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v3;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v3 = 0;
    IData/*23:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v4;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v4 = 0;
    IData/*23:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v5;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v5 = 0;
    IData/*23:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v6;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v6 = 0;
    IData/*23:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v7;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v7 = 0;
    SData/*9:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v16;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v16 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v16;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v16 = 0;
    IData/*23:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v8;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v8 = 0;
    SData/*9:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v17;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v17 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v17;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v17 = 0;
    IData/*23:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v9;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v9 = 0;
    SData/*9:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v18;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v18 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v18;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v18 = 0;
    IData/*23:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v10;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v10 = 0;
    SData/*9:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v19;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v19 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v19;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v19 = 0;
    IData/*23:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v11;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v11 = 0;
    SData/*9:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v20;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v20 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v20;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v20 = 0;
    IData/*23:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v12;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v12 = 0;
    SData/*9:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v21;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v21 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v21;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v21 = 0;
    IData/*23:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v13;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v13 = 0;
    SData/*9:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v22;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v22 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v22;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v22 = 0;
    IData/*23:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v14;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v14 = 0;
    SData/*9:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v23;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v23 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v23;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v23 = 0;
    IData/*23:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v15;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v15 = 0;
    SData/*9:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v24;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v24 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v24;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v24 = 0;
    IData/*23:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v16;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v16 = 0;
    SData/*9:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v25;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v25 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v25;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v25 = 0;
    IData/*23:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v17;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v17 = 0;
    SData/*9:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v26;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v26 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v26;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v26 = 0;
    IData/*23:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v18;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v18 = 0;
    SData/*9:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v27;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v27 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v27;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v27 = 0;
    IData/*23:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v19;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v19 = 0;
    SData/*9:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v28;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v28 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v28;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v28 = 0;
    IData/*23:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v20;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v20 = 0;
    SData/*9:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v29;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v29 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v29;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v29 = 0;
    IData/*23:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v21;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v21 = 0;
    SData/*9:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v30;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v30 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v30;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v30 = 0;
    IData/*23:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v22;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v22 = 0;
    SData/*9:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v31;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v31 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v31;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v31 = 0;
    IData/*23:0*/ __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v23;
    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v23 = 0;
    CData/*0:0*/ __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v8;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v8 = 0;
    // Body
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0U;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0U;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0U;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0U;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__state 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__state;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_reg 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_reg;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_step 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_step;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v0 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v1 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v0 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v1 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v2 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v3 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v4 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v5 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v6 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v7 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v0 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v1 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v16 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v17 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v18 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v19 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v20 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v21 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v22 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v23 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v24 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v25 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v26 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v27 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v28 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v29 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v30 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v31 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v0 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v1 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v8 = 0U;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0U;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0U;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0U;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q;
    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 0U;
    __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 0U;
    if (vlSelfRef.fullchip_tb__DOT__rst_n) {
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q)))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q))))));
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 1U;
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 8U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 8U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x10U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x10U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x18U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x18U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x20U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x20U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x28U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x28U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x30U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x30U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x38U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x38U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][0U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][1U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][2U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][3U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][4U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][5U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][6U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][7U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][0U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][1U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][2U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][3U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][0U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][1U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q)))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q))))));
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 1U;
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 8U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 8U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x10U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x10U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x18U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x18U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x20U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x20U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x28U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x28U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x30U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x30U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x38U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x38U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][0U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][1U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][2U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][3U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][4U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][5U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][6U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][7U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][0U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][1U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][2U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][3U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][0U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][1U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q)))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q))))));
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 1U;
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 8U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 8U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x10U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x10U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x18U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x18U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x20U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x20U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x28U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x28U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x30U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x30U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x38U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x38U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][0U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][1U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][2U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][3U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][4U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][5U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][6U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][7U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][0U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][1U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][2U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][3U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][0U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][1U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q)))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q))))));
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 1U;
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 8U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 8U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x10U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x10U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x18U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x18U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x20U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x20U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x28U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x28U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x30U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x30U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x38U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x38U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][0U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][1U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][2U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][3U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][4U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][5U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][6U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][7U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][0U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][1U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][2U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][3U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][0U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][1U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q)))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q))))));
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 1U;
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 8U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 8U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x10U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x10U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x18U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x18U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x20U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x20U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x28U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x28U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x30U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x30U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x38U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x38U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][0U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][1U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][2U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][3U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][4U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][5U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][6U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][7U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][0U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][1U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][2U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][3U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][0U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][1U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q)))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q))))));
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 1U;
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 8U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 8U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x10U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x10U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x18U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x18U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x20U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x20U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x28U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x28U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x30U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x30U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x38U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x38U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][0U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][1U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][2U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][3U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][4U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][5U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][6U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][7U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][0U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][1U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][2U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][3U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][0U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][1U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q)))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q))))));
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 1U;
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 8U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 8U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x10U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x10U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x18U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x18U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x20U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x20U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x28U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x28U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x30U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x30U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x38U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x38U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][0U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][1U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][2U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][3U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][4U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][5U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][6U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][7U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][0U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][1U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][2U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][3U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][0U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][1U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q)))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q))))));
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0 = 1U;
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 8U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 8U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x10U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x10U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x18U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x18U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x20U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x20U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x28U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x28U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x30U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x30U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,8, 
                                                              (0x000000ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q 
                                                                          >> 0x38U))))), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,8, 
                                                          (0x000000ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q 
                                                                      >> 0x38U)))))));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][0U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][1U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][2U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][3U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][4U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][5U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][6U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [0U][7U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][0U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][1U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][2U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [1U][3U]));
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14 
            = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][0U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data
                              [2U][1U]));
        vlSelfRef.fullchip_tb__DOT__sfp_done = 0U;
        if ((0U == (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__state))) {
            if (vlSelfRef.fullchip_tb__DOT__sfp_start) {
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v0 
                    = ((0x00080000U & vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val
                        [0U]) ? (0x000fffffU & (- vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val
                                                [0U]))
                        : vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val
                       [0U]);
                __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v0 = 1U;
                __Vdly__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt = 0U;
                __Vdly__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__state = 1U;
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v1 
                    = ((0x00080000U & vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val
                        [1U]) ? (0x000fffffU & (- vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val
                                                [1U]))
                        : vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val
                       [1U]);
                __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v1 = 1U;
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v2 
                    = ((0x00080000U & vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val
                        [2U]) ? (0x000fffffU & (- vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val
                                                [2U]))
                        : vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val
                       [2U]);
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v3 
                    = ((0x00080000U & vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val
                        [3U]) ? (0x000fffffU & (- vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val
                                                [3U]))
                        : vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val
                       [3U]);
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v4 
                    = ((0x00080000U & vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val
                        [4U]) ? (0x000fffffU & (- vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val
                                                [4U]))
                        : vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val
                       [4U]);
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v5 
                    = ((0x00080000U & vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val
                        [5U]) ? (0x000fffffU & (- vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val
                                                [5U]))
                        : vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val
                       [5U]);
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v6 
                    = ((0x00080000U & vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val
                        [6U]) ? (0x000fffffU & (- vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val
                                                [6U]))
                        : vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val
                       [6U]);
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v7 
                    = ((0x00080000U & vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val
                        [7U]) ? (0x000fffffU & (- vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val
                                                [7U]))
                        : vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val
                       [7U]);
            }
        } else if ((1U == (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__state))) {
            if ((3U > (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt))) {
                if ((0U == (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt))) {
                    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v0 
                        = (0x007fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r
                                          [0U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r
                                          [1U]));
                    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v0 = 1U;
                    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v2 
                        = (0x007fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r
                                          [2U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r
                                          [3U]));
                    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v2 = 1U;
                    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v4 
                        = (0x007fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r
                                          [4U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r
                                          [5U]));
                    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v4 = 1U;
                    __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v6 
                        = (0x007fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r
                                          [6U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r
                                          [7U]));
                    __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v6 = 1U;
                } else {
                    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT____Vlvbound_h60f13c37__0 
                        = (0x007fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r
                                          [((2U >= 
                                             (3U & 
                                              ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                               - (IData)(1U))))
                                             ? (3U 
                                                & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                                   - (IData)(1U)))
                                             : 0U)]
                                          [0U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r
                                          [((2U >= 
                                             (3U & 
                                              ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                               - (IData)(1U))))
                                             ? (3U 
                                                & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                                   - (IData)(1U)))
                                             : 0U)]
                                          [1U]));
                    if ((2U >= (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt))) {
                        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v1 
                            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT____Vlvbound_h60f13c37__0;
                        __VdlyDim1__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v1 
                            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt;
                        __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v1 = 1U;
                    }
                    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT____Vlvbound_h60f13c37__0 
                        = (0x007fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r
                                          [((2U >= 
                                             (3U & 
                                              ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                               - (IData)(1U))))
                                             ? (3U 
                                                & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                                   - (IData)(1U)))
                                             : 0U)]
                                          [2U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r
                                          [((2U >= 
                                             (3U & 
                                              ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                               - (IData)(1U))))
                                             ? (3U 
                                                & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                                   - (IData)(1U)))
                                             : 0U)]
                                          [3U]));
                    if ((2U >= (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt))) {
                        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v3 
                            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT____Vlvbound_h60f13c37__0;
                        __VdlyDim1__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v3 
                            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt;
                        __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v3 = 1U;
                    }
                    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT____Vlvbound_h60f13c37__0 
                        = (0x007fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r
                                          [((2U >= 
                                             (3U & 
                                              ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                               - (IData)(1U))))
                                             ? (3U 
                                                & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                                   - (IData)(1U)))
                                             : 0U)]
                                          [4U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r
                                          [((2U >= 
                                             (3U & 
                                              ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                               - (IData)(1U))))
                                             ? (3U 
                                                & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                                   - (IData)(1U)))
                                             : 0U)]
                                          [5U]));
                    if ((2U >= (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt))) {
                        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v5 
                            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT____Vlvbound_h60f13c37__0;
                        __VdlyDim1__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v5 
                            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt;
                        __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v5 = 1U;
                    }
                    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT____Vlvbound_h60f13c37__0 
                        = (0x007fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r
                                          [((2U >= 
                                             (3U & 
                                              ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                               - (IData)(1U))))
                                             ? (3U 
                                                & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                                   - (IData)(1U)))
                                             : 0U)]
                                          [6U] + vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r
                                          [((2U >= 
                                             (3U & 
                                              ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                               - (IData)(1U))))
                                             ? (3U 
                                                & ((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt) 
                                                   - (IData)(1U)))
                                             : 0U)]
                                          [7U]));
                    if ((2U >= (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt))) {
                        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v7 
                            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT____Vlvbound_h60f13c37__0;
                        __VdlyDim1__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v7 
                            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt;
                        __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v7 = 1U;
                    }
                }
                __Vdly__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt)));
            } else if ((0U == vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r
                        [2U][0U])) {
                __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v0 = 1U;
                vlSelfRef.fullchip_tb__DOT__sfp_done = 1U;
                __Vdly__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__state = 0U;
                __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v1 = 1U;
            } else {
                __Vdly__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_reg 
                    = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r
                    [2U][0U];
                __Vdly__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_step = 0U;
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v0 
                    = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r
                    [0U];
                __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v0 = 1U;
                __Vdly__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__state = 2U;
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v1 
                    = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r
                    [1U];
                __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v1 = 1U;
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v2 
                    = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r
                    [2U];
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v3 
                    = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r
                    [3U];
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v4 
                    = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r
                    [4U];
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v5 
                    = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r
                    [5U];
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v6 
                    = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r
                    [6U];
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v7 
                    = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r
                    [7U];
            }
        } else if ((2U == (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__state))) {
            if (((0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                              vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem
                                              [0U], 1U)) 
                 >= vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_reg)) {
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v16 
                    = (1U | (0x000003feU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                            [0U] << 1U)));
                __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v16 = 1U;
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v8 
                    = (0x00ffffffU & (VL_SHIFTL_III(24,24,32, 
                                                    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem
                                                    [0U], 1U) 
                                      - vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_reg));
            } else {
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v17 
                    = (0x000003feU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                      [0U] << 1U));
                __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v17 = 1U;
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v9 
                    = (0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                                   vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem
                                                   [0U], 1U));
            }
            if ((9U == (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_step))) {
                vlSelfRef.fullchip_tb__DOT__sfp_done = 1U;
                __Vdly__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__state = 0U;
            } else {
                __Vdly__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_step 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_step)));
            }
            if (((0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                              vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem
                                              [1U], 1U)) 
                 >= vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_reg)) {
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v18 
                    = (1U | (0x000003feU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                            [1U] << 1U)));
                __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v18 = 1U;
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v10 
                    = (0x00ffffffU & (VL_SHIFTL_III(24,24,32, 
                                                    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem
                                                    [1U], 1U) 
                                      - vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_reg));
            } else {
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v19 
                    = (0x000003feU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                      [1U] << 1U));
                __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v19 = 1U;
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v11 
                    = (0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                                   vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem
                                                   [1U], 1U));
            }
            if (((0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                              vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem
                                              [2U], 1U)) 
                 >= vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_reg)) {
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v20 
                    = (1U | (0x000003feU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                            [2U] << 1U)));
                __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v20 = 1U;
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v12 
                    = (0x00ffffffU & (VL_SHIFTL_III(24,24,32, 
                                                    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem
                                                    [2U], 1U) 
                                      - vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_reg));
            } else {
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v21 
                    = (0x000003feU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                      [2U] << 1U));
                __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v21 = 1U;
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v13 
                    = (0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                                   vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem
                                                   [2U], 1U));
            }
            if (((0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                              vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem
                                              [3U], 1U)) 
                 >= vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_reg)) {
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v22 
                    = (1U | (0x000003feU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                            [3U] << 1U)));
                __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v22 = 1U;
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v14 
                    = (0x00ffffffU & (VL_SHIFTL_III(24,24,32, 
                                                    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem
                                                    [3U], 1U) 
                                      - vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_reg));
            } else {
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v23 
                    = (0x000003feU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                      [3U] << 1U));
                __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v23 = 1U;
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v15 
                    = (0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                                   vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem
                                                   [3U], 1U));
            }
            if (((0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                              vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem
                                              [4U], 1U)) 
                 >= vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_reg)) {
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v24 
                    = (1U | (0x000003feU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                            [4U] << 1U)));
                __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v24 = 1U;
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v16 
                    = (0x00ffffffU & (VL_SHIFTL_III(24,24,32, 
                                                    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem
                                                    [4U], 1U) 
                                      - vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_reg));
            } else {
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v25 
                    = (0x000003feU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                      [4U] << 1U));
                __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v25 = 1U;
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v17 
                    = (0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                                   vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem
                                                   [4U], 1U));
            }
            if (((0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                              vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem
                                              [5U], 1U)) 
                 >= vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_reg)) {
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v26 
                    = (1U | (0x000003feU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                            [5U] << 1U)));
                __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v26 = 1U;
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v18 
                    = (0x00ffffffU & (VL_SHIFTL_III(24,24,32, 
                                                    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem
                                                    [5U], 1U) 
                                      - vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_reg));
            } else {
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v27 
                    = (0x000003feU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                      [5U] << 1U));
                __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v27 = 1U;
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v19 
                    = (0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                                   vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem
                                                   [5U], 1U));
            }
            if (((0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                              vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem
                                              [6U], 1U)) 
                 >= vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_reg)) {
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v28 
                    = (1U | (0x000003feU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                            [6U] << 1U)));
                __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v28 = 1U;
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v20 
                    = (0x00ffffffU & (VL_SHIFTL_III(24,24,32, 
                                                    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem
                                                    [6U], 1U) 
                                      - vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_reg));
            } else {
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v29 
                    = (0x000003feU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                      [6U] << 1U));
                __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v29 = 1U;
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v21 
                    = (0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                                   vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem
                                                   [6U], 1U));
            }
            if (((0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                              vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem
                                              [7U], 1U)) 
                 >= vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_reg)) {
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v30 
                    = (1U | (0x000003feU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                            [7U] << 1U)));
                __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v30 = 1U;
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v22 
                    = (0x00ffffffU & (VL_SHIFTL_III(24,24,32, 
                                                    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem
                                                    [7U], 1U) 
                                      - vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_reg));
            } else {
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v31 
                    = (0x000003feU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                      [7U] << 1U));
                __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v31 = 1U;
                __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v23 
                    = (0x00ffffffU & VL_SHIFTL_III(24,24,32, 
                                                   vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem
                                                   [7U], 1U));
            }
        } else {
            __Vdly__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__state = 0U;
        }
        if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__en_q) {
            __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 
                = (1U & (~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__wr_k_q)));
            __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
            vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q 
                = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q;
            if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__wr_k_q) {
                if ((1U == (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q))) {
                    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
                    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q 
                        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q;
                    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q = 0U;
                } else if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q) {
                    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q)));
                }
            }
        } else {
            __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
            __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
        }
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe
            [0U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 1U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe
            [1U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 1U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe
            [2U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 1U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe
            [3U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 1U;
        if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__en_q) {
            __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 
                = (1U & (~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__wr_k_q)));
            __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
            vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q 
                = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q;
            if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__wr_k_q) {
                if ((2U == (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q))) {
                    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
                    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q 
                        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q;
                    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q = 0U;
                } else if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q) {
                    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q)));
                }
            }
        } else {
            __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
            __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
        }
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe
            [0U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 1U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe
            [1U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 1U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe
            [2U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 1U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe
            [3U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 1U;
        if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__en_q) {
            __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 
                = (1U & (~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__wr_k_q)));
            __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
            vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q 
                = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q;
            if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__wr_k_q) {
                if ((3U == (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q))) {
                    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
                    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q 
                        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q;
                    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q = 0U;
                } else if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q) {
                    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q)));
                }
            }
        } else {
            __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
            __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
        }
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe
            [0U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 1U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe
            [1U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 1U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe
            [2U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 1U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe
            [3U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 1U;
        if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__en_q) {
            __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 
                = (1U & (~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__wr_k_q)));
            __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
            vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q 
                = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q;
            if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__wr_k_q) {
                if ((4U == (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q))) {
                    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
                    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q 
                        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q;
                    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q = 0U;
                } else if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q) {
                    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q)));
                }
            }
        } else {
            __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
            __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
        }
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe
            [0U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 1U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe
            [1U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 1U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe
            [2U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 1U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe
            [3U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 1U;
        if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__en_q) {
            __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 
                = (1U & (~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__wr_k_q)));
            __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
            vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q 
                = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q;
            if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__wr_k_q) {
                if ((5U == (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q))) {
                    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
                    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q 
                        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q;
                    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q = 0U;
                } else if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q) {
                    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q)));
                }
            }
        } else {
            __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
            __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
        }
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe
            [0U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 1U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe
            [1U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 1U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe
            [2U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 1U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe
            [3U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 1U;
        if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__en_q) {
            __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 
                = (1U & (~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__wr_k_q)));
            __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
            vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q 
                = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q;
            if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__wr_k_q) {
                if ((6U == (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q))) {
                    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
                    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q 
                        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q;
                    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q = 0U;
                } else if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q) {
                    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q)));
                }
            }
        } else {
            __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
            __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
        }
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe
            [0U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 1U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe
            [1U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 1U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe
            [2U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 1U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe
            [3U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 1U;
        if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__en_q) {
            __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 
                = (1U & (~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__wr_k_q)));
            __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
            vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q 
                = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q;
            if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__wr_k_q) {
                if ((7U == (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q))) {
                    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
                    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q 
                        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q;
                    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q = 0U;
                } else if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q) {
                    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q)));
                }
            }
        } else {
            __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
            __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
        }
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe
            [0U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 1U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe
            [1U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 1U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe
            [2U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 1U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe
            [3U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 1U;
        if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__en_q) {
            __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 
                = (1U & (~ (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__wr_k_q)));
            __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
            vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q 
                = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__q_chain
                [0U];
            if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__wr_k_q) {
                if ((8U == (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q))) {
                    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
                    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q 
                        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__q_chain
                        [0U];
                    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q = 0U;
                } else if (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q) {
                    __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q)));
                }
            }
        } else {
            __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 0U;
            __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0 = 1U;
        }
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe
            [0U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v1 = 1U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe
            [1U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v2 = 1U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe
            [2U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v3 = 1U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe
            [3U];
        __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 
            = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v4 = 1U;
    } else {
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 1U;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 1U;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 1U;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 1U;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 1U;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 1U;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 1U;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15 = 1U;
        __Vdly__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__state = 0U;
        vlSelfRef.fullchip_tb__DOT__sfp_done = 0U;
        __Vdly__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt = 0U;
        __Vdly__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_step = 0U;
        __Vdly__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_reg = 0U;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v8 = 1U;
        __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
        __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q = 1U;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 1U;
        __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
        __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q = 1U;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 1U;
        __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
        __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q = 1U;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 1U;
        __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
        __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q = 1U;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 1U;
        __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
        __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q = 1U;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 1U;
        __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
        __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q = 1U;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 1U;
        __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
        __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q = 1U;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 1U;
        __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q = 0U;
        __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q = 1U;
        __VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v5 = 1U;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][7U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][7U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][7U] = 0U;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][7U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][7U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][7U] = 0U;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][7U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][7U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][7U] = 0U;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][7U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][7U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][7U] = 0U;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][7U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][7U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][7U] = 0U;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][7U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][7U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][7U] = 0U;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][7U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][7U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][7U] = 0U;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v0;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v1;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v2;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v3;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v4;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v5;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v6;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v7;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v8;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v9;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v10;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v11;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v12;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v13;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v14;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data__v15) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[0U][7U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[1U][7U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[2U][7U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data[3U][7U] = 0U;
    }
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt 
        = __Vdly__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__pipe_cnt;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__state 
        = __Vdly__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__state;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_reg 
        = __Vdly__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_reg;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_step 
        = __Vdly__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__div_step;
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r[0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v0;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v1) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r[1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v1;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r[2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v2;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r[3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v3;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r[4U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v4;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r[5U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v5;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r[6U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v6;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r[7U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v7;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[0U][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v0;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v1) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[__VdlyDim1__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v1][0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v1;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v2) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[0U][1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v2;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v3) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[__VdlyDim1__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v3][1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v3;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v4) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[0U][2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v4;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v5) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[__VdlyDim1__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v5][2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v5;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v6) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[0U][3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v6;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v7) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[__VdlyDim1__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v7][3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r__v7;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v0;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v1) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v1;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v2;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v3;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[4U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v4;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[5U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v5;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[6U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v6;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[7U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v7;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v16) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v8;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v17) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v9;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v18) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v10;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v19) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v11;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v20) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v12;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v21) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v13;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v22) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v14;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v23) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v15;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v24) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[4U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v16;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v25) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[4U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v17;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v26) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[5U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v18;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v27) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[5U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v19;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v28) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[6U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v20;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v29) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[6U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v21;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v30) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[7U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v22;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v31) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[7U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v23;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[0U] = 0U;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v1) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[7U] = 0U;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[0U] = 0U;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem__v1) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[7U] = 0U;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v16) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v16;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v17) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v17;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v18) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v18;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v19) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v19;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v20) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v20;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v21) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v21;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v22) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v22;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v23) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v23;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v24) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[4U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v24;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v25) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[4U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v25;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v26) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[5U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v26;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v27) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[5U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v27;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v28) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[6U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v28;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v29) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[6U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v29;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v30) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[7U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v30;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v31) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[7U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot__v31;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r__v8) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r[0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r[1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r[2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r[3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r[4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r[5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r[6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__abs_r[7U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[0U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[1U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[2U][0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[0U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[1U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[2U][1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[0U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[1U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[2U][2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[0U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[1U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[2U][3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[0U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[1U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[2U][4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[0U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[1U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[2U][5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[0U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[1U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[2U][6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[0U][7U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[1U][7U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__tree_r[2U][7U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__rem[7U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[4U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[5U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[6U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot[7U] = 0U;
    }
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q 
        = __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q;
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v1) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v2) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v3) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v4) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe__v5) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] = 0U;
    }
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__wr_k_q 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__wr_k_q));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__en_q 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__en_q));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q 
        = __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q;
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v1) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v2) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v3) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v4) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe__v5) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] = 0U;
    }
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__wr_k_q 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__wr_k_q));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__en_q 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__en_q));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q 
        = __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q;
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v1) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v2) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v3) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v4) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe__v5) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] = 0U;
    }
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__wr_k_q 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__wr_k_q));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__en_q 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__en_q));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q 
        = __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q;
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v1) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v2) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v3) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v4) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe__v5) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] = 0U;
    }
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__wr_k_q 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__wr_k_q));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__en_q 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__en_q));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q 
        = __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q;
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v1) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v2) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v3) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v4) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe__v5) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] = 0U;
    }
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__wr_k_q 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__wr_k_q));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__en_q 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__en_q));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q 
        = __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q;
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v1) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v2) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v3) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v4) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe__v5) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] = 0U;
    }
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__wr_k_q 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__wr_k_q));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__en_q 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__en_q));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q 
        = __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q;
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v1) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v2) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v3) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v4) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe__v5) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] = 0U;
    }
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__wr_k_q 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__wr_k_q));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__en_q 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__en_q));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q 
        = __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q 
        = __Vdly__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q;
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v0;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v1) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v1;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v2) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v2;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v3) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v3;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v4) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] 
            = __VdlyVal__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v4;
    }
    if (__VdlySet__fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe__v5) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[0U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[1U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[2U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[3U] = 0U;
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe[4U] = 0U;
    }
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
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__q_chain[1U] 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q;
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__wr_k_q 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__rst_n) 
           && vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__wr_k_chain
           [0U]);
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__en_q 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__rst_n) 
           && vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__en_chain
           [0U]);
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
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__en_chain[1U] 
        = vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__en_q;
}

void Vfullchip_tb___024root___nba_sequent__TOP__2(Vfullchip_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___nba_sequent__TOP__2\n"); );
    Vfullchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fullchip_tb__DOT__inst = ((((IData)(vlSelfRef.fullchip_tb__DOT__sfp_sel) 
                                          << 0x00000012U) 
                                         | (((IData)(vlSelfRef.fullchip_tb__DOT__sfp_start) 
                                             << 0x00000011U) 
                                            | (((IData)(vlSelfRef.fullchip_tb__DOT__ofifo_rd) 
                                                << 0x00000010U) 
                                               | ((IData)(vlSelfRef.fullchip_tb__DOT__qkmem_add) 
                                                  << 0x0000000cU)))) 
                                        | ((((IData)(vlSelfRef.fullchip_tb__DOT__pmem_add) 
                                             << 8U) 
                                            | (((IData)(vlSelfRef.fullchip_tb__DOT__execute) 
                                                << 7U) 
                                               | ((IData)(vlSelfRef.fullchip_tb__DOT__load) 
                                                  << 6U))) 
                                           | ((((IData)(vlSelfRef.fullchip_tb__DOT__qmem_rd) 
                                                << 5U) 
                                               | (((IData)(vlSelfRef.fullchip_tb__DOT__qmem_wr) 
                                                   << 4U) 
                                                  | ((IData)(vlSelfRef.fullchip_tb__DOT__kmem_rd) 
                                                     << 3U))) 
                                              | (((IData)(vlSelfRef.fullchip_tb__DOT__kmem_wr) 
                                                  << 2U) 
                                                 | (((IData)(vlSelfRef.fullchip_tb__DOT__pmem_rd) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.fullchip_tb__DOT__pmem_wr))))));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT____Vcellinp__qmem_instance__CEN 
        = (1U & (~ ((IData)(vlSelfRef.fullchip_tb__DOT__qmem_rd) 
                    | (IData)(vlSelfRef.fullchip_tb__DOT__qmem_wr))));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT____Vcellinp__kmem_instance__CEN 
        = (1U & (~ ((IData)(vlSelfRef.fullchip_tb__DOT__kmem_rd) 
                    | (IData)(vlSelfRef.fullchip_tb__DOT__kmem_wr))));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT____Vcellinp__psum_mem_instance__CEN 
        = (1U & (~ ((IData)(vlSelfRef.fullchip_tb__DOT__pmem_rd) 
                    | (IData)(vlSelfRef.fullchip_tb__DOT__pmem_wr))));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__mac_array_instance__DOT__en_chain[0U] 
        = ((IData)(vlSelfRef.fullchip_tb__DOT__execute) 
           | (IData)(vlSelfRef.fullchip_tb__DOT__load));
}

void Vfullchip_tb___024root___nba_sequent__TOP__3(Vfullchip_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___nba_sequent__TOP__3\n"); );
    Vfullchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val[0U] 
        = (0x000fffffU & vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_out[0U]);
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val[1U] 
        = (0x000fffffU & ((vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_out[1U] 
                           << 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_out[0U] 
                                              >> 0x00000014U)));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val[2U] 
        = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_out[1U] 
                          >> 8U));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val[3U] 
        = (0x000fffffU & ((vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_out[2U] 
                           << 4U) | (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_out[1U] 
                                     >> 0x0000001cU)));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val[4U] 
        = (0x000fffffU & ((vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_out[3U] 
                           << 0x00000010U) | (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_out[2U] 
                                              >> 0x00000010U)));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val[5U] 
        = (0x000fffffU & (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_out[3U] 
                          >> 4U));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val[6U] 
        = (0x000fffffU & ((vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_out[4U] 
                           << 8U) | (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_out[3U] 
                                     >> 0x00000018U)));
    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__inp_val[7U] 
        = (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_out[4U] 
           >> 0x0000000cU);
}

void Vfullchip_tb___024root___nba_comb__TOP__0(Vfullchip_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___nba_comb__TOP__0\n"); );
    Vfullchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ fullchip_tb__DOT__core_instance__DOT__sfp_sel;
    fullchip_tb__DOT__core_instance__DOT__sfp_sel = 0;
    VlWide<5>/*159:0*/ __Vtemp_13;
    // Body
    fullchip_tb__DOT__core_instance__DOT__sfp_sel = 
        (1U & (vlSelfRef.fullchip_tb__DOT__inst >> 0x12U));
    __Vtemp_13[2U] = (((IData)((((QData)((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q
                                                 [(0x0000000fU 
                                                   & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                 << 0x00000014U) | (QData)((IData)(
                                                                   vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q
                                                                   [
                                                                   (0x0000000fU 
                                                                    & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__rd_ptr))])))) 
                       << 0x00000010U) | (((IData)(
                                                   (((QData)((IData)(
                                                                     vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q
                                                                     [
                                                                     (0x0000000fU 
                                                                      & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                                     << 0x00000014U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q
                                                                      [
                                                                      (0x0000000fU 
                                                                       & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__rd_ptr))])))) 
                                           >> 0x00000018U) 
                                          | ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q
                                                                        [
                                                                        (0x0000000fU 
                                                                         & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                                        << 0x00000014U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q
                                                                         [
                                                                         (0x0000000fU 
                                                                          & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__rd_ptr))]))) 
                                                      >> 0x00000020U)) 
                                             << 8U)));
    __Vtemp_13[3U] = (((IData)((((QData)((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q
                                                 [(0x0000000fU 
                                                   & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                 << 0x00000014U) | (QData)((IData)(
                                                                   vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q
                                                                   [
                                                                   (0x0000000fU 
                                                                    & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__rd_ptr))])))) 
                       >> 0x00000010U) | (((IData)(
                                                   (((QData)((IData)(
                                                                     vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q
                                                                     [
                                                                     (0x0000000fU 
                                                                      & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                                     << 0x00000014U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q
                                                                      [
                                                                      (0x0000000fU 
                                                                       & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__rd_ptr))])))) 
                                           << 0x00000018U) 
                                          | ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q
                                                                        [
                                                                        (0x0000000fU 
                                                                         & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                                        << 0x00000014U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q
                                                                         [
                                                                         (0x0000000fU 
                                                                          & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__rd_ptr))]))) 
                                                      >> 0x00000020U)) 
                                             << 0x00000010U)));
    __Vtemp_13[4U] = (((0x0000ffffU & ((IData)((((QData)((IData)(
                                                                 vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q
                                                                 [
                                                                 (0x0000000fU 
                                                                  & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                                 << 0x00000014U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q
                                                                  [
                                                                  (0x0000000fU 
                                                                   & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__rd_ptr))])))) 
                                       >> 8U)) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__q
                                                                             [
                                                                             (0x0000000fU 
                                                                              & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__5__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                                             << 0x00000014U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__q
                                                                              [
                                                                              (0x0000000fU 
                                                                               & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__4__KET____DOT__fifo_instance__DOT__rd_ptr))]))) 
                                                           >> 0x00000020U)) 
                                                  >> 0x00000010U)) 
                      | ((0x00ff0000U & ((IData)((((QData)((IData)(
                                                                   vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q
                                                                   [
                                                                   (0x0000000fU 
                                                                    & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                                   << 0x00000014U) 
                                                  | (QData)((IData)(
                                                                    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q
                                                                    [
                                                                    (0x0000000fU 
                                                                     & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__rd_ptr))])))) 
                                         >> 8U)) | 
                         ((IData)(((((QData)((IData)(
                                                     vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__q
                                                     [
                                                     (0x0000000fU 
                                                      & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__7__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                     << 0x00000014U) 
                                    | (QData)((IData)(
                                                      vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__q
                                                      [
                                                      (0x0000000fU 
                                                       & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__6__KET____DOT__fifo_instance__DOT__rd_ptr))]))) 
                                   >> 0x00000020U)) 
                          << 0x00000018U)));
    if (fullchip_tb__DOT__core_instance__DOT__sfp_sel) {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_in[0U] 
            = (IData)((((QData)((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                        [2U])) << 0x00000028U) 
                       | (QData)((IData)(((vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                           [1U] << 0x00000014U) 
                                          | vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                          [0U])))));
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_in[1U] 
            = ((vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                [3U] << 0x0000001cU) | (IData)(((((QData)((IData)(
                                                                  vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                                                  [2U])) 
                                                  << 0x00000028U) 
                                                 | (QData)((IData)(
                                                                   ((vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                                                     [1U] 
                                                                     << 0x00000014U) 
                                                                    | vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                                                    [0U])))) 
                                                >> 0x00000020U)));
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_in[2U] 
            = ((vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                [4U] << 0x00000010U) | (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                        [3U] >> 4U));
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_in[3U] 
            = ((vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                [6U] << 0x00000018U) | (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                        [5U] << 4U));
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_in[4U] 
            = ((vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                [7U] << 0x0000000cU) | (vlSelfRef.fullchip_tb__DOT__core_instance__DOT__sfp_row_inst__DOT__quot
                                        [6U] >> 8U));
    } else {
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_in[0U] 
            = (IData)((((QData)((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q
                                        [(0x0000000fU 
                                          & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                        << 0x00000014U) | (QData)((IData)(
                                                          vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q
                                                          [
                                                          (0x0000000fU 
                                                           & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__rd_ptr))]))));
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_in[1U] 
            = (((IData)((((QData)((IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__q
                                          [(0x0000000fU 
                                            & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__3__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                          << 0x00000014U) | (QData)((IData)(
                                                            vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__q
                                                            [
                                                            (0x0000000fU 
                                                             & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__2__KET____DOT__fifo_instance__DOT__rd_ptr))])))) 
                << 8U) | (IData)(((((QData)((IData)(
                                                    vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__q
                                                    [
                                                    (0x0000000fU 
                                                     & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__1__KET____DOT__fifo_instance__DOT__rd_ptr))])) 
                                    << 0x00000014U) 
                                   | (QData)((IData)(
                                                     vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__q
                                                     [
                                                     (0x0000000fU 
                                                      & (IData)(vlSelfRef.fullchip_tb__DOT__core_instance__DOT__ofifo_inst__DOT__g_col_idx__BRA__0__KET____DOT__fifo_instance__DOT__rd_ptr))]))) 
                                  >> 0x00000020U)));
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_in[2U] 
            = __Vtemp_13[2U];
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_in[3U] 
            = __Vtemp_13[3U];
        vlSelfRef.fullchip_tb__DOT__core_instance__DOT__pmem_in[4U] 
            = __Vtemp_13[4U];
    }
}

void Vfullchip_tb___024root___nba_comb__TOP__1(Vfullchip_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___nba_comb__TOP__1\n"); );
    Vfullchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ fullchip_tb__DOT__core_instance__DOT__mac_in;
    fullchip_tb__DOT__core_instance__DOT__mac_in = 0;
    CData/*0:0*/ fullchip_tb__DOT__core_instance__DOT__wr_k;
    fullchip_tb__DOT__core_instance__DOT__wr_k = 0;
    // Body
    fullchip_tb__DOT__core_instance__DOT__wr_k = (1U 
                                                  & (vlSelfRef.fullchip_tb__DOT__inst 
                                                     >> 6U));
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

void Vfullchip_tb___024root___eval_nba(Vfullchip_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___eval_nba\n"); );
    Vfullchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vfullchip_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vfullchip_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vfullchip_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vfullchip_tb___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vfullchip_tb___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vfullchip_tb___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vfullchip_tb___024root___timing_resume(Vfullchip_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___timing_resume\n"); );
    Vfullchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vfullchip_tb___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vfullchip_tb___024root___eval_phase__act(Vfullchip_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___eval_phase__act\n"); );
    Vfullchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vfullchip_tb___024root___eval_triggers__act(vlSelf);
    Vfullchip_tb___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vfullchip_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vfullchip_tb___024root___timing_resume(vlSelf);
        Vfullchip_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vfullchip_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vfullchip_tb___024root___eval_phase__nba(Vfullchip_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___eval_phase__nba\n"); );
    Vfullchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vfullchip_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vfullchip_tb___024root___eval_nba(vlSelf);
        Vfullchip_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vfullchip_tb___024root___eval(Vfullchip_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___eval\n"); );
    Vfullchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vfullchip_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("fullchip_tb.sv", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vfullchip_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("fullchip_tb.sv", 3, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vfullchip_tb___024root___eval_phase__act(vlSelf));
    } while (Vfullchip_tb___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vfullchip_tb___024root___eval_debug_assertions(Vfullchip_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullchip_tb___024root___eval_debug_assertions\n"); );
    Vfullchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
