//`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/04/2018 12:26:25 AM
// Design Name: 
// Module Name: counter
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


module counter(
    input clk,reset,
    output [3:0]q
    );
    
    add a1(clk,reset,q[0]);
    add a2(q[0],reset,q[1]);
     add a3(q[1],reset,q[2]);
    add a4(q[2],reset,q[3]);
    
    
    
    
endmodule
