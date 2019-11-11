library IEEE;
LIBRARY WORK;
use IEEE.STD_LOGIC_1164.ALL;
USE WORK.PAQUETE.ALL;

entity PRINCIPAL is
	GENERIC( N : INTEGER := 8 );
    Port ( A : in  STD_LOGIC_VECTOR (7 downto 0);
           INI, CLK, CLR : in  STD_LOGIC;
           DISP : out  STD_LOGIC_VECTOR (6 downto 0));
end PRINCIPAL;

architecture PROGRAMA of PRINCIPAL is
SIGNAL QR : STD_LOGIC_VECTOR(N-1 DOWNTO 0);
SIGNAL QC : STD_LOGIC_VECTOR(3 DOWNTO 0);
SIGNAL Qcon : STD_LOGIC_VECTOR (6 downto 0))
SIGNAL LA, SHE, LB, IB, Z, SM : STD_LOGIC;
begin
--	REG : REGISTRO GENERIC MAP( N ) PORT MAP( 
--		A, QR, CLK, CLR, LA, SHE	
--		); 
	CTRL : CONTROL PORT MAP( 
		INI => INI, 
		CLK => CLK, 
		CLR => CLR, 
		Z   => Z, 
		QA0 => QR(0),
        LA  => LA, 
		SHE => SHE, 
		LB  => LB, 
		IB  => IB, 
		SM  => SM		
	);

	REG : REGISTRO GENERIC MAP( N ) PORT MAP( 
		D   => A, 
		Q   => QR, 
		CLK => CLK, 
		CLR => CLR, 
		L   => LA, 
		SHE => SHE	
		); 

	Z <= '1' WHEN ( QR = X"00" ) ELSE '0';

	CONT : CONTADOR GENERIC MAP( 4 ) PORT MAP(
		D   => (OTHERS => '0'), 
		Q   => QC, 
		CLK => CLK, 
		CLR => CLR, 
		L   => LB, 
		I   => IB			
	);

	CONV : CODIGO PORT MAP(
		E => QC,
		S => Qcon
	);

	DISP <= Qcon WHEN ( SM = '1') ELSE "0000001";
end PROGRAMA;

