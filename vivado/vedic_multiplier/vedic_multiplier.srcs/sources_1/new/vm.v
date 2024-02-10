`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/18/2018 04:18:54 PM
// Design Name: 
// Module Name: vm
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

module vm(input [3:0]a,[3:0]b,output [7:0]p);
    wire q,r,s,t,u,v,w,x,y,z,d,e,f,g,h,i,j,k,l,m,n,o,i1,i2,i3,i4,i5,i6; 
            assign p[0] = a[0] & b[0];
            assign q = a[1] & b[0];
            assign r = a[0] & b[1];
            HA A1(q,r,p[1],s);
            assign w = a[1] & b[1];
            assign x = a[2] & b[0];
            assign y = a[0] & b[2];
            FA A2(w,x,y,u,v);
            HA A3(s,u,p[2],t);
            assign z = a[2] & b[1];
            assign d = a[1] & b[2];
            assign e = a[0] & b[3];
            assign f = a[3] & b[0];
            adder4 A4(f,e,d,z,h,i);
            FA A5(t,v,h,p[3],g);
            assign i4 = a[2] & b[2];
            assign i5 = a[1] & b[3];
            assign i6 = a[3] & b[1];
            FA A6(i4,i5,i6,j,l);
            FA A7(g,i,j,p[4],k);
            assign m = a[2] & b[3];
            assign n = a[3] & b[2];
            FA A8(l,m,n,o,i2);
            FA A9(o,k,1'b0,p[5],i1);
            assign i3 = a[3] & b[3];
            FA A10(i1,i2,i3,p[6],p[7]);
endmodule
