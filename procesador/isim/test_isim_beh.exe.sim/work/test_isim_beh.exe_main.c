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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *WORK_P_2901011879;
char *IEEE_P_3620187407;
char *IEEE_P_3499444699;
char *WORK_P_0972559976;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    work_p_0972559976_init();
    work_p_2901011879_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    work_a_0827584957_3212880686_init();
    work_a_2253722718_3212880686_init();
    work_a_1878588406_3212880686_init();
    work_a_1155788609_3212880686_init();
    work_a_0006025927_3212880686_init();
    work_a_3333923966_3212880686_init();
    work_a_3643194780_3212880686_init();
    work_a_3222946569_3212880686_init();
    work_a_3127873622_3212880686_init();
    work_a_2351365864_0831356973_init();
    work_a_1472633797_2921704744_init();
    work_a_4268999493_0831356973_init();
    work_a_3772128646_3212880686_init();
    work_a_1774854872_3212880686_init();
    work_a_1985558087_2372691052_init();


    xsi_register_tops("work_a_1985558087_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    WORK_P_2901011879 = xsi_get_engine_memory("work_p_2901011879");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    WORK_P_0972559976 = xsi_get_engine_memory("work_p_0972559976");

    return xsi_run_simulation(argc, argv);

}
