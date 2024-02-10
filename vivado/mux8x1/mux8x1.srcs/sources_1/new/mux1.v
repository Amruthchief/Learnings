`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/27/2018 01:31:11 AM
// Design Name: 
// Module Name: mux1
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


module mux1(
    input [7:0]i[7:0],
    input [2:0]s,
    output reg [7:0]y
    );
    
    always@(s,i)
    begin
    case (s)
    3'd0: y=i[0][7:0];
    3'd1: y=i[1][7:0];
    3'd2: y=i[2][7:0];
    3'd3: y=i[3][7:0];
    3'd4: y=i[4][7:0];
    3'd5: y=i[5][7:0];
    3'd6: y=i[6][7:0];
    3'd7: y=i[7][7:0];
    endcase
    end
    
    
endmodule
