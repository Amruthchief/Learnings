`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/27/2018 11:34:49 AM
// Design Name: 
// Module Name: test
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


module test(input clk,
 input in,
 output reg y1=1'b1,y2

    ); 
    
    always @ (posedge (clk))
y1 <= in;
always @( posedge(clk))
y2 <= y1;


endmodule
