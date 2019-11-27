library IEEE;
use IEEE.STD_LOGIC_1164.all;

package pack is
	component alu is
		 Generic(
				  N : integer := 16
		 );
		 Port ( A : in  STD_LOGIC_VECTOR (N-1 downto 0);
				  B : in  STD_LOGIC_VECTOR (N-1 downto 0);
				  ALUOP : in STD_LOGIC_VECTOR(3 downto 0);
				  RES : inout  STD_LOGIC_VECTOR (N-1 downto 0);
				  FLAGS : out STD_LOGIC_VECTOR(3 DOWNTO 0));
	end component;
	
	component RAM is
		generic( 
			BDATA: integer := 16; 
			BADDR: integer := 16
			);
		port(
			DIN:      in std_logic_vector(BDATA-1 downto 0);
			ADR:      in std_logic_vector(BADDR-1 downto 0);
			CLK, WEN: in std_logic;
			DOUT:     out std_logic_vector(BDATA-1 downto 0)
		);
	end component;
	
	component ROM IS
		-- VALORES GENERICOS DE LA MEMORIA DE PROGRAMA DEL ESCOMIPS
		GENERIC (
			BITS_D : INTEGER := 25;
			BITS_A : INTEGER := 16);

		-- PUERTOS DE ENTRADA (BUS DE DIRECCIONES 'A')
		-- Y SALIDA (BUS DE DIRECCIONES 'D')
		 PORT (
			A : IN STD_LOGIC_VECTOR (BITS_A - 1 DOWNTO 0);
			D : OUT STD_LOGIC_VECTOR (BITS_D - 1 DOWNTO 0));
	END component;
	
	component registros is
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
	end component;
	
	component stack is
		 Port ( D : in  STD_LOGIC_VECTOR (15 downto 0);
				  up : in  STD_LOGIC;
				  down : in  STD_LOGIC;
				  wpc : in  STD_LOGIC;
				  clk : in STD_LOGIC;
				  clr : in  STD_LOGIC;
				  out_pc : inout  STD_LOGIC_VECTOR (15 downto 0));
	end component;
	
	component control is
		 Port ( CLK : in  STD_LOGIC;
				  CLR : in  STD_LOGIC;
				  FLAGS: in STD_LOGIC_VECTOR (3 downto 0);
				  LF : in  STD_LOGIC;
				  OPCODE : in  STD_LOGIC_VECTOR (4 downto 0);
				  FUNCODE : in  STD_LOGIC_VECTOR (3 downto 0);
				  S : out  STD_LOGIC_VECTOR (19 downto 0));
	end component;
end pack;

package body pack is 
end pack;
