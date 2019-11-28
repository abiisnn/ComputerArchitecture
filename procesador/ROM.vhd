LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;
USE IEEE.STD_LOGIC_UNSIGNED.ALL;

ENTITY ROM IS
	-- VALORES GENERICOS DE LA MEMORIA DE PROGRAMA DEL ESCOMIPS
	GENERIC (
		BITS_D : INTEGER := 25;
		BITS_A : INTEGER := 16);

	-- PUERTOS DE ENTRADA (BUS DE DIRECCIONES 'A')
	-- Y SALIDA (BUS DE DIRECCIONES 'D')
    PORT (
		A : IN STD_LOGIC_VECTOR (BITS_A - 1 DOWNTO 0);
		D : OUT STD_LOGIC_VECTOR (BITS_D - 1 DOWNTO 0));
END ROM;

ARCHITECTURE FUNCIONAMIENTO OF ROM IS
	
	-- DEFINICIÓN DEL TIPO DE DATO MEMORIA
	TYPE MEMORIA IS ARRAY (0 TO 2 ** BITS_A - 1) 
		OF STD_LOGIC_VECTOR(BITS_D - 1 DOWNTO 0); 

	-- DECLARACIÓN DE UNA MEMORIA ROM CON EL PROGRAMA DE EJEMPLO.
	CONSTANT ROM : MEMORIA := (
		"0000100000000000000000000",
		"0000100010000000000000001",
		"0000100100000000000000000",
		"0000100110000000000001010",
		"0000001000000000100000000",
		"0001101000000000001001000",
		"0010100000001000000000000",
		"0010100010100000000000000",
		"0010100100010000000000001",
		"0111000100011111111111011",
		"1011000000000000000000000",
		"1001100000000000000001010",
		OTHERS => (OTHERS => '0'));

BEGIN

	D <= ROM(CONV_INTEGER(A));


END FUNCIONAMIENTO;

