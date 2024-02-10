`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/04/2018 01:41:23 AM
// Design Name: 
// Module Name: bi_int
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


module bi_int(
    input [4:0]a,
    output [4:0]s
    );
    
    wire [5:0]j,b,c,d,e;
    
   assign e=a[0]*5'd1;
   assign d=a[1]*5'd2;
   assign c=a[2]*5'd4;
   assign b=a[3]*5'd8;
   assign j=a[4]*5'd16;
   
   
   assign s[4:0]=j+b+c+d+e;
    
endmodule
