`timescale 1ns / 1ps


module keyboard_top(
    input clk,
    input reset_n,
    input btn_right,
    input btn_up,
    input btn_left,
    output [7:0] led_scancode_debug,
    output [7:0] seven_segment_number,
    output [7:0] seven_segment_enable,
    output      logic vga_hsync,    // VGA horizontal sync
    output      logic vga_vsync,    // VGA vertical sync
    output      logic [3:0] vga_r,  // 4-bit VGA red
    output      logic [3:0] vga_g,  // 4-bit VGA green
    output      logic [3:0] vga_b   // 4-bit VGA blue
);

    wire [7:0] DEBUG;

    top_game int_game(
//     Inputs
    .clk_100m(clk),
    .btn_rst_n(reset_n),
    .btn_right(btn_right),
    .btn_left(btn_left),
    .btn_up(btn_up),
//     Outputs
    .vga_hsync,
    .vga_vsync,
    .vga_r,
    .vga_g,
    .vga_b,
    .DEBUG,
    .sev_seg(seven_segment_number),
    .anode(seven_segment_enable)
    );

    assign led_scancode_debug = DEBUG;

endmodule
