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
static const char *ng0 = "C:/Users/alan-/Documents/trabajos-escom/5/arquitectura/control/test.vhd";
extern char *STD_TEXTIO;
extern char *IEEE_P_3564397177;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
void ieee_p_3564397177_sub_1281154728_91900896(char *, char *, char *, char *, char *, unsigned char , int );
void ieee_p_3564397177_sub_1496949865_91900896(char *, char *, char *, unsigned char , unsigned char , int );
void ieee_p_3564397177_sub_2743816878_91900896(char *, char *, char *, char *);
void ieee_p_3564397177_sub_2889341154_91900896(char *, char *, char *, char *, char *);


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

LAB0:    t1 = (t0 + 2420U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2908);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1316U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2320);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2908);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1316U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2320);
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
    char t13[8];
    char t14[8];
    char t15[8];
    char t16[24];
    char t17[8];
    char t18[8];
    char t19[8];
    char t20[24];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;

LAB0:    t1 = (t0 + 2564U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1844U);
    t3 = (t0 + 6231);
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
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1908U);
    t3 = (t0 + 6240);
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
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2464);
    t3 = (t0 + 2052U);
    t4 = (t0 + 6250);
    t7 = (t5 + 0U);
    t10 = (t7 + 0U);
    *((int *)t10) = 1;
    t10 = (t7 + 4U);
    *((int *)t10) = 7;
    t10 = (t7 + 8U);
    *((int *)t10) = 1;
    t8 = (7 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t10 = (t7 + 12U);
    *((unsigned int *)t10) = t9;
    std_textio_write7(STD_TEXTIO, t2, t3, t4, t5, (unsigned char)0, 7);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2464);
    t3 = (t0 + 2052U);
    t4 = (t0 + 6257);
    t7 = (t5 + 0U);
    t10 = (t7 + 0U);
    *((int *)t10) = 1;
    t10 = (t7 + 4U);
    *((int *)t10) = 8;
    t10 = (t7 + 8U);
    *((int *)t10) = 1;
    t8 = (8 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t10 = (t7 + 12U);
    *((unsigned int *)t10) = t9;
    std_textio_write7(STD_TEXTIO, t2, t3, t4, t5, (unsigned char)0, 10);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2464);
    t3 = (t0 + 2052U);
    t4 = (t0 + 6265);
    t7 = (t5 + 0U);
    t10 = (t7 + 0U);
    *((int *)t10) = 1;
    t10 = (t7 + 4U);
    *((int *)t10) = 5;
    t10 = (t7 + 8U);
    *((int *)t10) = 1;
    t8 = (5 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t10 = (t7 + 12U);
    *((unsigned int *)t10) = t9;
    std_textio_write7(STD_TEXTIO, t2, t3, t4, t5, (unsigned char)0, 7);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2464);
    t3 = (t0 + 2052U);
    t4 = (t0 + 6270);
    t7 = (t5 + 0U);
    t10 = (t7 + 0U);
    *((int *)t10) = 1;
    t10 = (t7 + 4U);
    *((int *)t10) = 3;
    t10 = (t7 + 8U);
    *((int *)t10) = 1;
    t8 = (3 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t10 = (t7 + 12U);
    *((unsigned int *)t10) = t9;
    std_textio_write7(STD_TEXTIO, t2, t3, t4, t5, (unsigned char)0, 5);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2464);
    t3 = (t0 + 2052U);
    t4 = (t0 + 6273);
    t7 = (t5 + 0U);
    t10 = (t7 + 0U);
    *((int *)t10) = 1;
    t10 = (t7 + 4U);
    *((int *)t10) = 2;
    t10 = (t7 + 8U);
    *((int *)t10) = 1;
    t8 = (2 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t10 = (t7 + 12U);
    *((unsigned int *)t10) = t9;
    std_textio_write7(STD_TEXTIO, t2, t3, t4, t5, (unsigned char)0, 4);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2464);
    t3 = (t0 + 2052U);
    t4 = (t0 + 6275);
    t7 = (t5 + 0U);
    t10 = (t7 + 0U);
    *((int *)t10) = 1;
    t10 = (t7 + 4U);
    *((int *)t10) = 16;
    t10 = (t7 + 8U);
    *((int *)t10) = 1;
    t8 = (16 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t10 = (t7 + 12U);
    *((unsigned int *)t10) = t9;
    std_textio_write7(STD_TEXTIO, t2, t3, t4, t5, (unsigned char)0, 22);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2464);
    t3 = (t0 + 2052U);
    t4 = (t0 + 6291);
    t7 = (t5 + 0U);
    t10 = (t7 + 0U);
    *((int *)t10) = 1;
    t10 = (t7 + 4U);
    *((int *)t10) = 5;
    t10 = (t7 + 8U);
    *((int *)t10) = 1;
    t8 = (5 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t10 = (t7 + 12U);
    *((unsigned int *)t10) = t9;
    std_textio_write7(STD_TEXTIO, t2, t3, t4, t5, (unsigned char)0, 7);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2464);
    t3 = (t0 + 1908U);
    t4 = (t0 + 2052U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(92, ng0);

LAB4:    t2 = (t0 + 1844U);
    t11 = std_textio_endfile(t2);
    t12 = (!(t11));
    if (t12 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 1844U);
    std_textio_file_close(t2);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 1908U);
    std_textio_file_close(t2);
    xsi_set_current_line(136, ng0);

