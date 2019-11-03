----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:35:22 10/17/2019 
-- Design Name: 
-- Module Name:    shift_barrel - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
library WORK;
use WORK.PAQUETE.ALL;


-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity shift_barrel is
	generic(
		DATA_BITS : INTEGER := 16;
		N_STEPS   : INTEGER := 3;
		N_ADDR    : INTEGER := 8;
		N_DATA    : INTEGER := 16
	);
	port(
		DATAIN   : in  std_logic_vector( DATA_BITS-1 downto 0 );
		DATAOUT  : inout std_logic_vector( DATA_BITS-1 downto 0 ); 
		DIR 	   : in  std_logic; -- DIR - BARREL SHIFTER
		SHIFT    : in  std_logic_vector( N_STEPS downto 0 ); -- SHAMT - BARREL SHIFTER
		
		ADDR  	: in    STD_LOGIC_VECTOR (N_ADDR-1 downto 0); -- READ REGISTER 1
		ADDR1 	: in    STD_LOGIC_VECTOR (N_ADDR-1 downto 0); -- READ REGISTER 2
		ADDRW 	: in    STD_LOGIC_VECTOR (N_ADDR-1 downto 0); -- WRITE REGISTER
		DIN   	: in    STD_LOGIC_VECTOR (N_DATA-1 downto 0); -- WRITE DATA
		DOUT  	: inout   STD_LOGIC_VECTOR (N_DATA-1 downto 0); -- READ DATA 1
		DOUT1 	: out   STD_LOGIC_VECTOR (N_DATA-1 downto 0); -- READ DATA 2
		WR   	   : in    STD_LOGIC;
		SHE		: IN    STD_LOGIC;
		CLK   	: IN    STD_LOGIC
	); 

end shift_barrel;

architecture Behavioral of shift_barrel is
-- Funciones 
TYPE MEMORIA IS ARRAY ( 0 TO 2**N_ADDR-1 ) OF STD_LOGIC_VECTOR( DIN'RANGE );
SIGNAL RAM_DIST : MEMORIA;
SIGNAL DI 		 : STD_LOGIC_VECTOR( N_DATA-1 downto 0 );

begin
	DI <= DATAOUT WHEN SHE = '1' else 
			DIN   WHEN SHE = '0';	
		
	PRAM : PROCESS( CLK )
	BEGIN
		IF( RISING_EDGE( CLK ) ) THEN
			IF( WR = '1' ) THEN
				RAM_DIST( CONV_INTEGER(ADDRW) ) <= DI; -- WRITE REGISTER
			END IF;
		END IF;
	END PROCESS PRAM;
	
	DOUT  <= RAM_DIST( CONV_INTEGER(ADDR) ); -- READ REGISTER
	DOUT1 <= RAM_DIST( CONV_INTEGER(ADDR1) ); -- READ REGISTER 2

	PSH : PROCESS( DOUT, DIR, SHIFT )
	BEGIN
		IF( DIR = '1' ) THEN
			DATAOUT <= SHIFTL(DOUT, SHIFT);
		ELSE
			DATAOUT <= SHIFTR(DOUT, SHIFT);
		END IF;
	END PROCESS PSH;
	
end Behavioral;

