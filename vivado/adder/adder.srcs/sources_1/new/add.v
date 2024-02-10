//`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/03/2018 07:50:52 PM
// Design Name: 
// Module Name: add
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


module add(
    input clk,reset,
    output reg q
    );
    
 /*  reg [24:0]clkdiv;
    always@(posedge(clk))
   clkdiv=clkdiv+1;
   */
    
    always@(posedge(clk),posedge(reset))
    begin
        
        if(reset)
           q<=1'b0;
        else
        
         q<=~q;
         
    end
    endmodule
