`timescale 1ns / 1ps


  module simple_480p #(
    CORDW=16, // signed coordinate width (bits)
    H_RES=640,   // horizontal resolution (pixels)
    V_RES=480   // vertical resolution (lines)
) (
    input wire logic clk_pix,
    input wire logic rst_pix,
    output logic hsync,
    output logic vsync,
    output      logic signed [CORDW-1:0] sx,  // horizontal SDL position
    output      logic signed [CORDW-1:0] sy,  // vertical SDL position
    output      logic de,       // data enable (low in blanking interval)
    output      logic frame,    // high at start of frame
    output      logic line    // high at start of line
   );

   localparam COLOR_BLUE = 12'hf00;
   localparam COLOR_GREEN = 12'h0f0;
   localparam COLOR_RED = 12'h00f;
   localparam COLOR_WHITE = 12'hfff;

   localparam NUM_HORIZONTAL_VISIBLE_PIXELS = H_RES;
   localparam NUM_HORIZONTAL_FRONT_PORCH_PIXELS = 16;
   localparam NUM_HORIZONTAL_SYNC_PIXELS = 96;
   localparam NUM_HORIZONTAL_BACK_PORCH_PIXELS = 48;
   localparam NUM_HORIZONTAL_ALL_PIXELS =
              NUM_HORIZONTAL_VISIBLE_PIXELS + NUM_HORIZONTAL_FRONT_PORCH_PIXELS +
              NUM_HORIZONTAL_SYNC_PIXELS + NUM_HORIZONTAL_BACK_PORCH_PIXELS;

   localparam NUM_VERTICAL_VISIBLE_PIXELS = V_RES;
   localparam NUM_VERTICAL_FRONT_PORCH_PIXELS = 10;
   localparam NUM_VERTICAL_SYNC_PIXELS = 2;
   localparam NUM_VERTICAL_BACK_PORCH_PIXELS = 29;
   localparam NUM_VERTICAL_ALL_PIXELS =
              NUM_VERTICAL_VISIBLE_PIXELS + NUM_VERTICAL_FRONT_PORCH_PIXELS +
              NUM_VERTICAL_SYNC_PIXELS + NUM_VERTICAL_BACK_PORCH_PIXELS;

   reg [CORDW-1:0] horizontal_counter_reg, horizontal_counter_next;
   reg [CORDW-1:0] vertical_counter_reg, vertical_counter_next;

   reg        h_sync_reg, h_sync_next;
   reg        v_sync_reg, v_sync_next;

   reg        is_displaying_pixels;

   // Lazy fix
   reg        r_frame;
   reg        r_line;


   always @ (posedge clk_pix)
     begin
        if (rst_pix == 1) begin
           horizontal_counter_reg <= 0;
           vertical_counter_reg <= 0;
           h_sync_reg <= 1;
           v_sync_reg <= 1;
        end
        else begin
           horizontal_counter_reg <= horizontal_counter_next;
           vertical_counter_reg <= vertical_counter_next;
           h_sync_reg <= h_sync_next;
           v_sync_reg <= v_sync_next;
        end
     end

   always @ (*)
     begin
        horizontal_counter_next = horizontal_counter_reg;
        vertical_counter_next = vertical_counter_reg;
        r_frame = 0;
        r_line = 0;

        if (clk_pix) begin
           if (horizontal_counter_reg == 0) begin
              r_line = 1;
           end
           else begin
              r_line = 0;
           end

           if (horizontal_counter_reg == 0 && vertical_counter_reg == 0) begin
              r_frame = 1;
           end
           else begin
              r_frame = 0;
           end

           if (horizontal_counter_reg == NUM_HORIZONTAL_ALL_PIXELS-1) begin
              horizontal_counter_next = 0;
           end
           else begin
              horizontal_counter_next = horizontal_counter_reg + 1;
           end

           if (horizontal_counter_reg == NUM_HORIZONTAL_ALL_PIXELS-1) begin
              vertical_counter_next = vertical_counter_reg + 1;
              if (vertical_counter_reg == NUM_VERTICAL_ALL_PIXELS-1) begin
                 vertical_counter_next = 0;
              end
           end
        end
     end


   always @ (*)
     begin
        h_sync_next = h_sync_reg;
        v_sync_next = v_sync_reg;

        if (clk_pix) begin
           if (
               horizontal_counter_reg >= NUM_HORIZONTAL_VISIBLE_PIXELS + NUM_HORIZONTAL_FRONT_PORCH_PIXELS &&
               horizontal_counter_reg < NUM_HORIZONTAL_VISIBLE_PIXELS + NUM_HORIZONTAL_FRONT_PORCH_PIXELS + NUM_HORIZONTAL_SYNC_PIXELS
               ) begin
              h_sync_next = 0;
           end
           else begin
              h_sync_next = 1;
           end

           if (
               vertical_counter_reg >= NUM_VERTICAL_VISIBLE_PIXELS + NUM_VERTICAL_FRONT_PORCH_PIXELS &&
               vertical_counter_reg < NUM_VERTICAL_VISIBLE_PIXELS + NUM_VERTICAL_FRONT_PORCH_PIXELS + NUM_VERTICAL_SYNC_PIXELS
               ) begin
              v_sync_next = 0;
           end
           else begin
              v_sync_next = 1;
           end
        end
     end


   always @ (*)
     begin
        is_displaying_pixels = 0;
        if (horizontal_counter_reg < NUM_HORIZONTAL_VISIBLE_PIXELS && vertical_counter_reg < NUM_VERTICAL_VISIBLE_PIXELS) begin
           is_displaying_pixels = 1;
        end
     end



   always_ff @(posedge clk_pix) begin


      // Need to edit above code to differ from frame and display enable
      frame <= r_frame;
      line <= r_line;
      de <= is_displaying_pixels;

      hsync <= h_sync_reg;
      vsync <= v_sync_reg;

      sx <= horizontal_counter_reg;
      sy <= vertical_counter_reg;


   end




endmodule
