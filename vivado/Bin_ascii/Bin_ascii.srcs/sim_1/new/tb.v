`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/23/2018 04:22:22 AM
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
    
    reg[3:0]bin_digit;
    wire[6:0]segments;
    bin_ascii a(bin_digit,segments);
    initial
    begin
    
    bin_digit=4'b0011;
    #10
    bin_digit=4'b1011;
    #100
    $finish;
    end
    endmodule


