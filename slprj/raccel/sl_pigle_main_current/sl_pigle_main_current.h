#ifndef RTW_HEADER_sl_pigle_main_current_h_
#define RTW_HEADER_sl_pigle_main_current_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef sl_pigle_main_current_COMMON_INCLUDES_
#define sl_pigle_main_current_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "sigstream_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "sl_pigle_main_current_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME sl_pigle_main_current
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (19) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (0)   
#elif NCSTATES != 0
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T aozy4iaksv [ 25 ] ; real_T fklh3xatdn [ 25 ] ; real_T
apwemeo1pz [ 25 ] ; real_T ogu0vtimd4 [ 25 ] ; real_T bkxfqi0pxq [ 50 ] ;
real_T a01jyq3kex [ 50 ] ; real_T akgj1ibwf3 [ 50 ] ; real_T h0heujskh3 [ 50
] ; real_T ldr2mikqjb [ 50 ] ; real_T bhc54zc0ex [ 25 ] ; real_T auxnwxtfvo [
50 ] ; real_T jruwlwzzf4 [ 4 ] ; real_T eprwmaok5p [ 50 ] ; real_T er40lujdmg
[ 4 ] ; real_T czszrqhgbn [ 50 ] ; real_T awprf41k1q [ 50 ] ; int16_T
lg50ovp1y5 [ 25 ] ; int16_T iver2udidl [ 25 ] ; boolean_T ea2wltz1rm [ 50 ] ;
} B ; typedef struct { real_T kash4ux1pw [ 50 ] ; real_T cfhfmokiqc [ 25 ] ;
real_T kwcy3yjcpg [ 50 ] ; real_T lblnmgrqpb [ 25 ] ; real_T kyo5azbgia [ 100
] ; real_T ahvyf2z4j5 [ 50 ] ; real_T g1dnqdyxsu [ 25 ] ; real_T df1mxqbe3i [
25 ] ; struct { void * LoggedData ; } ml3whhvhfc ; struct { void * LoggedData
; } gdtp522pfd ; struct { void * LoggedData ; } afkq2ccnyz ; struct { void *
LoggedData ; } c43cp3qtjl ; uint32_T nkihzgokkq [ 100 ] ; uint32_T aordumbgtk
[ 25 ] ; uint32_T iusooyak1q [ 25 ] ; } DW ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
seed_values_1 [ 100 ] ; real_T UniformRandomNumberx_Minimum ; real_T
UniformRandomNumberx_Maximum ; real_T UniformRandomNumberx_Seed [ 25 ] ;
real_T UniformRandomNumbery_Minimum ; real_T UniformRandomNumbery_Maximum ;
real_T UniformRandomNumbery_Seed [ 25 ] ; real_T celldimx_Value [ 25 ] ;
real_T celldimy_Value [ 25 ] ; real_T DiscreteTimeIntegrator2_gainval ;
real_T DiscreteTimeIntegrator2_IC ; real_T DiscreteTimeIntegrator1_gainval ;
real_T DiscreteTimeIntegrator1_IC ; real_T
DiscreteTimeIntegrator2_gainval_pfp1n5ezxj ; real_T
DiscreteTimeIntegrator2_IC_a5b0eygpkp ; real_T
DiscreteTimeIntegrator1_gainval_mmm5abugrv ; real_T
DiscreteTimeIntegrator1_IC_fwd0synzow ; real_T forceX_tableData [ 1500 ] ;
real_T forceX_bp01Data [ 50 ] ; real_T forceX_bp02Data [ 30 ] ; real_T
forceY_tableData [ 1500 ] ; real_T forceY_bp01Data [ 50 ] ; real_T
forceY_bp02Data [ 30 ] ; real_T WhiteNoise_Mean ; real_T WhiteNoise_StdDev ;
real_T Output_Gain ; real_T DataStoreMemory_InitialValue [ 50 ] ; real_T
A_Value [ 4 ] ; real_T celldim_Value [ 50 ] ; real_T celldim1_Value [ 50 ] ;
real_T permvec_Value [ 2 ] ; real_T B_Value [ 4 ] ; real_T
freeze_signal_Value [ 25 ] ; real_T ones_Value [ 2 ] ; real_T
reset_signal_Value [ 25 ] ; real_T mass_Value ; real_T zeros_Value [ 50 ] ;
real_T ones_Value_a523d0oiup [ 2 ] ; real_T mass_Value_ay4mlzeqvo ; real_T
zeros_Value_ljr13py54z [ 50 ] ; real_T Interactions_Value [ 50 ] ; uint32_T
forceX_maxIndex [ 2 ] ; uint32_T forceY_maxIndex [ 2 ] ; } ; extern const
char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW rtDW ; extern P
rtP ; extern const rtwCAPI_ModelMappingStaticInfo *
sl_pigle_main_current_GetCAPIStaticMap ( void ) ; extern SimStruct * const
rtS ; extern const int_T gblNumToFiles ; extern const int_T gblNumFrFiles ;
extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable *
gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( void ) ;
#endif