LAB18:    *((char **)t1) = &&LAB19;

LAB1:    return;
LAB5:    xsi_set_current_line(93, ng0);
    t3 = (t0 + 2464);
    t4 = (t0 + 1844U);
    t6 = (t0 + 2012U);
    std_textio_readline(STD_TEXTIO, t3, t4, t6);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2464);
    t3 = (t0 + 2012U);
    t4 = (t0 + 1384U);
    t6 = *((char **)t4);
    t4 = (t0 + 6032U);
    ieee_p_3564397177_sub_2889341154_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1384U);
    t3 = *((char **)t2);
    t2 = (t0 + 2944);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t10 = *((char **)t7);
    memcpy(t10, t3, 5U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2464);
    t3 = (t0 + 2012U);
    t4 = (t0 + 1452U);
    t6 = *((char **)t4);
    t4 = (t0 + 6048U);
    ieee_p_3564397177_sub_2889341154_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1452U);
    t3 = *((char **)t2);
    t2 = (t0 + 2980);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t10 = *((char **)t7);
    memcpy(t10, t3, 4U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2464);
    t3 = (t0 + 2012U);
    t4 = (t0 + 1520U);
    t6 = *((char **)t4);
    t4 = (t0 + 6064U);
    ieee_p_3564397177_sub_2889341154_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1520U);
    t3 = *((char **)t2);
    t2 = (t0 + 3016);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t10 = *((char **)t7);
    memcpy(t10, t3, 4U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2464);
    t3 = (t0 + 2012U);
    t4 = (t0 + 1588U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    ieee_p_3564397177_sub_2743816878_91900896(IEEE_P_3564397177, t2, t3, t4);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 1588U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t2 = (t0 + 3052);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = t11;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 2464);
    t3 = (t0 + 2012U);
    t4 = (t0 + 1656U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    ieee_p_3564397177_sub_2743816878_91900896(IEEE_P_3564397177, t2, t3, t4);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1656U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t2 = (t0 + 3088);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = t11;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(110, ng0);

LAB10:    t2 = (t0 + 2760);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:;
LAB8:    t4 = (t0 + 2760);
    *((int *)t4) = 0;
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2464);
    t3 = (t0 + 2052U);
    t4 = (t0 + 960U);
    t6 = *((char **)t4);
    memcpy(t13, t6, 5U);
    t4 = (t0 + 5984U);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t13, t4, (unsigned char)0, 7);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2464);
    t3 = (t0 + 2052U);
    t4 = (t0 + 1052U);
    t6 = *((char **)t4);
    memcpy(t14, t6, 4U);
    t4 = (t0 + 6000U);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t14, t4, (unsigned char)0, 10);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 2464);
    t3 = (t0 + 2052U);
    t4 = (t0 + 776U);
    t6 = *((char **)t4);
    memcpy(t15, t6, 4U);
    t4 = (t0 + 5968U);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t15, t4, (unsigned char)0, 7);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 2464);
    t3 = (t0 + 2052U);
    t4 = (t0 + 684U);
    t6 = *((char **)t4);
    t11 = *((unsigned char *)t6);
    ieee_p_3564397177_sub_1496949865_91900896(IEEE_P_3564397177, t2, t3, t11, (unsigned char)0, 5);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 2464);
    t3 = (t0 + 2052U);
    t4 = (t0 + 868U);
    t6 = *((char **)t4);
    t11 = *((unsigned char *)t6);
    ieee_p_3564397177_sub_1496949865_91900896(IEEE_P_3564397177, t2, t3, t11, (unsigned char)0, 4);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 2464);
    t3 = (t0 + 2052U);
    t4 = (t0 + 1144U);
    t6 = *((char **)t4);
    memcpy(t16, t6, 20U);
    t4 = (t0 + 6016U);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t16, t4, (unsigned char)0, 22);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 2464);
    t3 = (t0 + 2052U);
    t4 = (t0 + 6296);
    t7 = (t5 + 0U);
    t10 = (t7 + 0U);
    *((int *)t10) = 1;
    t10 = (t7 + 4U);
    *((int *)t10) = 4;
    t10 = (t7 + 8U);
    *((int *)t10) = 1;
    t8 = (4 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t10 = (t7 + 12U);
    *((unsigned int *)t10) = t9;
    std_textio_write7(STD_TEXTIO, t2, t3, t4, t5, (unsigned char)0, 7);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 2464);
    t3 = (t0 + 1908U);
    t4 = (t0 + 2052U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(121, ng0);

LAB14:    t2 = (t0 + 2816);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    t3 = (t0 + 568U);
    t11 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t11 == 1)
        goto LAB8;
    else
        goto LAB10;

