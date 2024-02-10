`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/04/2018 01:56:06 AM
// Design Name: 
// Module Name: fact
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


module fact(
    input [31:0]a,
    output integer b
    );
    
    
    function automatic integer factorial;
      integer i;
      begin
       if (a>=2)
        factorial =factorial(a-1'd1)*a;
        else
        factorial=1'd1;
       end
       
       assign b=factorial(a); 
    
endmodule
