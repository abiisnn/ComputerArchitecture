--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   22:18:27 11/29/2018
-- Design Name:   
-- Module Name:   C:/Users/alan-/Documents/trabajos-escom/5/arquitectura/procesador/test.vhd
-- Project Name:  procesador
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: main
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY test IS
END test;
 
ARCHITECTURE behavior OF test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT main
    PORT(
         osc : IN  std_logic;
         clr : IN  std_logic;
         salida_leds : INOUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal osc : std_logic := '0';
   signal clr : std_logic := '0';

	--BiDirs
   signal salida_leds : std_logic_vector(15 downto 0);

   -- Clock period definitions
   constant osc_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: main PORT MAP (
          osc => osc,
          clr => clr,
          salida_leds => salida_leds
        );

   -- Clock process definitions
   osc_process :process
   begin
		osc <= '0';
		wait for osc_period/2;
		osc <= '1';
		wait for osc_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
     
		clr <= '1';
		wait until rising_edge(osc);
		clr <= '0';
		for i in 1 to 50 loop
			wait until rising_edge(osc);
		end loop;

      wait;
   end process;

END;
