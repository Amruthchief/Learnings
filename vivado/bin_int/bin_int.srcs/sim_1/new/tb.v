`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/04/2018 01:46:33 AM
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
    
    reg [4:0]a;
    wire [4:0]s;
    
    bi_int a1(a[4:0],s[4:0]);
    
    initial begin
    #10
    a=5'b10001;
    #100
    a=5'b10111;
    
    
    #1000
    $finish;
    end
endmodule
