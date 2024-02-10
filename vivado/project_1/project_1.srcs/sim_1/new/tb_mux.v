`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/06/2018 12:21:15 AM
// Design Name: 
// Module Name: tb_mux
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


module tb_mux(

    );
    reg i0,i1,i2,i3,s0,s1;
     wire y;
    MUX A10( i0,i1,i2,i3,s0,s1,y);
    
    initial 
     begin
     i0=1;i1=1;i2=0;i3=1;s0=0;s1=1;
     
    #10
      i0=1;i1=1;i2=0;i3=1;s0=1;s1=1;
     #10
       i0=1;i1=1;i2=0;i3=1;s0=0;s1=0;
    #100 $finish;
    end
endmodule
