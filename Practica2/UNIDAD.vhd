library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity CONTROL is
	Port ( INI, CLK, CLR, Z, QA0 : in STD_LOGIC;
		   LA, SHE, LB, IB, SM : out STD_LOGIC);
end CONTROL;

architecture UNIDAD of CONTROL is
TYPE ESTADOS IS ( A, B, C);
SIGNAL EDO_ACT, EDO_SGTE : ESTADOS;

begin
	TRANSICION : PROCESS( CLK, CLR)
	BEGIN 
		IF ( CLR = '1')THEN
			EDO_ACT <= A;
		ELSIF( RISING_EDGE(CLK) ) THEN
			EDO_ACT <= EDO_SGTE;
		END IF;
	END PROCESS TRANSICION;

	AUTOMATA : PROCESS( EDO_ACT, INI, QA0, Z )
	BEGIN
		CASE EDO_ACT IS 
			WHEN A => LB <= '1';
				IF( INI = '0') THEN
					LA <= '1';
					EDO_SGTE <= A;
				ELSE
					EDO_SGTE <= B;
				END IF;
			
			WHEN B => SHE <= '1';
				IF( Z = '1') THEN
					EDO_SGTE <= C;
				ELSE
					IF( QA0 = '1') THEN
						IB <= '1';
						EDO_SGTE <= B;
					ELSE
						EDO_SGTE <= B;
					END IF;
				END IF;

			WHEN C => SM <= '1';
				--- CONTINUARA ---
				IF( INI = '1') THEN
					EDO_SGTE <= C;
				ELSE
					EDO_SGTE <= A;
				END IF;

		END CASE;
	END PROCESS AUTOMATA;

end UNIDAD;