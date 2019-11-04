--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   12:02:25 10/14/2019
-- Design Name:   
-- Module Name:   /home/nimda/RAM_DIST/Archivos.vhd
-- Project Name:  RAM_DIST
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: RAM
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
LIBRARY ieee;
LIBRARY std;
USE std.textio.all;

USE ieee.std_logic_TEXTIO.ALL;

USE ieee.std_logic_1164.ALL;
USE ieee.std_logic_UNSIGNED.ALL;
USE ieee.std_logic_ARITH.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY Archivos IS
END Archivos;
 
ARCHITECTURE behavior OF Archivos IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT RAM
    PORT(
         ADDR : IN  std_logic_vector(7 downto 0);
         DIN : IN  std_logic_vector(15 downto 0);
         DOUT : OUT  std_logic_vector(15 downto 0);
         WEN : IN  std_logic;
         CLK : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal ADDR : std_logic_vector(7 downto 0) := (others => '0');
   signal DIN : std_logic_vector(15 downto 0) := (others => '0');
   signal WEN : std_logic := '0';
   signal CLK : std_logic := '0';

 	--Outputs
   signal DOUT : std_logic_vector(15 downto 0) := (others => '0');

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: RAM PORT MAP (
          ADDR => ADDR,
          DIN => DIN,
          DOUT => DOUT,
          WEN => WEN,
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
	file ARCH_RES : TEXT;
	variable LINEA_RES : line;
	
	file ARCH_PRUEBA : TEXT;
	variable LINEA_ENTRADA : line;
	variable cadenota : string( 1 to 6 );
	variable cadena : string( 1 to 5 );
	variable cadenita : string( 1 to 3 );
	
	variable nLog : STD_LOGIC := '0';
	variable hexa : STD_LOGIC_VECTOR( 15 downto 0 ) := X"0000";
	variable hexaA : STD_LOGIC_VECTOR( 7 downto 0 ) := X"00";
	variable var_b : STD_LOGIC_VECTOR( 24 downto 0 );
	variable tmp : STD_LOGIC_VECTOR(7 downto 0);
   begin		
      -- hold reset state for 100 ns.
      WAIT FOR 100 NS;
		file_open( ARCH_PRUEBA, "pruebas.txt", read_mode );
		file_open( ARCH_RES, "resultado.txt", write_mode );
--    Encabezado
		cadena := " DIN ";
		write( LINEA_RES, cadena, left, cadenita'LENGTH + 1);
		cadenota := "A     ";
		write( LINEA_RES, cadenota, right, cadenota'LENGTH + 1);
		cadenota := "WD    ";
		write( LINEA_RES, cadenota, right, cadenota'LENGTH + 1);
		cadenota := "Do    ";
		write( LINEA_RES, cadenota, right, cadenota'LENGTH + 1);
		
--		DOUT <= X"0000";
		
		writeline( ARCH_RES, LINEA_RES );
		WAIT UNTIL RISING_EDGE(CLK);
		FOR I IN 0 TO 11 LOOP
			-- DIN
			readline( ARCH_PRUEBA, LINEA_ENTRADA );
			hread( LINEA_ENTRADA, hexa );
			DIN <= hexa;
			-- A
--			readline( ARCH_PRUEBA, LINEA_ENTRADA );
			hread( LINEA_ENTRADA, hexaA );
			ADDR <= hexaA;
			-- WD
--			readline( ARCH_PRUEBA, LINEA_ENTRADA );
			read( LINEA_ENTRADA, nLog );
			WEN <= nLog;
			
			WAIT UNTIL RISING_EDGE(CLK);
			hwrite( LINEA_RES, DIN, left, 6 );
			hwrite( LINEA_RES, ADDR, left, 6 );
			write( LINEA_RES, WEN, left, 6 );
			hwrite( LINEA_RES, DOUT, left, 6 );
			writeline( ARCH_RES, LINEA_RES );

		END LOOP;
		file_close(ARCH_PRUEBA);
		file_close(ARCH_RES);
--		DIN <= x"A25B";
--		ADDR  <= x"23";
--		WEN <= '0';
--      wait for CLK_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
