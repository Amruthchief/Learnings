`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/06/2018 09:57:13 AM
// Design Name: 
// Module Name: jk_ff
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


module jk_ff(
    input j,k,reset,clk,
    output reg q,qb
    );
   // reg [24:0]clkdiv;
    //always@(posedge(clk))
    //begin clkdiv=clkdiv+1;
    
    always@(posedge(clk),posedge(reset))
   
    begin
    if (reset)
               begin q<=1'b0; qb<=1'b1; end
    else 
    case({j,k})
 
    2'b00: q<=q;
    2'b01: q<=1'b0;
    2'b10: q<=1'b1;
    2'b11: q<=qb;
    default: q<=1'bx;
    
    endcase
    qb=~q;
   end 
endmodule
