// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_superfrog.h for the primary calling header

#ifndef VERILATED_VTOP_SUPERFROG___024ROOT_H_
#define VERILATED_VTOP_SUPERFROG___024ROOT_H_  // guard

#include "verilated.h"


class Vtop_superfrog__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_superfrog___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_pix,0,0);
        VL_IN8(rst_pix,0,0);
        VL_OUT8(sdl_de,0,0);
        VL_OUT8(sdl_frame,0,0);
        VL_OUT8(sdl_r,7,0);
        VL_OUT8(sdl_g,7,0);
        VL_OUT8(sdl_b,7,0);
        VL_IN8(btn_rst_n,0,0);
        VL_IN8(btn_right,0,0);
        VL_IN8(btn_left,0,0);
        VL_IN8(btn_up,0,0);
        CData/*0:0*/ top_superfrog__DOT__de;
        CData/*0:0*/ top_superfrog__DOT__frame;
        CData/*0:0*/ top_superfrog__DOT__line;
        CData/*0:0*/ top_superfrog__DOT__h_drawing;
        CData/*3:0*/ top_superfrog__DOT__h_spr_pix_indx;
        CData/*0:0*/ top_superfrog__DOT__dead;
        CData/*0:0*/ top_superfrog__DOT__flying;
        CData/*3:0*/ top_superfrog__DOT__spr_pix_indx;
        CData/*0:0*/ top_superfrog__DOT__drawing;
        CData/*0:0*/ top_superfrog__DOT__drawing_t1;
        CData/*0:0*/ top_superfrog__DOT__h_drawing_t1;
        CData/*3:0*/ top_superfrog__DOT__paint_r;
        CData/*3:0*/ top_superfrog__DOT__paint_g;
        CData/*3:0*/ top_superfrog__DOT__paint_b;
        CData/*0:0*/ top_superfrog__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__sprite_fall__drawing;
        CData/*3:0*/ top_superfrog__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__sprite_fall__pix;
        CData/*0:0*/ top_superfrog__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__sprite_fall__drawing;
        CData/*3:0*/ top_superfrog__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__sprite_fall__pix;
        CData/*0:0*/ top_superfrog__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__sprite_fall__drawing;
        CData/*3:0*/ top_superfrog__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__sprite_fall__pix;
        CData/*0:0*/ top_superfrog__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__sprite_fall__drawing;
        CData/*3:0*/ top_superfrog__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__sprite_fall__pix;
        CData/*0:0*/ top_superfrog__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__sprite_fall__drawing;
        CData/*3:0*/ top_superfrog__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__sprite_fall__pix;
        CData/*0:0*/ top_superfrog__DOT__display_inst__DOT__is_displaying_pixels;
        CData/*0:0*/ top_superfrog__DOT__display_inst__DOT__r_frame;
        CData/*0:0*/ top_superfrog__DOT__display_inst__DOT__r_line;
        CData/*3:0*/ top_superfrog__DOT__sprite_hedgehog__DOT__spr_rom_data;
        CData/*4:0*/ top_superfrog__DOT__sprite_hedgehog__DOT__bmap_x;
        CData/*1:0*/ top_superfrog__DOT__sprite_hedgehog__DOT__cnt_x;
        CData/*0:0*/ top_superfrog__DOT__sprite_hedgehog__DOT__spr_active;
        CData/*0:0*/ top_superfrog__DOT__sprite_hedgehog__DOT__spr_begin;
        CData/*0:0*/ top_superfrog__DOT__sprite_hedgehog__DOT__spr_end;
        CData/*3:0*/ top_superfrog__DOT__sprite_superfrog__DOT__spr_rom_data;
        CData/*5:0*/ top_superfrog__DOT__sprite_superfrog__DOT__bmap_x;
        CData/*1:0*/ top_superfrog__DOT__sprite_superfrog__DOT__cnt_x;
        CData/*0:0*/ top_superfrog__DOT__sprite_superfrog__DOT__spr_active;
        CData/*0:0*/ top_superfrog__DOT__sprite_superfrog__DOT__spr_begin;
        CData/*0:0*/ top_superfrog__DOT__sprite_superfrog__DOT__spr_end;
        CData/*3:0*/ top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_rom_data;
        CData/*4:0*/ top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__bmap_x;
        CData/*2:0*/ top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__cnt_x;
        CData/*0:0*/ top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_active;
        CData/*0:0*/ top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_begin;
        CData/*0:0*/ top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_end;
        CData/*3:0*/ top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_rom_data;
        CData/*4:0*/ top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__bmap_x;
        CData/*2:0*/ top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__cnt_x;
        CData/*0:0*/ top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_active;
        CData/*0:0*/ top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_begin;
        CData/*0:0*/ top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_end;
        CData/*3:0*/ top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_rom_data;
        CData/*4:0*/ top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__bmap_x;
    };
    struct {
        CData/*2:0*/ top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__cnt_x;
        CData/*0:0*/ top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_active;
        CData/*0:0*/ top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_begin;
        CData/*0:0*/ top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_end;
        CData/*3:0*/ top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_rom_data;
        CData/*4:0*/ top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__bmap_x;
        CData/*2:0*/ top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__cnt_x;
        CData/*0:0*/ top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_active;
        CData/*0:0*/ top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_begin;
        CData/*0:0*/ top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_end;
        CData/*3:0*/ top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_rom_data;
        CData/*4:0*/ top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__bmap_x;
        CData/*2:0*/ top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__cnt_x;
        CData/*0:0*/ top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_active;
        CData/*0:0*/ top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_begin;
        CData/*0:0*/ top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_end;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk_pix__0;
        CData/*0:0*/ __VactContinue;
        VL_OUT16(sdl_sx,15,0);
        VL_OUT16(sdl_sy,15,0);
        SData/*15:0*/ top_superfrog__DOT__sx;
        SData/*15:0*/ top_superfrog__DOT__sy;
        SData/*8:0*/ top_superfrog__DOT__sreg;
        SData/*15:0*/ top_superfrog__DOT__h_sprx;
        SData/*15:0*/ top_superfrog__DOT__h_spry;
        SData/*11:0*/ top_superfrog__DOT__h_spr_pix_colr;
        SData/*15:0*/ top_superfrog__DOT__sprx;
        SData/*15:0*/ top_superfrog__DOT__spry;
        SData/*11:0*/ top_superfrog__DOT__spr_pix_colr;
        SData/*11:0*/ top_superfrog__DOT__bg_colr;
        SData/*11:0*/ top_superfrog__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__f_clut_instance__colr_out;
        SData/*11:0*/ top_superfrog__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__f_clut_instance__colr_out;
        SData/*11:0*/ top_superfrog__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__f_clut_instance__colr_out;
        SData/*11:0*/ top_superfrog__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__f_clut_instance__colr_out;
        SData/*11:0*/ top_superfrog__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__f_clut_instance__colr_out;
        SData/*15:0*/ top_superfrog__DOT__display_inst__DOT__horizontal_counter_reg;
        SData/*15:0*/ top_superfrog__DOT__display_inst__DOT__horizontal_counter_next;
        SData/*15:0*/ top_superfrog__DOT__display_inst__DOT__vertical_counter_reg;
        SData/*15:0*/ top_superfrog__DOT__display_inst__DOT__vertical_counter_next;
        SData/*9:0*/ top_superfrog__DOT__sprite_hedgehog__DOT__spr_rom_addr;
        SData/*15:0*/ top_superfrog__DOT__sprite_hedgehog__DOT__sprx_r;
        SData/*15:0*/ top_superfrog__DOT__sprite_hedgehog__DOT__spry_r;
        SData/*15:0*/ top_superfrog__DOT__sprite_hedgehog__DOT__spr_diff;
        SData/*10:0*/ top_superfrog__DOT__sprite_superfrog__DOT__spr_rom_addr;
        SData/*15:0*/ top_superfrog__DOT__sprite_superfrog__DOT__sprx_r;
        SData/*15:0*/ top_superfrog__DOT__sprite_superfrog__DOT__spry_r;
        SData/*15:0*/ top_superfrog__DOT__sprite_superfrog__DOT__spr_diff;
        SData/*9:0*/ top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_rom_addr;
        SData/*15:0*/ top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__sprx_r;
        SData/*15:0*/ top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spry_r;
        SData/*15:0*/ top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_diff;
        SData/*9:0*/ top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_rom_addr;
        SData/*15:0*/ top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__sprx_r;
        SData/*15:0*/ top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spry_r;
        SData/*15:0*/ top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_diff;
        SData/*9:0*/ top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_rom_addr;
        SData/*15:0*/ top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__sprx_r;
        SData/*15:0*/ top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spry_r;
        SData/*15:0*/ top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_diff;
        SData/*9:0*/ top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_rom_addr;
        SData/*15:0*/ top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__sprx_r;
        SData/*15:0*/ top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spry_r;
        SData/*15:0*/ top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_diff;
        SData/*9:0*/ top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_rom_addr;
    };
    struct {
        SData/*15:0*/ top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__sprx_r;
        SData/*15:0*/ top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spry_r;
        SData/*15:0*/ top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_diff;
        IData/*31:0*/ top_superfrog__DOT__sprite_hedgehog__DOT__state;
        IData/*31:0*/ top_superfrog__DOT__sprite_superfrog__DOT__state;
        IData/*31:0*/ top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__state;
        IData/*31:0*/ top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__state;
        IData/*31:0*/ top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__state;
        IData/*31:0*/ top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__state;
        IData/*31:0*/ top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__state;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<SData/*15:0*/, 5> top_superfrog__DOT__f_spr_x;
        VlUnpacked<SData/*15:0*/, 5> top_superfrog__DOT__f_spr_y;
        VlUnpacked<SData/*15:0*/, 5> top_superfrog__DOT__init_f_spr_x;
        VlUnpacked<SData/*15:0*/, 5> top_superfrog__DOT__init_f_spr_y;
        VlUnpacked<CData/*0:0*/, 5> top_superfrog__DOT__f_drawing;
        VlUnpacked<CData/*3:0*/, 5> top_superfrog__DOT__f_spr_pix_indx;
        VlUnpacked<SData/*11:0*/, 5> top_superfrog__DOT__f_spr_pix_colr;
        VlUnpacked<CData/*0:0*/, 5> top_superfrog__DOT__f_drawing_t1;
        VlUnpacked<CData/*3:0*/, 640> top_superfrog__DOT__sprite_hedgehog__DOT__spr_rom__DOT__memory;
        VlUnpacked<SData/*11:0*/, 16> top_superfrog__DOT__h_clut_instance__DOT__bram_clut__DOT__memory;
        VlUnpacked<CData/*3:0*/, 1600> top_superfrog__DOT__sprite_superfrog__DOT__spr_rom__DOT__memory;
        VlUnpacked<SData/*11:0*/, 16> top_superfrog__DOT__clut_instance__DOT__bram_clut__DOT__memory;
        VlUnpacked<CData/*3:0*/, 1024> top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__sprite_fall__DOT__spr_rom__DOT__memory;
        VlUnpacked<SData/*11:0*/, 16> top_superfrog__DOT__sprite_gen__BRA__0__KET____DOT__f_clut_instance__DOT__bram_clut__DOT__memory;
        VlUnpacked<CData/*3:0*/, 1024> top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__sprite_fall__DOT__spr_rom__DOT__memory;
        VlUnpacked<SData/*11:0*/, 16> top_superfrog__DOT__sprite_gen__BRA__1__KET____DOT__f_clut_instance__DOT__bram_clut__DOT__memory;
        VlUnpacked<CData/*3:0*/, 1024> top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__sprite_fall__DOT__spr_rom__DOT__memory;
        VlUnpacked<SData/*11:0*/, 16> top_superfrog__DOT__sprite_gen__BRA__2__KET____DOT__f_clut_instance__DOT__bram_clut__DOT__memory;
        VlUnpacked<CData/*3:0*/, 1024> top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__sprite_fall__DOT__spr_rom__DOT__memory;
        VlUnpacked<SData/*11:0*/, 16> top_superfrog__DOT__sprite_gen__BRA__3__KET____DOT__f_clut_instance__DOT__bram_clut__DOT__memory;
        VlUnpacked<CData/*3:0*/, 1024> top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__sprite_fall__DOT__spr_rom__DOT__memory;
        VlUnpacked<SData/*11:0*/, 16> top_superfrog__DOT__sprite_gen__BRA__4__KET____DOT__f_clut_instance__DOT__bram_clut__DOT__memory;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop_superfrog__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_superfrog___024root(Vtop_superfrog__Syms* symsp, const char* v__name);
    ~Vtop_superfrog___024root();
    VL_UNCOPYABLE(Vtop_superfrog___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
