`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/16/2018 07:37:53 PM
// Design Name: 
// Module Name: gradsys
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


module gradsys(input [7:0]marks,reset,output reg s,a,b,c,d,e,f

    );
    always @(posedge reset,marks)
    begin
        if (reset == 1'b1)
            begin
                s = 1'b0;
                a = 1'b0;
                b = 1'b0;
                c = 1'b0;
                d = 1'b0;
                e = 1'b0;
                f = 1'b0;
             end
        if(marks < 8'b0100_0000)
            f = 1'b1;
        else if(marks <= 8'b0100_0100 && marks >= 8'b0100_0000)
            e = 1'b1;
        else if(marks <= 8'b0100_1001 && marks >= 8'b0100_0101)
            d = 1'b1;
        else if(marks <= 8'b0101_1001 && marks >= 8'b0101_0000)
            c = 1'b1;
        else if(marks <= 8'b0111_0100 && marks >= 8'b0110_0000)
            b = 1'b1;
        else if(marks <= 8'b1000_1001 && marks >= 8'b0111_0101)
            a = 1'b1;
        else if(marks >= 8'b1001_0000)
            s = 1'b1;
        else 
            begin
                s = 1'b0;
                a = 1'b0;
                b = 1'b0;
                c = 1'b0;
                d = 1'b0;
                e = 1'b0;
                f = 1'b0;
             end
     end
     
endmodule
