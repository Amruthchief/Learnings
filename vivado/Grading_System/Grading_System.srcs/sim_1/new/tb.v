`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/17/2018 09:42:53 AM
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
    reg [7:0] marks;
    reg reset;
    wire s,a,b,c,d,e,f;
    gradsys A1(marks,reset,s,a,b,c,d,e,f);
    initial
        begin
            reset = 1'b0;
            #5
            reset = 1'b1;
            #5
            reset = 1'b0;
            #5
            marks = 8'b1010_1010;
            #10
            marks = 8'b1000_1000;
            #30
            $finish;
         end
endmodule
