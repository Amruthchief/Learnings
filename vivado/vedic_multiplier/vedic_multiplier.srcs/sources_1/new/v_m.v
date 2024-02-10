`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/17/2018 09:54:18 AM
// Design Name: 
// Module Name: v_m
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


module v_m(input [3:0]a,[3:0]b,reset,output reg [7:0]p);
    wire q,r,s,t,u,v,w,x,y,z;
    always @(reset)
        if(reset == 1'b1)
            p = 8'b0000_0000;
        else
        begin 
            p[0] = a[0] & b[0];
            q = a[1] & b[0];
            r = a[0] & b[1];
            HA A1(q,r,p[1],s);
endmodule
