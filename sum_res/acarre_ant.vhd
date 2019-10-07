----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:51:44 09/09/2019 
-- Design Name: 
-- Module Name:    acarre_ant - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

--	8
-- A->
-- B->
-- Ainnert->
--	Binvert->
--
--

entity acarre_ant is
	GENERIC(
		N : INTEGER := 4 
	);
    Port ( A : in  STD_LOGIC_VECTOR (N-1 downto 0);
           B : in  STD_LOGIC_VECTOR (N-1 downto 0);
           --S : out  STD_LOGIC_VECTOR (N-1 downto 0);
           --Cn: out  STD_LOGIC;
           BINVERT, AINVERT : in  STD_LOGIC;
			  CF, OV: out STD_LOGIC;
			  ZF, NF: out STD_LOGIC;
			  OP: in STD_LOGIC_VECTOR ( 1 DOWNTO 0 );
			  Res : inout STD_LOGIC_VECTOR(N-1 DOWNTO 0)
			  --Res: out std_logic
           --C : out  STD_LOGIC_VECTOR (3 downto 0)
			  );
end acarre_ant;

architecture Behavioral of acarre_ant is
begin
	PUA: PROCESS( A, B, BINVERT, AINVERT, OP )
	VARIABLE C:  STD_LOGIC_VECTOR( N DOWNTO 0 ) := "00000";
	VARIABLE EB: STD_LOGIC_VECTOR( N-1 DOWNTO 0 );
	VARIABLE P, G : STD_LOGIC_VECTOR( N-1 DOWNTO 0 );
	VARIABLE PK, T2, T3, PL : STD_LOGIC;
	VARIABLE MUXA, MUXB: STD_LOGIC_VECTOR( N-1 DOWNTO 0 );
	
	begin 
		C := (OTHERS => '0' );
		P := (OTHERS => '0' );
		G := (OTHERS => '0' );
		C(0) := BINVERT;
		FOR I IN 0 TO N-1 LOOP
			MUXA(I) := A(I) XOR AINVERT;
			MUXB(I) := B(I) XOR BINVERT;
			CASE OP IS
				WHEN "00" => 
					Res <= MUXA AND MUXB;
				WHEN "01" => 
					Res <= MUXA OR MUXB;
				WHEN "10" => 
					Res <= MUXA XOR MUXB;
				WHEN OTHERS => 
		
					--EB(I) := B(I) XOR BINVERT;
					P(I) := MUXA(I) XOR MUXB(I);
					RES(I) <= MUXA(I) XOR MUXB(I) XOR C(I);
					G(I) := MUXA(I) AND MUXB(I);
		  --C(I+1) <= ( A(I) AND EB(I) ) OR ( A(I) AND C(I) ) OR ( EB(I) AND C(I) );
			
					T2 := '0';
					FOR J IN 0 TO I-1 LOOP
						PK := '1';
						FOR K IN J+1 TO I LOOP
							PK := PK AND P(K);
						END LOOP;
						T2 := T2 OR ( G(J) AND PK );
					END LOOP;
					
					
					PL := '1';
					FOR L IN 0 TO I LOOP
						PL := PL AND P(L);
					END LOOP;
					T3 := C(0) AND PL;
					
					C(I+1) := G(I) OR T2 OR T3;
				end case;
		END LOOP;
		
		CF <= C(N);
		OV <= C(N-1) XOR C(N);
		
	END PROCESS PUA;
	NF	<= RES(N-1);
	ZF  <= NOT (RES(0) OR RES(1) OR RES(2) OR RES(3));
	
end Behavioral;

