// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfullchip_tb__pch.h"

//============================================================
// Constructors

Vfullchip_tb::Vfullchip_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfullchip_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vfullchip_tb::Vfullchip_tb(const char* _vcname__)
    : Vfullchip_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfullchip_tb::~Vfullchip_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vfullchip_tb___024root___eval_debug_assertions(Vfullchip_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vfullchip_tb___024root___eval_static(Vfullchip_tb___024root* vlSelf);
void Vfullchip_tb___024root___eval_initial(Vfullchip_tb___024root* vlSelf);
void Vfullchip_tb___024root___eval_settle(Vfullchip_tb___024root* vlSelf);
void Vfullchip_tb___024root___eval(Vfullchip_tb___024root* vlSelf);

void Vfullchip_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfullchip_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfullchip_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vfullchip_tb___024root___eval_static(&(vlSymsp->TOP));
        Vfullchip_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vfullchip_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vfullchip_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vfullchip_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vfullchip_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vfullchip_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vfullchip_tb___024root___eval_final(Vfullchip_tb___024root* vlSelf);

VL_ATTR_COLD void Vfullchip_tb::final() {
    Vfullchip_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfullchip_tb::hierName() const { return vlSymsp->name(); }
const char* Vfullchip_tb::modelName() const { return "Vfullchip_tb"; }
unsigned Vfullchip_tb::threads() const { return 1; }
void Vfullchip_tb::prepareClone() const { contextp()->prepareClone(); }
void Vfullchip_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
