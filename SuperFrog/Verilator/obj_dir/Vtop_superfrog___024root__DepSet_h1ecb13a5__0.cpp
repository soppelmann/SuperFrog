// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_superfrog.h for the primary calling header

#include "verilated.h"

#include "Vtop_superfrog__Syms.h"
#include "Vtop_superfrog___024root.h"

VL_INLINE_OPT void Vtop_superfrog___024root___ico_sequent__TOP__0(Vtop_superfrog___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_superfrog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_superfrog___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->top_superfrog__DOT__display_inst__DOT__horizontal_counter_next 
        = vlSelf->top_superfrog__DOT__display_inst__DOT__horizontal_counter_reg;
    vlSelf->top_superfrog__DOT__display_inst__DOT__r_line = 0U;
    vlSelf->top_superfrog__DOT__display_inst__DOT__vertical_counter_next 
        = vlSelf->top_superfrog__DOT__display_inst__DOT__vertical_counter_reg;
    vlSelf->top_superfrog__DOT__display_inst__DOT__r_frame = 0U;
    if (vlSelf->clk_pix) {
        if ((0x31fU == (IData)(vlSelf->top_superfrog__DOT__display_inst__DOT__horizontal_counter_reg))) {
            vlSelf->top_superfrog__DOT__display_inst__DOT__horizontal_counter_next = 0U;
            vlSelf->top_superfrog__DOT__display_inst__DOT__vertical_counter_next 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->top_superfrog__DOT__display_inst__DOT__vertical_counter_reg)));
            if ((0x208U == (IData)(vlSelf->top_superfrog__DOT__display_inst__DOT__vertical_counter_reg))) {
                vlSelf->top_superfrog__DOT__display_inst__DOT__vertical_counter_next = 0U;
            }
        } else {
            vlSelf->top_superfrog__DOT__display_inst__DOT__horizontal_counter_next 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->top_superfrog__DOT__display_inst__DOT__horizontal_counter_reg)));
        }
        vlSelf->top_superfrog__DOT__display_inst__DOT__r_line 
            = (0U == (IData)(vlSelf->top_superfrog__DOT__display_inst__DOT__horizontal_counter_reg));
        vlSelf->top_superfrog__DOT__display_inst__DOT__r_frame 
            = ((0U == (IData)(vlSelf->top_superfrog__DOT__display_inst__DOT__horizontal_counter_reg)) 
               & (0U == (IData)(vlSelf->top_superfrog__DOT__display_inst__DOT__vertical_counter_reg)));
    }
}

