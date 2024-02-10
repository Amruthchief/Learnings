`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/03/2018 01:22:07 AM
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
    wire [3:0]q;
    
    sc a1(clk,reset,q);
        
    initial clk=1'b0;
    always #10 clk=~clk;
    
    initial begin
    reset=1'b1;
    #15 reset=1'b0;
    #500
    $finish;
    end
endmodule
