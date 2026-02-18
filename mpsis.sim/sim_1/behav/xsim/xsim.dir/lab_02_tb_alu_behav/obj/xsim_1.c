/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2020 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

#if defined(_WIN32)
 #include "stdio.h"
 #define IKI_DLLESPEC __declspec(dllimport)
#else
 #define IKI_DLLESPEC
#endif
#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2020 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

#if defined(_WIN32)
 #include "stdio.h"
 #define IKI_DLLESPEC __declspec(dllimport)
#else
 #define IKI_DLLESPEC
#endif
#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
IKI_DLLESPEC extern void execute_5(char*, char *);
IKI_DLLESPEC extern void execute_51(char*, char *);
IKI_DLLESPEC extern void execute_72(char*, char *);
IKI_DLLESPEC extern void svlog_sampling_process_execute(char*, char*, char*);
IKI_DLLESPEC extern void sequence_expr_m_9fd974b1936afbc3_5c6ca80d_1(char*, char *);
IKI_DLLESPEC extern void sequence_expr_m_9fd974b1936afbc3_5c6ca80d_2(char*, char *);
IKI_DLLESPEC extern void vlog_sv_sequence_execute_0 (char*, char*, char*);
IKI_DLLESPEC extern void assertion_action_m_9fd974b1936afbc3_5c6ca80d_1(char*, char *);
IKI_DLLESPEC extern void execute_508(char*, char *);
IKI_DLLESPEC extern void execute_509(char*, char *);
IKI_DLLESPEC extern void execute_510(char*, char *);
IKI_DLLESPEC extern void execute_511(char*, char *);
IKI_DLLESPEC extern void execute_512(char*, char *);
IKI_DLLESPEC extern void execute_513(char*, char *);
IKI_DLLESPEC extern void execute_514(char*, char *);
IKI_DLLESPEC extern void execute_515(char*, char *);
IKI_DLLESPEC extern void execute_516(char*, char *);
IKI_DLLESPEC extern void execute_517(char*, char *);
IKI_DLLESPEC extern void execute_48(char*, char *);
IKI_DLLESPEC extern void execute_49(char*, char *);
IKI_DLLESPEC extern void execute_118(char*, char *);
IKI_DLLESPEC extern void execute_442(char*, char *);
IKI_DLLESPEC extern void execute_119(char*, char *);
IKI_DLLESPEC extern void execute_120(char*, char *);
IKI_DLLESPEC extern void execute_433(char*, char *);
IKI_DLLESPEC extern void execute_434(char*, char *);
IKI_DLLESPEC extern void execute_435(char*, char *);
IKI_DLLESPEC extern void execute_436(char*, char *);
IKI_DLLESPEC extern void execute_437(char*, char *);
IKI_DLLESPEC extern void execute_438(char*, char *);
IKI_DLLESPEC extern void execute_439(char*, char *);
IKI_DLLESPEC extern void execute_440(char*, char *);
IKI_DLLESPEC extern void execute_441(char*, char *);
IKI_DLLESPEC extern void execute_121(char*, char *);
IKI_DLLESPEC extern void execute_122(char*, char *);
IKI_DLLESPEC extern void execute_155(char*, char *);
IKI_DLLESPEC extern void execute_156(char*, char *);
IKI_DLLESPEC extern void execute_157(char*, char *);
IKI_DLLESPEC extern void execute_158(char*, char *);
IKI_DLLESPEC extern void execute_159(char*, char *);
IKI_DLLESPEC extern void execute_123(char*, char *);
IKI_DLLESPEC extern void execute_124(char*, char *);
IKI_DLLESPEC extern void execute_125(char*, char *);
IKI_DLLESPEC extern void execute_126(char*, char *);
IKI_DLLESPEC extern void execute_127(char*, char *);
IKI_DLLESPEC extern void vlog_simple_process_execute_0_fast_for_reg(char*, char*, char*);
IKI_DLLESPEC extern void execute_129(char*, char *);
IKI_DLLESPEC extern void execute_130(char*, char *);
IKI_DLLESPEC extern void execute_443(char*, char *);
IKI_DLLESPEC extern void execute_444(char*, char *);
IKI_DLLESPEC extern void execute_445(char*, char *);
IKI_DLLESPEC extern void execute_446(char*, char *);
IKI_DLLESPEC extern void execute_447(char*, char *);
IKI_DLLESPEC extern void execute_448(char*, char *);
IKI_DLLESPEC extern void execute_449(char*, char *);
IKI_DLLESPEC extern void execute_450(char*, char *);
IKI_DLLESPEC extern void execute_451(char*, char *);
IKI_DLLESPEC extern void execute_452(char*, char *);
IKI_DLLESPEC extern void execute_453(char*, char *);
IKI_DLLESPEC extern void execute_454(char*, char *);
IKI_DLLESPEC extern void execute_455(char*, char *);
IKI_DLLESPEC extern void execute_456(char*, char *);
IKI_DLLESPEC extern void execute_457(char*, char *);
IKI_DLLESPEC extern void execute_458(char*, char *);
IKI_DLLESPEC extern void execute_459(char*, char *);
IKI_DLLESPEC extern void execute_460(char*, char *);
IKI_DLLESPEC extern void execute_461(char*, char *);
IKI_DLLESPEC extern void execute_464(char*, char *);
IKI_DLLESPEC extern void execute_465(char*, char *);
IKI_DLLESPEC extern void execute_466(char*, char *);
IKI_DLLESPEC extern void execute_467(char*, char *);
IKI_DLLESPEC extern void execute_468(char*, char *);
IKI_DLLESPEC extern void execute_469(char*, char *);
IKI_DLLESPEC extern void execute_470(char*, char *);
IKI_DLLESPEC extern void execute_471(char*, char *);
IKI_DLLESPEC extern void execute_472(char*, char *);
IKI_DLLESPEC extern void execute_473(char*, char *);
IKI_DLLESPEC extern void execute_474(char*, char *);
IKI_DLLESPEC extern void execute_475(char*, char *);
IKI_DLLESPEC extern void execute_476(char*, char *);
IKI_DLLESPEC extern void execute_477(char*, char *);
IKI_DLLESPEC extern void execute_478(char*, char *);
IKI_DLLESPEC extern void execute_479(char*, char *);
IKI_DLLESPEC extern void execute_480(char*, char *);
IKI_DLLESPEC extern void execute_481(char*, char *);
IKI_DLLESPEC extern void execute_482(char*, char *);
IKI_DLLESPEC extern void execute_483(char*, char *);
IKI_DLLESPEC extern void execute_484(char*, char *);
IKI_DLLESPEC extern void execute_485(char*, char *);
IKI_DLLESPEC extern void execute_486(char*, char *);
IKI_DLLESPEC extern void execute_487(char*, char *);
IKI_DLLESPEC extern void execute_488(char*, char *);
IKI_DLLESPEC extern void execute_489(char*, char *);
IKI_DLLESPEC extern void execute_490(char*, char *);
IKI_DLLESPEC extern void execute_491(char*, char *);
IKI_DLLESPEC extern void execute_492(char*, char *);
IKI_DLLESPEC extern void execute_493(char*, char *);
IKI_DLLESPEC extern void execute_494(char*, char *);
IKI_DLLESPEC extern void execute_495(char*, char *);
IKI_DLLESPEC extern void execute_496(char*, char *);
IKI_DLLESPEC extern void execute_497(char*, char *);
IKI_DLLESPEC extern void execute_498(char*, char *);
IKI_DLLESPEC extern void execute_499(char*, char *);
IKI_DLLESPEC extern void execute_500(char*, char *);
IKI_DLLESPEC extern void execute_501(char*, char *);
IKI_DLLESPEC extern void execute_502(char*, char *);
IKI_DLLESPEC extern void execute_114(char*, char *);
IKI_DLLESPEC extern void execute_115(char*, char *);
IKI_DLLESPEC extern void execute_116(char*, char *);
IKI_DLLESPEC extern void execute_117(char*, char *);
IKI_DLLESPEC extern void execute_518(char*, char *);
IKI_DLLESPEC extern void execute_519(char*, char *);
IKI_DLLESPEC extern void execute_520(char*, char *);
IKI_DLLESPEC extern void execute_521(char*, char *);
IKI_DLLESPEC extern void execute_522(char*, char *);
IKI_DLLESPEC extern void execute_523(char*, char *);
IKI_DLLESPEC extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
IKI_DLLESPEC extern void transaction_2(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void vlog_transfunc_eventcallback_2state(char*, char*, unsigned, unsigned, unsigned, char *);
funcp funcTab[119] = {(funcp)execute_5, (funcp)execute_51, (funcp)execute_72, (funcp)svlog_sampling_process_execute, (funcp)sequence_expr_m_9fd974b1936afbc3_5c6ca80d_1, (funcp)sequence_expr_m_9fd974b1936afbc3_5c6ca80d_2, (funcp)vlog_sv_sequence_execute_0 , (funcp)assertion_action_m_9fd974b1936afbc3_5c6ca80d_1, (funcp)execute_508, (funcp)execute_509, (funcp)execute_510, (funcp)execute_511, (funcp)execute_512, (funcp)execute_513, (funcp)execute_514, (funcp)execute_515, (funcp)execute_516, (funcp)execute_517, (funcp)execute_48, (funcp)execute_49, (funcp)execute_118, (funcp)execute_442, (funcp)execute_119, (funcp)execute_120, (funcp)execute_433, (funcp)execute_434, (funcp)execute_435, (funcp)execute_436, (funcp)execute_437, (funcp)execute_438, (funcp)execute_439, (funcp)execute_440, (funcp)execute_441, (funcp)execute_121, (funcp)execute_122, (funcp)execute_155, (funcp)execute_156, (funcp)execute_157, (funcp)execute_158, (funcp)execute_159, (funcp)execute_123, (funcp)execute_124, (funcp)execute_125, (funcp)execute_126, (funcp)execute_127, (funcp)vlog_simple_process_execute_0_fast_for_reg, (funcp)execute_129, (funcp)execute_130, (funcp)execute_443, (funcp)execute_444, (funcp)execute_445, (funcp)execute_446, (funcp)execute_447, (funcp)execute_448, (funcp)execute_449, (funcp)execute_450, (funcp)execute_451, (funcp)execute_452, (funcp)execute_453, (funcp)execute_454, (funcp)execute_455, (funcp)execute_456, (funcp)execute_457, (funcp)execute_458, (funcp)execute_459, (funcp)execute_460, (funcp)execute_461, (funcp)execute_464, (funcp)execute_465, (funcp)execute_466, (funcp)execute_467, (funcp)execute_468, (funcp)execute_469, (funcp)execute_470, (funcp)execute_471, (funcp)execute_472, (funcp)execute_473, (funcp)execute_474, (funcp)execute_475, (funcp)execute_476, (funcp)execute_477, (funcp)execute_478, (funcp)execute_479, (funcp)execute_480, (funcp)execute_481, (funcp)execute_482, (funcp)execute_483, (funcp)execute_484, (funcp)execute_485, (funcp)execute_486, (funcp)execute_487, (funcp)execute_488, (funcp)execute_489, (funcp)execute_490, (funcp)execute_491, (funcp)execute_492, (funcp)execute_493, (funcp)execute_494, (funcp)execute_495, (funcp)execute_496, (funcp)execute_497, (funcp)execute_498, (funcp)execute_499, (funcp)execute_500, (funcp)execute_501, (funcp)execute_502, (funcp)execute_114, (funcp)execute_115, (funcp)execute_116, (funcp)execute_117, (funcp)execute_518, (funcp)execute_519, (funcp)execute_520, (funcp)execute_521, (funcp)execute_522, (funcp)execute_523, (funcp)vlog_transfunc_eventcallback, (funcp)transaction_2, (funcp)vlog_transfunc_eventcallback_2state};
const int NumRelocateId= 119;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/lab_02_tb_alu_behav/xsim.reloc",  (void **)funcTab, 119);

	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/lab_02_tb_alu_behav/xsim.reloc");
}

