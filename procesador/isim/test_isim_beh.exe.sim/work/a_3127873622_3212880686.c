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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/alan-/Documents/trabajos-escom/5/arquitectura/procesador/registros.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_121739838_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_121746372_3965413181(char *, char *, char *, char *, char *, char *);
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_3127873622_3212880686_p_0(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t1 = (t0 + 6716U);
    t6 = (t0 + 960U);
    t7 = *((char **)t6);
    t6 = (t0 + 6684U);
    t8 = ieee_p_3620187407_sub_121739838_3965413181(IEEE_P_3620187407, t5, t2, t1, t7, t6);
    t9 = (t5 + 12U);
    t11 = *((unsigned int *)t9);
    t11 = (t11 * 1U);
    t3 = (16U != t11);
    if (t3 == 1)
        goto LAB7;

LAB8:    t10 = (t0 + 3432);
    t13 = (t10 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t8, 16U);
    xsi_driver_first_trans_fast(t10);

LAB3:    t1 = (t0 + 3356);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 1420U);
    t6 = *((char **)t1);
    t1 = (t0 + 6716U);
    t7 = (t0 + 960U);
    t8 = *((char **)t7);
    t7 = (t0 + 6684U);
    t9 = ieee_p_3620187407_sub_121746372_3965413181(IEEE_P_3620187407, t5, t6, t1, t8, t7);
    t10 = (t5 + 12U);
    t11 = *((unsigned int *)t10);
    t11 = (t11 * 1U);
    t12 = (16U != t11);
    if (t12 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 3432);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t9, 16U);
    xsi_driver_first_trans_fast(t13);
    goto LAB3;

LAB5:    xsi_size_not_matching(16U, t11, 0);
    goto LAB6;

LAB7:    xsi_size_not_matching(16U, t11, 0);
    goto LAB8;

}

static void work_a_3127873622_3212880686_p_1(char *t0)
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

LAB0:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = (t0 + 1696U);
    t11 = *((char **)t10);
    t10 = (t0 + 3468);
    t12 = (t10 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 16U);
    xsi_driver_first_trans_fast(t10);

LAB2:    t16 = (t0 + 3364);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 1052U);
    t5 = *((char **)t1);
    t1 = (t0 + 3468);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 16U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3127873622_3212880686_p_2(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 568U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3372);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1328U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1788U);
    t7 = *((char **)t3);
    t3 = (t0 + 868U);
    t8 = *((char **)t3);
    t3 = (t0 + 6668U);
    t9 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t8, t3);
    t10 = (t9 - 0);
    t11 = (t10 * 1);
    t12 = (16U * t11);
    t13 = (0U + t12);
    t14 = (t0 + 3504);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t7, 16U);
    xsi_driver_first_trans_delta(t14, t13, 16U, 0LL);
    goto LAB6;

}

static void work_a_3127873622_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(51, ng0);

LAB3:    t1 = (t0 + 1604U);
    t2 = *((char **)t1);
    t1 = (t0 + 684U);
    t3 = *((char **)t1);
    t1 = (t0 + 6636U);
    t4 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t3, t1);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t4);
    t7 = (16U * t6);
    t8 = (0 + t7);
    t9 = (t2 + t8);
    t10 = (t0 + 3540);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 16U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t15 = (t0 + 3380);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3127873622_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(52, ng0);

LAB3:    t1 = (t0 + 1604U);
    t2 = *((char **)t1);
    t1 = (t0 + 776U);
    t3 = *((char **)t1);
    t1 = (t0 + 6652U);
    t4 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t3, t1);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t4);
    t7 = (16U * t6);
    t8 = (0 + t7);
    t9 = (t2 + t8);
    t10 = (t0 + 3576);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 16U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t15 = (t0 + 3388);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3127873622_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3127873622_3212880686_p_0,(void *)work_a_3127873622_3212880686_p_1,(void *)work_a_3127873622_3212880686_p_2,(void *)work_a_3127873622_3212880686_p_3,(void *)work_a_3127873622_3212880686_p_4};
	xsi_register_didat("work_a_3127873622_3212880686", "isim/test_isim_beh.exe.sim/work/a_3127873622_3212880686.didat");
	xsi_register_executes(pe);
}
