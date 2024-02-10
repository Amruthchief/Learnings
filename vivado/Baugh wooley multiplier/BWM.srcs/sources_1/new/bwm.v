`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/23/2018 02:15:18 AM
// Design Name: 
// Module Name: bwm
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


 module half_adder(a, b, s, cout);
   input a, b;
   output s, cout;
   assign s = a^b; 
   assign cout = a&b;
 endmodule

module full_adder(a, b, cin, s, cout);
  input a, b, cin;
  output s, cout;
  assign s = a^b^cin; 
  assign cout = (a&b) | (b&cin) | (a&cin);
endmodule

module mult4bw(x, y, p);
  input [3:0] x, y;
  output [7:0] p;

  supply1 one;
 
  wire t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12,t13, t14, t15, t16, t17, t18, t19, t20, t21, t22, t23;
  
  
  assign p[0] = x[0]&y[0];
  
  half_adder ha1(x[1]&y[0], x[0]&y[1], p[1], t1);
  half_adder ha2(x[2]&y[0], x[1]&y[1], t2, t3);
  full_adder fa1(t2, t1, x[0]&y[2], p[2], t4);
  half_adder ha3(x[3]&~y[0], x[2]&y[1], t5, t6);
  full_adder fa2(t5, t3, x[1]&y[2], t7, t8);
  full_adder fa3(t7, t4, ~x[0]&y[3], t9, t10);
  full_adder fa4(t9, x[3], y[3], p[3], t11);
  full_adder fa5(x[3]&~y[1], t6, x[2]&y[2], t12, t13);
  full_adder fa6(t12, t8, ~x[1]&y[3], t14, t15);
  full_adder fa7(t14, t10, t11, p[4], t16);
  full_adder fa8(x[3]&~y[2], t13, ~x[2]&y[3], t17, t18);
  full_adder fa9(t17, t15, t16, p[5], t19);
  full_adder fa10(~x[3], ~y[3], x[3]&y[3], t20, t21);
  full_adder fa11(t20, t18, t19, p[6], t22);
  full_adder fa12(one, t21, t22, p[7], t23);
endmodule