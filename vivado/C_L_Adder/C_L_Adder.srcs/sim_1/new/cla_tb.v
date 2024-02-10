`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/22/2018 10:54:29 PM
// Design Name: 
// Module Name: cla_tb
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


module cla_tb(

    );
    
    reg [3:0]a,b;
    wire [3:0]sum;
    wire  cout;
    CLA (sum,cout,a,b);
    
    initial
     begin
    
    a=4'h4; b=4'h4;
    
    $finish;
    end
endmodule
