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
static const char *ng0 = "/home/san/ESCOM/ComputerArchitecture/sum_res/sum_res.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_3488546069778340532_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3488768496604610246_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );


static void work_a_2536647398_3023556817_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    int t9;
    int t10;
    char *t11;
    int t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned char t30;
    unsigned char t31;
    char *t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;

LAB0:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2448U);
    t4 = *((char **)t1);
    t5 = (0 - 4);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t4 + t8);
    *((unsigned char *)t1) = t3;
    xsi_set_current_line(57, ng0);
    t5 = (4 - 1);
    t1 = (t0 + 6472);
    *((int *)t1) = 0;
    t2 = (t0 + 6476);
    *((int *)t2) = t5;
    t9 = 0;
    t10 = t5;

LAB2:    if (t9 <= t10)
        goto LAB3;

LAB5:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 2448U);
    t2 = *((char **)t1);
    t5 = (4 - 4);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t3 = *((unsigned char *)t1);
    t4 = (t0 + 4128);
    t11 = (t4 + 56U);
    t14 = *((char **)t11);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t3;
    xsi_driver_first_trans_fast_port(t4);
    t1 = (t0 + 3984);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 1192U);
    t11 = *((char **)t4);
    t4 = (t0 + 6472);
    t12 = *((int *)t4);
    t13 = (t12 - 3);
    t6 = (t13 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, *((int *)t4));
    t7 = (1U * t6);
    t8 = (0 + t7);
    t14 = (t11 + t8);
    t3 = *((unsigned char *)t14);
    t15 = (t0 + 1352U);
    t16 = *((char **)t15);
    t17 = *((unsigned char *)t16);
    t18 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t3, t17);
    t15 = (t0 + 2328U);
    t19 = *((char **)t15);
    t15 = (t0 + 6472);
    t20 = *((int *)t15);
    t21 = (t20 - 3);
    t22 = (t21 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, *((int *)t15));
    t23 = (1U * t22);
    t24 = (0 + t23);
    t25 = (t19 + t24);
    *((unsigned char *)t25) = t18;
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6472);
    t5 = *((int *)t1);
    t12 = (t5 - 3);
    t6 = (t12 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, *((int *)t1));
    t7 = (1U * t6);
    t8 = (0 + t7);
    t4 = (t2 + t8);
    t3 = *((unsigned char *)t4);
    t11 = (t0 + 2328U);
    t14 = *((char **)t11);
    t11 = (t0 + 6472);
    t13 = *((int *)t11);
    t20 = (t13 - 3);
    t22 = (t20 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, *((int *)t11));
    t23 = (1U * t22);
    t24 = (0 + t23);
    t15 = (t14 + t24);
    t17 = *((unsigned char *)t15);
    t18 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t3, t17);
    t16 = (t0 + 2208U);
    t19 = *((char **)t16);
    t16 = (t0 + 6472);
    t21 = *((int *)t16);
    t26 = (t21 - 3);
    t27 = (t26 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, *((int *)t16));
    t28 = (1U * t27);
    t29 = (0 + t28);
    t25 = (t19 + t29);
    *((unsigned char *)t25) = t18;
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6472);
    t5 = *((int *)t1);
    t12 = (t5 - 3);
    t6 = (t12 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, *((int *)t1));
    t7 = (1U * t6);
    t8 = (0 + t7);
    t4 = (t2 + t8);
    t3 = *((unsigned char *)t4);
    t11 = (t0 + 2328U);
    t14 = *((char **)t11);
    t11 = (t0 + 6472);
    t13 = *((int *)t11);
    t20 = (t13 - 3);
    t22 = (t20 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, *((int *)t11));
    t23 = (1U * t22);
    t24 = (0 + t23);
    t15 = (t14 + t24);
    t17 = *((unsigned char *)t15);
    t18 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t17);
    t16 = (t0 + 2088U);
    t19 = *((char **)t16);
    t16 = (t0 + 6472);
    t21 = *((int *)t16);
    t26 = (t21 - 3);
    t27 = (t26 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, *((int *)t16));
    t28 = (1U * t27);
    t29 = (0 + t28);
    t25 = (t19 + t29);
    *((unsigned char *)t25) = t18;
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6472);
    t5 = *((int *)t1);
    t12 = (t5 - 3);
    t6 = (t12 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, *((int *)t1));
    t7 = (1U * t6);
    t8 = (0 + t7);
    t4 = (t2 + t8);
    t3 = *((unsigned char *)t4);
    t11 = (t0 + 2328U);
    t14 = *((char **)t11);
    t11 = (t0 + 6472);
    t13 = *((int *)t11);
    t20 = (t13 - 3);
    t22 = (t20 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, *((int *)t11));
    t23 = (1U * t22);
    t24 = (0 + t23);
    t15 = (t14 + t24);
    t17 = *((unsigned char *)t15);
    t18 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t3, t17);
    t16 = (t0 + 2448U);
    t19 = *((char **)t16);
    t16 = (t0 + 6472);
    t21 = *((int *)t16);
    t26 = (t21 - 4);
    t27 = (t26 * -1);
    xsi_vhdl_check_range_of_index(4, 0, -1, *((int *)t16));
    t28 = (1U * t27);
    t29 = (0 + t28);
    t25 = (t19 + t29);
    t30 = *((unsigned char *)t25);
    t31 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t18, t30);
    t32 = (t0 + 6472);
    t33 = *((int *)t32);
    t34 = (t33 - 3);
    t35 = (t34 * -1);
    t36 = (1 * t35);
    t37 = (0U + t36);
    t38 = (t0 + 4064);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    *((unsigned char *)t42) = t31;
    xsi_driver_first_trans_delta(t38, t37, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    t1 = (t0 + 6472);
    t5 = *((int *)t1);
    t12 = (t5 - 3);
    t6 = (t12 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, *((int *)t1));
    t7 = (1U * t6);
    t8 = (0 + t7);
    t4 = (t2 + t8);
    t3 = *((unsigned char *)t4);
    t11 = (t0 + 2448U);
    t14 = *((char **)t11);
    t11 = (t0 + 6472);
    t13 = *((int *)t11);
    t20 = (t13 + 1);
    t21 = (t20 - 4);
    t22 = (t21 * -1);
    xsi_vhdl_check_range_of_index(4, 0, -1, t20);
    t23 = (1U * t22);
    t24 = (0 + t23);
    t15 = (t14 + t24);
    *((unsigned char *)t15) = t3;
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 6472);
    t5 = *((int *)t1);
    t12 = (t5 - 1);
    t2 = (t0 + 6480);
    *((int *)t2) = 0;
    t4 = (t0 + 6484);
    *((int *)t4) = t12;
    t13 = 0;
    t20 = t12;

