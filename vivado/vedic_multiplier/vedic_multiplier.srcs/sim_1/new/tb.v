`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/18/2018 05:40:34 PM
// Design Name: 
// Module Name: tb
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


module tb(

    );
    reg [3:0]a;
    reg [3:0]b;
    wire [7:0]p;
    vm A11(a,b,p);
    initial
        begin
            a = 4'b1010;
            b = 4'b1010;
         #10
         $finish;
         end
endmodule
