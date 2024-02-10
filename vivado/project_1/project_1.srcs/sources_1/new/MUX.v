`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/06/2018 12:15:59 AM
// Design Name: 
// Module Name: MUX
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


module MUX(
    input i0,i1,i2,i3,s0,s1,
    output y
    );
    wire a,b,c,d,e,f;
    not A1(a,s0);
    not A2(b,s1);
    
    and A3(c,i0,a,b);
    and A4(d,i1,s0,b);
    and A5(e,i2,a,s1);
    and A6(f,i3,s0,s1);
    
    or A7(y,c,d,e,f);
     
endmodule