LAB6:    if (t13 <= t20)
        goto LAB7;

LAB9:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 2448U);
    t2 = *((char **)t1);
    t1 = (t0 + 6472);
    t5 = *((int *)t1);
    t12 = (t5 + 1);
    t13 = (t12 - 4);
    t6 = (t13 * -1);
    xsi_vhdl_check_range_of_index(4, 0, -1, t12);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t4 = (t2 + t8);
    t3 = *((unsigned char *)t4);
    t11 = (t0 + 2688U);
    t14 = *((char **)t11);
    t17 = *((unsigned char *)t14);
    t18 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t3, t17);
    t11 = (t0 + 2448U);
    t15 = *((char **)t11);
    t11 = (t0 + 6472);
    t20 = *((int *)t11);
    t21 = (t20 + 1);
    t26 = (t21 - 4);
    t22 = (t26 * -1);
    xsi_vhdl_check_range_of_index(4, 0, -1, t21);
    t23 = (1U * t22);
    t24 = (0 + t23);
    t16 = (t15 + t24);
    *((unsigned char *)t16) = t18;
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 2568U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 6472);
    t2 = (t0 + 6496);
    *((int *)t2) = 0;
    t4 = (t0 + 6500);
    *((int *)t4) = *((int *)t1);
    t5 = 0;
    t12 = *((int *)t1);

LAB16:    if (t5 <= t12)
        goto LAB17;

LAB19:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 2568U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2448U);
    t4 = *((char **)t1);
    t5 = (0 - 4);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t4 + t8);
    t17 = *((unsigned char *)t1);
    t18 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t17);
    t11 = (t0 + 2568U);
    t14 = *((char **)t11);
    t11 = (t14 + 0);
    *((unsigned char *)t11) = t18;
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 2448U);
    t2 = *((char **)t1);
    t1 = (t0 + 6472);
    t5 = *((int *)t1);
    t12 = (t5 + 1);
    t13 = (t12 - 4);
    t6 = (t13 * -1);
    xsi_vhdl_check_range_of_index(4, 0, -1, t12);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t4 = (t2 + t8);
    t3 = *((unsigned char *)t4);
    t11 = (t0 + 2568U);
    t14 = *((char **)t11);
    t17 = *((unsigned char *)t14);
    t18 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t3, t17);
    t11 = (t0 + 2448U);
    t15 = *((char **)t11);
    t11 = (t0 + 6472);
    t20 = *((int *)t11);
    t21 = (t20 + 1);
    t26 = (t21 - 4);
    t22 = (t26 * -1);
    xsi_vhdl_check_range_of_index(4, 0, -1, t21);
    t23 = (1U * t22);
    t24 = (0 + t23);
    t16 = (t15 + t24);
    *((unsigned char *)t16) = t18;

