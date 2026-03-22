// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsparsity_tb__pch.h"

//============================================================
// Constructors

Vsparsity_tb::Vsparsity_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsparsity_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsparsity_tb::Vsparsity_tb(const char* _vcname__)
    : Vsparsity_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsparsity_tb::~Vsparsity_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsparsity_tb___024root___eval_debug_assertions(Vsparsity_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vsparsity_tb___024root___eval_static(Vsparsity_tb___024root* vlSelf);
void Vsparsity_tb___024root___eval_initial(Vsparsity_tb___024root* vlSelf);
void Vsparsity_tb___024root___eval_settle(Vsparsity_tb___024root* vlSelf);
void Vsparsity_tb___024root___eval(Vsparsity_tb___024root* vlSelf);

void Vsparsity_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsparsity_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsparsity_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsparsity_tb___024root___eval_static(&(vlSymsp->TOP));
        Vsparsity_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vsparsity_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsparsity_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsparsity_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vsparsity_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vsparsity_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsparsity_tb___024root___eval_final(Vsparsity_tb___024root* vlSelf);

VL_ATTR_COLD void Vsparsity_tb::final() {
    Vsparsity_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsparsity_tb::hierName() const { return vlSymsp->name(); }
const char* Vsparsity_tb::modelName() const { return "Vsparsity_tb"; }
unsigned Vsparsity_tb::threads() const { return 1; }
void Vsparsity_tb::prepareClone() const { contextp()->prepareClone(); }
void Vsparsity_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