void Vtop_superfrog___024root___eval_ico(Vtop_superfrog___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_superfrog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_superfrog___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop_superfrog___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop_superfrog___024root___eval_act(Vtop_superfrog___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_superfrog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_superfrog___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop_superfrog___024root___nba_sequent__TOP__0(Vtop_superfrog___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_superfrog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_superfrog___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__top_superfrog__DOT__h_sprx;
    __Vdly__top_superfrog__DOT__h_sprx = 0;
    CData/*0:0*/ __Vdlyvset__top_superfrog__DOT__f_spr_y__v0;
    __Vdlyvset__top_superfrog__DOT__f_spr_y__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__top_superfrog__DOT__f_spr_x__v0;
    __Vdlyvlsb__top_superfrog__DOT__f_spr_x__v0 = 0;
    SData/*8:0*/ __Vdlyvval__top_superfrog__DOT__f_spr_x__v0;
    __Vdlyvval__top_superfrog__DOT__f_spr_x__v0 = 0;
    SData/*15:0*/ __Vdlyvval__top_superfrog__DOT__f_spr_y__v1;
    __Vdlyvval__top_superfrog__DOT__f_spr_y__v1 = 0;
    CData/*0:0*/ __Vdlyvset__top_superfrog__DOT__f_spr_y__v1;
    __Vdlyvset__top_superfrog__DOT__f_spr_y__v1 = 0;
    SData/*15:0*/ __Vdlyvval__top_superfrog__DOT__f_spr_x__v1;
    __Vdlyvval__top_superfrog__DOT__f_spr_x__v1 = 0;
    CData/*0:0*/ __Vdlyvset__top_superfrog__DOT__f_spr_x__v1;
    __Vdlyvset__top_superfrog__DOT__f_spr_x__v1 = 0;
    SData/*15:0*/ __Vdlyvval__top_superfrog__DOT__f_spr_y__v2;
    __Vdlyvval__top_superfrog__DOT__f_spr_y__v2 = 0;
    CData/*0:0*/ __Vdlyvset__top_superfrog__DOT__f_spr_y__v3;
    __Vdlyvset__top_superfrog__DOT__f_spr_y__v3 = 0;
    CData/*3:0*/ __Vdlyvlsb__top_superfrog__DOT__f_spr_x__v2;
    __Vdlyvlsb__top_superfrog__DOT__f_spr_x__v2 = 0;
    SData/*8:0*/ __Vdlyvval__top_superfrog__DOT__f_spr_x__v2;
    __Vdlyvval__top_superfrog__DOT__f_spr_x__v2 = 0;
    SData/*15:0*/ __Vdlyvval__top_superfrog__DOT__f_spr_y__v4;
    __Vdlyvval__top_superfrog__DOT__f_spr_y__v4 = 0;
    CData/*0:0*/ __Vdlyvset__top_superfrog__DOT__f_spr_y__v4;
    __Vdlyvset__top_superfrog__DOT__f_spr_y__v4 = 0;
    SData/*15:0*/ __Vdlyvval__top_superfrog__DOT__f_spr_x__v3;
    __Vdlyvval__top_superfrog__DOT__f_spr_x__v3 = 0;
    CData/*0:0*/ __Vdlyvset__top_superfrog__DOT__f_spr_x__v3;
    __Vdlyvset__top_superfrog__DOT__f_spr_x__v3 = 0;
    SData/*15:0*/ __Vdlyvval__top_superfrog__DOT__f_spr_y__v5;
    __Vdlyvval__top_superfrog__DOT__f_spr_y__v5 = 0;
    CData/*0:0*/ __Vdlyvset__top_superfrog__DOT__f_spr_y__v6;
    __Vdlyvset__top_superfrog__DOT__f_spr_y__v6 = 0;
    CData/*3:0*/ __Vdlyvlsb__top_superfrog__DOT__f_spr_x__v4;
    __Vdlyvlsb__top_superfrog__DOT__f_spr_x__v4 = 0;
    SData/*8:0*/ __Vdlyvval__top_superfrog__DOT__f_spr_x__v4;
    __Vdlyvval__top_superfrog__DOT__f_spr_x__v4 = 0;
    SData/*15:0*/ __Vdlyvval__top_superfrog__DOT__f_spr_y__v7;
    __Vdlyvval__top_superfrog__DOT__f_spr_y__v7 = 0;
    CData/*0:0*/ __Vdlyvset__top_superfrog__DOT__f_spr_y__v7;
    __Vdlyvset__top_superfrog__DOT__f_spr_y__v7 = 0;
    SData/*15:0*/ __Vdlyvval__top_superfrog__DOT__f_spr_x__v5;
    __Vdlyvval__top_superfrog__DOT__f_spr_x__v5 = 0;
    CData/*0:0*/ __Vdlyvset__top_superfrog__DOT__f_spr_x__v5;
    __Vdlyvset__top_superfrog__DOT__f_spr_x__v5 = 0;
    SData/*15:0*/ __Vdlyvval__top_superfrog__DOT__f_spr_y__v8;
    __Vdlyvval__top_superfrog__DOT__f_spr_y__v8 = 0;
    CData/*0:0*/ __Vdlyvset__top_superfrog__DOT__f_spr_y__v9;
    __Vdlyvset__top_superfrog__DOT__f_spr_y__v9 = 0;
    CData/*3:0*/ __Vdlyvlsb__top_superfrog__DOT__f_spr_x__v6;
    __Vdlyvlsb__top_superfrog__DOT__f_spr_x__v6 = 0;
    SData/*8:0*/ __Vdlyvval__top_superfrog__DOT__f_spr_x__v6;
    __Vdlyvval__top_superfrog__DOT__f_spr_x__v6 = 0;
    SData/*15:0*/ __Vdlyvval__top_superfrog__DOT__f_spr_y__v10;
    __Vdlyvval__top_superfrog__DOT__f_spr_y__v10 = 0;
    CData/*0:0*/ __Vdlyvset__top_superfrog__DOT__f_spr_y__v10;
    __Vdlyvset__top_superfrog__DOT__f_spr_y__v10 = 0;
    SData/*15:0*/ __Vdlyvval__top_superfrog__DOT__f_spr_x__v7;
    __Vdlyvval__top_superfrog__DOT__f_spr_x__v7 = 0;
    CData/*0:0*/ __Vdlyvset__top_superfrog__DOT__f_spr_x__v7;
    __Vdlyvset__top_superfrog__DOT__f_spr_x__v7 = 0;
    SData/*15:0*/ __Vdlyvval__top_superfrog__DOT__f_spr_y__v11;
    __Vdlyvval__top_superfrog__DOT__f_spr_y__v11 = 0;
    CData/*0:0*/ __Vdlyvset__top_superfrog__DOT__f_spr_y__v12;
    __Vdlyvset__top_superfrog__DOT__f_spr_y__v12 = 0;
    CData/*3:0*/ __Vdlyvlsb__top_superfrog__DOT__f_spr_x__v8;
    __Vdlyvlsb__top_superfrog__DOT__f_spr_x__v8 = 0;
    SData/*8:0*/ __Vdlyvval__top_superfrog__DOT__f_spr_x__v8;
    __Vdlyvval__top_superfrog__DOT__f_spr_x__v8 = 0;
    SData/*15:0*/ __Vdlyvval__top_superfrog__DOT__f_spr_y__v13;
    __Vdlyvval__top_superfrog__DOT__f_spr_y__v13 = 0;
    CData/*0:0*/ __Vdlyvset__top_superfrog__DOT__f_spr_y__v13;
    __Vdlyvset__top_superfrog__DOT__f_spr_y__v13 = 0;
    SData/*15:0*/ __Vdlyvval__top_superfrog__DOT__f_spr_x__v9;
    __Vdlyvval__top_superfrog__DOT__f_spr_x__v9 = 0;
    CData/*0:0*/ __Vdlyvset__top_superfrog__DOT__f_spr_x__v9;
    __Vdlyvset__top_superfrog__DOT__f_spr_x__v9 = 0;
    SData/*15:0*/ __Vdlyvval__top_superfrog__DOT__f_spr_y__v14;
    __Vdlyvval__top_superfrog__DOT__f_spr_y__v14 = 0;
    CData/*0:0*/ __Vdly__top_superfrog__DOT__flying;
    __Vdly__top_superfrog__DOT__flying = 0;
    SData/*15:0*/ __Vdly__top_superfrog__DOT__sprx;
    __Vdly__top_superfrog__DOT__sprx = 0;
    SData/*15:0*/ __Vdly__top_superfrog__DOT__spry;
    __Vdly__top_superfrog__DOT__spry = 0;
    CData/*0:0*/ __Vdlyvval__top_superfrog__DOT__f_drawing_t1__v0;
    __Vdlyvval__top_superfrog__DOT__f_drawing_t1__v0 = 0;
    CData/*0:0*/ __Vdlyvval__top_superfrog__DOT__f_drawing_t1__v1;
    __Vdlyvval__top_superfrog__DOT__f_drawing_t1__v1 = 0;
    CData/*0:0*/ __Vdlyvval__top_superfrog__DOT__f_drawing_t1__v2;
    __Vdlyvval__top_superfrog__DOT__f_drawing_t1__v2 = 0;
    CData/*0:0*/ __Vdlyvval__top_superfrog__DOT__f_drawing_t1__v3;
    __Vdlyvval__top_superfrog__DOT__f_drawing_t1__v3 = 0;
    CData/*0:0*/ __Vdlyvval__top_superfrog__DOT__f_drawing_t1__v4;
    __Vdlyvval__top_superfrog__DOT__f_drawing_t1__v4 = 0;
    SData/*8:0*/ __Vdly__top_superfrog__DOT__sreg;
    __Vdly__top_superfrog__DOT__sreg = 0;
    IData/*31:0*/ __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__state;
    __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__state = 0;
    SData/*15:0*/ __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__sprx_r;
    __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__sprx_r = 0;
    SData/*9:0*/ __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__spr_rom_addr;
    __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__spr_rom_addr = 0;
    CData/*4:0*/ __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__bmap_x;
    __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__bmap_x = 0;
    CData/*1:0*/ __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__cnt_x;
    __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__state;
    __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__state = 0;
    SData/*15:0*/ __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__sprx_r;
    __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__sprx_r = 0;
    SData/*10:0*/ __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__spr_rom_addr;
    __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__spr_rom_addr = 0;
    CData/*5:0*/ __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__bmap_x;
    __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__bmap_x = 0;
    CData/*1:0*/ __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__cnt_x;
    __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__state;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__state = 0;
    SData/*15:0*/ __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__sprx_r;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__sprx_r = 0;
    SData/*9:0*/ __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_rom_addr;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_rom_addr = 0;
    CData/*4:0*/ __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__bmap_x;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__bmap_x = 0;
    CData/*2:0*/ __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__cnt_x;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__state;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__state = 0;
    SData/*15:0*/ __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__sprx_r;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__sprx_r = 0;
    SData/*9:0*/ __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_rom_addr;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_rom_addr = 0;
    CData/*4:0*/ __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__bmap_x;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__bmap_x = 0;
    CData/*2:0*/ __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__cnt_x;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__state;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__state = 0;
    SData/*15:0*/ __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__sprx_r;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__sprx_r = 0;
    SData/*9:0*/ __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_rom_addr;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_rom_addr = 0;
    CData/*4:0*/ __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__bmap_x;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__bmap_x = 0;
    CData/*2:0*/ __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__cnt_x;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__state;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__state = 0;
    SData/*15:0*/ __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__sprx_r;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__sprx_r = 0;
    SData/*9:0*/ __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_rom_addr;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_rom_addr = 0;
    CData/*4:0*/ __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__bmap_x;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__bmap_x = 0;
    CData/*2:0*/ __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__cnt_x;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__state;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__state = 0;
    SData/*15:0*/ __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__sprx_r;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__sprx_r = 0;
    SData/*9:0*/ __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_rom_addr;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_rom_addr = 0;
    CData/*4:0*/ __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__bmap_x;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__bmap_x = 0;
    CData/*2:0*/ __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__cnt_x;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__cnt_x = 0;
    // Body
    __Vdly__top_superfrog__DOT__flying = vlSelf->top_superfrog__DOT__flying;
    __Vdly__top_superfrog__DOT__sreg = vlSelf->top_superfrog__DOT__sreg;
    __Vdly__top_superfrog__DOT__h_sprx = vlSelf->top_superfrog__DOT__h_sprx;
    __Vdly__top_superfrog__DOT__sprx = vlSelf->top_superfrog__DOT__sprx;
    __Vdly__top_superfrog__DOT__spry = vlSelf->top_superfrog__DOT__spry;
    __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__cnt_x 
        = vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__cnt_x;
    __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__state 
        = vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__state;
    __Vdlyvset__top_superfrog__DOT__f_spr_y__v1 = 0U;
    __Vdlyvset__top_superfrog__DOT__f_spr_y__v4 = 0U;
    __Vdlyvset__top_superfrog__DOT__f_spr_y__v7 = 0U;
    __Vdlyvset__top_superfrog__DOT__f_spr_y__v10 = 0U;
    __Vdlyvset__top_superfrog__DOT__f_spr_y__v13 = 0U;
    __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__bmap_x 
        = vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__bmap_x;
    __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__spr_rom_addr 
        = vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_rom_addr;
    __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__sprx_r 
        = vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__sprx_r;
    __Vdlyvset__top_superfrog__DOT__f_spr_x__v1 = 0U;
    __Vdlyvset__top_superfrog__DOT__f_spr_x__v3 = 0U;
    __Vdlyvset__top_superfrog__DOT__f_spr_x__v5 = 0U;
    __Vdlyvset__top_superfrog__DOT__f_spr_x__v7 = 0U;
    __Vdlyvset__top_superfrog__DOT__f_spr_x__v9 = 0U;
    __Vdlyvset__top_superfrog__DOT__f_spr_y__v0 = 0U;
    __Vdlyvset__top_superfrog__DOT__f_spr_y__v3 = 0U;
    __Vdlyvset__top_superfrog__DOT__f_spr_y__v6 = 0U;
    __Vdlyvset__top_superfrog__DOT__f_spr_y__v9 = 0U;
    __Vdlyvset__top_superfrog__DOT__f_spr_y__v12 = 0U;
    __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__cnt_x 
        = vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__cnt_x;
    __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__state 
        = vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__state;
    __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__bmap_x 
        = vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__bmap_x;
    __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__spr_rom_addr 
        = vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_rom_addr;
    __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__sprx_r 
        = vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__sprx_r;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__cnt_x 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__cnt_x;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__state 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__state;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__cnt_x 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__cnt_x;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__state 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__state;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__cnt_x 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__cnt_x;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__state 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__state;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__cnt_x 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__cnt_x;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__state 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__state;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__cnt_x 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__cnt_x;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__state 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__state;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__bmap_x 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__bmap_x;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__bmap_x 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__bmap_x;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__bmap_x 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__bmap_x;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__bmap_x 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__bmap_x;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__bmap_x 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__bmap_x;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_rom_addr 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_rom_addr;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__sprx_r 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__sprx_r;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_rom_addr 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_rom_addr;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__sprx_r 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__sprx_r;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_rom_addr 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_rom_addr;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__sprx_r 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__sprx_r;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_rom_addr 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_rom_addr;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__sprx_r 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__sprx_r;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_rom_addr 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_rom_addr;
    __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__sprx_r 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__sprx_r;
    __Vdly__top_superfrog__DOT__flying = (((IData)(vlSelf->btn_up) 
                                           & (0xf5U 
                                              == VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__spry)))) 
                                          | (VL_LTES_III(32, 0xb4U, 
                                                         VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__spry))) 
                                             & (IData)(vlSelf->top_superfrog__DOT__flying)));
    if (vlSelf->top_superfrog__DOT__de) {
        __Vdly__top_superfrog__DOT__sreg = ((0xffU 
                                             & ((IData)(vlSelf->top_superfrog__DOT__sreg) 
                                                >> 1U)) 
                                            ^ ((1U 
                                                & (IData)(vlSelf->top_superfrog__DOT__sreg))
                                                ? 0x172U
                                                : 0U));
    }
    if (vlSelf->top_superfrog__DOT__frame) {
        __Vdly__top_superfrog__DOT__h_sprx = (VL_GTES_III(32, 0xffffffc0U, 
                                                          VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__h_sprx)))
                                               ? 0x280U
                                               : (0xffffU 
                                                  & (VL_EXTENDS_II(16,16, (IData)(vlSelf->top_superfrog__DOT__h_sprx)) 
                                                     - (IData)(2U))));
        if ((1U & (~ (IData)(vlSelf->top_superfrog__DOT__dead)))) {
            __Vdly__top_superfrog__DOT__sprx = (VL_GTS_III(32, 0xffffffb0U, 
                                                           VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprx)))
                                                 ? 0x280U
                                                 : 
                                                (VL_LTS_III(32, 0x280U, 
                                                            VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprx)))
                                                  ? 0xffb0U
                                                  : 
                                                 (0xffffU 
                                                  & ((IData)(vlSelf->btn_right)
                                                      ? 
                                                     ((IData)(4U) 
                                                      + 
                                                      VL_EXTENDS_II(16,16, (IData)(vlSelf->top_superfrog__DOT__sprx)))
                                                      : 
                                                     ((IData)(vlSelf->btn_left)
                                                       ? 
                                                      (VL_EXTENDS_II(16,16, (IData)(vlSelf->top_superfrog__DOT__sprx)) 
                                                       - (IData)(4U))
                                                       : (IData)(vlSelf->top_superfrog__DOT__sprx))))));
        }
        if (vlSelf->top_superfrog__DOT__dead) {
            __Vdly__top_superfrog__DOT__spry = (0xffffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_EXTENDS_II(16,16, (IData)(vlSelf->top_superfrog__DOT__spry))));
        }
        if (vlSelf->top_superfrog__DOT__flying) {
            __Vdly__top_superfrog__DOT__spry = (0xffffU 
                                                & (VL_EXTENDS_II(16,16, (IData)(vlSelf->top_superfrog__DOT__spry)) 
                                                   - (IData)(2U)));
        } else if ((VL_GTS_III(32, 0xf5U, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__spry))) 
                    & (~ (IData)(vlSelf->top_superfrog__DOT__flying)))) {
            __Vdly__top_superfrog__DOT__spry = (0xffffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_EXTENDS_II(16,16, (IData)(vlSelf->top_superfrog__DOT__spry))));
        }
        if (VL_LTS_III(32, 0xe6U, VL_EXTENDS_II(32,16, 
                                                vlSelf->top_superfrog__DOT__f_spr_y
                                                [0U]))) {
            __Vdlyvset__top_superfrog__DOT__f_spr_y__v0 = 1U;
            __Vdlyvval__top_superfrog__DOT__f_spr_x__v0 
                = vlSelf->top_superfrog__DOT__sreg;
            __Vdlyvlsb__top_superfrog__DOT__f_spr_x__v0 = 0U;
        } else {
            __Vdlyvval__top_superfrog__DOT__f_spr_y__v1 
                = (0xffffU & ((IData)(2U) + VL_EXTENDS_II(16,16, 
                                                          vlSelf->top_superfrog__DOT__f_spr_y
                                                          [0U])));
            __Vdlyvset__top_superfrog__DOT__f_spr_y__v1 = 1U;
        }
        if (VL_LTS_III(32, 0xe6U, VL_EXTENDS_II(32,16, 
                                                vlSelf->top_superfrog__DOT__f_spr_y
                                                [1U]))) {
            __Vdlyvset__top_superfrog__DOT__f_spr_y__v3 = 1U;
            __Vdlyvval__top_superfrog__DOT__f_spr_x__v2 
                = vlSelf->top_superfrog__DOT__sreg;
            __Vdlyvlsb__top_superfrog__DOT__f_spr_x__v2 = 0U;
        } else {
            __Vdlyvval__top_superfrog__DOT__f_spr_y__v4 
                = (0xffffU & ((IData)(2U) + VL_EXTENDS_II(16,16, 
                                                          vlSelf->top_superfrog__DOT__f_spr_y
                                                          [1U])));
            __Vdlyvset__top_superfrog__DOT__f_spr_y__v4 = 1U;
        }
        if (VL_LTS_III(32, 0xe6U, VL_EXTENDS_II(32,16, 
                                                vlSelf->top_superfrog__DOT__f_spr_y
                                                [2U]))) {
            __Vdlyvset__top_superfrog__DOT__f_spr_y__v6 = 1U;
            __Vdlyvval__top_superfrog__DOT__f_spr_x__v4 
                = vlSelf->top_superfrog__DOT__sreg;
            __Vdlyvlsb__top_superfrog__DOT__f_spr_x__v4 = 0U;
        } else {
            __Vdlyvval__top_superfrog__DOT__f_spr_y__v7 
                = (0xffffU & ((IData)(2U) + VL_EXTENDS_II(16,16, 
                                                          vlSelf->top_superfrog__DOT__f_spr_y
                                                          [2U])));
            __Vdlyvset__top_superfrog__DOT__f_spr_y__v7 = 1U;
        }
        if (VL_LTS_III(32, 0xe6U, VL_EXTENDS_II(32,16, 
                                                vlSelf->top_superfrog__DOT__f_spr_y
                                                [3U]))) {
            __Vdlyvset__top_superfrog__DOT__f_spr_y__v9 = 1U;
            __Vdlyvval__top_superfrog__DOT__f_spr_x__v6 
                = vlSelf->top_superfrog__DOT__sreg;
            __Vdlyvlsb__top_superfrog__DOT__f_spr_x__v6 = 0U;
        } else {
            __Vdlyvval__top_superfrog__DOT__f_spr_y__v10 
                = (0xffffU & ((IData)(2U) + VL_EXTENDS_II(16,16, 
                                                          vlSelf->top_superfrog__DOT__f_spr_y
                                                          [3U])));
            __Vdlyvset__top_superfrog__DOT__f_spr_y__v10 = 1U;
        }
        if (VL_LTS_III(32, 0xe6U, VL_EXTENDS_II(32,16, 
                                                vlSelf->top_superfrog__DOT__f_spr_y
                                                [4U]))) {
            __Vdlyvset__top_superfrog__DOT__f_spr_y__v12 = 1U;
            __Vdlyvval__top_superfrog__DOT__f_spr_x__v8 
                = vlSelf->top_superfrog__DOT__sreg;
            __Vdlyvlsb__top_superfrog__DOT__f_spr_x__v8 = 0U;
        } else {
            __Vdlyvval__top_superfrog__DOT__f_spr_y__v13 
                = (0xffffU & ((IData)(2U) + VL_EXTENDS_II(16,16, 
                                                          vlSelf->top_superfrog__DOT__f_spr_y
                                                          [4U])));
            __Vdlyvset__top_superfrog__DOT__f_spr_y__v13 = 1U;
        }
    }
    __Vdlyvval__top_superfrog__DOT__f_drawing_t1__v0 
        = (vlSelf->top_superfrog__DOT__f_drawing[0U] 
           & (9U != vlSelf->top_superfrog__DOT__f_spr_pix_indx
              [0U]));
    __Vdlyvval__top_superfrog__DOT__f_drawing_t1__v1 
        = (vlSelf->top_superfrog__DOT__f_drawing[1U] 
           & (9U != vlSelf->top_superfrog__DOT__f_spr_pix_indx
              [1U]));
    __Vdlyvval__top_superfrog__DOT__f_drawing_t1__v2 
        = (vlSelf->top_superfrog__DOT__f_drawing[2U] 
           & (9U != vlSelf->top_superfrog__DOT__f_spr_pix_indx
              [2U]));
    __Vdlyvval__top_superfrog__DOT__f_drawing_t1__v3 
        = (vlSelf->top_superfrog__DOT__f_drawing[3U] 
           & (9U != vlSelf->top_superfrog__DOT__f_spr_pix_indx
              [3U]));
    __Vdlyvval__top_superfrog__DOT__f_drawing_t1__v4 
        = (vlSelf->top_superfrog__DOT__f_drawing[4U] 
           & (9U != vlSelf->top_superfrog__DOT__f_spr_pix_indx
              [4U]));
    if (vlSelf->top_superfrog__DOT__drawing) {
        vlSelf->top_superfrog__DOT__dead = (((((((vlSelf->top_superfrog__DOT__f_drawing_t1
                                                  [0U] 
                                                  | vlSelf->top_superfrog__DOT__f_drawing_t1
                                                  [1U]) 
                                                 | vlSelf->top_superfrog__DOT__f_drawing_t1
                                                 [2U]) 
                                                | vlSelf->top_superfrog__DOT__f_drawing_t1
                                                [3U]) 
                                               | vlSelf->top_superfrog__DOT__f_drawing_t1
                                               [4U]) 
                                              | (IData)(vlSelf->top_superfrog__DOT__h_drawing_t1)) 
                                             & (IData)(vlSelf->top_superfrog__DOT__drawing_t1)) 
                                            | (IData)(vlSelf->top_superfrog__DOT__dead));
    }
    vlSelf->sdl_de = vlSelf->top_superfrog__DOT__de;
    vlSelf->sdl_frame = vlSelf->top_superfrog__DOT__frame;
    vlSelf->sdl_b = (0xffU & ((((IData)(vlSelf->top_superfrog__DOT__de)
                                 ? (0xfU & (IData)(vlSelf->top_superfrog__DOT__paint_b))
                                 : 0U) << 4U) | ((IData)(vlSelf->top_superfrog__DOT__de)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlSelf->top_superfrog__DOT__paint_b))
                                                  : 0U)));
    vlSelf->sdl_g = (0xffU & (((IData)(vlSelf->top_superfrog__DOT__de)
                                ? (0xf0U & (((IData)(vlSelf->top_superfrog__DOT__paint_g) 
                                             << 4U) 
                                            | (IData)(vlSelf->top_superfrog__DOT__paint_b)))
                                : 0U) | (0xfU & (((IData)(vlSelf->top_superfrog__DOT__de)
                                                   ? 
                                                  (((IData)(vlSelf->top_superfrog__DOT__paint_r) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->top_superfrog__DOT__paint_g) 
                                                       << 4U) 
                                                      | (IData)(vlSelf->top_superfrog__DOT__paint_b)))
                                                   : 0U) 
                                                 >> 4U))));
    vlSelf->sdl_r = (0xffU & ((0xf0U & (((IData)(vlSelf->top_superfrog__DOT__de)
                                          ? (((IData)(vlSelf->top_superfrog__DOT__paint_r) 
                                              << 8U) 
                                             | (((IData)(vlSelf->top_superfrog__DOT__paint_g) 
                                                 << 4U) 
                                                | (IData)(vlSelf->top_superfrog__DOT__paint_b)))
                                          : 0U) >> 4U)) 
                              | (0xfU & (((IData)(vlSelf->top_superfrog__DOT__de)
                                           ? (((IData)(vlSelf->top_superfrog__DOT__paint_r) 
                                               << 8U) 
                                              | (((IData)(vlSelf->top_superfrog__DOT__paint_g) 
                                                  << 4U) 
                                                 | (IData)(vlSelf->top_superfrog__DOT__paint_b)))
                                           : 0U) >> 8U))));
    vlSelf->sdl_sx = vlSelf->top_superfrog__DOT__sx;
    vlSelf->sdl_sy = vlSelf->top_superfrog__DOT__sy;
    vlSelf->top_superfrog__DOT__spr_pix_colr = vlSelf->top_superfrog__DOT__clut_instance__DOT__bram_clut__DOT__memory
        [vlSelf->top_superfrog__DOT__spr_pix_indx];
    vlSelf->top_superfrog__DOT__h_spr_pix_colr = vlSelf->top_superfrog__DOT__h_clut_instance__DOT__bram_clut__DOT__memory
        [vlSelf->top_superfrog__DOT__h_spr_pix_indx];
    vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__f_clut_instance__colr_out 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__f_clut_instance__DOT__bram_clut__DOT__memory
        [vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__sprite_fall__pix];
    vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__f_clut_instance__colr_out 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__f_clut_instance__DOT__bram_clut__DOT__memory
        [vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__sprite_fall__pix];
    vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__f_clut_instance__colr_out 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__f_clut_instance__DOT__bram_clut__DOT__memory
        [vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__sprite_fall__pix];
    vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__f_clut_instance__colr_out 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__f_clut_instance__DOT__bram_clut__DOT__memory
        [vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__sprite_fall__pix];
    vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__f_clut_instance__colr_out 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__f_clut_instance__DOT__bram_clut__DOT__memory
        [vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__sprite_fall__pix];
    vlSelf->top_superfrog__DOT__flying = __Vdly__top_superfrog__DOT__flying;
    if (vlSelf->rst_pix) {
        __Vdly__top_superfrog__DOT__sreg = 0x1ffU;
    }
    vlSelf->top_superfrog__DOT__sreg = __Vdly__top_superfrog__DOT__sreg;
    vlSelf->top_superfrog__DOT__f_drawing_t1[0U] = __Vdlyvval__top_superfrog__DOT__f_drawing_t1__v0;
    vlSelf->top_superfrog__DOT__f_drawing_t1[1U] = __Vdlyvval__top_superfrog__DOT__f_drawing_t1__v1;
    vlSelf->top_superfrog__DOT__f_drawing_t1[2U] = __Vdlyvval__top_superfrog__DOT__f_drawing_t1__v2;
    vlSelf->top_superfrog__DOT__f_drawing_t1[3U] = __Vdlyvval__top_superfrog__DOT__f_drawing_t1__v3;
    vlSelf->top_superfrog__DOT__f_drawing_t1[4U] = __Vdlyvval__top_superfrog__DOT__f_drawing_t1__v4;
    vlSelf->top_superfrog__DOT__drawing_t1 = ((IData)(vlSelf->top_superfrog__DOT__drawing) 
                                              & (0xbU 
                                                 != (IData)(vlSelf->top_superfrog__DOT__spr_pix_indx)));
    if (vlSelf->top_superfrog__DOT__line) {
        if ((0U == VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sy)))) {
            vlSelf->top_superfrog__DOT__bg_colr = 0x239U;
        } else if ((0x50U == VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sy)))) {
            vlSelf->top_superfrog__DOT__bg_colr = 0x24aU;
        } else if ((0x8cU == VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sy)))) {
            vlSelf->top_superfrog__DOT__bg_colr = 0x25bU;
        } else if ((0xbeU == VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sy)))) {
            vlSelf->top_superfrog__DOT__bg_colr = 0x26cU;
        } else if ((0xe6U == VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sy)))) {
            vlSelf->top_superfrog__DOT__bg_colr = 0x27dU;
        } else if ((0x109U == VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sy)))) {
            vlSelf->top_superfrog__DOT__bg_colr = 0x29eU;
        } else if ((0x127U == VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sy)))) {
            vlSelf->top_superfrog__DOT__bg_colr = 0x2bfU;
        } else if ((0x140U == VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sy)))) {
            vlSelf->top_superfrog__DOT__bg_colr = 0x260U;
        }
        __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__state = 1U;
        vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__sprite_fall__pix = 0U;
        vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__sprite_fall__drawing = 0U;
        __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__state = 1U;
        vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__sprite_fall__pix = 0U;
        vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__sprite_fall__drawing = 0U;
        __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__state = 1U;
        vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__sprite_fall__pix = 0U;
        vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__sprite_fall__drawing = 0U;
        __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__state = 1U;
        vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__sprite_fall__pix = 0U;
        vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__sprite_fall__drawing = 0U;
        __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__state = 1U;
        vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__sprite_fall__pix = 0U;
        vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__sprite_fall__drawing = 0U;
        __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__state = 1U;
        vlSelf->top_superfrog__DOT__spr_pix_indx = 0U;
        vlSelf->top_superfrog__DOT__drawing = 0U;
    } else {
        if ((1U == vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__state)) {
            __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__state = 2U;
            __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__sprx_r 
                = vlSelf->top_superfrog__DOT__f_spr_x
                [4U];
            vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spry_r 
                = vlSelf->top_superfrog__DOT__f_spr_y
                [4U];
        } else if ((2U == vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__state)) {
            __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__state 
                = ((IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_active)
                    ? 3U : 0U);
        } else if ((3U == vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__state)) {
            if (vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_begin) {
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__state = 4U;
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_rom_addr 
                    = (0x3ffU & ((IData)(3U) + (VL_MULS_III(32, (IData)(0x20U), 
                                                            VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_diff))) 
                                                + (
                                                   VL_EXTENDS_II(10,16, (IData)(vlSelf->top_superfrog__DOT__sx)) 
                                                   - 
                                                   VL_EXTENDS_II(10,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__sprx_r))))));
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__bmap_x = 0U;
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__cnt_x = 0U;
            }
        } else if ((4U == vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__state)) {
            if ((0x27dU == VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sx)))) {
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__state = 5U;
            }
            vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__sprite_fall__pix 
                = vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_rom_data;
            vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__sprite_fall__drawing = 1U;
            if ((3U == (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__cnt_x))) {
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_rom_addr 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_rom_addr)));
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__bmap_x 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__bmap_x)));
                if (vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_end) {
                    __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__state = 5U;
                }
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__cnt_x = 0U;
            } else {
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__cnt_x 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__cnt_x)));
            }
        } else if ((5U == vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__state)) {
            __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__state = 0U;
            vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__sprite_fall__pix = 0U;
            vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__sprite_fall__drawing = 0U;
        } else {
            __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__state = 0U;
        }
        if ((1U == vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__state)) {
            __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__state = 2U;
            __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__sprx_r 
                = vlSelf->top_superfrog__DOT__f_spr_x
                [3U];
            vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spry_r 
                = vlSelf->top_superfrog__DOT__f_spr_y
                [3U];
        } else if ((2U == vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__state)) {
            __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__state 
                = ((IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_active)
                    ? 3U : 0U);
        } else if ((3U == vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__state)) {
            if (vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_begin) {
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__state = 4U;
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_rom_addr 
                    = (0x3ffU & ((IData)(3U) + (VL_MULS_III(32, (IData)(0x20U), 
                                                            VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_diff))) 
                                                + (
                                                   VL_EXTENDS_II(10,16, (IData)(vlSelf->top_superfrog__DOT__sx)) 
                                                   - 
                                                   VL_EXTENDS_II(10,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__sprx_r))))));
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__bmap_x = 0U;
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__cnt_x = 0U;
            }
        } else if ((4U == vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__state)) {
            if ((0x27dU == VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sx)))) {
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__state = 5U;
            }
            vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__sprite_fall__pix 
                = vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_rom_data;
            vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__sprite_fall__drawing = 1U;
            if ((3U == (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__cnt_x))) {
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_rom_addr 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_rom_addr)));
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__bmap_x 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__bmap_x)));
                if (vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_end) {
                    __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__state = 5U;
                }
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__cnt_x = 0U;
            } else {
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__cnt_x 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__cnt_x)));
            }
        } else if ((5U == vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__state)) {
            __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__state = 0U;
            vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__sprite_fall__pix = 0U;
            vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__sprite_fall__drawing = 0U;
        } else {
            __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__state = 0U;
        }
        if ((1U == vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__state)) {
            __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__state = 2U;
            __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__sprx_r 
                = vlSelf->top_superfrog__DOT__f_spr_x
                [2U];
            vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spry_r 
                = vlSelf->top_superfrog__DOT__f_spr_y
                [2U];
        } else if ((2U == vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__state)) {
            __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__state 
                = ((IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_active)
                    ? 3U : 0U);
        } else if ((3U == vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__state)) {
            if (vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_begin) {
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__state = 4U;
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_rom_addr 
                    = (0x3ffU & ((IData)(3U) + (VL_MULS_III(32, (IData)(0x20U), 
                                                            VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_diff))) 
                                                + (
                                                   VL_EXTENDS_II(10,16, (IData)(vlSelf->top_superfrog__DOT__sx)) 
                                                   - 
                                                   VL_EXTENDS_II(10,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__sprx_r))))));
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__bmap_x = 0U;
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__cnt_x = 0U;
            }
        } else if ((4U == vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__state)) {
            if ((0x27dU == VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sx)))) {
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__state = 5U;
            }
            vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__sprite_fall__pix 
                = vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_rom_data;
            vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__sprite_fall__drawing = 1U;
            if ((3U == (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__cnt_x))) {
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_rom_addr 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_rom_addr)));
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__bmap_x 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__bmap_x)));
                if (vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_end) {
                    __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__state = 5U;
                }
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__cnt_x = 0U;
            } else {
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__cnt_x 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__cnt_x)));
            }
        } else if ((5U == vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__state)) {
            __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__state = 0U;
            vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__sprite_fall__pix = 0U;
            vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__sprite_fall__drawing = 0U;
        } else {
            __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__state = 0U;
        }
        if ((1U == vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__state)) {
            __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__state = 2U;
            __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__sprx_r 
                = vlSelf->top_superfrog__DOT__f_spr_x
                [1U];
            vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spry_r 
                = vlSelf->top_superfrog__DOT__f_spr_y
                [1U];
        } else if ((2U == vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__state)) {
            __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__state 
                = ((IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_active)
                    ? 3U : 0U);
        } else if ((3U == vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__state)) {
            if (vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_begin) {
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__state = 4U;
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_rom_addr 
                    = (0x3ffU & ((IData)(3U) + (VL_MULS_III(32, (IData)(0x20U), 
                                                            VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_diff))) 
                                                + (
                                                   VL_EXTENDS_II(10,16, (IData)(vlSelf->top_superfrog__DOT__sx)) 
                                                   - 
                                                   VL_EXTENDS_II(10,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__sprx_r))))));
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__bmap_x = 0U;
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__cnt_x = 0U;
            }
        } else if ((4U == vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__state)) {
            if ((0x27dU == VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sx)))) {
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__state = 5U;
            }
            vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__sprite_fall__pix 
                = vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_rom_data;
            vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__sprite_fall__drawing = 1U;
            if ((3U == (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__cnt_x))) {
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_rom_addr 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_rom_addr)));
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__bmap_x 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__bmap_x)));
                if (vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_end) {
                    __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__state = 5U;
                }
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__cnt_x = 0U;
            } else {
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__cnt_x 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__cnt_x)));
            }
        } else if ((5U == vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__state)) {
            __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__state = 0U;
            vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__sprite_fall__pix = 0U;
            vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__sprite_fall__drawing = 0U;
        } else {
            __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__state = 0U;
        }
        if ((1U == vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__state)) {
            __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__state = 2U;
            __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__sprx_r 
                = vlSelf->top_superfrog__DOT__f_spr_x
                [0U];
            vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spry_r 
                = vlSelf->top_superfrog__DOT__f_spr_y
                [0U];
        } else if ((2U == vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__state)) {
            __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__state 
                = ((IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_active)
                    ? 3U : 0U);
        } else if ((3U == vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__state)) {
            if (vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_begin) {
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__state = 4U;
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_rom_addr 
                    = (0x3ffU & ((IData)(3U) + (VL_MULS_III(32, (IData)(0x20U), 
                                                            VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_diff))) 
                                                + (
                                                   VL_EXTENDS_II(10,16, (IData)(vlSelf->top_superfrog__DOT__sx)) 
                                                   - 
                                                   VL_EXTENDS_II(10,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__sprx_r))))));
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__bmap_x = 0U;
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__cnt_x = 0U;
            }
        } else if ((4U == vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__state)) {
            if ((0x27dU == VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sx)))) {
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__state = 5U;
            }
            vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__sprite_fall__pix 
                = vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_rom_data;
            vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__sprite_fall__drawing = 1U;
            if ((3U == (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__cnt_x))) {
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_rom_addr 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_rom_addr)));
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__bmap_x 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__bmap_x)));
                if (vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_end) {
                    __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__state = 5U;
                }
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__cnt_x = 0U;
            } else {
                __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__cnt_x 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__cnt_x)));
            }
        } else if ((5U == vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__state)) {
            __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__state = 0U;
            vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__sprite_fall__pix = 0U;
            vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__sprite_fall__drawing = 0U;
        } else {
            __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__state = 0U;
        }
        if ((1U == vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__state)) {
            __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__state = 2U;
            __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__sprx_r 
                = vlSelf->top_superfrog__DOT__sprx;
            vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spry_r 
                = vlSelf->top_superfrog__DOT__spry;
        } else if ((2U == vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__state)) {
            __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__state 
                = ((IData)(vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_active)
                    ? 3U : 0U);
        } else if ((3U == vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__state)) {
            if (vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_begin) {
                __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__state = 4U;
                __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__spr_rom_addr 
                    = (0x7ffU & ((IData)(3U) + (VL_MULS_III(32, (IData)(0x28U), 
                                                            VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_diff))) 
                                                + (
                                                   VL_EXTENDS_II(11,16, (IData)(vlSelf->top_superfrog__DOT__sx)) 
                                                   - 
                                                   VL_EXTENDS_II(11,16, (IData)(vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__sprx_r))))));
                __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__bmap_x = 0U;
                __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__cnt_x = 0U;
            }
        } else if ((4U == vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__state)) {
            if ((0x27dU == VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sx)))) {
                __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__state = 5U;
            }
            vlSelf->top_superfrog__DOT__spr_pix_indx 
                = vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_rom_data;
            vlSelf->top_superfrog__DOT__drawing = 1U;
            if ((1U == (IData)(vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__cnt_x))) {
                __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__spr_rom_addr 
                    = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_rom_addr)));
                __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__bmap_x 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__bmap_x)));
                if (vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_end) {
                    __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__state = 5U;
                }
                __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__cnt_x = 0U;
            } else {
                __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__cnt_x 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__cnt_x)));
            }
        } else if ((5U == vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__state)) {
            __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__state = 0U;
            vlSelf->top_superfrog__DOT__spr_pix_indx = 0U;
            vlSelf->top_superfrog__DOT__drawing = 0U;
        } else {
            __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__state = 0U;
        }
    }
    vlSelf->top_superfrog__DOT__h_drawing_t1 = ((IData)(vlSelf->top_superfrog__DOT__h_drawing) 
                                                & (9U 
                                                   != (IData)(vlSelf->top_superfrog__DOT__h_spr_pix_indx)));
    if (vlSelf->top_superfrog__DOT__line) {
        __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__state = 1U;
        vlSelf->top_superfrog__DOT__h_spr_pix_indx = 0U;
        vlSelf->top_superfrog__DOT__h_drawing = 0U;
    } else if ((1U == vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__state)) {
        __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__state = 2U;
        __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__sprx_r 
            = vlSelf->top_superfrog__DOT__h_sprx;
        vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spry_r 
            = vlSelf->top_superfrog__DOT__h_spry;
    } else if ((2U == vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__state)) {
        __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__state 
            = ((IData)(vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_active)
                ? 3U : 0U);
    } else if ((3U == vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__state)) {
        if (vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_begin) {
            __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__state = 4U;
            __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__spr_rom_addr 
                = (0x3ffU & ((IData)(3U) + (VL_MULS_III(32, (IData)(0x20U), 
                                                        VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_diff))) 
                                            + (VL_EXTENDS_II(10,16, (IData)(vlSelf->top_superfrog__DOT__sx)) 
                                               - VL_EXTENDS_II(10,16, (IData)(vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__sprx_r))))));
            __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__bmap_x = 0U;
            __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__cnt_x = 0U;
        }
    } else if ((4U == vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__state)) {
        if ((0x27dU == VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sx)))) {
            __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__state = 5U;
        }
        vlSelf->top_superfrog__DOT__h_spr_pix_indx 
            = vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_rom_data;
        vlSelf->top_superfrog__DOT__h_drawing = 1U;
        if ((1U == (IData)(vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__cnt_x))) {
            __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__spr_rom_addr 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_rom_addr)));
            __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__bmap_x 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__bmap_x)));
            if (vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_end) {
                __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__state = 5U;
            }
            __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__cnt_x = 0U;
        } else {
            __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__cnt_x 
                = (3U & ((IData)(1U) + (IData)(vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__cnt_x)));
        }
    } else if ((5U == vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__state)) {
        __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__state = 0U;
        vlSelf->top_superfrog__DOT__h_spr_pix_indx = 0U;
        vlSelf->top_superfrog__DOT__h_drawing = 0U;
    } else {
        __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__state = 0U;
    }
    vlSelf->top_superfrog__DOT__frame = vlSelf->top_superfrog__DOT__display_inst__DOT__r_frame;
    vlSelf->top_superfrog__DOT__de = vlSelf->top_superfrog__DOT__display_inst__DOT__is_displaying_pixels;
    vlSelf->top_superfrog__DOT__sy = vlSelf->top_superfrog__DOT__display_inst__DOT__vertical_counter_reg;
    vlSelf->top_superfrog__DOT__f_spr_pix_colr[4U] 
        = vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__f_clut_instance__colr_out;
    vlSelf->top_superfrog__DOT__f_spr_pix_colr[3U] 
        = vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__f_clut_instance__colr_out;
    vlSelf->top_superfrog__DOT__f_spr_pix_colr[2U] 
        = vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__f_clut_instance__colr_out;
    vlSelf->top_superfrog__DOT__f_spr_pix_colr[1U] 
        = vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__f_clut_instance__colr_out;
    vlSelf->top_superfrog__DOT__f_spr_pix_colr[0U] 
        = vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__f_clut_instance__colr_out;
    if (vlSelf->rst_pix) {
        __Vdly__top_superfrog__DOT__h_sprx = 0x280U;
        __Vdly__top_superfrog__DOT__sprx = 0x78U;
        __Vdly__top_superfrog__DOT__spry = 0xf5U;
        __Vdlyvval__top_superfrog__DOT__f_spr_x__v1 
            = vlSelf->top_superfrog__DOT__init_f_spr_x
            [0U];
        __Vdlyvset__top_superfrog__DOT__f_spr_x__v1 = 1U;
        __Vdlyvval__top_superfrog__DOT__f_spr_y__v2 
            = vlSelf->top_superfrog__DOT__init_f_spr_y
            [0U];
        __Vdlyvval__top_superfrog__DOT__f_spr_x__v3 
            = vlSelf->top_superfrog__DOT__init_f_spr_x
            [1U];
        __Vdlyvset__top_superfrog__DOT__f_spr_x__v3 = 1U;
        __Vdlyvval__top_superfrog__DOT__f_spr_y__v5 
            = vlSelf->top_superfrog__DOT__init_f_spr_y
            [1U];
        __Vdlyvval__top_superfrog__DOT__f_spr_x__v5 
            = vlSelf->top_superfrog__DOT__init_f_spr_x
            [2U];
        __Vdlyvset__top_superfrog__DOT__f_spr_x__v5 = 1U;
        __Vdlyvval__top_superfrog__DOT__f_spr_y__v8 
            = vlSelf->top_superfrog__DOT__init_f_spr_y
            [2U];
        __Vdlyvval__top_superfrog__DOT__f_spr_x__v7 
            = vlSelf->top_superfrog__DOT__init_f_spr_x
            [3U];
        __Vdlyvset__top_superfrog__DOT__f_spr_x__v7 = 1U;
        __Vdlyvval__top_superfrog__DOT__f_spr_y__v11 
            = vlSelf->top_superfrog__DOT__init_f_spr_y
            [3U];
        __Vdlyvval__top_superfrog__DOT__f_spr_x__v9 
            = vlSelf->top_superfrog__DOT__init_f_spr_x
            [4U];
        __Vdlyvset__top_superfrog__DOT__f_spr_x__v9 = 1U;
        __Vdlyvval__top_superfrog__DOT__f_spr_y__v14 
            = vlSelf->top_superfrog__DOT__init_f_spr_y
            [4U];
        vlSelf->top_superfrog__DOT__dead = 0U;
        __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__state = 0U;
        __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_rom_addr = 0U;
        __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__bmap_x = 0U;
        __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__cnt_x = 0U;
        vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__sprite_fall__pix = 0U;
        vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__sprite_fall__drawing = 0U;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__state 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__state;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__cnt_x 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__cnt_x;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__bmap_x 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__bmap_x;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__sprx_r 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__sprx_r;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_rom_addr 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_rom_addr;
        __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__state = 0U;
        __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_rom_addr = 0U;
        __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__bmap_x = 0U;
        __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__cnt_x = 0U;
        vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__sprite_fall__pix = 0U;
        vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__sprite_fall__drawing = 0U;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__state 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__state;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__cnt_x 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__cnt_x;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__bmap_x 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__bmap_x;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__sprx_r 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__sprx_r;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_rom_addr 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_rom_addr;
        __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__state = 0U;
        __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_rom_addr = 0U;
        __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__bmap_x = 0U;
        __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__cnt_x = 0U;
        vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__sprite_fall__pix = 0U;
        vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__sprite_fall__drawing = 0U;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__state 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__state;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__cnt_x 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__cnt_x;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__bmap_x 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__bmap_x;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__sprx_r 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__sprx_r;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_rom_addr 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_rom_addr;
        __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__state = 0U;
        __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_rom_addr = 0U;
        __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__bmap_x = 0U;
        __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__cnt_x = 0U;
        vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__sprite_fall__pix = 0U;
        vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__sprite_fall__drawing = 0U;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__state 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__state;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__cnt_x 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__cnt_x;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__bmap_x 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__bmap_x;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__sprx_r 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__sprx_r;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_rom_addr 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_rom_addr;
        __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__state = 0U;
        __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_rom_addr = 0U;
        __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__bmap_x = 0U;
        __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__cnt_x = 0U;
        vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__sprite_fall__pix = 0U;
        vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__sprite_fall__drawing = 0U;
    } else {
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__state 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__state;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__cnt_x 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__cnt_x;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__bmap_x 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__bmap_x;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__sprx_r 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__sprx_r;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_rom_addr 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_rom_addr;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__state 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__state;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__cnt_x 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__cnt_x;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__bmap_x 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__bmap_x;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__sprx_r 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__sprx_r;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_rom_addr 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_rom_addr;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__state 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__state;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__cnt_x 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__cnt_x;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__bmap_x 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__bmap_x;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__sprx_r 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__sprx_r;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_rom_addr 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_rom_addr;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__state 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__state;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__cnt_x 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__cnt_x;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__bmap_x 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__bmap_x;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__sprx_r 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__sprx_r;
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_rom_addr 
            = __Vdly__top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_rom_addr;
    }
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__state 
        = __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__state;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__cnt_x 
        = __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__cnt_x;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__bmap_x 
        = __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__bmap_x;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__sprx_r 
        = __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__sprx_r;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_rom_addr 
        = __Vdly__top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_rom_addr;
    if (__Vdlyvset__top_superfrog__DOT__f_spr_y__v0) {
        vlSelf->top_superfrog__DOT__f_spr_x[0U] = (
                                                   ((~ 
                                                     ((IData)(0x1ffU) 
                                                      << (IData)(__Vdlyvlsb__top_superfrog__DOT__f_spr_x__v0))) 
                                                    & vlSelf->top_superfrog__DOT__f_spr_x
                                                    [0U]) 
                                                   | (0xffffU 
                                                      & ((IData)(__Vdlyvval__top_superfrog__DOT__f_spr_x__v0) 
                                                         << (IData)(__Vdlyvlsb__top_superfrog__DOT__f_spr_x__v0))));
        vlSelf->top_superfrog__DOT__f_spr_y[0U] = 0xfed4U;
    }
    if (__Vdlyvset__top_superfrog__DOT__f_spr_x__v1) {
        vlSelf->top_superfrog__DOT__f_spr_x[0U] = __Vdlyvval__top_superfrog__DOT__f_spr_x__v1;
    }
    if (__Vdlyvset__top_superfrog__DOT__f_spr_y__v3) {
        vlSelf->top_superfrog__DOT__f_spr_x[1U] = (
                                                   ((~ 
                                                     ((IData)(0x1ffU) 
                                                      << (IData)(__Vdlyvlsb__top_superfrog__DOT__f_spr_x__v2))) 
                                                    & vlSelf->top_superfrog__DOT__f_spr_x
                                                    [1U]) 
                                                   | (0xffffU 
                                                      & ((IData)(__Vdlyvval__top_superfrog__DOT__f_spr_x__v2) 
                                                         << (IData)(__Vdlyvlsb__top_superfrog__DOT__f_spr_x__v2))));
    }
    if (__Vdlyvset__top_superfrog__DOT__f_spr_x__v3) {
        vlSelf->top_superfrog__DOT__f_spr_x[1U] = __Vdlyvval__top_superfrog__DOT__f_spr_x__v3;
    }
    if (__Vdlyvset__top_superfrog__DOT__f_spr_y__v6) {
        vlSelf->top_superfrog__DOT__f_spr_x[2U] = (
                                                   ((~ 
                                                     ((IData)(0x1ffU) 
                                                      << (IData)(__Vdlyvlsb__top_superfrog__DOT__f_spr_x__v4))) 
                                                    & vlSelf->top_superfrog__DOT__f_spr_x
                                                    [2U]) 
                                                   | (0xffffU 
                                                      & ((IData)(__Vdlyvval__top_superfrog__DOT__f_spr_x__v4) 
                                                         << (IData)(__Vdlyvlsb__top_superfrog__DOT__f_spr_x__v4))));
    }
    if (__Vdlyvset__top_superfrog__DOT__f_spr_x__v5) {
        vlSelf->top_superfrog__DOT__f_spr_x[2U] = __Vdlyvval__top_superfrog__DOT__f_spr_x__v5;
    }
    if (__Vdlyvset__top_superfrog__DOT__f_spr_y__v9) {
        vlSelf->top_superfrog__DOT__f_spr_x[3U] = (
                                                   ((~ 
                                                     ((IData)(0x1ffU) 
                                                      << (IData)(__Vdlyvlsb__top_superfrog__DOT__f_spr_x__v6))) 
                                                    & vlSelf->top_superfrog__DOT__f_spr_x
                                                    [3U]) 
                                                   | (0xffffU 
                                                      & ((IData)(__Vdlyvval__top_superfrog__DOT__f_spr_x__v6) 
                                                         << (IData)(__Vdlyvlsb__top_superfrog__DOT__f_spr_x__v6))));
    }
    if (__Vdlyvset__top_superfrog__DOT__f_spr_x__v7) {
        vlSelf->top_superfrog__DOT__f_spr_x[3U] = __Vdlyvval__top_superfrog__DOT__f_spr_x__v7;
    }
    if (__Vdlyvset__top_superfrog__DOT__f_spr_y__v12) {
        vlSelf->top_superfrog__DOT__f_spr_x[4U] = (
                                                   ((~ 
                                                     ((IData)(0x1ffU) 
                                                      << (IData)(__Vdlyvlsb__top_superfrog__DOT__f_spr_x__v8))) 
                                                    & vlSelf->top_superfrog__DOT__f_spr_x
                                                    [4U]) 
                                                   | (0xffffU 
                                                      & ((IData)(__Vdlyvval__top_superfrog__DOT__f_spr_x__v8) 
                                                         << (IData)(__Vdlyvlsb__top_superfrog__DOT__f_spr_x__v8))));
    }
    if (__Vdlyvset__top_superfrog__DOT__f_spr_y__v1) {
        vlSelf->top_superfrog__DOT__f_spr_y[0U] = __Vdlyvval__top_superfrog__DOT__f_spr_y__v1;
    }
    if (__Vdlyvset__top_superfrog__DOT__f_spr_x__v1) {
        vlSelf->top_superfrog__DOT__f_spr_y[0U] = __Vdlyvval__top_superfrog__DOT__f_spr_y__v2;
    }
    if (__Vdlyvset__top_superfrog__DOT__f_spr_y__v3) {
        vlSelf->top_superfrog__DOT__f_spr_y[1U] = 0xfed4U;
    }
    if (__Vdlyvset__top_superfrog__DOT__f_spr_y__v4) {
        vlSelf->top_superfrog__DOT__f_spr_y[1U] = __Vdlyvval__top_superfrog__DOT__f_spr_y__v4;
    }
    if (__Vdlyvset__top_superfrog__DOT__f_spr_x__v3) {
        vlSelf->top_superfrog__DOT__f_spr_y[1U] = __Vdlyvval__top_superfrog__DOT__f_spr_y__v5;
    }
    if (__Vdlyvset__top_superfrog__DOT__f_spr_y__v6) {
        vlSelf->top_superfrog__DOT__f_spr_y[2U] = 0xfed4U;
    }
    if (__Vdlyvset__top_superfrog__DOT__f_spr_y__v7) {
        vlSelf->top_superfrog__DOT__f_spr_y[2U] = __Vdlyvval__top_superfrog__DOT__f_spr_y__v7;
    }
    if (__Vdlyvset__top_superfrog__DOT__f_spr_x__v5) {
        vlSelf->top_superfrog__DOT__f_spr_y[2U] = __Vdlyvval__top_superfrog__DOT__f_spr_y__v8;
    }
    if (__Vdlyvset__top_superfrog__DOT__f_spr_y__v9) {
        vlSelf->top_superfrog__DOT__f_spr_y[3U] = 0xfed4U;
    }
    if (__Vdlyvset__top_superfrog__DOT__f_spr_y__v10) {
        vlSelf->top_superfrog__DOT__f_spr_y[3U] = __Vdlyvval__top_superfrog__DOT__f_spr_y__v10;
    }
    if (__Vdlyvset__top_superfrog__DOT__f_spr_x__v7) {
        vlSelf->top_superfrog__DOT__f_spr_y[3U] = __Vdlyvval__top_superfrog__DOT__f_spr_y__v11;
    }
    if (__Vdlyvset__top_superfrog__DOT__f_spr_y__v12) {
        vlSelf->top_superfrog__DOT__f_spr_y[4U] = 0xfed4U;
    }
    if (__Vdlyvset__top_superfrog__DOT__f_spr_y__v13) {
        vlSelf->top_superfrog__DOT__f_spr_y[4U] = __Vdlyvval__top_superfrog__DOT__f_spr_y__v13;
    }
    if (__Vdlyvset__top_superfrog__DOT__f_spr_x__v9) {
        vlSelf->top_superfrog__DOT__f_spr_x[4U] = __Vdlyvval__top_superfrog__DOT__f_spr_x__v9;
        vlSelf->top_superfrog__DOT__f_spr_y[4U] = __Vdlyvval__top_superfrog__DOT__f_spr_y__v14;
    }
    if (vlSelf->top_superfrog__DOT__drawing_t1) {
        vlSelf->top_superfrog__DOT__paint_g = (0xfU 
                                               & ((IData)(vlSelf->top_superfrog__DOT__spr_pix_colr) 
                                                  >> 4U));
        vlSelf->top_superfrog__DOT__paint_r = (0xfU 
                                               & ((IData)(vlSelf->top_superfrog__DOT__spr_pix_colr) 
                                                  >> 8U));
        vlSelf->top_superfrog__DOT__paint_b = (0xfU 
                                               & (IData)(vlSelf->top_superfrog__DOT__spr_pix_colr));
    } else if (vlSelf->top_superfrog__DOT__h_drawing_t1) {
        vlSelf->top_superfrog__DOT__paint_g = (0xfU 
                                               & ((IData)(vlSelf->top_superfrog__DOT__h_spr_pix_colr) 
                                                  >> 4U));
        vlSelf->top_superfrog__DOT__paint_r = (0xfU 
                                               & ((IData)(vlSelf->top_superfrog__DOT__h_spr_pix_colr) 
                                                  >> 8U));
        vlSelf->top_superfrog__DOT__paint_b = (0xfU 
                                               & (IData)(vlSelf->top_superfrog__DOT__h_spr_pix_colr));
    } else if (vlSelf->top_superfrog__DOT__f_drawing_t1
               [0U]) {
        vlSelf->top_superfrog__DOT__paint_g = (0xfU 
                                               & (vlSelf->top_superfrog__DOT__f_spr_pix_colr
                                                  [0U] 
                                                  >> 4U));
        vlSelf->top_superfrog__DOT__paint_r = (0xfU 
                                               & (vlSelf->top_superfrog__DOT__f_spr_pix_colr
                                                  [0U] 
                                                  >> 8U));
        vlSelf->top_superfrog__DOT__paint_b = (0xfU 
                                               & vlSelf->top_superfrog__DOT__f_spr_pix_colr
                                               [0U]);
    } else if (vlSelf->top_superfrog__DOT__f_drawing_t1
               [1U]) {
        vlSelf->top_superfrog__DOT__paint_g = (0xfU 
                                               & (vlSelf->top_superfrog__DOT__f_spr_pix_colr
                                                  [1U] 
                                                  >> 4U));
        vlSelf->top_superfrog__DOT__paint_r = (0xfU 
                                               & (vlSelf->top_superfrog__DOT__f_spr_pix_colr
                                                  [1U] 
                                                  >> 8U));
        vlSelf->top_superfrog__DOT__paint_b = (0xfU 
                                               & vlSelf->top_superfrog__DOT__f_spr_pix_colr
                                               [1U]);
    } else if (vlSelf->top_superfrog__DOT__f_drawing_t1
               [2U]) {
        vlSelf->top_superfrog__DOT__paint_g = (0xfU 
                                               & (vlSelf->top_superfrog__DOT__f_spr_pix_colr
                                                  [2U] 
                                                  >> 4U));
        vlSelf->top_superfrog__DOT__paint_r = (0xfU 
                                               & (vlSelf->top_superfrog__DOT__f_spr_pix_colr
                                                  [2U] 
                                                  >> 8U));
        vlSelf->top_superfrog__DOT__paint_b = (0xfU 
                                               & vlSelf->top_superfrog__DOT__f_spr_pix_colr
                                               [2U]);
    } else if (vlSelf->top_superfrog__DOT__f_drawing_t1
               [3U]) {
        vlSelf->top_superfrog__DOT__paint_g = (0xfU 
                                               & (vlSelf->top_superfrog__DOT__f_spr_pix_colr
                                                  [3U] 
                                                  >> 4U));
        vlSelf->top_superfrog__DOT__paint_r = (0xfU 
                                               & (vlSelf->top_superfrog__DOT__f_spr_pix_colr
                                                  [3U] 
                                                  >> 8U));
        vlSelf->top_superfrog__DOT__paint_b = (0xfU 
                                               & vlSelf->top_superfrog__DOT__f_spr_pix_colr
                                               [3U]);
    } else if (vlSelf->top_superfrog__DOT__f_drawing_t1
               [4U]) {
        vlSelf->top_superfrog__DOT__paint_g = (0xfU 
                                               & (vlSelf->top_superfrog__DOT__f_spr_pix_colr
                                                  [4U] 
                                                  >> 4U));
        vlSelf->top_superfrog__DOT__paint_r = (0xfU 
                                               & (vlSelf->top_superfrog__DOT__f_spr_pix_colr
                                                  [4U] 
                                                  >> 8U));
        vlSelf->top_superfrog__DOT__paint_b = (0xfU 
                                               & vlSelf->top_superfrog__DOT__f_spr_pix_colr
                                               [4U]);
    } else {
        vlSelf->top_superfrog__DOT__paint_g = (0xfU 
                                               & ((IData)(vlSelf->top_superfrog__DOT__bg_colr) 
                                                  >> 4U));
        vlSelf->top_superfrog__DOT__paint_r = (0xfU 
                                               & ((IData)(vlSelf->top_superfrog__DOT__bg_colr) 
                                                  >> 8U));
        vlSelf->top_superfrog__DOT__paint_b = (0xfU 
                                               & (IData)(vlSelf->top_superfrog__DOT__bg_colr));
    }
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_end 
        = (0x1fU == (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__bmap_x));
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_rom_data 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_rom__DOT__memory
        [vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_rom_addr];
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_diff 
        = (0xffffU & VL_SHIFTRS_III(16,16,32, (0xffffU 
                                               & ((IData)(vlSelf->top_superfrog__DOT__sy) 
                                                  - (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spry_r))), 2U));
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_active 
        = (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_diff))) 
           & VL_GTS_III(32, 0x20U, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_diff))));
    vlSelf->top_superfrog__DOT__f_spr_pix_indx[4U] 
        = vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__sprite_fall__pix;
    vlSelf->top_superfrog__DOT__f_drawing[4U] = vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__sprite_fall__drawing;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_end 
        = (0x1fU == (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__bmap_x));
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_rom_data 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_rom__DOT__memory
        [vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_rom_addr];
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_diff 
        = (0xffffU & VL_SHIFTRS_III(16,16,32, (0xffffU 
                                               & ((IData)(vlSelf->top_superfrog__DOT__sy) 
                                                  - (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spry_r))), 2U));
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_active 
        = (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_diff))) 
           & VL_GTS_III(32, 0x20U, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_diff))));
    vlSelf->top_superfrog__DOT__f_spr_pix_indx[3U] 
        = vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__sprite_fall__pix;
    vlSelf->top_superfrog__DOT__f_drawing[3U] = vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__sprite_fall__drawing;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_end 
        = (0x1fU == (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__bmap_x));
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_rom_data 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_rom__DOT__memory
        [vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_rom_addr];
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_diff 
        = (0xffffU & VL_SHIFTRS_III(16,16,32, (0xffffU 
                                               & ((IData)(vlSelf->top_superfrog__DOT__sy) 
                                                  - (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spry_r))), 2U));
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_active 
        = (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_diff))) 
           & VL_GTS_III(32, 0x20U, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_diff))));
    vlSelf->top_superfrog__DOT__f_spr_pix_indx[2U] 
        = vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__sprite_fall__pix;
    vlSelf->top_superfrog__DOT__f_drawing[2U] = vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__sprite_fall__drawing;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_end 
        = (0x1fU == (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__bmap_x));
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_rom_data 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_rom__DOT__memory
        [vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_rom_addr];
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_diff 
        = (0xffffU & VL_SHIFTRS_III(16,16,32, (0xffffU 
                                               & ((IData)(vlSelf->top_superfrog__DOT__sy) 
                                                  - (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spry_r))), 2U));
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_active 
        = (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_diff))) 
           & VL_GTS_III(32, 0x20U, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_diff))));
    vlSelf->top_superfrog__DOT__f_spr_pix_indx[1U] 
        = vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__sprite_fall__pix;
    vlSelf->top_superfrog__DOT__f_drawing[1U] = vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__sprite_fall__drawing;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_end 
        = (0x1fU == (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__bmap_x));
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_rom_data 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_rom__DOT__memory
        [vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_rom_addr];
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_diff 
        = (0xffffU & VL_SHIFTRS_III(16,16,32, (0xffffU 
                                               & ((IData)(vlSelf->top_superfrog__DOT__sy) 
                                                  - (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spry_r))), 2U));
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_active 
        = (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_diff))) 
           & VL_GTS_III(32, 0x20U, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_diff))));
    vlSelf->top_superfrog__DOT__f_spr_pix_indx[0U] 
        = vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__sprite_fall__pix;
    vlSelf->top_superfrog__DOT__f_drawing[0U] = vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__sprite_fall__drawing;
    if (vlSelf->rst_pix) {
        __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__state = 0U;
        __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__spr_rom_addr = 0U;
        __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__bmap_x = 0U;
        __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__cnt_x = 0U;
        vlSelf->top_superfrog__DOT__spr_pix_indx = 0U;
        vlSelf->top_superfrog__DOT__drawing = 0U;
        vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__state 
            = __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__state;
        vlSelf->top_superfrog__DOT__sprx = __Vdly__top_superfrog__DOT__sprx;
        vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__cnt_x 
            = __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__cnt_x;
        vlSelf->top_superfrog__DOT__spry = __Vdly__top_superfrog__DOT__spry;
        vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__bmap_x 
            = __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__bmap_x;
        vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__sprx_r 
            = __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__sprx_r;
        vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_rom_addr 
            = __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__spr_rom_addr;
        __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__state = 0U;
        __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__spr_rom_addr = 0U;
        __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__bmap_x = 0U;
        __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__cnt_x = 0U;
        vlSelf->top_superfrog__DOT__h_spr_pix_indx = 0U;
        vlSelf->top_superfrog__DOT__h_drawing = 0U;
    } else {
        vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__state 
            = __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__state;
        vlSelf->top_superfrog__DOT__sprx = __Vdly__top_superfrog__DOT__sprx;
        vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__cnt_x 
            = __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__cnt_x;
        vlSelf->top_superfrog__DOT__spry = __Vdly__top_superfrog__DOT__spry;
        vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__bmap_x 
            = __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__bmap_x;
        vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__sprx_r 
            = __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__sprx_r;
        vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_rom_addr 
            = __Vdly__top_superfrog__DOT__sprite_superfrog__DOT__spr_rom_addr;
    }
    vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__state 
        = __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__state;
    vlSelf->top_superfrog__DOT__h_sprx = __Vdly__top_superfrog__DOT__h_sprx;
    vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__cnt_x 
        = __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__cnt_x;
    vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__bmap_x 
        = __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__bmap_x;
    vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__sprx_r 
        = __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__sprx_r;
    vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_rom_addr 
        = __Vdly__top_superfrog__DOT__sprite_hedgehog__DOT__spr_rom_addr;
    vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_end 
        = (0x27U == (IData)(vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__bmap_x));
    vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_rom_data 
        = ((0x63fU >= (IData)(vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_rom_addr))
            ? vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_rom__DOT__memory
           [vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_rom_addr]
            : 0U);
    vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_diff 
        = (0xffffU & VL_SHIFTRS_III(16,16,32, (0xffffU 
                                               & ((IData)(vlSelf->top_superfrog__DOT__sy) 
                                                  - (IData)(vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spry_r))), 1U));
    vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_active 
        = (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_diff))) 
           & VL_GTS_III(32, 0x28U, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_diff))));
    vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_end 
        = (0x1fU == (IData)(vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__bmap_x));
    vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_rom_data 
        = ((0x27fU >= (IData)(vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_rom_addr))
            ? vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_rom__DOT__memory
           [vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_rom_addr]
            : 0U);
    vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_diff 
        = (0xffffU & VL_SHIFTRS_III(16,16,32, (0xffffU 
                                               & ((IData)(vlSelf->top_superfrog__DOT__sy) 
                                                  - (IData)(vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spry_r))), 1U));
    vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_active 
        = (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_diff))) 
           & VL_GTS_III(32, 0x14U, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_diff))));
    vlSelf->top_superfrog__DOT__line = vlSelf->top_superfrog__DOT__display_inst__DOT__r_line;
    vlSelf->top_superfrog__DOT__sx = vlSelf->top_superfrog__DOT__display_inst__DOT__horizontal_counter_reg;
    if (vlSelf->rst_pix) {
        vlSelf->top_superfrog__DOT__display_inst__DOT__vertical_counter_reg = 0U;
        vlSelf->top_superfrog__DOT__h_spry = 0x118U;
        vlSelf->top_superfrog__DOT__display_inst__DOT__horizontal_counter_reg = 0U;
    } else {
        vlSelf->top_superfrog__DOT__display_inst__DOT__vertical_counter_reg 
            = vlSelf->top_superfrog__DOT__display_inst__DOT__vertical_counter_next;
        vlSelf->top_superfrog__DOT__display_inst__DOT__horizontal_counter_reg 
            = vlSelf->top_superfrog__DOT__display_inst__DOT__horizontal_counter_next;
    }
    vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_begin 
        = VL_GTES_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sx)), 
                      (VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__sprx_r)) 
                       - (IData)(3U)));
    vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_begin 
        = VL_GTES_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sx)), 
                      (VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__sprx_r)) 
                       - (IData)(3U)));
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_begin 
        = VL_GTES_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sx)), 
                      (VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__sprx_r)) 
                       - (IData)(3U)));
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_begin 
        = VL_GTES_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sx)), 
                      (VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__sprx_r)) 
                       - (IData)(3U)));
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_begin 
        = VL_GTES_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sx)), 
                      (VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__sprx_r)) 
                       - (IData)(3U)));
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_begin 
        = VL_GTES_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sx)), 
                      (VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__sprx_r)) 
                       - (IData)(3U)));
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_begin 
        = VL_GTES_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sx)), 
                      (VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__sprx_r)) 
                       - (IData)(3U)));
    vlSelf->top_superfrog__DOT__display_inst__DOT__horizontal_counter_next 
        = vlSelf->top_superfrog__DOT__display_inst__DOT__horizontal_counter_reg;
    vlSelf->top_superfrog__DOT__display_inst__DOT__r_line = 0U;
    vlSelf->top_superfrog__DOT__display_inst__DOT__is_displaying_pixels = 0U;
    if (((0x280U > (IData)(vlSelf->top_superfrog__DOT__display_inst__DOT__horizontal_counter_reg)) 
         & (0x1e0U > (IData)(vlSelf->top_superfrog__DOT__display_inst__DOT__vertical_counter_reg)))) {
        vlSelf->top_superfrog__DOT__display_inst__DOT__is_displaying_pixels = 1U;
    }
    vlSelf->top_superfrog__DOT__display_inst__DOT__vertical_counter_next 
        = vlSelf->top_superfrog__DOT__display_inst__DOT__vertical_counter_reg;
    vlSelf->top_superfrog__DOT__display_inst__DOT__r_frame = 0U;
    if (vlSelf->clk_pix) {
        if ((0x31fU == (IData)(vlSelf->top_superfrog__DOT__display_inst__DOT__horizontal_counter_reg))) {
            vlSelf->top_superfrog__DOT__display_inst__DOT__horizontal_counter_next = 0U;
            vlSelf->top_superfrog__DOT__display_inst__DOT__vertical_counter_next 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->top_superfrog__DOT__display_inst__DOT__vertical_counter_reg)));
            if ((0x208U == (IData)(vlSelf->top_superfrog__DOT__display_inst__DOT__vertical_counter_reg))) {
                vlSelf->top_superfrog__DOT__display_inst__DOT__vertical_counter_next = 0U;
            }
        } else {
            vlSelf->top_superfrog__DOT__display_inst__DOT__horizontal_counter_next 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->top_superfrog__DOT__display_inst__DOT__horizontal_counter_reg)));
        }
        vlSelf->top_superfrog__DOT__display_inst__DOT__r_line 
            = (0U == (IData)(vlSelf->top_superfrog__DOT__display_inst__DOT__horizontal_counter_reg));
        vlSelf->top_superfrog__DOT__display_inst__DOT__r_frame 
            = ((0U == (IData)(vlSelf->top_superfrog__DOT__display_inst__DOT__horizontal_counter_reg)) 
               & (0U == (IData)(vlSelf->top_superfrog__DOT__display_inst__DOT__vertical_counter_reg)));
    }
}

