// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_superfrog.h for the primary calling header

#include "verilated.h"

#include "Vtop_superfrog__Syms.h"
#include "Vtop_superfrog__Syms.h"
#include "Vtop_superfrog___024root.h"

void Vtop_superfrog___024root___ctor_var_reset(Vtop_superfrog___024root* vlSelf);

Vtop_superfrog___024root::Vtop_superfrog___024root(Vtop_superfrog__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_superfrog___024root___ctor_var_reset(this);
}

void Vtop_superfrog___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_superfrog___024root::~Vtop_superfrog___024root() {
}
