library IEEE;
library WORK;
use WORK.paquete_control.ALL;
use IEEE.STD_LOGIC_1164.ALL;

entity main is
    Port ( CLK : in  STD_LOGIC;
           CLR : in  STD_LOGIC;
			  FLAGS: in STD_LOGIC_VECTOR (3 downto 0);
           LF : in  STD_LOGIC;
           OPCODE : in  STD_LOGIC_VECTOR (4 downto 0);
           FUNCODE : in  STD_LOGIC_VECTOR (3 downto 0);
           S : out  STD_LOGIC_VECTOR (19 downto 0));
end main;

architecture Behavioral of main is

signal NA: std_logic;
signal RFLAGS: std_logic_vector(3 downto 0);
signal EQ, NEQ, L, LE, G, GE: std_logic;
signal TIPOR, BEQI, BNEQI, BLTI, BLETI, BGTI, BGETI: std_logic;
signal MICRO_FUNC, MICRO_OPER: std_logic_vector(19 downto 0);
signal OPC: std_logic_vector(4 downto 0);
signal SM, SDOPC: std_logic;

begin

	reg: registro port map(
		clk => clk,
		clr => clr,
		LF => LF,
		DFLAGS => FLAGS,
		QFLAGS => RFLAGS
	);
	
	cond: condicion port map(
		FLAGS => RFLAGS,
		EQ => EQ,
		NEQ => NEQ,
		L => L,
		LE => LE,
		G => G,
		GE => GE
	);
	
	niv: nivel port map(
		clk => clk,
		clr => clr,
		NA => NA
	);
	
	dec: deco port map(
		OPCODE => OPCODE,
		TIPOR => TIPOR,
		BEQI => BEQI,
		BNEQI => BNEQI,
		BLTI => BLTI,
		BLETI => BLETI,
		BGTI => BGTI,
		BGETI => BGETI
	);
	
	func: mem_funcion port map(
		FUNCODE => FUNCODE,
		MICROINSTRUCCION => MICRO_FUNC
	);
	
	oper: mem_operacion port map(
		OPCODE => OPC,
		MICROINSTRUCCION => MICRO_OPER
	);
	
	carta: fsm port map(
		clk => clk,
		clr => clr,
		TIPOR => TIPOR,
		BEQI => BEQI,
		BNEQI => BNEQI,
		BLTI => BLTI,
		BLETI => BLETI,
		BGTI => BGTI,
		BGETI => BGETI,
		NA => NA,
		EQ => EQ,
		NEQ => NEQ,
		L => L,
		LE => LE,
		G => G,
		GE => GE,
		SDOPC => SDOPC,
		SM => SM
	);
	
	OPC <= "00000" when SDOPC = '0' else OPCODE;
	S <= MICRO_FUNC when SM = '0' else MICRO_OPER;

end Behavioral;

