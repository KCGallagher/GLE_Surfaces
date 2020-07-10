#ifndef RTW_HEADER_frmBuilder_sl_interactions_with_sfun_private_h_
#define RTW_HEADER_frmBuilder_sl_interactions_with_sfun_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "simtarget/slMdlrefSimTargetCoreHeaders.h"
#include "simtarget/slMdlrefSimTargetInstrumentationHeaders.h"
#include "messages/slMessagesSfcnBridge.h"
#include "sl_fileio_rtw.h"
extern const char * rt_GetMatSignalLoggingFileName ( void ) ; extern const
char * rt_GetMatSigLogSelectorFileName ( void ) ; extern void *
rt_GetOSigstreamManager ( void ) ; extern void * *
rt_GetOSigstreamManagerAddr ( void ) ; extern void * rt_slioCatalogue ( void
) ; extern void * * rt_slioCatalogueAddr ( void ) ; extern void
rt_ssSet_slErrMsg ( SimStruct * S , void * diag ) ; extern void
rt_ssReportDiagnosticAsWarning ( SimStruct * S , void * diag ) ; extern const
char * rt_CreateFullPathToTop ( const char * toppath , const char * subpath )
; extern boolean_T slIsRapidAcceleratorSimulating ( void ) ; extern void
rt_RAccelReplaceFromFilename ( const char * blockpath , char * fileNam ) ;
extern void rt_RAccelReplaceToFilename ( const char * blockpath , char *
fileNam ) ; extern void * gblLoggingInterval ;
#ifndef rtmDisableTaskUsingRateIndex
#define rtmDisableTaskUsingRateIndex(rtm, sti) simTgtDisableTaskUsingRateIndex(ssGetRootSS((rtm)->_mdlRefSfcnS), (rtm)->Timing.mdlref_GlobalTID[sti])
#endif
#ifndef rtmEnableTaskUsingRateIndex
#define rtmEnableTaskUsingRateIndex(rtm, sti) simTgtEnableTaskUsingRateIndex(ssGetRootSS((rtm)->_mdlRefSfcnS), (rtm)->Timing.mdlref_GlobalTID[sti])
#endif
#ifndef rtmIsFirstInitCond
#define rtmIsFirstInitCond(rtm) ssIsFirstInitCond((rtm)->_mdlRefSfcnS)
#endif
#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm) ssIsMajorTimeStep((rtm)->_mdlRefSfcnS)
#endif
#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm) ssIsMinorTimeStep((rtm)->_mdlRefSfcnS)
#endif
#ifndef rtmRaiseEventWithEnqueueUsingRateIndex
#define rtmRaiseEventWithEnqueueUsingRateIndex(rtm, sti) simTgtRaiseEventWithEnqueueUsingRateIndex(ssGetRootSS((rtm)->_mdlRefSfcnS), (rtm)->Timing.mdlref_GlobalTID[sti])
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) ((rtm)->DataMapInfo)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) ((rtm)->DataMapInfo = (val))
#endif
#ifndef rtmGetClockTick0
#define rtmGetClockTick0(rtm) ssGetClockTick( ssGetRootSS((rtm)->_mdlRefSfcnS), (rtm)->Timing.mdlref_GlobalTID[0])
#endif
#ifndef rtmGetClockTick1
#define rtmGetClockTick1(rtm) ssGetClockTick( ssGetRootSS((rtm)->_mdlRefSfcnS), (rtm)->Timing.mdlref_GlobalTID[1])
#endif
#ifndef rtmGetClockTickH0
#define rtmGetClockTickH0(rtm) ssGetClockTickH( ssGetRootSS((rtm)->_mdlRefSfcnS), (rtm)->Timing.mdlref_GlobalTID[0])
#endif
#ifndef rtmGetClockTickH1
#define rtmGetClockTickH1(rtm) ssGetClockTickH( ssGetRootSS((rtm)->_mdlRefSfcnS), (rtm)->Timing.mdlref_GlobalTID[1])
#endif
#ifndef rtmGetLogOutput
#define rtmGetLogOutput(rtm) ssGetLogOutput((rtm)->_mdlRefSfcnS)
#endif
#ifndef rtmSetSampleHit
#define rtmSetSampleHit(rtm, sti, tid, val) _ssSetSampleHit(ssGetRootSS((rtm)->_mdlRefSfcnS), (rtm)->Timing.mdlref_GlobalTID[sti], val)
#endif
#ifndef rtmIsSampleHit
#define rtmIsSampleHit(rtm, sti, tid) ssIsSampleHit( ssGetRootSS((rtm)->_mdlRefSfcnS), (rtm)->Timing.mdlref_GlobalTID[sti], tid)
#endif
#ifndef rtmGetT
#define rtmGetT(rtm) (ssGetT((rtm)->_mdlRefSfcnS))
#endif
#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm) (ssGetTFinal((rtm)->_mdlRefSfcnS))
#endif
#ifndef rtmGetTNextWasAdjusted
#define rtmGetTNextWasAdjusted(rtm, sti) (ssGetTNextWasAdjusted((rtm)->_mdlRefSfcnS,  (rtm)->Timing.mdlref_GlobalTID[sti]))
#endif
#ifndef rtmGetTStart
#define rtmGetTStart(rtm) (ssGetTStart((rtm)->_mdlRefSfcnS))
#endif
#ifndef rtmGetTaskTime
#define rtmGetTaskTime(rtm, sti) ssGetTaskTime( ssGetRootSS((rtm)->_mdlRefSfcnS), (rtm)->Timing.mdlref_GlobalTID[sti])
#endif
#ifndef rtmSetTaskTime
#define rtmSetTaskTime(rtm, sti, val) _ssSetTaskTime(ssGetRootSS((rtm)->_mdlRefSfcnS), (rtm)->Timing.mdlref_GlobalTID[sti], val)
#endif
#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm) (ssGetTimeOfLastOutput((rtm)->_mdlRefSfcnS))
#endif
#ifndef rtmGetVarNextHitTime
#define rtmGetVarNextHitTime(rtm, sti) (_ssGetVarNextHitTime((rtm)->_mdlRefSfcnS,  (int)(ssGetOffsetTime(ssGetRootSS((rtm)->_mdlRefSfcnS), (rtm)->Timing.mdlref_GlobalTID[sti+1]))))
#endif
#ifndef rtmSetVarNextHitTime
#define rtmSetVarNextHitTime(rtm, sti, val) ssSetTimeOfNextVarHit((rtm)->_mdlRefSfcnS,  (rtm)->Timing.mdlref_GlobalTID[sti], val)
#endif
#ifdef __cplusplus
extern "C" {
#endif
extern void frmBuilder_sfun_setclist_Start_wrapper ( const real_T * celldim ,
const int_T p_width0 , const real_T * out_cutoff_r , const int_T p_width1 ) ;
extern void frmBuilder_sfun_setclist_Outputs_wrapper ( const real_T * pos ,
const int32_T * calc_clist , int32_T * clisti , int32_T * clist , const
real_T * celldim , const int_T p_width0 , const real_T * out_cutoff_r , const
int_T p_width1 ) ; extern void frmBuilder_sfun_setclist_Terminate_wrapper (
const real_T * celldim , const int_T p_width0 , const real_T * out_cutoff_r ,
const int_T p_width1 ) ;
#ifdef __cplusplus
}
#endif
#ifdef __cplusplus
extern "C" {
#endif
extern void frmBuilder_sfun_intrAdsrbtFrcs_Start_wrapper ( const real_T *
nop_1 , const int_T p_width0 , const real_T * size_Fint_1 , const int_T
p_width1 , const real_T * model_dim_1 , const int_T p_width2 ) ; extern void
frmBuilder_sfun_intrAdsrbtFrcs_Outputs_wrapper ( const real_T * pos , const
real_T * x , const real_T * fTbltd , const real_T * celldim , const real_T *
identity , const real_T * f_perm , const real_T * f_func , const real_T *
in_cutoff_r , const real_T * out_cutoff_r , const real_T * z_enabled , const
real_T * freeze , const real_T * active , const int32_T * clisti , const
int32_T * clist , real_T * iaf , const real_T * nop_1 , const int_T p_width0
, const real_T * size_Fint_1 , const int_T p_width1 , const real_T *
model_dim_1 , const int_T p_width2 ) ; extern void
frmBuilder_sfun_intrAdsrbtFrcs_Terminate_wrapper ( const real_T * nop_1 ,
const int_T p_width0 , const real_T * size_Fint_1 , const int_T p_width1 ,
const real_T * model_dim_1 , const int_T p_width2 ) ;
#ifdef __cplusplus
}
#endif
#ifndef frmBuilder_sl_interactions_with_sfun_MDLREF_HIDE_CHILD_
extern gwksvzrwlpk ijenrg2bfj ;
#endif
#endif
