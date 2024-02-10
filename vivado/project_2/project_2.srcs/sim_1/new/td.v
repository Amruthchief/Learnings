`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/03/2018 06:09:42 PM
// Design Name: 
// Module Name: td
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


module td(

    );
    reg [7:0]i;
    reg [3:0]s;
    wire [7:0]o;
    decoder A8(i[7:0],s[3:0],o[7:0]);
    
    initial 
    begin
    
    i[0]=4'd1;
    i[1]=4'd2;
    i[2]=4'd3;
    i[3]=4'd4;
    i[4]=4'd5;
    i[5]=4'd6;
    i[6]=4'd7;
    i[7]=4'd8;
        i[8]=4'd2;
        i[9]=4'd3;
        i[10]=4'd4;
        i[11]=4'd5;
        i[12]=4'd6;
        i[13]=4'd1;
        i[14]=4'd2;
        i[15]=4'd3;
            
        s=4'd5;
        
        #10
        s=4'd2;   
        
        #50     
$finish;
end    
endmodule

   
