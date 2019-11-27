library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity deco is
    Port ( OPCODE : in  STD_LOGIC_VECTOR (4 downto 0);
           TIPOR : out  STD_LOGIC;
           BEQI : out  STD_LOGIC;
           BNEQI : out  STD_LOGIC;
           BLTI : out  STD_LOGIC;
           BLETI : out  STD_LOGIC;
           BGTI : out  STD_LOGIC;
           BGETI : out  STD_LOGIC);
end deco;

architecture Behavioral of deco is

begin

	TIPOR <= '1' when OPCODE = "00000" else '0';
	BEQI  <= '1' when OPCODE = "01101" else '0';
	BNEQI <= '1' when OPCODE = "01110" else '0';
	BLTI  <= '1' when OPCODE = "01111" else '0';
	BLETI <= '1' when OPCODE = "10000" else '0';
	BGTI  <= '1' when OPCODE = "10001" else '0';
	BGETI <= '1' when OPCODE = "10010" else '0';

end Behavioral;

