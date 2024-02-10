`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/26/2022 11:28:17 PM
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


module tb();
reg CLK = 0;
reg RESET = 0 ;
reg [3:0]D;
wire [3:0]Q;

dff Dflip(.clk(CLK),.q(Q),.d(D), .reset(RESET));
always 
    #5 CLK = ~CLK;
 
initial 
    begin 
        #1
        RESET = 1;
        #1     
        RESET = 0;
        #10 
        D = 4'b1010;
        #10 
        D = 4'b0101;
        #10 
        D = 4'b0001;
        #10 
        D = 4'b1000;
        
        #200
     $finish() ; 
     end

endmodule