void simulate(char *dp)
{
iki_register_root_pointers(8, 78928, 9,0,0,78560, 8,0,0,78192, 7,0,0,77824, 6,0,0,76896, 5,0,0,76712, 4,0,0,79480, 10,0,0,79664, 11,0,0) ; 
		iki_schedule_processes_at_time_zero(dp, "xsim.dir/lab_02_tb_alu_behav/xsim.reloc");
	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net
	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void subprog_m_9fd974b1936afbc3_5c6ca80d_12() ;
void subprog_m_9fd974b1936afbc3_5c6ca80d_11() ;
void subprog_m_9fd974b1936afbc3_5c6ca80d_10() ;
void subprog_m_9fd974b1936afbc3_5c6ca80d_17() ;
void subprog_m_9fd974b1936afbc3_5c6ca80d_16() ;
void subprog_m_9fd974b1936afbc3_5c6ca80d_15() ;
void subprog_m_9fd974b1936afbc3_5c6ca80d_22() ;
void subprog_m_9fd974b1936afbc3_5c6ca80d_21() ;
void subprog_m_9fd974b1936afbc3_5c6ca80d_20() ;
void subprog_m_9fd974b1936afbc3_5c6ca80d_27() ;
void subprog_m_9fd974b1936afbc3_5c6ca80d_26() ;
void subprog_m_9fd974b1936afbc3_5c6ca80d_25() ;
void subprog_m_9fd974b1936afbc3_5c6ca80d_32() ;
void subprog_m_9fd974b1936afbc3_5c6ca80d_31() ;
void subprog_m_9fd974b1936afbc3_5c6ca80d_30() ;
void subprog_m_9fd974b1936afbc3_5c6ca80d_37() ;
void subprog_m_9fd974b1936afbc3_5c6ca80d_36() ;
void subprog_m_9fd974b1936afbc3_5c6ca80d_35() ;
void subprog_m_9fd974b1936afbc3_5c6ca80d_42() ;
void subprog_m_9fd974b1936afbc3_5c6ca80d_41() ;
void subprog_m_9fd974b1936afbc3_5c6ca80d_40() ;
void subprog_m_9fd974b1936afbc3_5c6ca80d_47() ;
void subprog_m_9fd974b1936afbc3_5c6ca80d_46() ;
void subprog_m_9fd974b1936afbc3_5c6ca80d_45() ;
static char* ng40[] = {(void *)subprog_m_9fd974b1936afbc3_5c6ca80d_12, (void *)subprog_m_9fd974b1936afbc3_5c6ca80d_11, (void *)subprog_m_9fd974b1936afbc3_5c6ca80d_10};
static char* ng50[] = {(void *)subprog_m_9fd974b1936afbc3_5c6ca80d_17, (void *)subprog_m_9fd974b1936afbc3_5c6ca80d_16, (void *)subprog_m_9fd974b1936afbc3_5c6ca80d_15};
static char* ng60[] = {(void *)subprog_m_9fd974b1936afbc3_5c6ca80d_22, (void *)subprog_m_9fd974b1936afbc3_5c6ca80d_21, (void *)subprog_m_9fd974b1936afbc3_5c6ca80d_20};
static char* ng70[] = {(void *)subprog_m_9fd974b1936afbc3_5c6ca80d_27, (void *)subprog_m_9fd974b1936afbc3_5c6ca80d_26, (void *)subprog_m_9fd974b1936afbc3_5c6ca80d_25};
static char* ng80[] = {(void *)subprog_m_9fd974b1936afbc3_5c6ca80d_32, (void *)subprog_m_9fd974b1936afbc3_5c6ca80d_31, (void *)subprog_m_9fd974b1936afbc3_5c6ca80d_30};
static char* ng90[] = {(void *)subprog_m_9fd974b1936afbc3_5c6ca80d_37, (void *)subprog_m_9fd974b1936afbc3_5c6ca80d_36, (void *)subprog_m_9fd974b1936afbc3_5c6ca80d_35};
static char* ng100[] = {(void *)subprog_m_9fd974b1936afbc3_5c6ca80d_42, (void *)subprog_m_9fd974b1936afbc3_5c6ca80d_41, (void *)subprog_m_9fd974b1936afbc3_5c6ca80d_40};
static char* ng110[] = {(void *)subprog_m_9fd974b1936afbc3_5c6ca80d_47, (void *)subprog_m_9fd974b1936afbc3_5c6ca80d_46, (void *)subprog_m_9fd974b1936afbc3_5c6ca80d_45};
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_xsimdir_location_if_remapped(argc, argv)  ;
    iki_set_sv_type_file_path_name("xsim.dir/lab_02_tb_alu_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/lab_02_tb_alu_behav/xsim.crvsdump");
    iki_svlog_initialize_virtual_tables(8, 4, ng40, 5, ng50, 6, ng60, 7, ng70, 8, ng80, 9, ng90, 10, ng100, 11, ng110);
    void* design_handle = iki_create_design("xsim.dir/lab_02_tb_alu_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, (void*)0, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
