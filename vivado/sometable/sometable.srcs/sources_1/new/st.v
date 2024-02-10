`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/18/2018 08:08:59 PM
// Design Name: 
// Module Name: st
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


module st(
    input [1:0]a,[3:0]b,
    input [3:0]temp,reset,
    output reg [5:0]z
    );
    always@(posedge(reset),a,b)
    begin
        if (reset == 1'b1)
            z = 4'b0000;
        if (b >= 4'h0 & b <= 4'h7)
            begin 
                case(a)
                    2'b00: z = temp;
                    2'b01: z = temp + 4;
                    2'b10: z = temp / 2;
                    default : z = 4'hF;
                 endcase
             end
          if(a == 2'b11 | b > 4'h7)
            z = 4'hF;
     end  
endmodule
