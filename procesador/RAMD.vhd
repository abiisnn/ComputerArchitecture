
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity RAM is
	generic( 
		BDATA: integer := 16; 
		BADDR: integer := 16
		);
	port(
		DIN:      in std_logic_vector(BDATA-1 downto 0);
		ADR:      in std_logic_vector(BADDR-1 downto 0);
		CLK, WEN: in std_logic;
		DOUT:     out std_logic_vector(BDATA-1 downto 0)
	);
end RAM;

architecture Behave of RAM is
type memoria is array (0 to 2**BADDR - 1 ) of std_logic_vector(DOUT'range);
signal RAM: memoria;
begin
	PRAM: process(clk)
	begin
		if rising_edge(CLK) then
			if WEN = '1' then
				RAM(CONV_INTEGER(ADR)) <= DIN;
			end if;
		end if;
	end process PRAM;
	DOUT <= RAM(conv_integer(ADR));
end Behave;
