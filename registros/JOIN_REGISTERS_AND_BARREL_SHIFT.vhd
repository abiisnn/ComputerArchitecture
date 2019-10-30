--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:59:12 10/26/2019
-- Design Name:   
-- Module Name:   /home/nimda/Barrel_shifter/JOIN_REGISTERS_AND_BARREL_SHIFT.vhd
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
 
ENTITY JOIN_REGISTERS_AND_BARREL_SHIFT IS
END JOIN_REGISTERS_AND_BARREL_SHIFT;
 
ARCHITECTURE behavior OF JOIN_REGISTERS_AND_BARREL_SHIFT IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT shift_barrel
    PORT(
         DATAIN : IN  std_logic_vector(15 downto 0);
         DATAOUT : INOUT  std_logic_vector(15 downto 0);
         --DATAOUT : INOUT  std_logic_vector(15 downto 0);
         DIR : IN  std_logic;
         SHIFT : IN  std_logic_vector(3 downto 0);
         ADDR : IN  std_logic_vector(7 downto 0);
         ADDR1 : IN  std_logic_vector(7 downto 0);
         ADDRW : INOUT  std_logic_vector(7 downto 0);
         DIN : IN  std_logic_vector(15 downto 0);
         DOUT : inOUT  std_logic_vector(15 downto 0);
         DOUT1 : OUT  std_logic_vector(15 downto 0);
         WR : IN  std_logic;
         SHE : IN  std_logic;
         CLK : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal DATAIN : std_logic_vector(15 downto 0) := (others => '0');
   signal DIR : std_logic := '0';
   signal SHIFT : std_logic_vector(3 downto 0) := (others => '0');
   signal ADDR : std_logic_vector(7 downto 0) := (others => '0');
   signal ADDR1 : std_logic_vector(7 downto 0) := (others => '0');
   signal ADDRW : std_logic_vector(7 downto 0) := (others => '0');
   signal DIN : std_logic_vector(15 downto 0) := (others => '0');
   signal WR : std_logic := '0';
   signal SHE : std_logic := '0';
   signal CLK : std_logic := '0';

	--BiDirs
   signal DATAOUT : std_logic_vector(15 downto 0);

 	--Outputs
   signal DOUT : std_logic_vector(15 downto 0);
   signal DOUT1 : std_logic_vector(15 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: shift_barrel PORT MAP (
          DATAIN => DATAIN,
          DATAOUT => DATAOUT,
          DIR => DIR,
          SHIFT => SHIFT,
          ADDR => ADDR,
          ADDR1 => ADDR1,
          ADDRW => ADDRW,
          DIN => DIN,
          DOUT => DOUT,
          DOUT1 => DOUT1,
          WR => WR,
          SHE => SHE,
          CLK => CLK
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
		-- 1
      wait for 100 ns;	
		wait for CLK_period*10;
		SHE   <= '0';
		WR    <= '1';
		DIN   <= X"0000";
		ADDR  <= X"00";
		ADDR1 <= X"00";
		ADDRW <= X"00";
		DIR   <= '0';
		
      -- 2
      WAIT UNTIL RISING_EDGE(CLK);
		SHE   <= '0';
		WR    <= '1';
		DIN   <= X"2381";
		ADDR  <= X"00";
		ADDR1 <= X"00";
		ADDRW <= X"02";
		DIR   <= '0';
		-- 3
		WAIT UNTIL RISING_EDGE(CLK);
		SHE   <= '0';
		WR    <= '1';
		DIN   <= X"7652";
		ADDR  <= X"00";
		ADDR1 <= X"00";
		ADDRW <= X"04";
		DIR   <= '0';
		-- 4
		WAIT UNTIL RISING_EDGE(CLK);
		
		SHE   <= '0';
		WR    <= '1';
		DIN   <= X"1A4E";
		ADDR  <= X"00";
		ADDR1 <= X"00";
		ADDRW <= X"05";
		DIR   <= '0';
		-- 5	
		WAIT UNTIL RISING_EDGE(CLK);
		
		SHE   <= '0';
		WR    <= '0';
		DIN   <= X"0000";
		ADDR  <= X"05";
		ADDR1 <= X"00";
		ADDRW <= X"05";
		DIR   <= '0';
		-- 6
		WAIT UNTIL RISING_EDGE(CLK);
		
		SHE   <= '0';
		WR    <= '0';
		DIN   <= X"0000";
		ADDR  <= X"02";
		ADDR1 <= X"04";
		ADDRW <= X"00";
		DIR   <= '0';
		
--		WAIT UNTIL RISING_EDGE(CLK);
		
--		SHE   <= '1';
--		WR    <= '1';
--		DIN   <= X"0000";
--		ADDR  <= X"04";
--		ADDR1 <= X"05";
--		ADDRW <= X"04";
--		DIR   <= '1';
		-- 7
		WAIT UNTIL RISING_EDGE(CLK);
		
		SHE   <= '1';
		WR    <= '1';
		DIN   <= X"0000";
		ADDR  <= X"04";
		ADDR1 <= X"05";
		ADDRW <= X"04";
		DIR   <= '0';
		SHIFT <= "0010";
		-- 8
		WAIT UNTIL RISING_EDGE(CLK);
		
		SHE   <= '1';
		WR    <= '1';
		DIN   <= X"0000";
		ADDR  <= X"02";
		ADDR1 <= X"02";
		ADDRW <= X"08";
		DIR   <= '1';
		SHIFT <= "0010";
	-- 9
		WAIT UNTIL RISING_EDGE(CLK);
		
		SHE   <= '1';
		WR    <= '1';
		DIN   <= X"0000";
		ADDR  <= X"04";
		ADDR1 <= X"08";
		ADDRW <= X"00";
		DIR   <= '0';
		SHIFT <= "0000";

      wait;
   end process;

END;
