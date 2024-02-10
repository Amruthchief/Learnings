`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/03/2018 10:01:32 AM
// Design Name: 
// Module Name: siso
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////



    module siso(out, clk, rst);
      input clk, rst;
      output reg [3:0] out;
      
    always @(posedge (clk), posedge (rst))
      begin
        if (rst)
          out = 4'b1000;
        else
          out = {out[0],out[3:1]};
      end
    endmodule

