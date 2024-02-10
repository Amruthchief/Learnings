`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/06/2018 10:17:41 AM
// Design Name: 
// Module Name: testb
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


module testb();
reg j,k,clk,reset;
wire q,qb;

jk_ff A1(j,k,reset,clk,q,qb);
initial clk=0;
always begin #10 clk=~clk;  end

initial begin reset=1'b0;
#10 reset = 1'b1;
#10 reset=1'b0;

#40 j=1'b0;k=1'b0;
#20 j=1'b0;k=1'b1;
#20 j=1'b1;k=1'b0;
#20 j=1'b1;k=1'b1;
#100 
$finish; 
 end

endmodule
