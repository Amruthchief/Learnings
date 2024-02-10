`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/04/2018 02:28:06 AM
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
    
    reg clk,reset;
    wire [3:0]out;
    
    siso a2(out,clk,reset);
    
    initial clk=1'b0;
    always #10 clk=~clk;
    
    
    initial begin
    #10 
    reset=1'b1;
    #10reset=1'b0;
    #1000 $finish;
    end
endmodule
