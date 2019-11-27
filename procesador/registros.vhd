library IEEE;
library WORK;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity registros is
    Generic(
		BDATA: integer := 16;
		BADDR: integer := 4
	 );
    Port ( clk : in  STD_LOGIC;
           read_reg1 : in  STD_LOGIC_VECTOR (BADDR-1 downto 0);
           read_reg2 : in  STD_LOGIC_VECTOR (BADDR-1 downto 0);
           write_reg : in  STD_LOGIC_VECTOR (BADDR-1 downto 0);
           shamt : in  STD_LOGIC_VECTOR (3 downto 0);
           write_data : in  STD_LOGIC_VECTOR (BDATA-1 downto 0);
           she : in  STD_LOGIC;
           dir : in  STD_LOGIC;
           wr : in  STD_LOGIC;
           read_data1 : inout  STD_LOGIC_VECTOR (BDATA-1 downto 0);
           read_data2 : out  STD_LOGIC_VECTOR (BDATA-1 downto 0));
end registros;

architecture Behavioral of registros is
type memoria is array (0 to 2**BADDR-1) of std_logic_vector(BDATA-1 downto 0);
signal reg: memoria;
signal shifter_out, to_write: std_logic_vector(BDATA-1 downto 0);
begin

	shifter: process(shamt, dir, read_data1)
	begin
		if dir = '0' then
			shifter_out <= shr(read_data1, shamt);
		else
			shifter_out <= shl(read_data1, shamt);
		end if;
	end process shifter;

	to_write <= write_data when she = '0' else
					shifter_out;

	reg_proc: process(clk)
	begin
		if rising_edge(clk) then
			if wr = '1' then
				reg(conv_integer(write_reg)) <= to_write;
			end if;
		end if;
	end process reg_proc;
	
	read_data1 <= reg(conv_integer(read_reg1));
	read_data2 <= reg(conv_integer(read_reg2));

end Behavioral;

