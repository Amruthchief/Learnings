-- Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity mux1 is
  Port ( 
    \i[7]\ : in STD_LOGIC_VECTOR ( 7 downto 0 );
    \i[6]\ : in STD_LOGIC_VECTOR ( 7 downto 0 );
    \i[5]\ : in STD_LOGIC_VECTOR ( 7 downto 0 );
    \i[4]\ : in STD_LOGIC_VECTOR ( 7 downto 0 );
    \i[3]\ : in STD_LOGIC_VECTOR ( 7 downto 0 );
    \i[2]\ : in STD_LOGIC_VECTOR ( 7 downto 0 );
    \i[1]\ : in STD_LOGIC_VECTOR ( 7 downto 0 );
    \i[0]\ : in STD_LOGIC_VECTOR ( 7 downto 0 );
    s : in STD_LOGIC_VECTOR ( 2 downto 0 );
    y : out STD_LOGIC_VECTOR ( 7 downto 0 )
  );

end mux1;

architecture stub of mux1 is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
begin
end;
