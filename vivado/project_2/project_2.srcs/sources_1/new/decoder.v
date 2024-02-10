`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/03/2018 06:02:04 PM
// Design Name: 
// Module Name: decoder
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


module decoder(
       input [7:0]i[7:0],
input [2:0]s,
output reg [7:0]y
);

always@(s,i)
begin
case (s)
3'd0: y[7:0]=i[0][7:0];
3'd1: y[7:0]=i[1][7:0];
3'd2: y[7:0]=i[2][7:0];
3'd3: y[7:0]=i[3][7:0];
3'd4: y[7:0]=i[4][7:0];
3'd5: y[7:0]=i[5][7:0];
3'd6: y[7:0]=i[6][7:0];
3'd7: y[7:0]=i[7][7:0];
endcase
end


endmodule