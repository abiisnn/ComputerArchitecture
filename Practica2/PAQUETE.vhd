library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

package PAQUETE is

	COMPONENT REGISTRO is
		GENERIC( N : INTEGER := 8);
		Port ( D : in STD_LOGIC_VECTOR( N-1 downto 0);
			   Q : inout STD_LOGIC_VECTOR (N-1 downto 0);
			   CLK, CLR : in STD_LOGIC;
			   L, SHE : in STD_LOGIC);
	end COMPONENT;

	COMPONENT CONTADOR is
		GENERIC( N : INTEGER := 4);
		Port ( D : in STD_LOGIC_VECTOR( N-1 downto 0);
			   Q : inout STD_LOGIC_VECTOR (N-1 downto 0);
			   CLK, CLR : in STD_LOGIC;
			   L, I : in STD_LOGIC);
	end COMPONENT;

	COMPONENT CODIGO is
		Port( E : in STD_LOGIC_VECTOR (3 downto 0);
			  S : out STD_LOGIC_VECTOR (6 downto 0));
	end COMPONENT;

	COMPONENT CONTROL is
	Port ( INI, CLK, CLR, Z, QA0 : in STD_LOGIC;
		   LA, SHE, LB, IB, SM : out STD_LOGIC);
	end COMPONENT;

end package ; -- PAQUETE 