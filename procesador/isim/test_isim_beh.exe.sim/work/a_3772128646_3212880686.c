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
static const char *ng0 = "C:/Users/alan-/Documents/trabajos-escom/5/arquitectura/procesador/stack.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_436351764_3965413181(char *, char *, char *, char *, int );
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_3772128646_3212880686_p_0(char *t0)
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

LAB0:    xsi_set_current_line(32, ng0);

LAB3:    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 1420U);
    t4 = *((char **)t1);
    t1 = (t0 + 5800U);
    t5 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t3, t4, t1, 1);
    t6 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t5, t3);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t6);
    t9 = (16U * t8);
    t10 = (0 + t9);
    t11 = (t2 + t10);
    t12 = (t0 + 3020);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t11, 16U);
    xsi_driver_first_trans_fast(t12);

LAB2:    t17 = (t0 + 2944);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3772128646_3212880686_p_1(char *t0)
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

LAB0:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = (t0 + 1328U);
    t11 = *((char **)t10);
    t10 = (t0 + 3056);
    t12 = (t10 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 16U);
    xsi_driver_first_trans_fast(t10);

LAB2:    t16 = (t0 + 2952);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 592U);
    t5 = *((char **)t1);
    t1 = (t0 + 3056);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 16U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3772128646_3212880686_p_2(char *t0)
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

LAB0:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 936U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 2960);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 684U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1144U);
    t8 = *((char **)t3);
    t3 = (t0 + 5736U);
    t9 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t7, t8, t3, 1);
    t10 = (t7 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = (1U * t11);
    t13 = (16U != t12);
    if (t13 == 1)
        goto LAB8;

LAB9:    t14 = (t0 + 1420U);
    t15 = *((char **)t14);
    t14 = (t0 + 5800U);
    t16 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t15, t14);
    t17 = (t16 - 0);
    t18 = (t17 * 1);
    t19 = (16U * t18);
    t20 = (0U + t19);
    t21 = (t0 + 3092);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    t24 = (t23 + 40U);
    t25 = *((char **)t24);
    memcpy(t25, t9, 16U);
    xsi_driver_first_trans_delta(t21, t20, 16U, 0LL);
    goto LAB6;

LAB8:    xsi_size_not_matching(16U, t12, 0);
    goto LAB9;

}

static void work_a_3772128646_3212880686_p_3(char *t0)
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
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 936U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 2968);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(47, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t5 = t1;
    memset(t5, (unsigned char)2, 4U);
    t6 = (t0 + 3128);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 776U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t11 = (t4 == (unsigned char)3);
    if (t11 != 0)
        goto LAB7;

LAB9:    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB12;

LAB13:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1420U);
    t6 = *((char **)t2);
    t2 = (t0 + 5800U);
    t7 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t12, t6, t2, 1);
    t8 = (t12 + 12U);
    t13 = *((unsigned int *)t8);
    t14 = (1U * t13);
    t15 = (4U != t14);
    if (t15 == 1)
        goto LAB10;

LAB11:    t9 = (t0 + 3128);
    t10 = (t9 + 32U);
    t16 = *((char **)t10);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t7, 4U);
    xsi_driver_first_trans_fast(t9);
    goto LAB8;

LAB10:    xsi_size_not_matching(4U, t14, 0);
    goto LAB11;

LAB12:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1420U);
    t5 = *((char **)t1);
    t1 = (t0 + 5800U);
    t6 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t12, t5, t1, 1);
    t7 = (t12 + 12U);
    t13 = *((unsigned int *)t7);
    t14 = (1U * t13);
    t11 = (4U != t14);
    if (t11 == 1)
        goto LAB14;

LAB15:    t8 = (t0 + 3128);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t16 = (t10 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t6, 4U);
    xsi_driver_first_trans_fast(t8);
    goto LAB8;

LAB14:    xsi_size_not_matching(4U, t14, 0);
    goto LAB15;

}

static void work_a_3772128646_3212880686_p_4(char *t0)
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

LAB0:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 936U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 2976);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(60, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t5 = t1;
    memset(t5, (unsigned char)2, 16U);
    t6 = (t0 + 3164);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 868U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t11 = (t4 == (unsigned char)3);
    if (t11 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t1 = (t0 + 5736U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t12, t2, t1, 1);
    t6 = (t12 + 12U);
    t13 = *((unsigned int *)t6);
    t14 = (1U * t13);
    t3 = (16U != t14);
    if (t3 == 1)
        goto LAB10;

LAB11:    t7 = (t0 + 3164);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t15 = *((char **)t10);
    memcpy(t15, t5, 16U);
    xsi_driver_first_trans_fast_port(t7);

LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t2 = (t0 + 3164);
    t7 = (t2 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t6, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB8;

LAB10:    xsi_size_not_matching(16U, t14, 0);
    goto LAB11;

}


extern void work_a_3772128646_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3772128646_3212880686_p_0,(void *)work_a_3772128646_3212880686_p_1,(void *)work_a_3772128646_3212880686_p_2,(void *)work_a_3772128646_3212880686_p_3,(void *)work_a_3772128646_3212880686_p_4};
	xsi_register_didat("work_a_3772128646_3212880686", "isim/test_isim_beh.exe.sim/work/a_3772128646_3212880686.didat");
	xsi_register_executes(pe);
}
