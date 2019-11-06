----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:00:04 11/03/2019 
-- Design Name: 
-- Module Name:    stack - Behavioral 
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

entity stack is
	GENERIC( N      : INTEGER := 16;
				ADR_NIV: INTEGER := 4 );
    Port ( D         : in  STD_LOGIC_VECTOR  (N-1 downto 0);
           Q         : inout  STD_LOGIC_VECTOR (N-1 downto 0);
           WPC       : in  STD_LOGIC;
           UP,DW		: in  STD_LOGIC;
           CLK,CLR   : in  STD_LOGIC;
			  SP        : inout STD_LOGIC_VECTOR(ADR_NIV-1 DOWNTO 0));
end stack;

architecture Behavioral of stack is
	TYPE MEMORIA IS ARRAY ( 0 TO 2**ADR_NIV-1 ) 
						OF STD_LOGIC_VECTOR( N-1 downto 0);
	SIGNAL STACK  : MEMORIA;
	SIGNAL DS     : STD_LOGIC_VECTOR( N-1 DOWNTO 0 );
	SIGNAL I      : STD_LOGIC_VECTOR( N-1 DOWNTO 0 );
	
begin
	PSTACK : PROCESS( CLK )
	BEGIN
		IF( RISING_EDGE(CLK) ) THEN
			IF( UP = '1' ) THEN
				STACK( CONV_INTEGER( SP ) ) <= Q+1;
			END IF;
		END IF;
	END PROCESS PSTACK;
	
	DS <= STACK( CONV_INTEGER( SP - 1 ) );
	PSP : PROCESS( CLK, CLR )
	BEGIN
		IF( CLR = '1' ) THEN
		ELSIF( RISING_EDGE( CLK ) ) THEN
			IF( UP = '1' ) THEN
				SP <= SP + 1;
			ELSIF( DW = '1' ) THEN
				SP <= SP - 1;
			END IF;
		END IF;
	END PROCESS PSP;
	
	PPC : PROCESS( CLK, CLR )
	BEGIN
		IF( CLR = '1' ) THEN
			Q <= (OTHERS => '0');
		ELSIF( RISING_EDGE(CLK) ) THEN
			IF( WPC = '1' ) THEN
				Q <= I;
			ELSE
				Q <= Q+1;
			END IF;
		END IF;
	END PROCESS PPC;
	
	I <= DS WHEN ( DW = '1' ) else D;
end Behavioral;

