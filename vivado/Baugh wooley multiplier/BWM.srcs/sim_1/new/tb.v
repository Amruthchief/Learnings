`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/23/2018 02:20:50 AM
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

// Code your testbench here
// or browse Examples
module tb9; 
  
  reg [3:0] x, y; 
  wire [7:0] p; 
mult4bw mult_instance(x, y, p);

  
         initial
                  begin
                      x= 4'b0110;
                      y= 4'b1001;
                      #10
                      x = 4'b1010;
                      y= 4'b1010;
                      #20
                      $finish;
           
  end 
  endmodule
