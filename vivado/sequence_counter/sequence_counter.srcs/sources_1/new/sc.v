`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/03/2018 01:15:18 AM
// Design Name: 
// Module Name: sc
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


module sc(
    input clk,reset,
    output reg [3:0]q
    );
    
    always@(posedge(clk))
    begin
    if(reset==1)
    q=4'd0;
    else
    case(q)
    4'd3: q<=4'd4;
    4'd4:q<=4'd8;
    4'd8:q<=4'd9;
    4'd9:q<=4'd11;
    4'd11:q<=4'd0;
    default: q<=4'd3;    
    endcase
    end
endmodule
