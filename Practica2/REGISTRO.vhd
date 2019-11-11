library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity REGISTRO is
	GENERIC( N : INTEGER := 8);
	Port ( D : in STD_LOGIC_VECTOR( N-1 downto 0);
		   Q : inout STD_LOGIC_VECTOR (N-1 downto 0);
		   CLK, CLR : in STD_LOGIC;
		   L, SHE : in STD_LOGIC);
end REGISTRO;

architecture PROGRAMA of REGISTRO is

begin
	PREG : PROCESS( CLK, CLR )
	BEGIN
		IF( CLR = '1' ) THEN
			Q <= (OTHERS => '0');
		ELSIF( RISING_EDGE(CLK) ) THEN
			IF( L = '1' ) THEN
				Q <= D;
			ELSIF( SHE = '1' ) THEN
				Q <= TO_STDLOGICVECTOR( TO_BITVECTOR(Q) SRL 1 );
			END IF;
		END IF;
	END PROCESS PREG;
end PROGRAMA;