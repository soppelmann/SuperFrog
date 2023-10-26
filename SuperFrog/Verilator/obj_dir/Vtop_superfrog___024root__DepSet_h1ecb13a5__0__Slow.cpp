// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_superfrog.h for the primary calling header

#include "verilated.h"

#include "Vtop_superfrog__Syms.h"
#include "Vtop_superfrog___024root.h"

VL_ATTR_COLD void Vtop_superfrog___024root___eval_static__TOP(Vtop_superfrog___024root* vlSelf);

VL_ATTR_COLD void Vtop_superfrog___024root___eval_static(Vtop_superfrog___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_superfrog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_superfrog___024root___eval_static\n"); );
    // Body
    Vtop_superfrog___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop_superfrog___024root___eval_static__TOP(Vtop_superfrog___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_superfrog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_superfrog___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->top_superfrog__DOT__sreg = 0U;
}

VL_ATTR_COLD void Vtop_superfrog___024root___eval_initial__TOP(Vtop_superfrog___024root* vlSelf);

VL_ATTR_COLD void Vtop_superfrog___024root___eval_initial(Vtop_superfrog___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_superfrog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_superfrog___024root___eval_initial\n"); );
    // Body
    Vtop_superfrog___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk_pix__0 = vlSelf->clk_pix;
}

extern const VlWide<8>/*255:0*/ Vtop_superfrog__ConstPool__CONST_h5a0da907_0;

VL_ATTR_COLD void Vtop_superfrog___024root___eval_initial__TOP(Vtop_superfrog___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_superfrog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_superfrog___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    VlWide<7>/*223:0*/ __Vtemp_2;
    VlWide<6>/*191:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<7>/*223:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_6;
    VlWide<7>/*223:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_8;
    VlWide<7>/*223:0*/ __Vtemp_9;
    VlWide<5>/*159:0*/ __Vtemp_10;
    VlWide<7>/*223:0*/ __Vtemp_11;
    VlWide<5>/*159:0*/ __Vtemp_12;
    VlWide<7>/*223:0*/ __Vtemp_13;
    // Body
    vlSelf->top_superfrog__DOT__init_f_spr_x[0U] = 0x9eU;
    vlSelf->top_superfrog__DOT__init_f_spr_x[1U] = 0xdeU;
    vlSelf->top_superfrog__DOT__init_f_spr_x[2U] = 0x11eU;
    vlSelf->top_superfrog__DOT__init_f_spr_x[3U] = 0x15eU;
    vlSelf->top_superfrog__DOT__init_f_spr_x[4U] = 0x19eU;
    vlSelf->top_superfrog__DOT__init_f_spr_y[0U] = 0xfed4U;
    vlSelf->top_superfrog__DOT__init_f_spr_y[1U] = 0xff38U;
    vlSelf->top_superfrog__DOT__init_f_spr_y[2U] = 0xfe70U;
    vlSelf->top_superfrog__DOT__init_f_spr_y[3U] = 0xfe0cU;
    vlSelf->top_superfrog__DOT__init_f_spr_y[4U] = 0xff06U;
    VL_WRITEF("Create rom_async with init file '../Nexys7/hedgehog.mem'.\n");
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x65686f67U;
    __Vtemp_1[2U] = 0x68656467U;
    __Vtemp_1[3U] = 0x7973372fU;
    __Vtemp_1[4U] = 0x2f4e6578U;
    __Vtemp_1[5U] = 0x2e2eU;
    VL_READMEM_N(true, 4, 640, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_1)
                 ,  &(vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_rom__DOT__memory)
                 , 0, ~0ULL);
    VL_WRITEF("Load init file '../Nexys7/hedgehog_4b.mem' into bram_sdp.\n");
    __Vtemp_2[0U] = 0x2e6d656dU;
    __Vtemp_2[1U] = 0x675f3462U;
    __Vtemp_2[2U] = 0x6765686fU;
    __Vtemp_2[3U] = 0x2f686564U;
    __Vtemp_2[4U] = 0x78797337U;
    __Vtemp_2[5U] = 0x2e2f4e65U;
    __Vtemp_2[6U] = 0x2eU;
    VL_READMEM_N(true, 12, 16, 0, VL_CVT_PACK_STR_NW(7, __Vtemp_2)
                 ,  &(vlSelf->top_superfrog__DOT__h_clut_instance__DOT__bram_clut__DOT__memory)
                 , 0, ~0ULL);
    VL_WRITEF("Create rom_async with init file '../Nexys7/superfrog.mem'.\n");
    __Vtemp_3[0U] = 0x2e6d656dU;
    __Vtemp_3[1U] = 0x66726f67U;
    __Vtemp_3[2U] = 0x75706572U;
    __Vtemp_3[3U] = 0x73372f73U;
    __Vtemp_3[4U] = 0x4e657879U;
    __Vtemp_3[5U] = 0x2e2e2fU;
    VL_READMEM_N(true, 4, 1600, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_3)
                 ,  &(vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_rom__DOT__memory)
                 , 0, ~0ULL);
    VL_WRITEF("Load init file '../Nexys7/superfrog_palette.mem' into bram_sdp.\n");
    VL_READMEM_N(true, 12, 16, 0, VL_CVT_PACK_STR_NW(8, Vtop_superfrog__ConstPool__CONST_h5a0da907_0)
                 ,  &(vlSelf->top_superfrog__DOT__clut_instance__DOT__bram_clut__DOT__memory)
                 , 0, ~0ULL);
    VL_WRITEF("Create rom_async with init file '../Nexys7/meteor.mem'.\n");
    __Vtemp_4[0U] = 0x2e6d656dU;
    __Vtemp_4[1U] = 0x74656f72U;
    __Vtemp_4[2U] = 0x372f6d65U;
    __Vtemp_4[3U] = 0x65787973U;
    __Vtemp_4[4U] = 0x2e2e2f4eU;
    VL_READMEM_N(true, 4, 1024, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_4)
                 ,  &(vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_rom__DOT__memory)
                 , 0, ~0ULL);
    VL_WRITEF("Load init file '../Nexys7/meteor_palette.mem' into bram_sdp.\n");
    __Vtemp_5[0U] = 0x2e6d656dU;
    __Vtemp_5[1U] = 0x65747465U;
    __Vtemp_5[2U] = 0x5f70616cU;
    __Vtemp_5[3U] = 0x74656f72U;
    __Vtemp_5[4U] = 0x372f6d65U;
    __Vtemp_5[5U] = 0x65787973U;
    __Vtemp_5[6U] = 0x2e2e2f4eU;
    VL_READMEM_N(true, 12, 16, 0, VL_CVT_PACK_STR_NW(7, __Vtemp_5)
                 ,  &(vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__f_clut_instance__DOT__bram_clut__DOT__memory)
                 , 0, ~0ULL);
    VL_WRITEF("Create rom_async with init file '../Nexys7/meteor.mem'.\n");
    __Vtemp_6[0U] = 0x2e6d656dU;
    __Vtemp_6[1U] = 0x74656f72U;
    __Vtemp_6[2U] = 0x372f6d65U;
    __Vtemp_6[3U] = 0x65787973U;
    __Vtemp_6[4U] = 0x2e2e2f4eU;
    VL_READMEM_N(true, 4, 1024, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_6)
                 ,  &(vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_rom__DOT__memory)
                 , 0, ~0ULL);
    VL_WRITEF("Load init file '../Nexys7/meteor_palette.mem' into bram_sdp.\n");
    __Vtemp_7[0U] = 0x2e6d656dU;
    __Vtemp_7[1U] = 0x65747465U;
    __Vtemp_7[2U] = 0x5f70616cU;
    __Vtemp_7[3U] = 0x74656f72U;
    __Vtemp_7[4U] = 0x372f6d65U;
    __Vtemp_7[5U] = 0x65787973U;
    __Vtemp_7[6U] = 0x2e2e2f4eU;
    VL_READMEM_N(true, 12, 16, 0, VL_CVT_PACK_STR_NW(7, __Vtemp_7)
                 ,  &(vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__f_clut_instance__DOT__bram_clut__DOT__memory)
                 , 0, ~0ULL);
    VL_WRITEF("Create rom_async with init file '../Nexys7/meteor.mem'.\n");
    __Vtemp_8[0U] = 0x2e6d656dU;
    __Vtemp_8[1U] = 0x74656f72U;
    __Vtemp_8[2U] = 0x372f6d65U;
    __Vtemp_8[3U] = 0x65787973U;
    __Vtemp_8[4U] = 0x2e2e2f4eU;
    VL_READMEM_N(true, 4, 1024, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_8)
                 ,  &(vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_rom__DOT__memory)
                 , 0, ~0ULL);
    VL_WRITEF("Load init file '../Nexys7/meteor_palette.mem' into bram_sdp.\n");
    __Vtemp_9[0U] = 0x2e6d656dU;
    __Vtemp_9[1U] = 0x65747465U;
    __Vtemp_9[2U] = 0x5f70616cU;
    __Vtemp_9[3U] = 0x74656f72U;
    __Vtemp_9[4U] = 0x372f6d65U;
    __Vtemp_9[5U] = 0x65787973U;
    __Vtemp_9[6U] = 0x2e2e2f4eU;
    VL_READMEM_N(true, 12, 16, 0, VL_CVT_PACK_STR_NW(7, __Vtemp_9)
                 ,  &(vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__f_clut_instance__DOT__bram_clut__DOT__memory)
                 , 0, ~0ULL);
    VL_WRITEF("Create rom_async with init file '../Nexys7/meteor.mem'.\n");
    __Vtemp_10[0U] = 0x2e6d656dU;
    __Vtemp_10[1U] = 0x74656f72U;
    __Vtemp_10[2U] = 0x372f6d65U;
    __Vtemp_10[3U] = 0x65787973U;
    __Vtemp_10[4U] = 0x2e2e2f4eU;
    VL_READMEM_N(true, 4, 1024, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_10)
                 ,  &(vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_rom__DOT__memory)
                 , 0, ~0ULL);
    VL_WRITEF("Load init file '../Nexys7/meteor_palette.mem' into bram_sdp.\n");
    __Vtemp_11[0U] = 0x2e6d656dU;
    __Vtemp_11[1U] = 0x65747465U;
    __Vtemp_11[2U] = 0x5f70616cU;
    __Vtemp_11[3U] = 0x74656f72U;
    __Vtemp_11[4U] = 0x372f6d65U;
    __Vtemp_11[5U] = 0x65787973U;
    __Vtemp_11[6U] = 0x2e2e2f4eU;
    VL_READMEM_N(true, 12, 16, 0, VL_CVT_PACK_STR_NW(7, __Vtemp_11)
                 ,  &(vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__f_clut_instance__DOT__bram_clut__DOT__memory)
                 , 0, ~0ULL);
    VL_WRITEF("Create rom_async with init file '../Nexys7/meteor.mem'.\n");
    __Vtemp_12[0U] = 0x2e6d656dU;
    __Vtemp_12[1U] = 0x74656f72U;
    __Vtemp_12[2U] = 0x372f6d65U;
    __Vtemp_12[3U] = 0x65787973U;
    __Vtemp_12[4U] = 0x2e2e2f4eU;
    VL_READMEM_N(true, 4, 1024, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_12)
                 ,  &(vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_rom__DOT__memory)
                 , 0, ~0ULL);
    VL_WRITEF("Load init file '../Nexys7/meteor_palette.mem' into bram_sdp.\n");
    __Vtemp_13[0U] = 0x2e6d656dU;
    __Vtemp_13[1U] = 0x65747465U;
    __Vtemp_13[2U] = 0x5f70616cU;
    __Vtemp_13[3U] = 0x74656f72U;
    __Vtemp_13[4U] = 0x372f6d65U;
    __Vtemp_13[5U] = 0x65787973U;
    __Vtemp_13[6U] = 0x2e2e2f4eU;
    VL_READMEM_N(true, 12, 16, 0, VL_CVT_PACK_STR_NW(7, __Vtemp_13)
                 ,  &(vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__f_clut_instance__DOT__bram_clut__DOT__memory)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtop_superfrog___024root___eval_final(Vtop_superfrog___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_superfrog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_superfrog___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop_superfrog___024root___eval_triggers__stl(Vtop_superfrog___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_superfrog___024root___dump_triggers__stl(Vtop_superfrog___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop_superfrog___024root___eval_stl(Vtop_superfrog___024root* vlSelf);

VL_ATTR_COLD void Vtop_superfrog___024root___eval_settle(Vtop_superfrog___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_superfrog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_superfrog___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop_superfrog___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop_superfrog___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("top_superfrog.sv", 3, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop_superfrog___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_superfrog___024root___dump_triggers__stl(Vtop_superfrog___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_superfrog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_superfrog___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_superfrog___024root___stl_sequent__TOP__0(Vtop_superfrog___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_superfrog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_superfrog___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_end 
        = (0x1fU == (IData)(vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__bmap_x));
    vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_end 
        = (0x27U == (IData)(vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__bmap_x));
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_end 
        = (0x1fU == (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__bmap_x));
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_end 
        = (0x1fU == (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__bmap_x));
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_end 
        = (0x1fU == (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__bmap_x));
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_end 
        = (0x1fU == (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__bmap_x));
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_end 
        = (0x1fU == (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__bmap_x));
    vlSelf->top_superfrog__DOT__display_inst__DOT__horizontal_counter_next 
        = vlSelf->top_superfrog__DOT__display_inst__DOT__horizontal_counter_reg;
    vlSelf->top_superfrog__DOT__display_inst__DOT__r_line = 0U;
    vlSelf->top_superfrog__DOT__display_inst__DOT__is_displaying_pixels = 0U;
    if (((0x280U > (IData)(vlSelf->top_superfrog__DOT__display_inst__DOT__horizontal_counter_reg)) 
         & (0x1e0U > (IData)(vlSelf->top_superfrog__DOT__display_inst__DOT__vertical_counter_reg)))) {
        vlSelf->top_superfrog__DOT__display_inst__DOT__is_displaying_pixels = 1U;
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
    vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_rom_data 
        = ((0x27fU >= (IData)(vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_rom_addr))
            ? vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_rom__DOT__memory
           [vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_rom_addr]
            : 0U);
    vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_rom_data 
        = ((0x63fU >= (IData)(vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_rom_addr))
            ? vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_rom__DOT__memory
           [vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_rom_addr]
            : 0U);
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_rom_data 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_rom__DOT__memory
        [vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_rom_addr];
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_rom_data 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_rom__DOT__memory
        [vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_rom_addr];
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_rom_data 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_rom__DOT__memory
        [vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_rom_addr];
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_rom_data 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_rom__DOT__memory
        [vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_rom_addr];
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_rom_data 
        = vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_rom__DOT__memory
        [vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_rom_addr];
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
    vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_diff 
        = (0xffffU & VL_SHIFTRS_III(16,16,32, (0xffffU 
                                               & ((IData)(vlSelf->top_superfrog__DOT__sy) 
                                                  - (IData)(vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spry_r))), 1U));
    vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_active 
        = (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_diff))) 
           & VL_GTS_III(32, 0x14U, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_diff))));
    vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_diff 
        = (0xffffU & VL_SHIFTRS_III(16,16,32, (0xffffU 
                                               & ((IData)(vlSelf->top_superfrog__DOT__sy) 
                                                  - (IData)(vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spry_r))), 1U));
    vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_active 
        = (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_diff))) 
           & VL_GTS_III(32, 0x28U, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_diff))));
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_diff 
        = (0xffffU & VL_SHIFTRS_III(16,16,32, (0xffffU 
                                               & ((IData)(vlSelf->top_superfrog__DOT__sy) 
                                                  - (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spry_r))), 2U));
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_active 
        = (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_diff))) 
           & VL_GTS_III(32, 0x20U, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_diff))));
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_diff 
        = (0xffffU & VL_SHIFTRS_III(16,16,32, (0xffffU 
                                               & ((IData)(vlSelf->top_superfrog__DOT__sy) 
                                                  - (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spry_r))), 2U));
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_active 
        = (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_diff))) 
           & VL_GTS_III(32, 0x20U, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_diff))));
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_diff 
        = (0xffffU & VL_SHIFTRS_III(16,16,32, (0xffffU 
                                               & ((IData)(vlSelf->top_superfrog__DOT__sy) 
                                                  - (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spry_r))), 2U));
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_active 
        = (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_diff))) 
           & VL_GTS_III(32, 0x20U, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_diff))));
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_diff 
        = (0xffffU & VL_SHIFTRS_III(16,16,32, (0xffffU 
                                               & ((IData)(vlSelf->top_superfrog__DOT__sy) 
                                                  - (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spry_r))), 2U));
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_active 
        = (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_diff))) 
           & VL_GTS_III(32, 0x20U, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_diff))));
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_diff 
        = (0xffffU & VL_SHIFTRS_III(16,16,32, (0xffffU 
                                               & ((IData)(vlSelf->top_superfrog__DOT__sy) 
                                                  - (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spry_r))), 2U));
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_active 
        = (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_diff))) 
           & VL_GTS_III(32, 0x20U, VL_EXTENDS_II(32,16, (IData)(vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_diff))));
    vlSelf->top_superfrog__DOT__f_drawing[0U] = vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__sprite_fall__drawing;
    vlSelf->top_superfrog__DOT__f_drawing[1U] = vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__sprite_fall__drawing;
    vlSelf->top_superfrog__DOT__f_drawing[2U] = vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__sprite_fall__drawing;
    vlSelf->top_superfrog__DOT__f_drawing[3U] = vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__sprite_fall__drawing;
    vlSelf->top_superfrog__DOT__f_drawing[4U] = vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__sprite_fall__drawing;
    vlSelf->top_superfrog__DOT__f_spr_pix_indx[0U] 
        = vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__sprite_fall__pix;
    vlSelf->top_superfrog__DOT__f_spr_pix_indx[1U] 
        = vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__sprite_fall__pix;
    vlSelf->top_superfrog__DOT__f_spr_pix_indx[2U] 
        = vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__sprite_fall__pix;
    vlSelf->top_superfrog__DOT__f_spr_pix_indx[3U] 
        = vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__sprite_fall__pix;
    vlSelf->top_superfrog__DOT__f_spr_pix_indx[4U] 
        = vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__sprite_fall__pix;
    vlSelf->top_superfrog__DOT__f_spr_pix_colr[0U] 
        = vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__f_clut_instance__colr_out;
    vlSelf->top_superfrog__DOT__f_spr_pix_colr[1U] 
        = vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__f_clut_instance__colr_out;
    vlSelf->top_superfrog__DOT__f_spr_pix_colr[2U] 
        = vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__f_clut_instance__colr_out;
    vlSelf->top_superfrog__DOT__f_spr_pix_colr[3U] 
        = vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__f_clut_instance__colr_out;
    vlSelf->top_superfrog__DOT__f_spr_pix_colr[4U] 
        = vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__f_clut_instance__colr_out;
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
}

