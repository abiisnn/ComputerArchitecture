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
		DATA_BITS : INTEGER := 8;
		N_STEPS   : INTEGER := 3
	);
	port(
		datain    : in std_logic_vector( DATA_BITS-1 downto 0 );
		dataout   : out std_logic_vector( DATA_BITS-1 downto 0 );
		dir 		 : in std_logic;
		shift     : in std_logic_vector( N_STEPS-1 downto 0 )
	); 
end shift_barrel;

architecture Behavioral of shift_barrel is
-- Funciones 
begin
	PSH : PROCESS( DATAIN, DIR, SHIFT )
	BEGIN
		IF( DIR = '1' ) THEN
			DATAOUT <= SHIFTL(DATAIN, SHIFT);
		ELSE
			DATAOUT <= SHIFTR(DATAIN, SHIFT);
--			DATAOUT <= TO_STDLOGICVECTOR(TO_BITVECTOR(DATAIN) SRL CONV_INTEGER(SHIFT));
		END IF;
	END PROCESS PSH;

	

end Behavioral;