void Vtop_superfrog___024root___eval_nba(Vtop_superfrog___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_superfrog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_superfrog___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_superfrog___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtop_superfrog___024root___eval_triggers__ico(Vtop_superfrog___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_superfrog___024root___dump_triggers__ico(Vtop_superfrog___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop_superfrog___024root___eval_triggers__act(Vtop_superfrog___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_superfrog___024root___dump_triggers__act(Vtop_superfrog___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_superfrog___024root___dump_triggers__nba(Vtop_superfrog___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_superfrog___024root___eval(Vtop_superfrog___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_superfrog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_superfrog___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop_superfrog___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop_superfrog___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("top_superfrog.sv", 3, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop_superfrog___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop_superfrog___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop_superfrog___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("top_superfrog.sv", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtop_superfrog___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop_superfrog___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("top_superfrog.sv", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop_superfrog___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop_superfrog___024root___eval_debug_assertions(Vtop_superfrog___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_superfrog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_superfrog___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_pix & 0xfeU))) {
        Verilated::overWidthError("clk_pix");}
    if (VL_UNLIKELY((vlSelf->rst_pix & 0xfeU))) {
        Verilated::overWidthError("rst_pix");}
    if (VL_UNLIKELY((vlSelf->btn_rst_n & 0xfeU))) {
        Verilated::overWidthError("btn_rst_n");}
    if (VL_UNLIKELY((vlSelf->btn_right & 0xfeU))) {
        Verilated::overWidthError("btn_right");}
    if (VL_UNLIKELY((vlSelf->btn_left & 0xfeU))) {
        Verilated::overWidthError("btn_left");}
    if (VL_UNLIKELY((vlSelf->btn_up & 0xfeU))) {
        Verilated::overWidthError("btn_up");}
}
#endif  // VL_DEBUG
