--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   22:41:07 09/08/2019
-- Design Name:   
-- Module Name:   /home/san/ESCOM/ComputerArchitecture/sum_res/TB_SUM_RES.vhd
-- Project Name:  sum_res
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: sum_res
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
 
ENTITY TB_SUM_RES IS
END TB_SUM_RES;
 
ARCHITECTURE behavior OF TB_SUM_RES IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT sum_res
    PORT(
         A : IN  std_logic_vector(3 downto 0);
         B : IN  std_logic_vector(3 downto 0);
         BINVERT : IN  std_logic;
         S : OUT  std_logic_vector(3 downto 0);
         Cn : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic_vector(3 downto 0) := (others => '0');
   signal B : std_logic_vector(3 downto 0) := (others => '0');
   signal BINVERT : std_logic := '0';

 	--Outputs
   signal S : std_logic_vector(3 downto 0);
   signal Cn : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
--   constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: sum_res PORT MAP (
          A => A,
          B => B,
          BINVERT => BINVERT,
          S => S,
          Cn => Cn
        );

   -- Clock process definitions
--   <clock>_process :process
--   begin
--		<clock> <= '0';
--		wait for <clock>_period/2;
--		<clock> <= '1';
--		wait for <clock>_period/2;
--   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		A <= "0101";
		B <= "0011";
		BINVERT <= '0';
      wait for 100 ns;
		A <= "0101";
		B <= "0011";
		BINVERT <= '1';
		
--      wait for <clock>_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
