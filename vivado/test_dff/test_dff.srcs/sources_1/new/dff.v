`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/26/2022 11:28:17 PM
// Design Name: 
// Module Name: dff
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


module dff(
    input [3:0]d,
    input clk,
    input reset,
    output reg [3:0]q
    );
  
  always@(posedge(clk),reset)
  begin
  
  if(reset)
    q<=0;
  else
    q<=d;
  
  
  
  end
  
    
    
endmodule