LAB4:    t1 = (t0 + 6472);
    t9 = *((int *)t1);
    t2 = (t0 + 6476);
    t10 = *((int *)t2);
    if (t9 == t10)
        goto LAB5;

LAB21:    t5 = (t9 + 1);
    t9 = t5;
    t4 = (t0 + 6472);
    *((int *)t4) = t9;
    goto LAB2;

LAB7:    xsi_set_current_line(65, ng0);
    t11 = (t0 + 2568U);
    t14 = *((char **)t11);
    t11 = (t14 + 0);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 6472);
    t2 = (t0 + 6480);
    t5 = *((int *)t2);
    t12 = (t5 + 1);
    t4 = (t0 + 6488);
    *((int *)t4) = t12;
    t11 = (t0 + 6492);
    *((int *)t11) = *((int *)t1);
    t21 = t12;
    t26 = *((int *)t1);

LAB10:    if (t21 <= t26)
        goto LAB11;

LAB13:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 2568U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2088U);
    t4 = *((char **)t1);
    t1 = (t0 + 6480);
    t5 = *((int *)t1);
    t12 = (t5 - 3);
    t6 = (t12 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, *((int *)t1));
    t7 = (1U * t6);
    t8 = (0 + t7);
    t11 = (t4 + t8);
    t17 = *((unsigned char *)t11);
    t18 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t17);
    t14 = (t0 + 2568U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    *((unsigned char *)t14) = t18;
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2568U);
    t4 = *((char **)t1);
    t17 = *((unsigned char *)t4);
    t18 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t3, t17);
    t1 = (t0 + 2688U);
    t11 = *((char **)t1);
    t1 = (t11 + 0);
    *((unsigned char *)t1) = t18;

LAB8:    t1 = (t0 + 6480);
    t13 = *((int *)t1);
    t2 = (t0 + 6484);
    t20 = *((int *)t2);
    if (t13 == t20)
        goto LAB9;

LAB15:    t5 = (t13 + 1);
    t13 = t5;
    t4 = (t0 + 6480);
    *((int *)t4) = t13;
    goto LAB6;

LAB11:    xsi_set_current_line(67, ng0);
    t14 = (t0 + 2568U);
    t15 = *((char **)t14);
    t3 = *((unsigned char *)t15);
    t14 = (t0 + 2208U);
    t16 = *((char **)t14);
    t14 = (t0 + 6488);
    t33 = *((int *)t14);
    t34 = (t33 - 3);
    t6 = (t34 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, *((int *)t14));
    t7 = (1U * t6);
    t8 = (0 + t7);
    t19 = (t16 + t8);
    t17 = *((unsigned char *)t19);
    t18 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t17);
    t25 = (t0 + 2568U);
    t32 = *((char **)t25);
    t25 = (t32 + 0);
    *((unsigned char *)t25) = t18;

LAB12:    t1 = (t0 + 6488);
    t21 = *((int *)t1);
    t2 = (t0 + 6492);
    t26 = *((int *)t2);
    if (t21 == t26)
        goto LAB13;

LAB14:    t5 = (t21 + 1);
    t21 = t5;
    t4 = (t0 + 6488);
    *((int *)t4) = t21;
    goto LAB10;

LAB17:    xsi_set_current_line(75, ng0);
    t11 = (t0 + 2568U);
    t14 = *((char **)t11);
    t3 = *((unsigned char *)t14);
    t11 = (t0 + 2208U);
    t15 = *((char **)t11);
    t11 = (t0 + 6496);
    t13 = *((int *)t11);
    t20 = (t13 - 3);
    t6 = (t20 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, *((int *)t11));
    t7 = (1U * t6);
    t8 = (0 + t7);
    t16 = (t15 + t8);
    t17 = *((unsigned char *)t16);
    t18 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t17);
    t19 = (t0 + 2568U);
    t25 = *((char **)t19);
    t19 = (t25 + 0);
    *((unsigned char *)t19) = t18;

LAB18:    t1 = (t0 + 6496);
    t5 = *((int *)t1);
    t2 = (t0 + 6500);
    t12 = *((int *)t2);
    if (t5 == t12)
        goto LAB19;

LAB20:    t13 = (t5 + 1);
    t5 = t13;
    t4 = (t0 + 6496);
    *((int *)t4) = t5;
    goto LAB16;

}


extern void work_a_2536647398_3023556817_init()
{
	static char *pe[] = {(void *)work_a_2536647398_3023556817_p_0};
	xsi_register_didat("work_a_2536647398_3023556817", "isim/TB_SUM_RES_isim_beh.exe.sim/work/a_2536647398_3023556817.didat");
	xsi_register_executes(pe);
}
