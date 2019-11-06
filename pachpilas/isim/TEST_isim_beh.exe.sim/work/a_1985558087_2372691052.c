/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/san/Desktop/pachpilas/TEST.vhd";
extern char *STD_TEXTIO;
extern char *IEEE_P_3564397177;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
void ieee_p_3564397177_sub_1675032430035817134_91900896(char *, char *, char *, char *);
void ieee_p_3564397177_sub_2250825304603680424_91900896(char *, char *, char *, char *, char *, unsigned char , int );
void ieee_p_3564397177_sub_2258168291854845616_91900896(char *, char *, char *, char *, char *, unsigned char , int );
void ieee_p_3564397177_sub_2518136782373626985_91900896(char *, char *, char *, unsigned char , unsigned char , int );
void ieee_p_3564397177_sub_2863978933202788330_91900896(char *, char *, char *, char *, char *);


static void work_a_1985558087_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 4632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 5392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 4440);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 5392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 4440);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1985558087_2372691052_p_1(char *t0)
{
    char t5[16];
    char t10[8];
    char t11[8];
    char t12[8];
    char t13[8];
    char t14[8];
    char t15[8];
    char t16[8];
    char t20[8];
    char t21[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t17;
    unsigned char t18;
    char *t19;

LAB0:    t1 = (t0 + 4880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3496U);
    t3 = (t0 + 8632);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 9;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (9 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    std_textio_file_open1(t2, t3, t5, (unsigned char)0);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 3600U);
    t3 = (t0 + 8641);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 10;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (10 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    std_textio_file_open1(t2, t3, t5, (unsigned char)1);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 8651);
    t4 = (t0 + 4056U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 5U);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 4688);
    t3 = (t0 + 3848U);
    t4 = (t0 + 4056U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t10, t7, 5U);
    t6 = (t0 + 8360U);
    t8 = (5U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t10, t6, (unsigned char)0, t8);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 8656);
    t4 = (t0 + 4056U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 5U);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 4688);
    t3 = (t0 + 3848U);
    t4 = (t0 + 4056U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t11, t7, 5U);
    t6 = (t0 + 8360U);
    t8 = (5U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t11, t6, (unsigned char)0, t8);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 8661);
    t4 = (t0 + 4056U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 5U);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 4688);
    t3 = (t0 + 3848U);
    t4 = (t0 + 4056U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t12, t7, 5U);
    t6 = (t0 + 8360U);
    t8 = (5U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t12, t6, (unsigned char)0, t8);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 8666);
    t4 = (t0 + 4056U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 5U);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 4688);
    t3 = (t0 + 3848U);
    t4 = (t0 + 4056U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t13, t7, 5U);
    t6 = (t0 + 8360U);
    t8 = (5U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t13, t6, (unsigned char)0, t8);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 8671);
    t4 = (t0 + 4056U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 5U);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 4688);
    t3 = (t0 + 3848U);
    t4 = (t0 + 4056U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t14, t7, 5U);
    t6 = (t0 + 8360U);
    t8 = (5U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t14, t6, (unsigned char)0, t8);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 8676);
    t4 = (t0 + 4056U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 5U);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 4688);
    t3 = (t0 + 3848U);
    t4 = (t0 + 4056U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t15, t7, 5U);
    t6 = (t0 + 8360U);
    t8 = (5U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t15, t6, (unsigned char)0, t8);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 8681);
    t4 = (t0 + 4056U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 5U);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 4688);
    t3 = (t0 + 3848U);
    t4 = (t0 + 4056U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t16, t7, 5U);
    t6 = (t0 + 8360U);
    t8 = (5U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t16, t6, (unsigned char)0, t8);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 4688);
    t3 = (t0 + 3600U);
    t4 = (t0 + 3848U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(130, ng0);

LAB4:    t2 = (t0 + 3496U);
    t17 = std_textio_endfile(t2);
    t18 = (!(t17));
    if (t18 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 3496U);
    std_textio_file_close(t2);
    xsi_set_current_line(162, ng0);
    t2 = (t0 + 3600U);
    std_textio_file_close(t2);
    xsi_set_current_line(164, ng0);

LAB14:    *((char **)t1) = &&LAB15;

LAB1:    return;
LAB5:    xsi_set_current_line(131, ng0);
    t3 = (t0 + 4688);
    t4 = (t0 + 3496U);
    t6 = (t0 + 3776U);
    std_textio_readline(STD_TEXTIO, t3, t4, t6);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 4688);
    t3 = (t0 + 3776U);
    t4 = (t0 + 2688U);
    t6 = *((char **)t4);
    t4 = (t0 + 8376U);
    ieee_p_3564397177_sub_2863978933202788330_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 2688U);
    t3 = *((char **)t2);
    t2 = (t0 + 5456);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t19 = *((char **)t7);
    memcpy(t19, t3, 16U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 4688);
    t3 = (t0 + 3776U);
    t4 = (t0 + 2808U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    ieee_p_3564397177_sub_1675032430035817134_91900896(IEEE_P_3564397177, t2, t3, t4);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t17 = *((unsigned char *)t3);
    t2 = (t0 + 5520);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t19 = *((char **)t7);
    *((unsigned char *)t19) = t17;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 4688);
    t3 = (t0 + 3776U);
    t4 = (t0 + 2928U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    ieee_p_3564397177_sub_1675032430035817134_91900896(IEEE_P_3564397177, t2, t3, t4);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 2928U);
    t3 = *((char **)t2);
    t17 = *((unsigned char *)t3);
    t2 = (t0 + 5584);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t19 = *((char **)t7);
    *((unsigned char *)t19) = t17;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 4688);
    t3 = (t0 + 3776U);
    t4 = (t0 + 3048U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    ieee_p_3564397177_sub_1675032430035817134_91900896(IEEE_P_3564397177, t2, t3, t4);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t17 = *((unsigned char *)t3);
    t2 = (t0 + 5648);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t19 = *((char **)t7);
    *((unsigned char *)t19) = t17;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 4688);
    t3 = (t0 + 3776U);
    t4 = (t0 + 3168U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    ieee_p_3564397177_sub_1675032430035817134_91900896(IEEE_P_3564397177, t2, t3, t4);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 3168U);
    t3 = *((char **)t2);
    t17 = *((unsigned char *)t3);
    t2 = (t0 + 5712);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t19 = *((char **)t7);
    *((unsigned char *)t19) = t17;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(148, ng0);

