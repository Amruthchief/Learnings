`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/27/2018 01:31:11 AM
// Design Name: 
// Module Name: mux2
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


module mux2(
    input o1,o2,s,
    output reg y
    );
    
    
    always@(s,o1,o2)
    begin
     if(s==0)
     begin
     y=o1;
     end
     
     else if(s==1)  
         begin
         y=o2;
         end
         
         end
endmodule
