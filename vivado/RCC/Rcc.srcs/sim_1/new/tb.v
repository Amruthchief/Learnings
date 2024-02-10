`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/03/2018 12:37:19 AM
// Design Name: 
// Module Name: tb
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


module tb( );

reg clk,reset;
wire[3:0]q;

rcc a0(clk,reset,q);

initial clk=1'b0;
always #10 clk=~clk;

initial begin
 reset=1'b1;
 #10 reset=1'b0;
 #500
 $finish;
         end

endmodule
