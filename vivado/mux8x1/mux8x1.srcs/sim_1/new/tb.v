`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/27/2018 01:44:17 AM
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
    reg [7:0]i[7:0];
    reg [3:0]s;
    wire [7:0]o;
    mux1 A8(i[7:0][7:0],s[3:0],o[7:0]);
    
    initial 
    begin
    
    i[0]=7'd1;
    i[1]=7'd2;
    i[2]=7'd3;
    i[3]=7'd4;
    i[4]=7'd5;
    i[5]=7'd6;
    i[6]=7'd7;
    i[7]=7'd8;
        #10
            
        s=4'd5;
        
        #10
        s=4'd2;   
        
        #50     
$finish;
end    
endmodule
