--
--	Package File Template
--
--	Purpose: This package defines supplemental types, subtypes, 
--		 constants, and functions 
--
--   To use any of the example code shown below, uncomment the lines and modify as necessary
--

library IEEE;



use IEEE.STD_LOGIC_1164.all;
package PAQUETE is

-- type <new_type> is
--  record
--    <type_name>        : std_logic_vector( 7 downto 0);
--    <type_name>        : std_logic;
-- end record;
--
-- Declare constants
--
-- constant <constant_name>		: time := <time_unit> ns;
-- constant <constant_name>		: integer := <value;
--
-- Declare functions and procedure
--
-- function <function_name>  (signal <signal_name> : in <type_declaration>) return <type_declaration>;
-- procedure <procedure_name> (<type_declaration> <constant_name>	: in <type_declaration>);
--
	FUNCTION SHIFTL( SIGNAL DATAIN : STD_LOGIC_VECTOR;
					  SIGNAL SHIFT  : STD_LOGIC_VECTOR )
	RETURN STD_LOGIC_VECTOR;
	FUNCTION SHIFTR( SIGNAL DATAIN : STD_LOGIC_VECTOR;
					  SIGNAL SHIFT  : STD_LOGIC_VECTOR )
	RETURN STD_LOGIC_VECTOR;
end PAQUETE;

package body PAQUETE is
	FUNCTION SHIFTL( SIGNAL DATAIN : STD_LOGIC_VECTOR;
					  SIGNAL SHIFT  : STD_LOGIC_VECTOR )
	RETURN STD_LOGIC_VECTOR IS
	
	variable shift_data : std_logic_vector( 7 downto 0 );
	variable index      : integer range -4 to 7;
	begin
		shift_data := datain;
		for i in 0 to 2	loop
			if( shift(i) = '1' ) then
				for j in 7 downto 0 loop
					index := j - 2**i;
					if( index < 0 ) then
						shift_data(j) := '0';
					else
						shift_data(j) := shift_data(index);
					end if;
				end loop;
			end if;
		end loop;
--		dataout <= shift_data;
		return shift_data;
	END SHIFTL;
	
	FUNCTION SHIFTR( SIGNAL DATAIN : STD_LOGIC_VECTOR;
					  SIGNAL SHIFT  : STD_LOGIC_VECTOR )
	RETURN STD_LOGIC_VECTOR IS
	
	variable shift_data : std_logic_vector( 7 downto 0 );
	variable index      : integer range 0 to 11;
	begin
		shift_data := datain;
		for i in 0 to 2	loop
			if( shift(i) = '1' ) then
				for j in 0 to 7 loop
					index := j + 2**i;
					if( index > 7 ) then
						shift_data(j) := '0';
					else
						shift_data(j) := shift_data(index);
					end if;
				end loop;
			end if;
		end loop;
--		dataout <= shift_data;
		return shift_data;
	END SHIFTR;
---- Example 1
--  function <function_name>  (signal <signal_name> : in <type_declaration>  ) return <type_declaration> is
--    variable <variable_name>     : <type_declaration>;
--  begin
--    <variable_name> := <signal_name> xor <signal_name>;
--    return <variable_name>; 
--  end <function_name>;

---- Example 2
--  function <function_name>  (signal <signal_name> : in <type_declaration>;
--                         signal <signal_name>   : in <type_declaration>  ) return <type_declaration> is
--  begin
--    if (<signal_name> = '1') then
--      return <signal_name>;
--    else
--      return 'Z';
--    end if;
--  end <function_name>;

---- Procedure Example
--  procedure <procedure_name>  (<type_declaration> <constant_name>  : in <type_declaration>) is
--    
--  begin
--    
--  end <procedure_name>;
 
end PAQUETE;
