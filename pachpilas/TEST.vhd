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
USE STD.TEXTIO.ALL;
USE IEEE.STD_LOGIC_TEXTIO.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.numeric_std.ALL;
 
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
         CLR : IN  std_logic;
			SP: INOUT std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal D : std_logic_vector(15 downto 0) := (others => '0');
   signal WPC : std_logic := '0';
   signal UP : std_logic := '0';
   signal DW : std_logic := '0';
   signal CLK : std_logic := '0';
   signal CLR : std_logic := '0';
	signal SP : std_logic_vector(3 downto 0) := (others => '0');

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
          CLR => CLR,
			 SP => SP
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
	
	file input, output: text;
	variable linea_in, linea_out: line;
	variable str: string(1 to 5);
	variable num: integer;
	
	variable D_var: std_logic_vector(15 downto 0);
	variable up_var, down_var, wpc_var, clr_var: std_logic;
	
   begin		
      file_open(input, "input.txt", read_mode);
		file_open(output, "output.txt", write_mode);
		
		str:= "    D";
		write(linea_out, str, right, str'length + 1);
		str:= "   UP";
		write(linea_out, str, right, str'length + 1);
		str:= "   DW";
		write(linea_out, str, right, str'length + 1);
		str:= "  WPC";
		write(linea_out, str, right, str'length + 1);
		str:= "  CLR";
		write(linea_out, str, right, str'length + 1);
		str:= "   SP";
		write(linea_out, str, right, str'length + 1);
		str:= "    Q";
		write(linea_out, str, right, str'length + 1);
		writeline(output, linea_out);
		
		while not endfile(input) loop
			readline(input, linea_in);
			
			hread(linea_in, D_var);
			D <= D_var;
			
			read(linea_in, up_var);
			UP <= up_var;
			
			read(linea_in, down_var);
			DW <= down_var;
			
			read(linea_in, wpc_var);
			WPC <= wpc_var;
			
			read(linea_in, clr_var);
			CLR <= clr_var;
			
			wait until rising_edge(CLK);
			
			hwrite(linea_out, D, right, 6);
			write(linea_out, UP, right, 6);
			write(linea_out, DW, right, 6);
			write(linea_out, WPC, right, 6);
			write(linea_out, CLR, right, 6);
			write(linea_out, SP, right, 6);
			hwrite(linea_out, Q, right, 6);
			writeline(output, linea_out);
			
		end loop;
		
		file_close(input);
		file_close(output);

      wait;
   end process;

END;
