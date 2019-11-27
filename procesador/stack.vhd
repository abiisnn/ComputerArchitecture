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
    Port ( D : in  STD_LOGIC_VECTOR (15 downto 0);
           up : in  STD_LOGIC;
           down : in  STD_LOGIC;
           wpc : in  STD_LOGIC;
			  clk : in STD_LOGIC;
           clr : in  STD_LOGIC;
           out_pc : inout  STD_LOGIC_VECTOR (15 downto 0));
end stack;

architecture Behavioral of stack is
type memoria is array (0 to 15) of std_logic_vector(15 downto 0);
signal reg: memoria;
signal read_data: std_logic_vector(15 downto 0);
signal sp: std_logic_vector(3 downto 0);
signal in_pc: std_logic_vector(15 downto 0);
begin

	read_data <= reg(conv_integer(sp - 1));
	in_pc <= D when down = '0' else read_data;

	ram_d: process(clk)
	begin
		if rising_edge(clk) then
			if up = '1' then
				reg(conv_integer(sp)) <= out_pc + 1;
			end if;
		end if;
	end process ram_d;
	
	stack_pointer: process(clk, clr)
	begin
		if clr = '1' then
			sp <= (others => '0');
		elsif rising_edge(clk) then
			if down = '1' then
				sp <= sp - 1;
			elsif up = '1' then
				sp <= sp + 1;
			end if;
		end if;
	end process stack_pointer;
	
	program_counter: process(clk, clr)
	begin
		if clr = '1' then
			out_pc <= (others => '0');
		elsif rising_edge(clk) then
			if wpc = '1' then
				out_pc <= in_pc;
			else
				out_pc <= out_pc + 1;
			end if;
		end if;
	end process program_counter;

end Behavioral;

