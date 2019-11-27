library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity condicion is
    Port ( FLAGS : in  STD_LOGIC_VECTOR (3 downto 0);
           EQ : out  STD_LOGIC;
           NEQ : out  STD_LOGIC;
           L : out  STD_LOGIC;
           LE : out  STD_LOGIC;
           G : out  STD_LOGIC;
           GE : out  STD_LOGIC);
end condicion;

architecture Behavioral of condicion is
--OV = FLAGS(3)
--N  = FLAGS(2)
--Z  = FLAGS(1)
--C  = FLAGS(0)
begin

	EQ  <= FLAGS(1);
	G   <= (not FLAGS(1)) and (FLAGS(2) xnor FLAGS(3));
	GE  <= FLAGS(2) xnor FLAGS(3);
	L   <= FLAGS(2) xor FLAGS(3);
	LE  <= FLAGS(1) or (FLAGS(2) xor FLAGS(3));
	NEQ <= not FLAGS(1);

end Behavioral;

