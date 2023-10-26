// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP_SUPERFROG__SYMS_H_
#define VERILATED_VTOP_SUPERFROG__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop_superfrog.h"

// INCLUDE MODULE CLASSES
#include "Vtop_superfrog___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop_superfrog__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop_superfrog* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop_superfrog___024root       TOP;

    // CONSTRUCTORS
    Vtop_superfrog__Syms(VerilatedContext* contextp, const char* namep, Vtop_superfrog* modelp);
    ~Vtop_superfrog__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
