library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity MP is
	-- Para que la memoria sea generica.
	GENERIC( BITS_A : INTERGER := 16; 
			 BITS_D : INTERGER := 25);
	PORT( A : in STD_LOGIC_VECTOR ( BITS_A-1 downto 0 );
		  D : in STD_LOGIC_VECTOR ( BITS_D-1 downto 0 ));
end MP;


architecture PROGRAMA of MP is
-- Para no escribir los 25 bits
	-- Tipo R siempre es 0
	CONSTANT OPCODE_TIPOR : STD_LOGIC_VECTOR( 4 downto 0 ) := "00000";
	CONSTANT OPCODE_LI : STD_LOGIC_VECTOR( 4 downto 0 ) := "00001";
	CONSTANT OPCODE_LWI : STD_LOGIC_VECTOR( 4 downto 0 ) := "00010";
	CONSTANT OPCODE_SWI : STD_LOGIC_VECTOR( 4 downto 0 ) := "00011";
	CONSTANT OPCODE_B : STD_LOGIC_VECTOR( 4 downto 0 ) := "10011";
	-- Continuara --
	
	-- TIPO R
	-- Solo usan 4 bits, se puede poner en Hexadecimal
	CONSTANT FUNCODE_ADD : STD_LOGIC_VECTOR( 3 downto 0) := X"0";
	CONSTANT FUNCODE_SUB : STD_LOGIC_VECTOR( 3 downto 0) := X"1";
	CONSTANT FUNCODE_AND : STD_LOGIC_VECTOR( 3 downto 0) := X"2";
	-- Continuara --

	-- REGISTROS:
	CONSTANT R0 : STD_LOGIC_VECTOR( 3 downto 0) := X"0";
	CONSTANT R1 : STD_LOGIC_VECTOR( 3 downto 0) := X"1";
	CONSTANT R2 : STD_LOGIC_VECTOR( 3 downto 0) := X"2";
	-- ... --
	CONSTANT R10 : STD_LOGIC_VECTOR( 3 downto 0) := X"A";
	-- Continuara --

	CONSTANT SU : STD_LOGIC_VECTOR( 3 downto 0) := X"0";


TYPE MEMORIA IS ARRAY ( 0 TO 2**BITS_A-1 ) OF STD_LOGIC_VECTOR( D'RANGE );

CONSTANT MEMP : MEMORIA := (
	OPCODE_LI & R0 & X"0001",  -- LI R0, #1
	OPCODE_LI & R1 & X"0007",  -- LI R1, #7
	OPCODE_TIPOR & R1 & R1 & R0 & SU & FUNCODE_ADD, -- ADD R1, R1, R0
	OPCODE_SWI & R1 & X"0005", -- SWI R1, #5
	OPCODE_B & SU & X"0002", -- B CICLO 
	-- OTHERS => "000000000000000000000000000"
	-- OTHERS => X"000000"&'0'
	OTHERS => ( OTHERS => '0' )
);
begin


end PROGRAMA;