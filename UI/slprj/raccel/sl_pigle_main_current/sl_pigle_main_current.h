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
#define sl_interactions_MDLREF_HIDE_CHILD_
#include "sl_interactions.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME sl_pigle_main_current
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (22) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (0)   
#elif NCSTATES != 0
#error Invalid specification of NCSTATES defined in compiler command
#endif
#define UseMMIDataLogging    
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T aexyztgedn [ 3 ] ; real_T a23t0d3lvw [ 3 ] ; real_T
jkojapvkzw [ 3 ] ; real_T gt11e00gkn [ 3 ] ; real_T mz0qnurgag [ 6 ] ; real_T
mflfjw2sbe [ 6 ] ; real_T lz01df3oam [ 6 ] ; real_T bax2hwmyr4 [ 6 ] ; real_T
o2huc0ivol [ 6 ] ; real_T d13mqwbs4m [ 3 ] ; real_T ir0rpxetoe [ 3 ] ; real_T
ic5l2szdcd [ 3 ] ; real_T jhrkdowu1q [ 3 ] ; real_T bvw5c55uf3 ; real_T
jf2wd03mf3 [ 3 ] ; real_T heb4ixm4x3 ; real_T hvcbbqtbfi [ 3 ] ; real_T
hlb4lsy0px [ 3 ] ; real_T jtfx14x1p1 [ 6 ] ; int16_T dtxhz4a2ix [ 3 ] ;
int16_T mdsl05dmxi [ 3 ] ; boolean_T d1bg0wxfn3 [ 6 ] ; } pgnpe5ro1j ;
typedef struct { real_T luv0nigeak [ 3 ] ; real_T e5yrdplfb2 [ 3 ] ; real_T
dx3000kbdr [ 3 ] ; real_T btmvuptxgq [ 3 ] ; real_T jsan3mycru [ 6 ] ; real_T
f13zyopuod [ 6 ] ; real_T jqip5ulbyv [ 3 ] ; real_T pksdb1tv2w [ 3 ] ; struct
{ void * LoggedData ; } cqmaavz11y ; struct { void * LoggedData ; }
nxv0llsori ; struct { void * LoggedData ; } bvltoxi0lq ; struct { void *
LoggedData ; } lw42huz5gz ; uint32_T mhsyeglu0n [ 6 ] ; uint32_T be0xujqbrq [
3 ] ; uint32_T dwhnbnorml [ 3 ] ; } mfkobyioa3 ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo * childMMI [ 1 ] ; }
DataMapInfo ; struct kwakm2xzrdv_ { real_T UniformRandomNumberx_Minimum ;
real_T UniformRandomNumberx_Maximum ; real_T UniformRandomNumberx_Seed [ 3 ]
; real_T UniformRandomNumbery_Minimum ; real_T UniformRandomNumbery_Maximum ;
real_T UniformRandomNumbery_Seed [ 3 ] ; real_T celldimx_Value [ 3 ] ; real_T
celldimy_Value [ 3 ] ; real_T DiscreteTimeIntegrator2_gainval ; real_T
DiscreteTimeIntegrator2_IC ; real_T DiscreteTimeIntegrator1_gainval ; real_T
DiscreteTimeIntegrator1_IC ; real_T
DiscreteTimeIntegrator2_gainval_iujtnnssqz ; real_T
DiscreteTimeIntegrator2_IC_j4tad5ykz4 ; real_T
DiscreteTimeIntegrator1_gainval_ddvop3rvnp ; real_T
DiscreteTimeIntegrator1_IC_l2ngdxqqv3 ; real_T forceX_tableData [ 1500 ] ;
real_T forceX_bp01Data [ 50 ] ; real_T forceX_bp02Data [ 30 ] ; real_T
forceY_tableData [ 1500 ] ; real_T forceY_bp01Data [ 50 ] ; real_T
forceY_bp02Data [ 30 ] ; real_T WhiteNoise_Mean ; real_T WhiteNoise_StdDev ;
real_T Output_Gain ; real_T DataStoreMemory_InitialValue [ 6 ] ; real_T
A_Value ; real_T celldim_Value [ 6 ] ; real_T celldim1_Value [ 6 ] ; real_T
permvec_Value [ 2 ] ; real_T B_Value ; real_T freeze_signal_Value [ 3 ] ;
real_T ones_Value ; real_T reset_signal_Value [ 3 ] ; real_T mass_Value ;
real_T zeros_Value [ 3 ] ; real_T ones_Value_oocx40lm3j ; real_T
mass_Value_bobjrwbmcw ; real_T zeros_Value_cq0rpxk0gt [ 3 ] ; real_T
identity1_Value [ 3 ] ; uint32_T forceX_maxIndex [ 2 ] ; uint32_T
forceY_maxIndex [ 2 ] ; } ; extern const char * RT_MEMORY_ALLOCATION_ERROR ;
extern pgnpe5ro1j pgnpe5ro1jc ; extern mfkobyioa3 mfkobyioa3u ; extern
kwakm2xzrdv kwakm2xzrd ; extern real_T rtP_seed_values_1 [ 6 ] ; extern const
rtwCAPI_ModelMappingStaticInfo * sl_pigle_main_current_GetCAPIStaticMap (
void ) ; extern SimStruct * const rtS ; extern const int_T gblNumToFiles ;
extern const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ;
extern rtInportTUtable * gblInportTUtables ; extern const char *
gblInportFileName ; extern const int_T gblNumRootInportBlks ; extern const
int_T gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ;
extern const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [
] ; extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( void
) ;
#endif
