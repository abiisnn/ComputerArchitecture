library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity registro is
    Port ( LF : in  STD_LOGIC;
           DFLAGS : in  STD_LOGIC_VECTOR (3 downto 0);
           CLK : in  STD_LOGIC;
           CLR : in  STD_LOGIC;
           QFLAGS : out  STD_LOGIC_VECTOR (3 downto 0));
end registro;

architecture Behavioral of registro is
begin

	process(clk, clr)
	begin
		if clr = '1' then
			QFLAGS <= (OTHERS => '0');
		elsif falling_edge(clk) then
			if LF = '1' then
				QFLAGS <= DFLAGS;
			end if;
		end if;
	end process;

end Behavioral;

