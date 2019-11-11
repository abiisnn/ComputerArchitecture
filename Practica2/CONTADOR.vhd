library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity CONTADOR is
	GENERIC( N : INTEGER := 4);
	Port ( D : in STD_LOGIC_VECTOR( N-1 downto 0);
		   Q : inout STD_LOGIC_VECTOR (N-1 downto 0);
		   CLK, CLR : in STD_LOGIC;
		   L, I : in STD_LOGIC);
end CONTADOR;

architecture PROGRAMA of CONTADOR is

begin
	PREG : PROCESS( CLK, CLR )
	BEGIN
		IF( CLR = '1' ) THEN
			Q <= (OTHERS => '0');
		ELSIF( RISING_EDGE(CLK) ) THEN
			IF( L = '1' ) THEN
				Q <= D;
			ELSIF( I = '1' ) THEN
				Q <= Q + 1;
			END IF;
		END IF;
	END PROCESS PREG;
end PROGRAMA;