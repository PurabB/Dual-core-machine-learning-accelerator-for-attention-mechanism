// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsparsity_tb.h for the primary calling header

#include "Vsparsity_tb__pch.h"

void Vsparsity_tb___024root___nba_sequent__TOP__2(Vsparsity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___nba_sequent__TOP__2\n"); );
    Vsparsity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.sparsity_tb__DOT__dut__DOT____Vcellinp__qmem_instance__CEN 
        = (1U & (~ ((IData)(vlSelfRef.sparsity_tb__DOT__qmem_rd) 
                    | (IData)(vlSelfRef.sparsity_tb__DOT__qmem_wr))));
    vlSelfRef.sparsity_tb__DOT__dut__DOT____Vcellinp__kmem_instance__CEN 
        = (1U & (~ ((IData)(vlSelfRef.sparsity_tb__DOT__kmem_rd) 
                    | (IData)(vlSelfRef.sparsity_tb__DOT__kmem_wr))));
    vlSelfRef.sparsity_tb__DOT__dut__DOT____Vcellinp__psum_mem_instance__CEN 
        = (1U & (~ ((IData)(vlSelfRef.sparsity_tb__DOT__pmem_rd) 
                    | (IData)(vlSelfRef.sparsity_tb__DOT__pmem_wr))));
    vlSelfRef.sparsity_tb__DOT__dut__DOT__mac_array_instance__DOT__en_chain[0U] 
        = ((IData)(vlSelfRef.sparsity_tb__DOT__execute) 
           | (IData)(vlSelfRef.sparsity_tb__DOT__load));
}

void Vsparsity_tb___024root___nba_sequent__TOP__3(Vsparsity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___nba_sequent__TOP__3\n"); );
    Vsparsity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vsparsity_tb___024root___nba_comb__TOP__0(Vsparsity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___nba_comb__TOP__0\n"); );
    Vsparsity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ sparsity_tb__DOT__dut__DOT__sfp_sel;
    sparsity_tb__DOT__dut__DOT__sfp_sel = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_6;
    // Body
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
}

void Vsparsity_tb___024root___nba_comb__TOP__1(Vsparsity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___nba_comb__TOP__1\n"); );
    Vsparsity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ sparsity_tb__DOT__dut__DOT__mac_in;
    sparsity_tb__DOT__dut__DOT__mac_in = 0;
    CData/*0:0*/ sparsity_tb__DOT__dut__DOT__wr_k;
    sparsity_tb__DOT__dut__DOT__wr_k = 0;
    // Body
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

void Vsparsity_tb___024root___nba_sequent__TOP__0(Vsparsity_tb___024root* vlSelf);
void Vsparsity_tb___024root___nba_sequent__TOP__1(Vsparsity_tb___024root* vlSelf);

void Vsparsity_tb___024root___eval_nba(Vsparsity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___eval_nba\n"); );
    Vsparsity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsparsity_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsparsity_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsparsity_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsparsity_tb___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsparsity_tb___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsparsity_tb___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vsparsity_tb___024root___timing_resume(Vsparsity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___timing_resume\n"); );
    Vsparsity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vsparsity_tb___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vsparsity_tb___024root___eval_triggers__act(Vsparsity_tb___024root* vlSelf);
bool Vsparsity_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vsparsity_tb___024root___eval_act(Vsparsity_tb___024root* vlSelf);

bool Vsparsity_tb___024root___eval_phase__act(Vsparsity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___eval_phase__act\n"); );
    Vsparsity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vsparsity_tb___024root___eval_triggers__act(vlSelf);
    Vsparsity_tb___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vsparsity_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vsparsity_tb___024root___timing_resume(vlSelf);
        Vsparsity_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vsparsity_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vsparsity_tb___024root___eval_phase__nba(Vsparsity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___eval_phase__nba\n"); );
    Vsparsity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vsparsity_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vsparsity_tb___024root___eval_nba(vlSelf);
        Vsparsity_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsparsity_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vsparsity_tb___024root___eval(Vsparsity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___eval\n"); );
    Vsparsity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsparsity_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("verilog/sparsity_tb.sv", 8, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vsparsity_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("verilog/sparsity_tb.sv", 8, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vsparsity_tb___024root___eval_phase__act(vlSelf));
    } while (Vsparsity_tb___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vsparsity_tb___024root___eval_debug_assertions(Vsparsity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsparsity_tb___024root___eval_debug_assertions\n"); );
    Vsparsity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
