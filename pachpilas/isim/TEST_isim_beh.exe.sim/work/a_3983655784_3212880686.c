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
static const char *ng0 = "/home/nimda/proyectos/ComputerArchitecture/pachpilas/stack.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_2255506239096166994_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_2255506239096238868_3965413181(char *, char *, char *, char *, int );
int ieee_p_3620187407_sub_5109402382352621412_3965413181(char *, char *, char *);


static void work_a_3983655784_3212880686_p_0(char *t0)
{
    char t7[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    int t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1792U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5336);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 1192U);
    t8 = *((char **)t3);
    t3 = (t0 + 8728U);
    t9 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t7, t8, t3, 1);
    t10 = (t7 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = (1U * t11);
    t13 = (16U != t12);
    if (t13 == 1)
        goto LAB8;

LAB9:    t14 = (t0 + 2632U);
    t15 = *((char **)t14);
    t14 = (t0 + 8808U);
    t16 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t15, t14);
    t17 = (t16 - 0);
    t18 = (t17 * 1);
    t19 = (16U * t18);
    t20 = (0U + t19);
    t21 = (t0 + 5480);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t9, 16U);
    xsi_driver_first_trans_delta(t21, t20, 16U, 0LL);
    goto LAB6;

LAB8:    xsi_size_not_matching(16U, t12, 0);
    goto LAB9;

}

static void work_a_3983655784_3212880686_p_1(char *t0)
{
    char t3[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(62, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 2632U);
    t4 = *((char **)t1);
    t1 = (t0 + 8808U);
    t5 = ieee_p_3620187407_sub_2255506239096238868_3965413181(IEEE_P_3620187407, t3, t4, t1, 1);
    t6 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t5, t3);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t6);
    t9 = (16U * t8);
    t10 = (0 + t9);
    t11 = (t2 + t10);
    t12 = (t0 + 5544);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t11, 16U);
    xsi_driver_first_trans_fast(t12);

LAB2:    t17 = (t0 + 5352);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3983655784_3212880686_p_2(char *t0)
{
    char t10[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1792U);
    t5 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t5 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 5368);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    goto LAB3;

LAB5:    xsi_set_current_line(67, ng0);
    t6 = (t0 + 1512U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB7;

LAB9:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB12;

LAB13:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(68, ng0);
    t6 = (t0 + 2632U);
    t11 = *((char **)t6);
    t6 = (t0 + 8808U);
    t12 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t10, t11, t6, 1);
    t13 = (t10 + 12U);
    t14 = *((unsigned int *)t13);
    t15 = (1U * t14);
    t16 = (4U != t15);
    if (t16 == 1)
        goto LAB10;

LAB11:    t17 = (t0 + 5608);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t12, 4U);
    xsi_driver_first_trans_fast(t17);
    goto LAB8;

LAB10:    xsi_size_not_matching(4U, t15, 0);
    goto LAB11;

LAB12:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2632U);
    t6 = *((char **)t1);
    t1 = (t0 + 8808U);
    t7 = ieee_p_3620187407_sub_2255506239096238868_3965413181(IEEE_P_3620187407, t10, t6, t1, 1);
    t11 = (t10 + 12U);
    t14 = *((unsigned int *)t11);
    t15 = (1U * t14);
    t5 = (4U != t15);
    if (t5 == 1)
        goto LAB14;

LAB15:    t12 = (t0 + 5608);
    t13 = (t12 + 56U);
    t17 = *((char **)t13);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t7, 4U);
    xsi_driver_first_trans_fast(t12);
    goto LAB8;

LAB14:    xsi_size_not_matching(4U, t15, 0);
    goto LAB15;

}

static void work_a_3983655784_3212880686_p_3(char *t0)
{
    char t12[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned int t13;
    unsigned int t14;
    char *t15;

LAB0:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1792U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 5384);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(78, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t5 = t1;
    memset(t5, (unsigned char)2, 16U);
    t6 = (t0 + 5672);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t11 = (t4 == (unsigned char)3);
    if (t11 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 8728U);
    t5 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t12, t2, t1, 1);
    t6 = (t12 + 12U);
    t13 = *((unsigned int *)t6);
    t14 = (1U * t13);
    t3 = (16U != t14);
    if (t3 == 1)
        goto LAB10;

LAB11:    t7 = (t0 + 5672);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t15 = *((char **)t10);
    memcpy(t15, t5, 16U);
    xsi_driver_first_trans_fast_port(t7);

LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2472U);
    t6 = *((char **)t2);
    t2 = (t0 + 5672);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t6, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB8;

LAB10:    xsi_size_not_matching(16U, t14, 0);
    goto LAB11;

}

static void work_a_3983655784_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = (t0 + 1032U);
    t11 = *((char **)t10);
    t10 = (t0 + 5736);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 16U);
    xsi_driver_first_trans_fast(t10);

LAB2:    t16 = (t0 + 5400);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 2312U);
    t5 = *((char **)t1);
    t1 = (t0 + 5736);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 16U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}


extern void work_a_3983655784_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3983655784_3212880686_p_0,(void *)work_a_3983655784_3212880686_p_1,(void *)work_a_3983655784_3212880686_p_2,(void *)work_a_3983655784_3212880686_p_3,(void *)work_a_3983655784_3212880686_p_4};
	xsi_register_didat("work_a_3983655784_3212880686", "isim/TEST_isim_beh.exe.sim/work/a_3983655784_3212880686.didat");
	xsi_register_executes(pe);
}