VL_ATTR_COLD void Vtop_superfrog___024root___eval_stl(Vtop_superfrog___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_superfrog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_superfrog___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop_superfrog___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_superfrog___024root___dump_triggers__ico(Vtop_superfrog___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_superfrog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_superfrog___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_superfrog___024root___dump_triggers__act(Vtop_superfrog___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_superfrog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_superfrog___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_pix)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_superfrog___024root___dump_triggers__nba(Vtop_superfrog___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_superfrog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_superfrog___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_pix)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_superfrog___024root___ctor_var_reset(Vtop_superfrog___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_superfrog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_superfrog___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_pix = 0;
    vlSelf->rst_pix = 0;
    vlSelf->sdl_sx = 0;
    vlSelf->sdl_sy = 0;
    vlSelf->sdl_de = 0;
    vlSelf->sdl_frame = 0;
    vlSelf->sdl_r = 0;
    vlSelf->sdl_g = 0;
    vlSelf->sdl_b = 0;
    vlSelf->btn_rst_n = 0;
    vlSelf->btn_right = 0;
    vlSelf->btn_left = 0;
    vlSelf->btn_up = 0;
    vlSelf->top_superfrog__DOT__sx = 0;
    vlSelf->top_superfrog__DOT__sy = 0;
    vlSelf->top_superfrog__DOT__de = 0;
    vlSelf->top_superfrog__DOT__frame = 0;
    vlSelf->top_superfrog__DOT__line = 0;
    vlSelf->top_superfrog__DOT__sreg = 0;
    vlSelf->top_superfrog__DOT__h_sprx = 0;
    vlSelf->top_superfrog__DOT__h_spry = 0;
    vlSelf->top_superfrog__DOT__h_drawing = 0;
    vlSelf->top_superfrog__DOT__h_spr_pix_indx = 0;
    vlSelf->top_superfrog__DOT__h_spr_pix_colr = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top_superfrog__DOT__f_spr_x[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top_superfrog__DOT__f_spr_y[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top_superfrog__DOT__init_f_spr_x[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top_superfrog__DOT__init_f_spr_y[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top_superfrog__DOT__f_drawing[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top_superfrog__DOT__f_spr_pix_indx[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top_superfrog__DOT__f_spr_pix_colr[__Vi0] = 0;
    }
    vlSelf->top_superfrog__DOT__dead = 0;
    vlSelf->top_superfrog__DOT__flying = 0;
    vlSelf->top_superfrog__DOT__sprx = 0;
    vlSelf->top_superfrog__DOT__spry = 0;
    vlSelf->top_superfrog__DOT__spr_pix_indx = 0;
    vlSelf->top_superfrog__DOT__spr_pix_colr = 0;
    vlSelf->top_superfrog__DOT__drawing = 0;
    vlSelf->top_superfrog__DOT__drawing_t1 = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top_superfrog__DOT__f_drawing_t1[__Vi0] = 0;
    }
    vlSelf->top_superfrog__DOT__h_drawing_t1 = 0;
    vlSelf->top_superfrog__DOT__bg_colr = 0;
    vlSelf->top_superfrog__DOT__paint_r = 0;
    vlSelf->top_superfrog__DOT__paint_g = 0;
    vlSelf->top_superfrog__DOT__paint_b = 0;
    vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__sprite_fall__drawing = 0;
    vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__sprite_fall__pix = 0;
    vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__f_clut_instance__colr_out = 0;
    vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__sprite_fall__drawing = 0;
    vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__sprite_fall__pix = 0;
    vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__f_clut_instance__colr_out = 0;
    vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__sprite_fall__drawing = 0;
    vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__sprite_fall__pix = 0;
    vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__f_clut_instance__colr_out = 0;
    vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__sprite_fall__drawing = 0;
    vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__sprite_fall__pix = 0;
    vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__f_clut_instance__colr_out = 0;
    vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__sprite_fall__drawing = 0;
    vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__sprite_fall__pix = 0;
    vlSelf->top_superfrog__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__f_clut_instance__colr_out = 0;
    vlSelf->top_superfrog__DOT__display_inst__DOT__horizontal_counter_reg = 0;
    vlSelf->top_superfrog__DOT__display_inst__DOT__horizontal_counter_next = 0;
    vlSelf->top_superfrog__DOT__display_inst__DOT__vertical_counter_reg = 0;
    vlSelf->top_superfrog__DOT__display_inst__DOT__vertical_counter_next = 0;
    vlSelf->top_superfrog__DOT__display_inst__DOT__is_displaying_pixels = 0;
    vlSelf->top_superfrog__DOT__display_inst__DOT__r_frame = 0;
    vlSelf->top_superfrog__DOT__display_inst__DOT__r_line = 0;
    vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_rom_addr = 0;
    vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_rom_data = 0;
    vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__bmap_x = 0;
    vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__cnt_x = 0;
    vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__sprx_r = 0;
    vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spry_r = 0;
    vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_diff = 0;
    vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_active = 0;
    vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_begin = 0;
    vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_end = 0;
    vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__state = 0;
    for (int __Vi0 = 0; __Vi0 < 640; ++__Vi0) {
        vlSelf->top_superfrog__DOT__sprite_hedgehog__DOT__spr_rom__DOT__memory[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top_superfrog__DOT__h_clut_instance__DOT__bram_clut__DOT__memory[__Vi0] = 0;
    }
    vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_rom_addr = 0;
    vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_rom_data = 0;
    vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__bmap_x = 0;
    vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__cnt_x = 0;
    vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__sprx_r = 0;
    vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spry_r = 0;
    vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_diff = 0;
    vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_active = 0;
    vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_begin = 0;
    vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_end = 0;
    vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__state = 0;
    for (int __Vi0 = 0; __Vi0 < 1600; ++__Vi0) {
        vlSelf->top_superfrog__DOT__sprite_superfrog__DOT__spr_rom__DOT__memory[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top_superfrog__DOT__clut_instance__DOT__bram_clut__DOT__memory[__Vi0] = 0;
    }
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_rom_addr = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_rom_data = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__bmap_x = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__cnt_x = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__sprx_r = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spry_r = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_diff = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_active = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_begin = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_end = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__state = 0;
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_rom__DOT__memory[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__f_clut_instance__DOT__bram_clut__DOT__memory[__Vi0] = 0;
    }
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_rom_addr = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_rom_data = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__bmap_x = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__cnt_x = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__sprx_r = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spry_r = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_diff = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_active = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_begin = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_end = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__state = 0;
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_rom__DOT__memory[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__f_clut_instance__DOT__bram_clut__DOT__memory[__Vi0] = 0;
    }
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_rom_addr = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_rom_data = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__bmap_x = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__cnt_x = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__sprx_r = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spry_r = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_diff = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_active = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_begin = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_end = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__state = 0;
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_rom__DOT__memory[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__f_clut_instance__DOT__bram_clut__DOT__memory[__Vi0] = 0;
    }
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_rom_addr = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_rom_data = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__bmap_x = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__cnt_x = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__sprx_r = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spry_r = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_diff = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_active = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_begin = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_end = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__state = 0;
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_rom__DOT__memory[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__f_clut_instance__DOT__bram_clut__DOT__memory[__Vi0] = 0;
    }
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_rom_addr = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_rom_data = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__bmap_x = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__cnt_x = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__sprx_r = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spry_r = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_diff = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_active = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_begin = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_end = 0;
    vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__state = 0;
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_rom__DOT__memory[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__f_clut_instance__DOT__bram_clut__DOT__memory[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk_pix__0 = 0;
}
