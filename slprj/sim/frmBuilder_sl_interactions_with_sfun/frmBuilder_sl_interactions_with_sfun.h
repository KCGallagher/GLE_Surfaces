#ifndef RTW_HEADER_frmBuilder_sl_interactions_with_sfun_h_
#define RTW_HEADER_frmBuilder_sl_interactions_with_sfun_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef frmBuilder_sl_interactions_with_sfun_COMMON_INCLUDES_
#define frmBuilder_sl_interactions_with_sfun_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "frmBuilder_sl_interactions_with_sfun_types.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
#ifndef frmBuilder_sl_interactions_with_sfun_MDLREF_HIDE_CHILD_
typedef struct { int32_T azbn531qjq ; int32_T jgnha030ci [ 3 ] ; int32_T
ei4032pt0e [ 9 ] ; int32_T lrfm0b02de [ 9 ] ; int32_T ai241u2zr3 [ 3 ] ;
uint8_T prlrkaw5tq ; } ccjhnjujtlv ;
#endif
#ifndef frmBuilder_sl_interactions_with_sfun_MDLREF_HIDE_CHILD_
typedef struct { int32_T hrg1yp121u [ 9 ] ; int32_T e5p42cabpk [ 3 ] ;
uint8_T elmzpr4w3v ; } h5jqgwghrry ;
#endif
#ifndef frmBuilder_sl_interactions_with_sfun_MDLREF_HIDE_CHILD_
struct gwksvzrwlpk_ { uint8_T P_0 ; real_T P_1 [ 2 ] ; real_T P_2 ; real_T
P_3 ; real_T P_4 [ 2 ] ; real_T P_5 ; real_T P_6 [ 1500 ] ; real_T P_7 ;
real_T P_8 [ 2 ] ; real_T P_9 [ 3 ] ; real_T P_10 [ 6 ] ; real_T P_11 ;
real_T P_12 ; real_T P_13 [ 500 ] ; real_T P_14 ; int32_T P_15 [ 9 ] ;
int32_T P_16 [ 3 ] ; uint8_T P_17 ; uint8_T P_18 ; uint8_T P_19 ; } ;
#endif
#ifndef frmBuilder_sl_interactions_with_sfun_MDLREF_HIDE_CHILD_
struct b0bec2mpit { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 1 ] ; int32_T * vardimsAddress [ 1
] ; RTWLoggingFcnPtr loggingPtrs [ 1 ] ; sysRanDType * systemRan [ 2 ] ;
int_T systemTid [ 2 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 2 ]
; } Timing ; } ;
#endif
#ifndef frmBuilder_sl_interactions_with_sfun_MDLREF_HIDE_CHILD_
typedef struct { e45f22iatl rtm ; } k5qqqu40mr1 ;
#endif
extern void m32tjzplay ( void ) ; extern void j11jtsqnt5 ( void ) ; extern
void mabwddym1e ( void ) ; extern void owuiqr2hmo ( void ) ; extern void
owuiqr2hmoTID1 ( void ) ; extern void frmBuilder_sl_interactions_with_sfun (
const real_T bvdsahax1j [ 6 ] , const real_T mni4apbri4 [ 3 ] , const real_T
pjhb1fxiur [ 3 ] , real_T goidetzxg5 [ 6 ] ) ; extern void
frmBuilder_sl_interactions_with_sfunTID1 ( void ) ; extern void ltlv1eutbt (
void ) ; extern void dzwufxgfur ( SimStruct * _mdlRefSfcnS , int_T
mdlref_TID0 , int_T mdlref_TID1 , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_frmBuilder_sl_interactions_with_sfun_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) ; extern mxArray *
mr_frmBuilder_sl_interactions_with_sfun_GetDWork ( ) ; extern void
mr_frmBuilder_sl_interactions_with_sfun_SetDWork ( const mxArray * ssDW ) ;
extern void mr_frmBuilder_sl_interactions_with_sfun_RegisterSimStateChecksum
( SimStruct * S ) ; extern mxArray *
mr_frmBuilder_sl_interactions_with_sfun_GetSimStateDisallowedBlocks ( ) ;
extern const rtwCAPI_ModelMappingStaticInfo *
frmBuilder_sl_interactions_with_sfun_GetCAPIStaticMap ( void ) ; void
mr_frmBuilder_sl_interactions_with_sfun_CreateInitRestoreData ( ) ; void
mr_frmBuilder_sl_interactions_with_sfun_CopyFromInitRestoreData ( ) ; void
mr_frmBuilder_sl_interactions_with_sfun_DestroyInitRestoreData ( ) ;
#ifndef frmBuilder_sl_interactions_with_sfun_MDLREF_HIDE_CHILD_
extern k5qqqu40mr1 k5qqqu40mr ;
#endif
#ifndef frmBuilder_sl_interactions_with_sfun_MDLREF_HIDE_CHILD_
extern ccjhnjujtlv n0swlirknlw ; extern h5jqgwghrry lwptvauccs5 ;
#endif
#endif
