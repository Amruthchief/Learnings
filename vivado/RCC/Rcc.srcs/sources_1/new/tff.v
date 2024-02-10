`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/03/2018 12:32:45 AM
// Design Name: 
// Module Name: tff
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


module tff(
    input clk,reset,
    output reg  q
    );
    
    always@(posedge(clk),posedge(reset))
    begin
     if(reset)
        q<=0;
     else
        q<=~q;
     end   
        
endmodule
