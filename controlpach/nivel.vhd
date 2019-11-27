library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity nivel is
    Port ( CLK : in  STD_LOGIC;
           CLR : in  STD_LOGIC;
           NA : out  STD_LOGIC);
end nivel;

architecture Behavioral of nivel is
signal Q1, Q2: std_logic;
begin

	ff1: process(clk, clr)
	begin
		if clr = '1' then
			Q1 <= '0';
		elsif rising_edge(clk) then
			Q1 <= not Q1;
		end if;
	end process ff1;
	
	ff2: process(clk, clr)
	begin
		if clr = '1' then
			Q2 <= '0';
		elsif falling_edge(clk) then
			Q2 <= not Q2;
		end if;
	end process ff2;
	
	NA <= Q1 xnor Q2;

end Behavioral;

