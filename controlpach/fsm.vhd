library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity fsm is
    Port ( clk : in  STD_LOGIC;
           clr : in  STD_LOGIC;
			  TIPOR : in  STD_LOGIC;
           BEQI : in  STD_LOGIC;
           BNEQI : in  STD_LOGIC;
           BLTI : in  STD_LOGIC;
           BLETI : in  STD_LOGIC;
           BGTI : in  STD_LOGIC;
           BGETI : in  STD_LOGIC;
           NA : in  STD_LOGIC;
           EQ : in  STD_LOGIC;
           NEQ : in  STD_LOGIC;
           L : in  STD_LOGIC;
           LE : in  STD_LOGIC;
           G : in  STD_LOGIC;
           GE : in  STD_LOGIC;
           SDOPC : out  STD_LOGIC;
           SM : out  STD_LOGIC);
end fsm;

architecture Behavioral of fsm is
type estado is(a);
signal actual, siguiente: estado;
begin

	automata: process(actual, TIPOR, BEQI, BNEQI, BLTI, BLETI, BGTI, BGETI, NA, EQ, NEQ, L, LE, G, GE)
	begin
		SDOPC <= '0';
		SM <= '0';
		case actual is
			when a =>
				if TIPOR = '1' then
					SM <= '0';
				else
					if BEQI = '1' then
						if NA = '1' or EQ = '0' then
							SDOPC <= '0';
							SM <= '1';
						else
							SDOPC <= '1';
							SM <= '1';
						end if;
					elsif BNEQI = '1' then
						if NA = '1' or NEQ = '0' then
							SDOPC <= '0';
							SM <= '1';
						else
							SDOPC <= '1';
							SM <= '1';
						end if;
					elsif BLTI = '1' then
						if NA = '1' or L = '0' then
							SDOPC <= '0';
							SM <= '1';
						else
							SDOPC <= '1';
							SM <= '1';
						end if;
					elsif BLETI = '1' then
						if NA = '1' or LE = '0' then
							SDOPC <= '0';
							SM <= '1';
						else
							SDOPC <= '1';
							SM <= '1';
						end if;
					elsif BGTI = '1' then
						if NA = '1' or G = '0' then
							SDOPC <= '0';
							SM <= '1';
						else
							SDOPC <= '1';
							SM <= '1';
						end if;
					elsif BGETI = '1' then
						if NA = '1' or GE = '0' then
							SDOPC <= '0';
							SM <= '1';
						else
							SDOPC <= '1';
							SM <= '1';
						end if;
					else
						SDOPC <= '1';
						SM <= '1';
					end if;
				end if;
				siguiente <= a;
		end case;
	end process automata;
	
	transicion: process(clk, clr)
	begin
		if clr = '1' then
			actual <= a;
		elsif rising_edge(clk) then
			actual <= siguiente;
		end if;
	end process transicion;

end Behavioral;

