-- APRENDIENDO FUNCIONES
library IEEE;
use IEEE.STD_LOGIC_1164.all;
package PAQUETE is
	-- Como en el archivo.h
	FUNCTION SHL( SIGNAL DATAIN: STD_LOGIC_VECTOR; 
				  SIGNAL SHIFT : STD_LOGIC_VECTOR ) 
	RETURN  STD_LOGIC_VECTOR;
end PAQUETE ; -- PAQUETE 

package body PAQUETE is
	FUNCTION SHL( SIGNAL DATAIN: STD_LOGIC_VECTOR; 
				  SIGNAL SHIFT : STD_LOGIC_VECTOR ) 
	RETURN  STD_LOGIC_VECTOR;
	
	VARIABLE SHIFT_DATA : STD_LOGIC_VECTOR (7 DOWNTO 0);
	VARIABLE INDICE : INTEGER RANGE -4 TO 7; 
	BEGIN
		SHIFT_DATA := DATAIN;
		-- Ciclo i 
		FOR I IN 0 TO 2 LOOP
			FOR J IN 7 DOWNTO 0 LOOP
				IF( SHIFT(I) = '1' ) THEN
					INDICE := J - 2**I;
					IF( INDICE < 0) THEN
						SHIFT_DATA(J) := '0';
					ELSE
						SHIFT_DATA(J) := SHIFT_DATA(INDICE)
					END IF;
				END IF;	
			END LOOP;
		END LOOP;
	RETURN SHIFT_DATA;
	END SHL;
end PAQUETE;