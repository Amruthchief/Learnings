// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
module mux1(\i[7] , \i[6] , \i[5] , \i[4] , \i[3] , \i[2] , 
  \i[1] , \i[0] , s, y);
  input [7:0]\i[7] ;
  input [7:0]\i[6] ;
  input [7:0]\i[5] ;
  input [7:0]\i[4] ;
  input [7:0]\i[3] ;
  input [7:0]\i[2] ;
  input [7:0]\i[1] ;
  input [7:0]\i[0] ;
  input [2:0]s;
  output [7:0]y;
endmodule
