`timescale 10ns / 10ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/03/2018 07:55:25 PM
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
    reg clk,reset;
    wire [3:0]q;
     
     counter a5(clk,reset,q);
     initial clk=1'b0;
     always #10
        clk<=~clk;
         
     initial
         begin
         #10 reset=1'b0;
         #10 reset=1'b1;
         #10 reset=1'b0;
          
          
          
          
          
            #1000
            $finish;
            end       
    
    
endmodule
