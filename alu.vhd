----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:17:20 09/08/2019 
-- Design Name: 
-- Module Name:    sum_res - PROGRAMA 
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

entity sum_res is
	GENERIC (
		N : INTEGER := 8
	);
    Port ( A : in  STD_LOGIC_VECTOR (N - 1 downto 0);
           B : in  STD_LOGIC_VECTOR (N - 1 downto 0);
           AINVERT, BINVERT : in  STD_LOGIC;
           OP : IN STD_LOGIC_VECTOR(1 downto 0);
           RES : out STD_LOGIC_VECTOR(N-1 downto 0);

           S : out  STD_LOGIC_VECTOR (N - 1 downto 0);
           CF : out  STD_LOGIC);
end sum_res;

architecture PROGRAMA of sum_res is


begin


	SUM_RES: PROCESS(A, B, BINVERT)
	VARIABLE G: std_logic_vector(N - 1 downto 0);
	VARIABLE P : std_logic_vector(N - 1 downto 0);
	VARIABLE EB : std_logic_vector(N - 1 downto 0);
	VARIABLE C : std_logic_vector(N downto 0);
	VARIABLE PROD: STD_LOGIC;
	VARIABLE SUM: STD_LOGIC;
	VARIABLE MUXA, MUXB : std_logic_vector(N-1 downto 0);

	BEGIN

	C(0):= BINVERT;
	
	principal: for I in 0 to N - 1 LOOP
		MUXA(I) := A(I) XOR AINVERT;
		MUXB(I) := B(I) XOR BINVERT;
		CASE OP is
			WHEN "00" =>
				RES(I) <= MUXA(I) AND MUXB(I);
			WHEN "01" =>
				RES(I) <= MUXA(I) OR MUXB(I);
			WHEN "10" =>
				RES(I) <= MUXA(I) XOR MUXB(I);
			WHEN OTHERS =>
				P(I) := MUXA(I) XOR MUXB(I);
				G(I) := MUXA(I) AND MUXB(I);
				RES(I) <= MUXA(I) XOR MUXB(I) XOR C(I);
				C(I + 1) := G(I);
				SUM := '0';
				CICLO: for J in 0 to I - 1 LOOP
					PROD := '1';
					CICLO2: for K in J + 1 to I LOOP
						PROD := PROD AND P(K);
					END LOOP CICLO2;
					PROD := PROD AND G(J);
					SUM := SUM OR PROD;
				END LOOP CICLO;
				C(I + 1) := C(I + 1) OR SUM;
				PROD := '1';
				CICLO3: for L in 0 to I LOOP
					PROD := PROD AND P(L);
				END LOOP CICLO3;
				PROD := PROD AND C(0);
				C(I + 1) := C(I + 1) OR PROD;
				-- Faltan banderas negativas
		END CASE;
	END LOOP principal;
	
	CF <= C(N);
	END PROCESS SUM_RES;
	
end PROGRAMA;

	