// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFULLCHIP_TB__SYMS_H_
#define VERILATED_VFULLCHIP_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vfullchip_tb.h"

// INCLUDE MODULE CLASSES
#include "Vfullchip_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vfullchip_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vfullchip_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vfullchip_tb___024root         TOP;

    // CONSTRUCTORS
    Vfullchip_tb__Syms(VerilatedContext* contextp, const char* namep, Vfullchip_tb* modelp);
    ~Vfullchip_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
