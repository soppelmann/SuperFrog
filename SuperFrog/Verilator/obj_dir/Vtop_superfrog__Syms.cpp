// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop_superfrog__Syms.h"
#include "Vtop_superfrog.h"
#include "Vtop_superfrog___024root.h"

// FUNCTIONS
Vtop_superfrog__Syms::~Vtop_superfrog__Syms()
{
}

Vtop_superfrog__Syms::Vtop_superfrog__Syms(VerilatedContext* contextp, const char* namep, Vtop_superfrog* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
