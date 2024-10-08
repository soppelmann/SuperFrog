// (C)2023 Will Green, open source hardware released under the MIT License

`timescale 1ns / 1ps

module clut_simple #(
    parameter COLRW=12,  // colour output width (bits)
    parameter CIDXW=4,   // colour index width (bits)
    parameter F_PAL=""   // init file for colour palette
    ) (
    input  logic clk_write,  // write clock
    input  logic clk_read,   // read clock
    input  logic we,         // write enable
    input  logic [CIDXW-1:0] cidx_write,  // colour index to write
    input  logic [CIDXW-1:0] cidx_read,   // colour index to read
    input  logic [COLRW-1:0] colr_in,     // write colour
    output logic [COLRW-1:0] colr_out     // read colour
    );

    bram_sdp #(
        .WIDTH(COLRW),
        .DEPTH(2**CIDXW),
        .INIT_F(F_PAL)
        ) bram_clut (
        .clk_write,
        .clk_read,
        .we,
        .addr_write(cidx_write),
        .addr_read(cidx_read),
        .data_in(colr_in),
        .data_out(colr_out)
    );
endmodule
