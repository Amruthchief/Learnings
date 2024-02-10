`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/18/2018 08:17:32 PM
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
      reg [1:0]a;
      reg [3:0]b;
      reg [3:0]temp;
      reg reset;
      wire [5:0]z;
      st A1(a,b,temp,reset,z);
      initial
      begin
        reset = 1'b1;
        #5 
        reset = 1'b0;
        #5
        temp = 4'b0000;
        a = 2'b00;
        b = 3'b101;
        #5
        temp = 4'b1001;
        b = 4'b1111;
        #10
        $finish;
     end
endmodule
