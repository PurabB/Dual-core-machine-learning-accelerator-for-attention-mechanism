// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmac_array_tb__pch.h"

//============================================================
// Constructors

Vmac_array_tb::Vmac_array_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmac_array_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmac_array_tb::Vmac_array_tb(const char* _vcname__)
    : Vmac_array_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmac_array_tb::~Vmac_array_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmac_array_tb___024root___eval_debug_assertions(Vmac_array_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vmac_array_tb___024root___eval_static(Vmac_array_tb___024root* vlSelf);
void Vmac_array_tb___024root___eval_initial(Vmac_array_tb___024root* vlSelf);
void Vmac_array_tb___024root___eval_settle(Vmac_array_tb___024root* vlSelf);
void Vmac_array_tb___024root___eval(Vmac_array_tb___024root* vlSelf);

void Vmac_array_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmac_array_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmac_array_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmac_array_tb___024root___eval_static(&(vlSymsp->TOP));
        Vmac_array_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vmac_array_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmac_array_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmac_array_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vmac_array_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vmac_array_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmac_array_tb___024root___eval_final(Vmac_array_tb___024root* vlSelf);

VL_ATTR_COLD void Vmac_array_tb::final() {
    Vmac_array_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmac_array_tb::hierName() const { return vlSymsp->name(); }
const char* Vmac_array_tb::modelName() const { return "Vmac_array_tb"; }
unsigned Vmac_array_tb::threads() const { return 1; }
void Vmac_array_tb::prepareClone() const { contextp()->prepareClone(); }
void Vmac_array_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