LAB11:    goto LAB9;

LAB12:    t4 = (t0 + 2816);
    *((int *)t4) = 0;
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 2464);
    t3 = (t0 + 2052U);
    t4 = (t0 + 960U);
    t6 = *((char **)t4);
    memcpy(t17, t6, 5U);
    t4 = (t0 + 5984U);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t17, t4, (unsigned char)0, 7);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 2464);
    t3 = (t0 + 2052U);
    t4 = (t0 + 1052U);
    t6 = *((char **)t4);
    memcpy(t18, t6, 4U);
    t4 = (t0 + 6000U);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t18, t4, (unsigned char)0, 10);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 2464);
    t3 = (t0 + 2052U);
    t4 = (t0 + 776U);
    t6 = *((char **)t4);
    memcpy(t19, t6, 4U);
    t4 = (t0 + 5968U);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t19, t4, (unsigned char)0, 7);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 2464);
    t3 = (t0 + 2052U);
    t4 = (t0 + 684U);
    t6 = *((char **)t4);
    t11 = *((unsigned char *)t6);
    ieee_p_3564397177_sub_1496949865_91900896(IEEE_P_3564397177, t2, t3, t11, (unsigned char)0, 5);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 2464);
    t3 = (t0 + 2052U);
    t4 = (t0 + 868U);
    t6 = *((char **)t4);
    t11 = *((unsigned char *)t6);
    ieee_p_3564397177_sub_1496949865_91900896(IEEE_P_3564397177, t2, t3, t11, (unsigned char)0, 4);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 2464);
    t3 = (t0 + 2052U);
    t4 = (t0 + 1144U);
    t6 = *((char **)t4);
    memcpy(t20, t6, 20U);
    t4 = (t0 + 6016U);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t3, t20, t4, (unsigned char)0, 22);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 2464);
    t3 = (t0 + 2052U);
    t4 = (t0 + 6300);
    t7 = (t5 + 0U);
    t10 = (t7 + 0U);
    *((int *)t10) = 1;
    t10 = (t7 + 4U);
    *((int *)t10) = 4;
    t10 = (t7 + 8U);
    *((int *)t10) = 1;
    t8 = (4 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t10 = (t7 + 12U);
    *((unsigned int *)t10) = t9;
    std_textio_write7(STD_TEXTIO, t2, t3, t4, t5, (unsigned char)0, 7);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 2464);
    t3 = (t0 + 1908U);
    t4 = (t0 + 2052U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    goto LAB4;

LAB13:    t3 = (t0 + 568U);
    t11 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t11 == 1)
        goto LAB12;
    else
        goto LAB14;

LAB15:    goto LAB13;

LAB16:    goto LAB2;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

}


extern void work_a_1985558087_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1985558087_2372691052_p_0,(void *)work_a_1985558087_2372691052_p_1};
	xsi_register_didat("work_a_1985558087_2372691052", "isim/test_isim_beh.exe.sim/work/a_1985558087_2372691052.didat");
	xsi_register_executes(pe);
}
