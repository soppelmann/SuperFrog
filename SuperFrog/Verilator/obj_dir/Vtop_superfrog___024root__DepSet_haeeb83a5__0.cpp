// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_superfrog.h for the primary calling header

#include "verilated.h"

#include "Vtop_superfrog__Syms.h"
#include "Vtop_superfrog__Syms.h"
#include "Vtop_superfrog___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_superfrog___024root___dump_triggers__ico(Vtop_superfrog___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_superfrog___024root___eval_triggers__ico(Vtop_superfrog___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_superfrog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_superfrog___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_superfrog___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_superfrog___024root___dump_triggers__act(Vtop_superfrog___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_superfrog___024root___eval_triggers__act(Vtop_superfrog___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_superfrog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_superfrog___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk_pix) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_pix__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk_pix__0 = vlSelf->clk_pix;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_superfrog___024root___dump_triggers__act(vlSelf);
    }
#endif
}
