#ifndef RTW_HEADER_sl_pigle_main_current_h_
#define RTW_HEADER_sl_pigle_main_current_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef sl_pigle_main_current_COMMON_INCLUDES_
#define sl_pigle_main_current_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sl_fileio_rtw.h"
#include "simtarget/slSimTgtSlFileioRTW.h"
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
typedef struct { real_T gakbmbh2d2 ; real_T jkojapvkzw ; real_T k0aotrxxhp [
2 ] ; real_T bkxfqi0pxq [ 2 ] ; real_T a01jyq3kex [ 2 ] ; real_T akgj1ibwf3 [
2 ] ; real_T mnkabdxejs [ 2 ] ; real_T h0heujskh3 [ 2 ] ; real_T ir0rpxetoe [
2 ] ; real_T f4djn03i2n ; real_T dv5qanofu3 [ 2 ] ; real_T bvw5c55uf3 [ 4 ] ;
real_T jf2wd03mf3 [ 2 ] ; real_T heb4ixm4x3 [ 4 ] ; real_T nwccmbl3cd [ 2 ] ;
real_T jtfx14x1p1 [ 2 ] ; int16_T ao1gmdn2dp ; int16_T mdsl05dmxi ; boolean_T
d1bg0wxfn3 [ 2 ] ; } B ; typedef struct { real_T kash4ux1pw [ 2 ] ; real_T
cfhfmokiqc ; real_T dx3000kbdr [ 2 ] ; real_T btmvuptxgq ; real_T bd5ggsd5xp
[ 2 ] ; real_T kyo5azbgia [ 4 ] ; real_T ahvyf2z4j5 [ 2 ] ; real_T jqip5ulbyv
; real_T pksdb1tv2w ; struct { void * FilePtr ; } odl14pd3py ; struct { void
* FilePtr ; } hgizhnb1sw ; struct { void * LoggedData ; } cqmaavz11y ; struct
{ void * LoggedData ; } nxv0llsori ; struct { void * LoggedData ; }
bvltoxi0lq ; struct { void * LoggedData ; } lw42huz5gz ; uint32_T nkihzgokkq
[ 4 ] ; uint32_T be0xujqbrq ; uint32_T dwhnbnorml ; struct { int_T Count ;
int_T Decimation ; } foaim50aii ; struct { int_T Count ; int_T Decimation ; }
dfdzh3eryc ; } DW ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
DataMapInfo ; struct P_ { real_T seed_values_1 [ 4 ] ; real_T
UniformRandomNumberx_Minimum ; real_T UniformRandomNumberx_Maximum ; real_T
UniformRandomNumberx_Seed ; real_T UniformRandomNumbery_Minimum ; real_T
UniformRandomNumbery_Maximum ; real_T UniformRandomNumbery_Seed ; real_T
celldimx_Value ; real_T celldimy_Value ; real_T
DiscreteTimeIntegrator2_gainval ; real_T DiscreteTimeIntegrator2_IC ; real_T
DiscreteTimeIntegrator1_gainval ; real_T DiscreteTimeIntegrator1_IC ; real_T
DiscreteTimeIntegrator2_gainval_iujtnnssqz ; real_T
DiscreteTimeIntegrator2_IC_j4tad5ykz4 ; real_T
DiscreteTimeIntegrator1_gainval_ddvop3rvnp ; real_T
DiscreteTimeIntegrator1_IC_l2ngdxqqv3 ; real_T forceX_tableData [ 1500 ] ;
real_T forceX_bp01Data [ 50 ] ; real_T forceX_bp02Data [ 30 ] ; real_T
forceY_tableData [ 1500 ] ; real_T forceY_bp01Data [ 50 ] ; real_T
forceY_bp02Data [ 30 ] ; real_T WhiteNoise_Mean ; real_T WhiteNoise_StdDev ;
real_T Output_Gain ; real_T DiscreteTimeIntegrator3_gainval ; real_T
DiscreteTimeIntegrator3_IC ; real_T DataStoreMemory_InitialValue [ 2 ] ;
real_T A_Value [ 4 ] ; real_T celldim_Value [ 2 ] ; real_T celldim1_Value [ 2
] ; real_T permvec_Value [ 2 ] ; real_T B_Value [ 4 ] ; real_T
freeze_signal_Value ; real_T ones_Value [ 2 ] ; real_T reset_signal_Value ;
real_T mass_Value ; real_T zeros_Value [ 2 ] ; real_T ones_Value_oocx40lm3j [
2 ] ; real_T mass_Value_bobjrwbmcw ; real_T zeros_Value_cq0rpxk0gt [ 2 ] ;
real_T Interactions_Value [ 2 ] ; uint32_T forceX_maxIndex [ 2 ] ; uint32_T
forceY_maxIndex [ 2 ] ; } ; extern const char * RT_MEMORY_ALLOCATION_ERROR ;
extern B rtB ; extern DW rtDW ; extern P rtP ; extern const
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
