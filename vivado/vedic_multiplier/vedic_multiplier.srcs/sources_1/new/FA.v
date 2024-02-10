`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/18/2018 05:01:55 PM
// Design Name: 
// Module Name: FA
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


module FA(
    input a,b,c,
    output s,co
    );
    wire g,d,e;
    xor(g,a,b);
    and(d,a,b);
    xor(s,g,c);
    and(e,g,c);
    or(co,e,d);
endmodule
