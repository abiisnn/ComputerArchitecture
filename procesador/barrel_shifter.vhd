library IEEE;
use IEEE.STD_LOGIC_1164.all;

package barrel_shifter is

	function shl(signal datain: std_logic_vector; signal shamt: std_logic_vector) return std_logic_vector;
	function shr(signal datain: std_logic_vector; signal shamt: std_logic_vector) return std_logic_vector;

end barrel_shifter;

package body barrel_shifter is

	function shl(signal datain: std_logic_vector; signal shamt: std_logic_vector) return std_logic_vector is
	variable shift_data: std_logic_vector(datain'range);
	variable indice: integer;
	begin
		shift_data:= datain;
		for i in 0 to shamt'length-1 loop
			for j in datain'length-1 downto 0 loop
				if shamt(i) = '1' then
					indice:= j - 2**i;
					if indice < 0 then
						shift_data(j):= '0';
					else
						shift_data(j):= shift_data(indice);
					end if;
				end if;
			end loop;
		end loop;
		return shift_data;
	end shl;
	
	function shr(signal datain: std_logic_vector; signal shamt: std_logic_vector) return std_logic_vector is
	variable shift_data: std_logic_vector(datain'range);
	variable indice: integer;
	begin
		shift_data:= datain;
		for i in 0 to shamt'length-1 loop
			for j in 0 to datain'length-1 loop
				if shamt(i) = '1' then
					indice:= j + 2**i;
					if indice >= datain'length then
						shift_data(j):= '0';
					else
						shift_data(j):= shift_data(indice);
					end if;
				end if;
			end loop;
		end loop;
		return shift_data;
	end shr;

end barrel_shifter;