LAB10:    t2 = (t0 + 5200);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:;
LAB8:    t4 = (t0 + 5200);
    *((int *)t4) = 0;
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 4688);
    t3 = (t0 + 3848U);
    t4 = (t0 + 1032U);
    t6 = *((char **)t4);
    memcpy(t5, t6, 16U);
    t4 = (t0 + 8312U);
    ieee_p_3564397177_sub_2258168291854845616_91900896(IEEE_P_3564397177, t2, t3, t5, t4, (unsigned char)0, 6);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 4688);
    t3 = (t0 + 3848U);
    t4 = (t0 + 1352U);
    t6 = *((char **)t4);
    t17 = *((unsigned char *)t6);
    ieee_p_3564397177_sub_2518136782373626985_91900896(IEEE_P_3564397177, t2, t3, t17, (unsigned char)0, 6);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 4688);
    t3 = (t0 + 3848U);
    t4 = (t0 + 1512U);
    t6 = *((char **)t4);
    t17 = *((unsigned char *)t6);
    ieee_p_3564397177_sub_2518136782373626985_91900896(IEEE_P_3564397177, t2, t3, t17, (unsigned char)0, 6);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 4688);
    t3 = (t0 + 3848U);
    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t17 = *((unsigned char *)t6);
    ieee_p_3564397177_sub_2518136782373626985_91900896(IEEE_P_3564397177, t2, t3, t17, (unsigned char)0, 6);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 4688);
    t3 = (t0 + 3848U);
    t4 = (t0 + 1832U);
    t6 = *((char **)t4);
    t17 = *((unsigned char *)t6);
    ieee_p_3564397177_sub_2518136782373626985_91900896(IEEE_P_3564397177, t2, t3, t17, (unsigned char)0, 6);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 4688);
    t3 = (t0 + 3848U);
    t4 = (t0 + 1992U);
    t6 = *((char **)t4);
    memcpy(t20, t6, 4U);
    t4 = (t0 + 8328U);
    ieee_p_3564397177_sub_2250825304603680424_91900896(IEEE_P_3564397177, t2, t3, t20, t4, (unsigned char)0, 6);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 4688);
    t3 = (t0 + 3848U);
    t4 = (t0 + 2152U);
    t6 = *((char **)t4);
    memcpy(t21, t6, 16U);
    t4 = (t0 + 8344U);
    ieee_p_3564397177_sub_2258168291854845616_91900896(IEEE_P_3564397177, t2, t3, t21, t4, (unsigned char)0, 6);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 4688);
    t3 = (t0 + 3600U);
    t4 = (t0 + 3848U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    goto LAB4;

LAB9:    t3 = (t0 + 1632U);
    t17 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t17 == 1)
        goto LAB8;
    else
        goto LAB10;

LAB11:    goto LAB9;

LAB12:    goto LAB2;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

}


extern void work_a_1985558087_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1985558087_2372691052_p_0,(void *)work_a_1985558087_2372691052_p_1};
	xsi_register_didat("work_a_1985558087_2372691052", "isim/TEST_isim_beh.exe.sim/work/a_1985558087_2372691052.didat");
	xsi_register_executes(pe);
}
