`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/27/2018 11:36:23 AM
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
    reg clk,in;
    wire y1,y2;
    test A(clk,in,y1,y2);
    initial
        begin
            clk = 1'b0;
            forever
            #10
            clk = ~ clk;
        end
        
        initial 
        begin 
        in=1'b0;
//       % y1=1'b1;
        
        
        end
     
endmodule
