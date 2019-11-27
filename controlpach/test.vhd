LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE STD.TEXTIO.ALL;
USE IEEE.STD_LOGIC_TEXTIO.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.numeric_std.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY test IS
END test;
 
ARCHITECTURE behavior OF test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT main
    PORT(
         CLK : IN  std_logic;
         CLR : IN  std_logic;
         FLAGS : IN  std_logic_vector(3 downto 0);
         LF : IN  std_logic;
         OPCODE : IN  std_logic_vector(4 downto 0);
         FUNCODE : IN  std_logic_vector(3 downto 0);
         S : OUT  std_logic_vector(19 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal CLR : std_logic := '0';
   signal FLAGS : std_logic_vector(3 downto 0) := (others => '0');
   signal LF : std_logic := '0';
   signal OPCODE : std_logic_vector(4 downto 0) := (others => '0');
   signal FUNCODE : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal S : std_logic_vector(19 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: main PORT MAP (
          CLK => CLK,
          CLR => CLR,
          FLAGS => FLAGS,
          LF => LF,
          OPCODE => OPCODE,
          FUNCODE => FUNCODE,
          S => S
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
	
	variable OPCODE_var: std_logic_vector(4 downto 0);
	variable FUNCODE_var: std_logic_vector(3 downto 0);
	variable FLAGS_var: std_logic_vector(3 downto 0);
	variable CLR_var, LF_var: std_logic;
	
	begin
		file_open(input, "input.txt", read_mode);
		file_open(output, "output.txt", write_mode);
		
		write(linea_out, "OP_CODE", right, 7);
		write(linea_out, "FUN_CODE", right, 10);
		write(linea_out, "FLAGS", right, 7);
		write(linea_out, "CLR", right, 5);
		write(linea_out, "LF", right, 4);
		write(linea_out, "MICROINSTRUCCION", right, 22);
		write(linea_out, "NIVEL", right, 7);
		writeline(output, linea_out);
		
		while not endfile(input) loop
			readline(input, linea_in);
			
			read(linea_in, OPCODE_var);
			OPCODE <= OPCODE_var;
			
			read(linea_in, FUNCODE_var);
			FUNCODE <= FUNCODE_var;
			
			read(linea_in, FLAGS_var);
			FLAGS <= FLAGS_var;
			
			read(linea_in, CLR_var);
			CLR <= CLR_var;
			
			read(linea_in, LF_var);
			LF <= LF_var;
			
			wait until falling_edge(clk);
			
			write(linea_out, OPCODE, right, 7);
			write(linea_out, FUNCODE, right, 10);
			write(linea_out, FLAGS, right, 7);
			write(linea_out, CLR, right, 5);
			write(linea_out, LF, right, 4);
			write(linea_out, S, right, 22);
			write(linea_out, "ALTO", right, 7);
			writeline(output, linea_out);
			
			wait until rising_edge(clk);
			
			write(linea_out, OPCODE, right, 7);
			write(linea_out, FUNCODE, right, 10);
			write(linea_out, FLAGS, right, 7);
			write(linea_out, CLR, right, 5);
			write(linea_out, LF, right, 4);
			write(linea_out, S, right, 22);
			write(linea_out, "BAJO", right, 7);
			writeline(output, linea_out);

		end loop;
		
		file_close(input);
		file_close(output);
		wait;
   end process;

END;
