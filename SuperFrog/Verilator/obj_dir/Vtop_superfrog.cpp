// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop_superfrog.h"
#include "Vtop_superfrog__Syms.h"

//============================================================
// Constructors

Vtop_superfrog::Vtop_superfrog(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop_superfrog__Syms(contextp(), _vcname__, this)}
    , clk_pix{vlSymsp->TOP.clk_pix}
    , rst_pix{vlSymsp->TOP.rst_pix}
    , sdl_de{vlSymsp->TOP.sdl_de}
    , sdl_frame{vlSymsp->TOP.sdl_frame}
    , sdl_r{vlSymsp->TOP.sdl_r}
    , sdl_g{vlSymsp->TOP.sdl_g}
    , sdl_b{vlSymsp->TOP.sdl_b}
    , btn_rst_n{vlSymsp->TOP.btn_rst_n}
    , btn_right{vlSymsp->TOP.btn_right}
    , btn_left{vlSymsp->TOP.btn_left}
    , btn_up{vlSymsp->TOP.btn_up}
    , sdl_sx{vlSymsp->TOP.sdl_sx}
    , sdl_sy{vlSymsp->TOP.sdl_sy}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtop_superfrog::Vtop_superfrog(const char* _vcname__)
    : Vtop_superfrog(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop_superfrog::~Vtop_superfrog() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop_superfrog___024root___eval_debug_assertions(Vtop_superfrog___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop_superfrog___024root___eval_static(Vtop_superfrog___024root* vlSelf);
void Vtop_superfrog___024root___eval_initial(Vtop_superfrog___024root* vlSelf);
void Vtop_superfrog___024root___eval_settle(Vtop_superfrog___024root* vlSelf);
void Vtop_superfrog___024root___eval(Vtop_superfrog___024root* vlSelf);

void Vtop_superfrog::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop_superfrog::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop_superfrog___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop_superfrog___024root___eval_static(&(vlSymsp->TOP));
        Vtop_superfrog___024root___eval_initial(&(vlSymsp->TOP));
        Vtop_superfrog___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop_superfrog___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtop_superfrog::eventsPending() { return false; }

uint64_t Vtop_superfrog::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtop_superfrog::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop_superfrog___024root___eval_final(Vtop_superfrog___024root* vlSelf);

VL_ATTR_COLD void Vtop_superfrog::final() {
    Vtop_superfrog___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop_superfrog::hierName() const { return vlSymsp->name(); }
const char* Vtop_superfrog::modelName() const { return "Vtop_superfrog"; }
unsigned Vtop_superfrog::threads() const { return 1; }
void Vtop_superfrog::prepareClone() const { contextp()->prepareClone(); }
void Vtop_superfrog::atClone() const {
    contextp()->threadPoolpOnClone();
}
