// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSPARSITY_TB__SYMS_H_
#define VERILATED_VSPARSITY_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsparsity_tb.h"

// INCLUDE MODULE CLASSES
#include "Vsparsity_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vsparsity_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsparsity_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsparsity_tb___024root         TOP;

    // CONSTRUCTORS
    Vsparsity_tb__Syms(VerilatedContext* contextp, const char* namep, Vsparsity_tb* modelp);
    ~Vsparsity_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
