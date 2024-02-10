`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/22/2018 10:35:57 PM
// Design Name: 
// Module Name: CLA
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


module CLA(
    output [3:0]sum,
    output cout,
    input [3:0]a,b,
   
    );
    
    wire p0,p1,p2,p3,g0,g1,g2,g3;
    wire c1,c2,c3,c4;
    assign p0 = a[0] ^ b[0];
   assign p1 = a[1] ^ b[1];
   assign p2 = a[2] ^ b[2];
    assign p3 = a[3] ^ b[3];
    
    assign g0 = a[0] & b[0],g1 = a[1] & b[1], g2 = a[2] & b[2], g3 = a[3] & b[3];
    
   assign c1 = g0 | (p0 & cin),c3 = g2 | (p2 & g1) | (p2 & p1 & g0) | (p2 & p1 & p0 & cin),c4 = g3 | (p3 & g2) | (p3 & p2 & g1) |(p3 & p2 & p1 & g0)|(p3 & p2 & p1 & p0 & cin);
   assign sum[0] = p0 ^ cin, sum[1] = p1 ^ c1, sum[2] = p2 ^ c2, sum[3] = p3 ^ c3;
   
   assign cout = c4;
    
    
endmodule
