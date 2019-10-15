----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:14:33 10/02/2019 
-- Design Name: 
-- Module Name:    RAM - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity RAM is
	GENERIC(
		N_ADDR : INTEGER := 8;
		N_DATA : INTEGER := 16
	);
    Port ( ADDR : in  STD_LOGIC_VECTOR (N_ADDR-1 downto 0);
           DIN : in  STD_LOGIC_VECTOR (N_DATA-1 downto 0);
           DOUT : out  STD_LOGIC_VECTOR (N_DATA-1 downto 0);
           WEN : in  STD_LOGIC;
			  CLK : IN STD_LOGIC
--			  CLR : in STD_LOGIC
			  );
end RAM;

architecture Behavioral of RAM is
TYPE MEMORIA IS ARRAY ( 0 TO 2**N_ADDR-1 ) OF STD_LOGIC_VECTOR( DIN'RANGE );
SIGNAL RAM_DIST : MEMORIA;
begin
	PRAM : PROCESS( CLK )
	BEGIN
--		IF( CLR = '1' ) THEN 
--			RAM_DIST <= (OTHERS => (OTHERS => '0'));
		IF( RISING_EDGE( CLK ) ) THEN
			IF( WEN = '1' ) THEN
				RAM_DIST( CONV_INTEGER(ADDR) ) <= DIN;
			END IF;
		END IF;
	END PROCESS PRAM;

	DOUT <= RAM_DIST( CONV_INTEGER(ADDR) );
	
end Behavioral;

