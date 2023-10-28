// (C)2023 Will Green, open source hardware released under the MIT License

`timescale 1ns / 1ps

module bram_sdp #(
    parameter WIDTH=8,
    parameter DEPTH=256,
    parameter INIT_F="",
    localparam ADDRW=$clog2(DEPTH)
    ) (
    input logic clk_write,               // write clock (port a)
    input logic clk_read,                // read clock (port b)
    input logic we,                      // write enable (port a)
    input logic [ADDRW-1:0] addr_write,  // write address (port a)
    input logic [ADDRW-1:0] addr_read,   // read address (port b)
    input logic [WIDTH-1:0] data_in,     // data in (port a)
    output logic [WIDTH-1:0] data_out     // data out (port b)
       );

   logic [WIDTH-1:0] memory [DEPTH];

   initial begin
      if (INIT_F != 0) begin
         $display("Load init file '%s' into bram_sdp.", INIT_F);
         $readmemh(INIT_F, memory);
      end
   end

   // Port A: Sync Write
   always_ff @(posedge clk_write) begin
      if (we) memory[addr_write] <= data_in;
   end

   // Port B: Sync Read
   always_ff @(posedge clk_read) begin
      data_out <= memory[addr_read];
   end
endmodule
