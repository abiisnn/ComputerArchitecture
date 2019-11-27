library IEEE;
use IEEE.STD_LOGIC_1164.all;

package paquete_control is

	component registro is
		 Port ( LF : in  STD_LOGIC;
				  DFLAGS : in  STD_LOGIC_VECTOR (3 downto 0);
				  CLK : in  STD_LOGIC;
				  CLR : in  STD_LOGIC;
				  QFLAGS : out  STD_LOGIC_VECTOR (3 downto 0));
	end component;
	
	component condicion is
		 Port ( FLAGS : in  STD_LOGIC_VECTOR (3 downto 0);
				  EQ : out  STD_LOGIC;
				  NEQ : out  STD_LOGIC;
				  L : out  STD_LOGIC;
				  LE : out  STD_LOGIC;
				  G : out  STD_LOGIC;
				  GE : out  STD_LOGIC);
	end component;
	
	component nivel is
		 Port ( CLK : in  STD_LOGIC;
				  CLR : in  STD_LOGIC;
				  NA : out  STD_LOGIC);
	end component;
	
	component deco is
		 Port ( OPCODE : in  STD_LOGIC_VECTOR (4 downto 0);
				  TIPOR : out  STD_LOGIC;
				  BEQI : out  STD_LOGIC;
				  BNEQI : out  STD_LOGIC;
				  BLTI : out  STD_LOGIC;
				  BLETI : out  STD_LOGIC;
				  BGTI : out  STD_LOGIC;
				  BGETI : out  STD_LOGIC);
	end component;
	
	component mem_funcion is
		 Port ( FUNCODE : in  STD_LOGIC_VECTOR (3 downto 0);
				  MICROINSTRUCCION : out  STD_LOGIC_VECTOR (19 downto 0));
	end component;
	
	component mem_operacion is
		 Port ( OPCODE : in  STD_LOGIC_VECTOR (4 downto 0);
				  MICROINSTRUCCION : out  STD_LOGIC_VECTOR (19 downto 0));
	end component;
	
	component fsm is
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
	end component;

end paquete_control;

package body paquete_control is
 
end paquete_control;
