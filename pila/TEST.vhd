--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:46:27 11/03/2019
-- Design Name:   
-- Module Name:   /home/nimda/STACK/TEST.vhd
-- Project Name:  STACK
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: stack
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
 
ENTITY TEST IS
END TEST;
 
ARCHITECTURE behavior OF TEST IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT stack
    PORT(
         D : IN  std_logic_vector(15 downto 0);
         Q : INOUT  std_logic_vector(15 downto 0);
         WPC : IN  std_logic;
         UP : IN  std_logic;
         DW : IN  std_logic;
         CLK : IN  std_logic;
         CLR : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal D : std_logic_vector(15 downto 0) := (others => '0');
   signal WPC : std_logic := '0';
   signal UP : std_logic := '0';
   signal DW : std_logic := '0';
   signal CLK : std_logic := '0';
   signal CLR : std_logic := '0';

	--BiDirs
   signal Q : std_logic_vector(15 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: stack PORT MAP (
          D => D,
          Q => Q,
          WPC => WPC,
          UP => UP,
          DW => DW,
          CLK => CLK,
          CLR => CLR
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		D    <= X"0000";
		UP   <= '0';
		DW   <= '0';
		WPC  <= '0';
		CLR  <= '1';
      wait for CLK_period*10;
      D    <= X"0000";
		UP   <= '0';
		DW   <= '0';
		WPC  <= '0';
		CLR  <= '0';
		wait for CLK_period*10;
		D    <= X"0000";
		UP   <= '0';
		DW   <= '0';
		WPC  <= '0';
		CLR  <= '0';
		wait for CLK_period*10;
		-- 5
		D    <= X"0010";
		UP   <= '1';
		DW   <= '0';
		WPC  <= '1';
		CLR  <= '0';
		wait for CLK_period*10;
		-- 6
		D    <= X"0000";
		UP   <= '0';
		DW   <= '0';
		WPC  <= '0';
		CLR  <= '1';
		wait for CLK_period*10;
		-- 7
		D    <= X"0000";
		UP   <= '0';
		DW   <= '0';
		WPC  <= '0';
		CLR  <= '0';
		wait for CLK_period*10;
		-- 8
		D    <= X"0000";
		UP   <= '0';
		DW   <= '0';
		WPC  <= '0';
		CLR  <= '0';
		wait for CLK_period*10;
		-- 9
		D    <= X"0020";
		UP   <= '1';
		DW   <= '0';
		WPC  <= '1';
		CLR  <= '0';
		wait for CLK_period*10;
		-- 10
		D    <= X"0000";
		UP   <= '0';
		DW   <= '0';
		WPC  <= '0';
		CLR  <= '0';
		wait for CLK_period*10;
		-- 11
		D    <= X"0000";
		UP   <= '0';
		DW   <= '0';
		WPC  <= '0';
		CLR  <= '0';
		wait for CLK_period*10;
		-- 12
		D    <= X"0000";
		UP   <= '0';
		DW   <= '0';
		WPC  <= '0';
		CLR  <= '0';
		wait for CLK_period*10;
		-- 13
		D    <= X"0000";
		UP   <= '0';
		DW   <= '1';
		WPC  <= '1';
		CLR  <= '0';
		wait for CLK_period*10;
		-- 14
		D    <= X"0000";
		UP   <= '0';
		DW   <= '0';
		WPC  <= '0';
		CLR  <= '0';
		wait for CLK_period*10;
		-- 15
		D    <= X"0000";
		UP   <= '0';
		DW   <= '0';
		WPC  <= '0';
		CLR  <= '0';
		wait for CLK_period*10;
		-- 16
		D    <= X"0000";
		UP   <= '0';
		DW   <= '1';
		WPC  <= '1';
		CLR  <= '0';
		wait for CLK_period*10;
		-- 17
		D    <= X"0000";
		UP   <= '0';
		DW   <= '0';
		WPC  <= '0';
		CLR  <= '0';
		wait for CLK_period*10;
		-- 18
		D    <= X"0000";
		UP   <= '0';
		DW   <= '0';
		WPC  <= '0';
		CLR  <= '0';
		wait for CLK_period*10;
		-- 19
		D    <= X"0002";
		UP   <= '0';
		DW   <= '0';
		WPC  <= '1';
		CLR  <= '0';
		wait for CLK_period*10;
      -- insert stimulus here 

      wait;
   end process;

END;
