// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmac_array_tb.h for the primary calling header

#ifndef VERILATED_VMAC_ARRAY_TB___024ROOT_H_
#define VERILATED_VMAC_ARRAY_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vmac_array_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmac_array_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ mac_array_tb__DOT__clk;
        CData/*0:0*/ mac_array_tb__DOT__rst_n;
        CData/*0:0*/ mac_array_tb__DOT__en;
        CData/*0:0*/ mac_array_tb__DOT__wr_k;
        CData/*7:0*/ mac_array_tb__DOT__fifo_wr;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__load_ready_q;
        CData/*3:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__cnt_q;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__en_q;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__wr_k_q;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__load_ready_q;
        CData/*3:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__cnt_q;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__en_q;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__wr_k_q;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__load_ready_q;
        CData/*3:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__cnt_q;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__en_q;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__wr_k_q;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__load_ready_q;
        CData/*3:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__cnt_q;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__en_q;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__wr_k_q;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__load_ready_q;
        CData/*3:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__cnt_q;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__en_q;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__wr_k_q;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__load_ready_q;
        CData/*3:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__cnt_q;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__en_q;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__wr_k_q;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__load_ready_q;
        CData/*3:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__cnt_q;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__en_q;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__wr_k_q;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__load_ready_q;
        CData/*3:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__cnt_q;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__en_q;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__wr_k_q;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT____Vlvbound_h81efe8c4__0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__mac_array_tb__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__mac_array_tb__DOT__rst_n__0;
        VlWide<6>/*175:0*/ mac_array_tb__DOT__out;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ mac_array_tb__DOT__in;
        QData/*63:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__query_q;
        QData/*63:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__key_q;
        QData/*63:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__query_q;
        QData/*63:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__key_q;
        QData/*63:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__query_q;
        QData/*63:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__key_q;
        QData/*63:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__query_q;
        QData/*63:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__key_q;
        QData/*63:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__query_q;
        QData/*63:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__key_q;
        QData/*63:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__query_q;
        QData/*63:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__key_q;
        QData/*63:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__query_q;
    };
    struct {
        QData/*63:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__key_q;
        QData/*63:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__query_q;
        QData/*63:0*/ mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__key_q;
        VlUnpacked<QData/*63:0*/, 8> mac_array_tb__DOT__key_vec;
        VlUnpacked<IData/*21:0*/, 8> mac_array_tb__DOT__captured;
        VlUnpacked<CData/*0:0*/, 8> mac_array_tb__DOT__col_seen;
        VlUnpacked<CData/*0:0*/, 9> mac_array_tb__DOT__dut__DOT__en_chain;
        VlUnpacked<CData/*0:0*/, 9> mac_array_tb__DOT__dut__DOT__wr_k_chain;
        VlUnpacked<QData/*63:0*/, 9> mac_array_tb__DOT__dut__DOT__q_chain;
        VlUnpacked<CData/*0:0*/, 5> mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__compute_pipe;
        VlUnpacked<VlUnpacked<IData/*21:0*/, 8>, 4> mac_array_tb__DOT__dut__DOT__g_col__BRA__0__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data;
        VlUnpacked<CData/*0:0*/, 5> mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__compute_pipe;
        VlUnpacked<VlUnpacked<IData/*21:0*/, 8>, 4> mac_array_tb__DOT__dut__DOT__g_col__BRA__1__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data;
        VlUnpacked<CData/*0:0*/, 5> mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__compute_pipe;
        VlUnpacked<VlUnpacked<IData/*21:0*/, 8>, 4> mac_array_tb__DOT__dut__DOT__g_col__BRA__2__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data;
        VlUnpacked<CData/*0:0*/, 5> mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__compute_pipe;
        VlUnpacked<VlUnpacked<IData/*21:0*/, 8>, 4> mac_array_tb__DOT__dut__DOT__g_col__BRA__3__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data;
        VlUnpacked<CData/*0:0*/, 5> mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__compute_pipe;
        VlUnpacked<VlUnpacked<IData/*21:0*/, 8>, 4> mac_array_tb__DOT__dut__DOT__g_col__BRA__4__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data;
        VlUnpacked<CData/*0:0*/, 5> mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__compute_pipe;
        VlUnpacked<VlUnpacked<IData/*21:0*/, 8>, 4> mac_array_tb__DOT__dut__DOT__g_col__BRA__5__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data;
        VlUnpacked<CData/*0:0*/, 5> mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__compute_pipe;
        VlUnpacked<VlUnpacked<IData/*21:0*/, 8>, 4> mac_array_tb__DOT__dut__DOT__g_col__BRA__6__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data;
        VlUnpacked<CData/*0:0*/, 5> mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__compute_pipe;
        VlUnpacked<VlUnpacked<IData/*21:0*/, 8>, 4> mac_array_tb__DOT__dut__DOT__g_col__BRA__7__KET____DOT__mac_col_inst__DOT__mac_inst__DOT__stage_data;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hd3cea39c__0;
    VlTriggerScheduler __VtrigSched_hd3cea35b__0;

    // INTERNAL VARIABLES
    Vmac_array_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmac_array_tb___024root(Vmac_array_tb__Syms* symsp, const char* v__name);
    ~Vmac_array_tb___024root();
    VL_UNCOPYABLE(Vmac_array_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
