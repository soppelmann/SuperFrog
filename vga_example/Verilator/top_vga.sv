`timescale 1ns / 1ps


module vga(
    input wire logic clk_pix,
    input wire logic rst_pix,
    //output io_horizontal_sync,
    //output io_vertical_sync,
    output      logic signed [11-1:0] sdl_sx,  // horizontal SDL position
    output      logic signed [11-1:0] sdl_sy,  // vertical SDL position
    output      logic sdl_de,       // data enable (low in blanking interval)
    output      logic sdl_frame,    // high at start of frame
    output      logic [7:0] sdl_r,  // 8-bit red
    output      logic [7:0] sdl_g,  // 8-bit green
    output      logic [7:0] sdl_b   // 8-bit blue
    //output reg [11:0] io_rgb_color
           );

   localparam COLOR_BLUE = 12'hf00;
   localparam COLOR_GREEN = 12'h0f0;
   localparam COLOR_RED = 12'h00f;
   localparam COLOR_WHITE = 12'hfff;

   localparam NUM_HORIZONTAL_VISIBLE_PIXELS = 640;
   localparam NUM_HORIZONTAL_FRONT_PORCH_PIXELS = 16;
   localparam NUM_HORIZONTAL_SYNC_PIXELS = 96;
   localparam NUM_HORIZONTAL_BACK_PORCH_PIXELS = 48;
   localparam NUM_HORIZONTAL_ALL_PIXELS =
              NUM_HORIZONTAL_VISIBLE_PIXELS + NUM_HORIZONTAL_FRONT_PORCH_PIXELS +
              NUM_HORIZONTAL_SYNC_PIXELS + NUM_HORIZONTAL_BACK_PORCH_PIXELS;

   localparam NUM_VERTICAL_VISIBLE_PIXELS = 480;
   localparam NUM_VERTICAL_FRONT_PORCH_PIXELS = 10;
   localparam NUM_VERTICAL_SYNC_PIXELS = 2;
   localparam NUM_VERTICAL_BACK_PORCH_PIXELS = 29;
   localparam NUM_VERTICAL_ALL_PIXELS =
              NUM_VERTICAL_VISIBLE_PIXELS + NUM_VERTICAL_FRONT_PORCH_PIXELS +
              NUM_VERTICAL_SYNC_PIXELS + NUM_VERTICAL_BACK_PORCH_PIXELS;

   reg [11:0] io_rgb_color;

   reg [10:0] horizontal_counter_reg, horizontal_counter_next;
   reg [10:0] vertical_counter_reg, vertical_counter_next;

   reg        h_sync_reg, h_sync_next;
   reg        v_sync_reg, v_sync_next;

   reg        is_displaying_pixels;
   reg       frame;


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
        frame = 0;

        if (clk_pix) begin
           if (horizontal_counter_reg == 0 && vertical_counter_reg == 0) begin
              frame = 1;
           end
           else begin
              frame = 0;
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


   // Draw pixels on the screen
   always @ (*)
     begin
        io_rgb_color = 0;
        if (is_displaying_pixels) begin
           // Paint the middle pixel in the 3rd row white
           if (vertical_counter_reg == 3-1 && horizontal_counter_reg == NUM_HORIZONTAL_VISIBLE_PIXELS/2) begin
              io_rgb_color = COLOR_WHITE;
           end

           // Draw red, green, and blue squares in the middle of the screen
           if (vertical_counter_reg >= NUM_VERTICAL_VISIBLE_PIXELS/3 && vertical_counter_reg < 2*NUM_VERTICAL_VISIBLE_PIXELS/3) begin
              if (horizontal_counter_reg < NUM_HORIZONTAL_VISIBLE_PIXELS/3) begin
                 io_rgb_color = COLOR_RED;
              end
              else if (horizontal_counter_reg < 2*NUM_HORIZONTAL_VISIBLE_PIXELS/3) begin
                 io_rgb_color = COLOR_BLUE;
              end
              else begin
                 io_rgb_color = COLOR_GREEN;
              end
           end
        end
     end



   always_ff @(posedge clk_pix) begin


   // Need to edit above code to differ from frame and display enable
   sdl_frame <= frame;
   sdl_de <= is_displaying_pixels;

   sdl_b <= {2{io_rgb_color[11:8]}};
   sdl_g <= {2{io_rgb_color[7:4]}};
   sdl_r <= {2{io_rgb_color[3:0]}};

   sdl_sx <= horizontal_counter_reg;
   sdl_sy <= vertical_counter_reg;


   end




endmodule
