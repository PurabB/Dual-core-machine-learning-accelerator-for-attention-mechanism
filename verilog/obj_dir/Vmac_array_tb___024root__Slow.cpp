// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmac_array_tb.h for the primary calling header

#include "Vmac_array_tb__pch.h"

void Vmac_array_tb___024root___ctor_var_reset(Vmac_array_tb___024root* vlSelf);

Vmac_array_tb___024root::Vmac_array_tb___024root(Vmac_array_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmac_array_tb___024root___ctor_var_reset(this);
}

void Vmac_array_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmac_array_tb___024root::~Vmac_array_tb___024root() {
}
