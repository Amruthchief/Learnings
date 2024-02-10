`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/23/2018 04:10:08 AM
// Design Name: 
// Module Name: bin_ascii
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


module bin_ascii(bin_digit, segments

    );
    
    
input [3:0] bin_digit;
        output reg [6:0] segments;
    
        always @(*)
        begin
            case (bin_digit)
                4'b0000: segments = 7'b0110000;
                4'b0001: segments = 7'b0110001;
                4'b0010: segments = 7'b0110010;
                4'b0011: segments = 7'b0110011;
                4'b0100: segments = 7'b0110100;
                4'b0101: segments = 7'b0110101;
                4'b0110: segments = 7'b0110110;
                4'b0111: segments = 7'b0110111;
                4'b1000: segments = 7'b0111000;
                4'b1001: segments = 7'b0111001;
                4'b1010: segments = 7'b1000001;
                4'b1011: segments = 7'b1000010;
                4'b1100: segments = 7'b1000011;
                4'b1101: segments = 7'b1000100;
                4'b1110: segments = 7'b1000101;
                4'b1111: segments = 7'b1000110;   
                default: segments = 7'b0110000;
            endcase
            end
    endmodule

