`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/18/2018 05:16:08 PM
// Design Name: 
// Module Name: RCA
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

module adder4(
    input a,b,c,d,
    output  s,co
    );
    wire c0,c1,c2;
    wire cm = 0;
    FA B1(a,b,c,c0,c1);
    FA B2(c0,c1,d,s,co);
endmodule