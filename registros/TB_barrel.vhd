--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   13:25:45 10/17/2019
-- Design Name:   
-- Module Name:   /home/nimda/Barrel_shifter/TB_barrel.vhd
-- Project Name:  Barrel_shifter
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: shift_barrel
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
 
ENTITY TB_barrel IS
END TB_barrel;
 
ARCHITECTURE behavior OF TB_barrel IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT shift_barrel
    PORT(
         datain : IN  std_logic_vector(7 downto 0);
         dataout : OUT  std_logic_vector(7 downto 0);
			dir: in std_logic;
         shift : IN  std_logic_vector(2 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal datain : std_logic_vector(7 downto 0) := (others => '0');
   signal shift : std_logic_vector(2 downto 0) := (others => '0');
   signal dir: std_logic := '0';

 	--Outputs
   signal dataout : std_logic_vector(7 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
--   constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: shift_barrel PORT MAP (
          datain => datain,
          dataout => dataout,
          dir => dir,
          shift => shift
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
		datain <= X"F5";
		shift <= "100";
		dir <= '1';
		
      wait for 100 ns;	
		datain <= X"F5";
		shift <= "100";
		dir <= '0';
		wait for 100 ns;
--      wait for <clock>_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
