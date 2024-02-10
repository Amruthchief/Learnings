`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/03/2018 12:29:12 AM
// Design Name: 
// Module Name: rcc
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


module rcc(
    input clk,reset,
    output [3:0]q
    );
    
    
    reg [24:0]clkdiv;
    always@(posedge(clk))
    begin
    clkdiv<=clkdiv+1;
    end
    
    
    tff a1(clkdiv[24],reset,q[0]);
    tff a2(~q[0],reset,q[1]);
    tff a3(~q[1],reset,q[2]);
    tff a4(~q[2],reset,q[3]);

endmodule
