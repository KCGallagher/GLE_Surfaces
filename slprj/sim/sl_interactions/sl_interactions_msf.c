#if !defined(S_FUNCTION_NAME)
#define S_FUNCTION_NAME sl_interactions_msf
#endif
#define S_FUNCTION_LEVEL 2
#if !defined(RTW_GENERATED_S_FUNCTION)
#define RTW_GENERATED_S_FUNCTION
#endif
#include <stdio.h>
#include <math.h>
#include "simstruc.h"
#include "fixedpoint.h"
#define rt_logging_h
#include "sl_interactions_types.h"
#include "sl_interactions.h"
#include "sl_interactions_private.h"
const char * rt_GetMatSignalLoggingFileName ( void ) { return NULL ; } const
char * rt_GetMatSigLogSelectorFileName ( void ) { return NULL ; } void *
rt_GetOSigstreamManager ( void ) { return NULL ; } void * rt_slioCatalogue (
void ) { return NULL ; } void * rtwGetPointerFromUniquePtr ( void * uniquePtr
) { return NULL ; } void * CreateDiagnosticAsVoidPtr ( const char * id , int
nargs , ... ) { void * voidPtrDiagnostic = NULL ; va_list args ; va_start (
args , nargs ) ; slmrCreateDiagnostic ( id , nargs , args , &
voidPtrDiagnostic ) ; va_end ( args ) ; return voidPtrDiagnostic ; } void
rt_ssSet_slErrMsg ( SimStruct * S , void * diag ) { if ( !
_ssIsErrorStatusAslErrMsg ( S ) ) { _ssSet_slErrMsg ( S , diag ) ; } else {
_ssDiscardDiagnostic ( S , diag ) ; } } void rt_ssReportDiagnosticAsWarning (
SimStruct * S , void * diag ) { _ssReportDiagnosticAsWarning ( S , diag ) ; }
const char * rt_CreateFullPathToTop ( const char * toppath , const char *
subpath ) { char * fullpath = NULL ; slmrCreateFullPathToTop ( toppath ,
subpath , & fullpath ) ; return fullpath ; } boolean_T
slIsRapidAcceleratorSimulating ( void ) { return false ; } void
rt_RAccelReplaceFromFilename ( const char * blockpath , char * fileName ) { (
void ) blockpath ; ( void ) fileName ; } void rt_RAccelReplaceToFilename (
const char * blockpath , char * fileName ) { ( void ) blockpath ; ( void )
fileName ; }
#define MDL_PROCESS_PARAMETERS
#if defined(MATLAB_MEX_FILE)
static void mdlProcessParameters ( SimStruct * S ) { }
#endif
static void mdlInitializeConditions ( SimStruct * S ) { lq4m2waf4b ( ) ; }
static void mdlReset ( SimStruct * S ) { ok2e3i11k4 ( ) ; } static void
mdlInitializeSizes ( SimStruct * S ) { if ( ( S -> mdlInfo -> genericFcn != (
NULL ) ) && ( ! ( S -> mdlInfo -> genericFcn ) ( S ,
GEN_FCN_CHK_MODELREF_SFUN_HAS_MODEL_BLOCK , - 1 , ( NULL ) ) ) ) { return ; }
ssSetNumSFcnParams ( S , 0 ) ; ssFxpSetU32BitRegionCompliant ( S , 1 ) ;
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; if ( S -> mdlInfo -> genericFcn != (
NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ; }
ssSetRTWGeneratedSFcn ( S , 2 ) ; ssSetNumContStates ( S , 0 ) ;
ssSetNumDiscStates ( S , 0 ) ; slmrInitializeIOPortDataVectors ( S , 3 , 1 )
; if ( ! ssSetNumInputPorts ( S , 3 ) ) return ; if ( !
ssSetInputPortMatrixDimensions ( S , 0 , 2 , 3 ) ) return ;
ssSetInputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 0 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 0 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 0 , 1 ) ; ssSetInputPortOptimOpts ( S
, 0 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 0 ,
false ) ; ssSetInputPortSampleTime ( S , 0 , - 1 ) ; if ( !
ssSetInputPortMatrixDimensions ( S , 1 , 1 , 3 ) ) return ;
ssSetInputPortDimensionsMode ( S , 1 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 1 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 1 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 1 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 1 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 1 , 1 ) ; ssSetInputPortOptimOpts ( S
, 1 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 1 ,
false ) ; ssSetInputPortSampleTime ( S , 1 , - 1 ) ; if ( !
ssSetInputPortMatrixDimensions ( S , 2 , 1 , 3 ) ) return ;
ssSetInputPortDimensionsMode ( S , 2 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 2 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 2 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 2 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 2 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 2 , 1 ) ; ssSetInputPortOptimOpts ( S
, 2 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 2 ,
false ) ; ssSetInputPortSampleTime ( S , 2 , - 1 ) ; if ( !
ssSetNumOutputPorts ( S , 1 ) ) return ; if ( !
ssSetOutputPortMatrixDimensions ( S , 0 , 2 , 3 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 0 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 0 , - 1 ) ;
ssSetOutputPortDiscreteValuedOutput ( S , 0 , 0 ) ; ssSetOutputPortOkToMerge
( S , 0 , SS_NOT_OK_TO_MERGE ) ; ssSetOutputPortICAttributes ( S , 0 , false
, false , false ) ; ssSetOutputPortOptimOpts ( S , 0 ,
SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetSimStateCompliance ( S ,
USE_CUSTOM_SIM_STATE ) ; mr_sl_interactions_RegisterSimStateChecksum ( S ) ;
ssSetNumSampleTimes ( S , 2 ) ; ssSetParameterTuningCompliance ( S , true ) ;
ssSetNumRWork ( S , 0 ) ; ssSetNumIWork ( S , 0 ) ; ssSetNumPWork ( S , 0 ) ;
ssSetNumModes ( S , 0 ) ; { int_T zcsIdx = 0 ; }
ssSetOutputPortIsNonContinuous ( S , 0 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 0 , 0 ) ;
ssSetInputPortIsNotDerivPort ( S , 0 , 1 ) ; ssSetInputPortIsNotDerivPort ( S
, 1 , 1 ) ; ssSetInputPortIsNotDerivPort ( S , 2 , 1 ) ;
ssSetModelReferenceSampleTimeInheritanceRule ( S ,
USE_DEFAULT_FOR_DISCRETE_INHERITANCE ) ; ssSetAcceptsFcnCallInputs ( S ) ;
ssSetModelReferenceNormalModeSupport ( S ,
MDL_START_AND_MDL_PROCESS_PARAMS_OK ) ; ssSupportsMultipleExecInstances ( S ,
false ) ; ssRegisterMsgForNotSupportingMultiExecInst ( S ,
 "<diag_root><diag id=\"Simulink:blocks:BlockDoesNotSupportMultiExecInstancesWithCustomMsg\" pr=\"d\"><arguments><arg type=\"encoded\">cwBsAF8AaQBuAHQAZQByAGEAYwB0AGkAbwBuAHMALwBNAG8AZABlAGwAAAA=</arg><arg type=\"encoded\">PABfAF8AaQBpAFMAUwBfAF8APgA8AC8AXwBfAGkAaQBTAFMAXwBfAD4AAAA=</arg><arg type=\"encoded\">PABfAF8AaQB0AGUAcgBCAGwAawBfAF8APgA8AC8AXwBfAGkAdABlAHIAQgBsAGsAXwBfAD4AAAA=</arg></arguments><hs><h>AAAAAAYQd0D+</h></hs><causes><diag id=\"Simulink:blocks:UserSFcnBlockDoesNotSupportMultiExecInstances\" pr=\"d\"><arguments><arg type=\"encoded\">ZgByAG0AQgB1AGkAbABkAGUAcgBfAHMAbABfAGkAbgB0AGUAcgBhAGMAdABpAG8AbgBzAF8AdwBpAHQAaABfAHMAZgB1AG4ALwBTAC0ARgB1AG4AYwB0AGkAbwBuACAAQgB1AGkAbABkAGUAcgAyAAAA</arg><arg type=\"encoded\">PABfAF8AaQBpAFMAUwBfAF8APgA8AC8AXwBfAGkAaQBTAFMAXwBfAD4AAAA=</arg><arg type=\"encoded\">PABfAF8AaQB0AGUAcgBCAGwAawBfAF8APgA8AC8AXwBfAGkAdABlAHIAQgBsAGsAXwBfAD4AAAA=</arg></arguments><hs><h>AAAAgAWwd0D+</h></hs></diag></causes></diag></diag_root>"
) ; ssHasStateInsideForEachSS ( S , false ) ; ssSetOptions ( S ,
SS_OPTION_ALLOW_CONSTANT_PORT_SAMPLE_TIME |
SS_OPTION_PORT_SAMPLE_TIMES_ASSIGNED |
SS_OPTION_ALLOW_PORT_SAMPLE_TIME_IN_TRIGSS |
SS_OPTION_SUPPORTS_ALIAS_DATA_TYPES | SS_OPTION_DISALLOW_CONSTANT_SAMPLE_TIME
| SS_OPTION_EXCEPTION_FREE_CODE | SS_OPTION_WORKS_WITH_CODE_REUSE ) ;
#if SS_SFCN_FOR_SIM
if ( S -> mdlInfo -> genericFcn != ( NULL ) && ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { int_T retVal = 1 ;
mr_sl_interactions_MdlInfoRegFcn ( S , "sl_interactions" , & retVal ) ; if (
! retVal ) return ; }
#endif
ssSetNumDWork ( S , 0 ) ; slmrRegisterSystemInitializeMethod ( S ,
mdlInitializeConditions ) ; slmrRegisterSystemResetMethod ( S , mdlReset ) ;
ssSetSimulinkVersionGeneratedIn ( S , "10.1" ) ; } static void
mdlInitializeSampleTimes ( SimStruct * S ) { ssSetSampleTime ( S , 0 , - 1 )
; ssSetSampleTime ( S , 1 , mxGetInf ( ) ) ; ssSetOffsetTime ( S , 1 , 0 ) ;
return ; }
#define MDL_SET_WORK_WIDTHS
static void mdlSetWorkWidths ( SimStruct * S ) { if ( S -> mdlInfo ->
genericFcn != ( NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ;
ssSetSignalSizesComputeType ( S , SS_VARIABLE_SIZE_FROM_INPUT_VALUE_AND_SIZE
) ; } { static const char * toFileNames [ ] = { "" } ; static const char *
fromFileNames [ ] = { "" } ; if ( ! ssSetModelRefFromFiles ( S , 0 ,
fromFileNames ) ) return ; if ( ! ssSetModelRefToFiles ( S , 0 , toFileNames
) ) return ; } }
#define MDL_SETUP_RUNTIME_RESOURCES
static void mdlSetupRuntimeResources ( SimStruct * S ) { void * sysRanPtr = (
NULL ) ; int sysTid = 0 ; ssGetContextSysRanBCPtr ( S , & sysRanPtr ) ;
ssGetContextSysTid ( S , & sysTid ) ; if ( sysTid == CONSTANT_TID ) { sysTid
= 0 ; } dtonp0nc4x ( S , slmrGetTopTidFromMdlRefChildTid ( S , 0 , false ) ,
slmrGetTopTidFromMdlRefChildTid ( S , 1 , true ) , sysRanPtr , sysTid , (
NULL ) , ( NULL ) , 0 , - 1 ) ; ssSetModelMappingInfoPtr ( S , & ( aqg0hu31nf
. rtm . DataMapInfo . mmi ) ) ; if ( S -> mdlInfo -> genericFcn != ( NULL ) )
{ _GenericFcn fcn = S -> mdlInfo -> genericFcn ; } oprbpyox5h ( ) ; }
#define MDL_START
static void mdlStart ( SimStruct * S ) { eieawr5uet ( ) ; } static void
mdlOutputs ( SimStruct * S , int_T tid ) { const real_T * i_ntslygnf4o = (
real_T * ) ssGetInputPortSignal ( S , 0 ) ; const real_T * i_gup2vymryz = (
real_T * ) ssGetInputPortSignal ( S , 1 ) ; const real_T * i_gauuz1yy5c = (
real_T * ) ssGetInputPortSignal ( S , 2 ) ; real_T * o_B_1_1 = ( real_T * )
ssGetOutputPortSignal ( S , 0 ) ; if ( tid == PARAMETER_TUNING_TID ) {
sl_interactionsTID1 ( ) ; } if ( tid != CONSTANT_TID && tid !=
PARAMETER_TUNING_TID ) { sl_interactions ( i_ntslygnf4o , i_gup2vymryz ,
i_gauuz1yy5c , o_B_1_1 ) ; } }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { ogxwx0k0re ( ) ; return
; } static void mdlTerminate ( SimStruct * S ) { jnbmdmhdqg ( ) ; return ; }
#define MDL_CLEANUP_RUNTIME_RESOURCES
static void mdlCleanupRuntimeResources ( SimStruct * S ) { f04maqikgc ( ) ; }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static mxArray * mdlGetSimState ( SimStruct * S ) { static const char *
simStateFieldNames [ 5 ] = { "localX" , "mdlrefDW" , "disallowedStateData" ,
"tNext" , "tNextTid" , } ; mxArray * ss = mxCreateStructMatrix ( 1 , 1 , 5 ,
simStateFieldNames ) ; { const real_T * localX = ( const real_T * )
ssGetContStates ( S ) ; const int_T numStates = ssGetNumContStates ( S ) ;
const size_t numBytes = numStates * sizeof ( real_T ) ; mxArray * storedX =
mxCreateNumericMatrix ( 1 , numBytes , mxUINT8_CLASS , mxREAL ) ; UINT8_T *
rawData = ( UINT8_T * ) mxGetData ( storedX ) ; memcpy ( & rawData [ 0 ] ,
localX , numBytes ) ; mxSetFieldByNumber ( ss , 0 , 0 , storedX ) ; } {
mxArray * mdlrefDW = mr_sl_interactions_GetDWork ( ) ; mxSetFieldByNumber (
ss , 0 , 1 , mdlrefDW ) ; } { mxArray * data =
mr_sl_interactions_GetSimStateDisallowedBlocks ( ) ; mxSetFieldByNumber ( ss
, 0 , 2 , data ) ; } ; mxSetFieldByNumber ( ss , 0 , 3 , mxCreateDoubleScalar
( ( double ) ssGetTNext ( S ) ) ) ; mxSetFieldByNumber ( ss , 0 , 4 ,
mxCreateDoubleScalar ( ( double ) ssGetTNextTid ( S ) ) ) ; return ss ; }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static void mdlSetSimState ( SimStruct * S , const mxArray * ss ) { { real_T
* localX = ( real_T * ) ssGetContStates ( S ) ; const int_T numStates =
ssGetNumContStates ( S ) ; const size_t numBytes = numStates * sizeof (
real_T ) ; const mxArray * storedX = mxGetFieldByNumber ( ss , 0 , 0 ) ;
const UINT8_T * rawData = ( const UINT8_T * ) mxGetData ( storedX ) ; memcpy
( localX , & rawData [ 0 ] , numBytes ) ; } mr_sl_interactions_SetDWork (
mxGetFieldByNumber ( ss , 0 , 1 ) ) ; ssSetTNext ( S , ( time_T ) mxGetScalar
( mxGetFieldByNumber ( ss , 0 , 3 ) ) ) ; ssSetTNextTid ( S , ( int_T )
mxGetScalar ( mxGetFieldByNumber ( ss , 0 , 4 ) ) ) ; }
#ifdef MATLAB_MEX_FILE 
#include "simulink.c"
#include "fixedpoint.c"
#else
#error Assertion failed: file must be compiled as a MEX-file
#endif
