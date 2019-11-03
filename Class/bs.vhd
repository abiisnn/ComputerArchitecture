library IEEE;
library WORK;
use IEEE.STD_LOGIC_1164.ALL;
use IEE.STD_LOGIC_UNSIGNED.ALL;
use WORK.PAQUETE.ALL;

entity barrel_shifter is
	Port ( DATAIN : in STD_LOGIC_VECTOR (7 DOWNTO 0);
		   DATAOUT : out STD_LOGIC_VECTOR (7 DOWNTO 0);
		   DIR : in STD_LOGIC;
		   SHIFT : IN STD_LOGIC_VECTOR (2 DOWNTO 0));
end barrel_shifter;
architecture PROGRAMA of barrel_shifter is
begin
	PSH: PROCESS( DATAIN, DIR )
	BEGIN
		IF(DIR = '1') THEN
			DATAOUT <= SHL( DATAIN, SHIFT );
		ELSE
			DATAOUT <= TO_STDLOGICVECTOR(TO_BITVECTOR(DATAIN)) SRL CONV_INTEGER(SHIFT); 
		END IF;
	END PROCESS PSH;
	DATAOUT <= SHL( DATAIN, SHIFT );
	--PBS : PROCESS( DATAIN, SHIFT )
	---- Declarar shift data, se actualiza cada interacción
	--VARIABLE SHIFT_DATA : STD_LOGIC_VECTOR (7 DOWNTO 0);
	--VARIABLE INDICE : INTEGER RANGE -4 TO 7; 
	--BEGIN
	--	SHIFT_DATA := DATAIN;
	---- Ciclo i 
	--	FOR I IN 0 TO 2 LOOP
	--		FOR J IN 7 DOWNTO 0 LOOP
	--			IF( SHIFT(I) = '1' ) THEN
	--				INDICE := J - 2**I;
	--				IF( INDICE < 0) THEN
	--					SHIFT_DATA(J) := '0';
	--				ELSE
	--					SHIFT_DATA(J) := SHIFT_DATA(INDICE)
	--				END IF;
	--			END IF;	
	--		END LOOP;
	--	END LOOP;
	--	DATAOUT <= SHIFT_DATA;
	--END PROCESS PBS;
end PROGRAMA;