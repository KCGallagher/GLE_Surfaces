#include "rt_logging_mmi.h"
#include "sl_pigle_main_current_capi.h"
#include <math.h>
#include "sl_pigle_main_current.h"
#include "sl_pigle_main_current_private.h"
#include "sl_pigle_main_current_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; extern boolean_T
gblExtModeStartPktReceived ; void raccelForceExtModeShutdown ( ) { if ( !
gblExtModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 2 , & stopRequested ) ; }
rtExtModeShutdown ( 2 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 3 ; const char_T
* gbl_raccel_Version = "10.1 (R2020a) 18-Nov-2019" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const char * gblSlvrJacPatternFileName =
"slprj\\raccel\\sl_pigle_main_current\\sl_pigle_main_current_Jpattern.mat" ;
const int_T gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ;
extern rtInportTUtable * gblInportTUtables ; extern const char *
gblInportFileName ; extern void * gblAperiodicPartitionHitTimes ; const int_T
gblInportDataTypeIdx [ ] = { - 1 } ; const int_T gblInportDims [ ] = { - 1 }
; const int_T gblInportComplex [ ] = { - 1 } ; const int_T
gblInportInterpoFlag [ ] = { - 1 } ; const int_T gblInportContinuous [ ] = {
- 1 } ; int_T enableFcnCallFlag [ ] = { 1 , 1 , 1 } ; const char *
raccelLoadInputsAndAperiodicHitTimes ( const char * inportFileName , int *
matFileFormat ) { return rt_RapidReadInportsMatFile ( inportFileName ,
matFileFormat , 1 ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
B rtB ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS = &
model_S ; real_T look2_binlxpw ( real_T u0 , real_T u1 , const real_T bp0 [ ]
, const real_T bp1 [ ] , const real_T table [ ] , const uint32_T maxIndex [ ]
, uint32_T stride ) { real_T frac ; uint32_T bpIndices [ 2 ] ; real_T
fractions [ 2 ] ; real_T yL_1d ; uint32_T iRght ; uint32_T bpIdx ; uint32_T
iLeft ; if ( u0 <= bp0 [ 0U ] ) { iLeft = 0U ; frac = ( u0 - bp0 [ 0U ] ) / (
bp0 [ 1U ] - bp0 [ 0U ] ) ; } else if ( u0 < bp0 [ maxIndex [ 0U ] ] ) {
bpIdx = maxIndex [ 0U ] >> 1U ; iLeft = 0U ; iRght = maxIndex [ 0U ] ; while
( iRght - iLeft > 1U ) { if ( u0 < bp0 [ bpIdx ] ) { iRght = bpIdx ; } else {
iLeft = bpIdx ; } bpIdx = ( iRght + iLeft ) >> 1U ; } frac = ( u0 - bp0 [
iLeft ] ) / ( bp0 [ iLeft + 1U ] - bp0 [ iLeft ] ) ; } else { iLeft =
maxIndex [ 0U ] - 1U ; frac = ( u0 - bp0 [ maxIndex [ 0U ] - 1U ] ) / ( bp0 [
maxIndex [ 0U ] ] - bp0 [ maxIndex [ 0U ] - 1U ] ) ; } fractions [ 0U ] =
frac ; bpIndices [ 0U ] = iLeft ; if ( u1 <= bp1 [ 0U ] ) { iLeft = 0U ; frac
= ( u1 - bp1 [ 0U ] ) / ( bp1 [ 1U ] - bp1 [ 0U ] ) ; } else if ( u1 < bp1 [
maxIndex [ 1U ] ] ) { bpIdx = maxIndex [ 1U ] >> 1U ; iLeft = 0U ; iRght =
maxIndex [ 1U ] ; while ( iRght - iLeft > 1U ) { if ( u1 < bp1 [ bpIdx ] ) {
iRght = bpIdx ; } else { iLeft = bpIdx ; } bpIdx = ( iRght + iLeft ) >> 1U ;
} frac = ( u1 - bp1 [ iLeft ] ) / ( bp1 [ iLeft + 1U ] - bp1 [ iLeft ] ) ; }
else { iLeft = maxIndex [ 1U ] - 1U ; frac = ( u1 - bp1 [ maxIndex [ 1U ] -
1U ] ) / ( bp1 [ maxIndex [ 1U ] ] - bp1 [ maxIndex [ 1U ] - 1U ] ) ; } bpIdx
= iLeft * stride + bpIndices [ 0U ] ; yL_1d = ( table [ bpIdx + 1U ] - table
[ bpIdx ] ) * fractions [ 0U ] + table [ bpIdx ] ; bpIdx += stride ; return (
( ( table [ bpIdx + 1U ] - table [ bpIdx ] ) * fractions [ 0U ] + table [
bpIdx ] ) - yL_1d ) * frac + yL_1d ; } real_T rt_urand_Upu32_Yd_f_pw_snf (
uint32_T * u ) { uint32_T lo ; uint32_T hi ; lo = * u % 127773U * 16807U ; hi
= * u / 127773U * 2836U ; if ( lo < hi ) { * u = 2147483647U - ( hi - lo ) ;
} else { * u = lo - hi ; } return ( real_T ) * u * 4.6566128752457969E-10 ; }
real_T rt_nrand_Upu32_Yd_f_pw_snf ( uint32_T * u ) { real_T y ; real_T sr ;
real_T si ; do { sr = 2.0 * rt_urand_Upu32_Yd_f_pw_snf ( u ) - 1.0 ; si = 2.0
* rt_urand_Upu32_Yd_f_pw_snf ( u ) - 1.0 ; si = sr * sr + si * si ; } while (
si > 1.0 ) ; y = muDoubleScalarSqrt ( - 2.0 * muDoubleScalarLog ( si ) / si )
* sr ; return y ; } void MdlInitialize ( void ) { uint32_T tseed ; int32_T r
; int32_T t ; real_T tmp ; rtDW . kash4ux1pw = rtP .
DiscreteTimeIntegrator2_IC ; rtDW . cfhfmokiqc = rtP .
DiscreteTimeIntegrator1_IC ; rtDW . kwcy3yjcpg = rtP .
DiscreteTimeIntegrator2_IC_a5b0eygpkp ; rtDW . lblnmgrqpb = rtP .
DiscreteTimeIntegrator1_IC_fwd0synzow ; tmp = muDoubleScalarFloor ( rtP .
seed_values_1 [ 0 ] ) ; if ( muDoubleScalarIsNaN ( tmp ) ||
muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; } else { tmp = muDoubleScalarRem
( tmp , 4.294967296E+9 ) ; } tseed = tmp < 0.0 ? ( uint32_T ) - ( int32_T ) (
uint32_T ) - tmp : ( uint32_T ) tmp ; r = ( int32_T ) ( tseed >> 16U ) ; t =
( int32_T ) ( tseed & 32768U ) ; tseed = ( ( ( ( tseed - ( ( uint32_T ) r <<
16U ) ) + t ) << 16U ) + t ) + r ; if ( tseed < 1U ) { tseed = 1144108930U ;
} else { if ( tseed > 2147483646U ) { tseed = 2147483646U ; } } rtDW .
nkihzgokkq [ 0 ] = tseed ; rtDW . kyo5azbgia [ 0 ] =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . nkihzgokkq [ 0 ] ) * rtP .
WhiteNoise_StdDev + rtP . WhiteNoise_Mean ; tmp = muDoubleScalarFloor ( rtP .
seed_values_1 [ 1 ] ) ; if ( muDoubleScalarIsNaN ( tmp ) ||
muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; } else { tmp = muDoubleScalarRem
( tmp , 4.294967296E+9 ) ; } tseed = tmp < 0.0 ? ( uint32_T ) - ( int32_T ) (
uint32_T ) - tmp : ( uint32_T ) tmp ; r = ( int32_T ) ( tseed >> 16U ) ; t =
( int32_T ) ( tseed & 32768U ) ; tseed = ( ( ( ( tseed - ( ( uint32_T ) r <<
16U ) ) + t ) << 16U ) + t ) + r ; if ( tseed < 1U ) { tseed = 1144108930U ;
} else { if ( tseed > 2147483646U ) { tseed = 2147483646U ; } } rtDW .
nkihzgokkq [ 1 ] = tseed ; rtDW . kyo5azbgia [ 1 ] =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . nkihzgokkq [ 1 ] ) * rtP .
WhiteNoise_StdDev + rtP . WhiteNoise_Mean ; tmp = muDoubleScalarFloor ( rtP .
UniformRandomNumberx_Seed ) ; if ( muDoubleScalarIsNaN ( tmp ) ||
muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; } else { tmp = muDoubleScalarRem
( tmp , 4.294967296E+9 ) ; } tseed = tmp < 0.0 ? ( uint32_T ) - ( int32_T ) (
uint32_T ) - tmp : ( uint32_T ) tmp ; r = ( int32_T ) ( tseed >> 16U ) ; t =
( int32_T ) ( tseed & 32768U ) ; tseed = ( ( ( ( tseed - ( ( uint32_T ) r <<
16U ) ) + t ) << 16U ) + t ) + r ; if ( tseed < 1U ) { tseed = 1144108930U ;
} else { if ( tseed > 2147483646U ) { tseed = 2147483646U ; } } rtDW .
aordumbgtk = tseed ; rtDW . g1dnqdyxsu = ( rtP . UniformRandomNumberx_Maximum
- rtP . UniformRandomNumberx_Minimum ) * rt_urand_Upu32_Yd_f_pw_snf ( & rtDW
. aordumbgtk ) + rtP . UniformRandomNumberx_Minimum ; tmp =
muDoubleScalarFloor ( rtP . UniformRandomNumbery_Seed ) ; if (
muDoubleScalarIsNaN ( tmp ) || muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; }
else { tmp = muDoubleScalarRem ( tmp , 4.294967296E+9 ) ; } tseed = tmp < 0.0
? ( uint32_T ) - ( int32_T ) ( uint32_T ) - tmp : ( uint32_T ) tmp ; r = (
int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( (
( ( tseed - ( ( uint32_T ) r << 16U ) ) + t ) << 16U ) + t ) + r ; if ( tseed
< 1U ) { tseed = 1144108930U ; } else { if ( tseed > 2147483646U ) { tseed =
2147483646U ; } } rtDW . iusooyak1q = tseed ; rtDW . df1mxqbe3i = ( rtP .
UniformRandomNumbery_Maximum - rtP . UniformRandomNumbery_Minimum ) *
rt_urand_Upu32_Yd_f_pw_snf ( & rtDW . iusooyak1q ) + rtP .
UniformRandomNumbery_Minimum ; } void MdlStart ( void ) { { void * *
slioCatalogueAddr = rt_slioCatalogueAddr ( ) ; void * r2 = ( NULL ) ; void *
* pOSigstreamManagerAddr = ( NULL ) ; const int maxErrorBufferSize = 16384 ;
char errMsgCreatingOSigstreamManager [ 16384 ] ; bool
errorCreatingOSigstreamManager = false ; const char *
errorAddingR2SharedResource = ( NULL ) ; * slioCatalogueAddr =
rtwGetNewSlioCatalogue ( rt_GetMatSigLogSelectorFileName ( ) ) ;
errorAddingR2SharedResource = rtwAddR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) , 1 ) ; if (
errorAddingR2SharedResource != ( NULL ) ) { rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = ( NULL ) ; ssSetErrorStatus ( rtS
, errorAddingR2SharedResource ) ; return ; } r2 = rtwGetR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ) ;
pOSigstreamManagerAddr = rt_GetOSigstreamManagerAddr ( ) ;
errorCreatingOSigstreamManager = rtwOSigstreamManagerCreateInstance (
rt_GetMatSigLogSelectorFileName ( ) , r2 , pOSigstreamManagerAddr ,
errMsgCreatingOSigstreamManager , maxErrorBufferSize ) ; if (
errorCreatingOSigstreamManager ) { * pOSigstreamManagerAddr = ( NULL ) ;
ssSetErrorStatus ( rtS , errMsgCreatingOSigstreamManager ) ; return ; } } {
bool externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( ) ; rtwISigstreamManagerGetInputIsInDatasetFormat (
pISigstreamManager , & externalInputIsInDatasetFormat ) ; if (
externalInputIsInDatasetFormat ) { } } { int_T dimensions [ 2 ] = { 1 , 1 } ;
rtDW . c43cp3qtjl . LoggedData = rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) ,
ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS
) ) , "freeze_1" , SS_DOUBLE , 0 , 0 , 0 , 1 , 2 , dimensions , NO_LOGVALDIMS
, ( NULL ) , ( NULL ) , 0 , 50 , rtInf , 1 ) ; if ( rtDW . c43cp3qtjl .
LoggedData == ( NULL ) ) return ; } { int_T dimensions [ 2 ] = { 2 , 1 } ;
rtDW . ml3whhvhfc . LoggedData = rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) ,
ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS
) ) , "p1" , SS_DOUBLE , 0 , 0 , 0 , 2 , 2 , dimensions , NO_LOGVALDIMS , (
NULL ) , ( NULL ) , 0 , 50 , 0.001 , 1 ) ; if ( rtDW . ml3whhvhfc .
LoggedData == ( NULL ) ) return ; } { int_T dimensions [ 2 ] = { 2 , 1 } ;
rtDW . gdtp522pfd . LoggedData = rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) ,
ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS
) ) , "pos1" , SS_DOUBLE , 0 , 0 , 0 , 2 , 2 , dimensions , NO_LOGVALDIMS , (
NULL ) , ( NULL ) , 0 , 50 , 0.001 , 1 ) ; if ( rtDW . gdtp522pfd .
LoggedData == ( NULL ) ) return ; } { int_T dimensions [ 2 ] = { 2 , 1 } ;
rtDW . afkq2ccnyz . LoggedData = rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) ,
ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS
) ) , "pos_supercell_1" , SS_DOUBLE , 0 , 0 , 0 , 2 , 2 , dimensions ,
NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 50 , 0.001 , 1 ) ; if ( rtDW .
afkq2ccnyz . LoggedData == ( NULL ) ) return ; } rtDW . ahvyf2z4j5 [ 0 ] =
rtP . DataStoreMemory_InitialValue [ 0 ] ; rtDW . ahvyf2z4j5 [ 1 ] = rtP .
DataStoreMemory_InitialValue [ 1 ] ; MdlInitialize ( ) ; } void MdlOutputs (
int_T tid ) { int32_T idx ; real_T mmlh50kwql ; real_T mf3ap50rne ; real_T
kn55ulkmij [ 2 ] ; real_T c3xzbqk5up [ 2 ] ; real_T mtdehhgdcr_idx_1 ; real_T
mtdehhgdcr_idx_0 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( ssIsSampleHit
( rtS , 1 , 0 ) ) { kn55ulkmij [ 0 ] = rtDW . g1dnqdyxsu * rtP .
celldimx_Value * rtB . awprf41k1q [ 0 ] + rtDW . ahvyf2z4j5 [ 0 ] * ( real_T
) rtB . ea2wltz1rm [ 0 ] ; kn55ulkmij [ 1 ] = rtDW . df1mxqbe3i * rtP .
celldimy_Value * rtB . awprf41k1q [ 1 ] + rtDW . ahvyf2z4j5 [ 1 ] * ( real_T
) rtB . ea2wltz1rm [ 1 ] ; } rtDW . ahvyf2z4j5 [ 0 ] = kn55ulkmij [ 0 ] ;
rtDW . ahvyf2z4j5 [ 1 ] = kn55ulkmij [ 1 ] ; if ( rtB . auxnwxtfvo != 0.0 ) {
rtDW . kash4ux1pw = rtP . DiscreteTimeIntegrator2_IC ; } mmlh50kwql = (
real_T ) rtB . lg50ovp1y5 * rtDW . kash4ux1pw ; rtB . aozy4iaksv = mmlh50kwql
/ rtP . mass_Value ; if ( rtP . reset_signal_Value != 0.0 ) { rtDW .
cfhfmokiqc = rtP . DiscreteTimeIntegrator1_IC ; } rtB . k0aotrxxhp [ 0 ] =
rtP . DiscreteTimeIntegrator1_gainval * rtB . aozy4iaksv + rtDW . cfhfmokiqc
; if ( rtB . eprwmaok5p != 0.0 ) { rtDW . kwcy3yjcpg = rtP .
DiscreteTimeIntegrator2_IC_a5b0eygpkp ; } mf3ap50rne = ( real_T ) rtB .
iver2udidl * rtDW . kwcy3yjcpg ; rtB . apwemeo1pz = mf3ap50rne / rtP .
mass_Value_ay4mlzeqvo ; if ( rtP . reset_signal_Value != 0.0 ) { rtDW .
lblnmgrqpb = rtP . DiscreteTimeIntegrator1_IC_fwd0synzow ; } rtB . k0aotrxxhp
[ 1 ] = rtP . DiscreteTimeIntegrator1_gainval_mmm5abugrv * rtB . apwemeo1pz +
rtDW . lblnmgrqpb ; rtB . bkxfqi0pxq [ 0 ] = rtDW . ahvyf2z4j5 [ 0 ] + rtB .
k0aotrxxhp [ 0 ] ; kn55ulkmij [ 0 ] = muDoubleScalarMod ( rtB . bkxfqi0pxq [
0 ] , rtP . celldim_Value [ 0 ] ) ; c3xzbqk5up [ 0 ] = muDoubleScalarMod (
rtB . bkxfqi0pxq [ 0 ] , rtP . celldim1_Value [ 0 ] ) ; rtB . bkxfqi0pxq [ 1
] = rtDW . ahvyf2z4j5 [ 1 ] + rtB . k0aotrxxhp [ 1 ] ; kn55ulkmij [ 1 ] =
muDoubleScalarMod ( rtB . bkxfqi0pxq [ 1 ] , rtP . celldim_Value [ 1 ] ) ;
c3xzbqk5up [ 1 ] = muDoubleScalarMod ( rtB . bkxfqi0pxq [ 1 ] , rtP .
celldim1_Value [ 1 ] ) ; idx = ( int32_T ) muDoubleScalarFloor ( rtP .
permvec_Value [ 0 ] ) - 1 ; if ( idx < 0 ) { idx = 0 ; } else { if ( idx >= 2
) { idx = 1 ; } } rtB . a01jyq3kex [ 0 ] = c3xzbqk5up [ idx ] ; idx = (
int32_T ) muDoubleScalarFloor ( rtP . permvec_Value [ 1 ] ) - 1 ; if ( idx <
0 ) { idx = 0 ; } else { if ( idx >= 2 ) { idx = 1 ; } } rtB . a01jyq3kex [ 1
] = c3xzbqk5up [ idx ] ; idx = ( int32_T ) muDoubleScalarFloor ( rtP .
permvec_Value [ 0 ] ) - 1 ; if ( idx < 0 ) { idx = 0 ; } else { if ( idx >= 2
) { idx = 1 ; } } mtdehhgdcr_idx_0 = kn55ulkmij [ idx ] ; idx = ( int32_T )
muDoubleScalarFloor ( rtP . permvec_Value [ 1 ] ) - 1 ; if ( idx < 0 ) { idx
= 0 ; } else { if ( idx >= 2 ) { idx = 1 ; } } mtdehhgdcr_idx_1 = kn55ulkmij
[ idx ] ; rtB . akgj1ibwf3 [ 0 ] = mmlh50kwql ; rtB . akgj1ibwf3 [ 1 ] =
mf3ap50rne ; rtB . h0heujskh3 = ( rtP . Output_Gain * rtDW . kyo5azbgia [ 0 ]
* rtP . B_Value + rtB . jruwlwzzf4 * rtDW . kash4ux1pw ) + ( look2_binlxpw (
mtdehhgdcr_idx_1 , mtdehhgdcr_idx_0 , rtP . forceX_bp01Data , rtP .
forceX_bp02Data , rtP . forceX_tableData , rtP . forceX_maxIndex , 50U ) +
rtB . czszrqhgbn [ 0 ] ) ; rtB . ldr2mikqjb = ( rtP . Output_Gain * rtDW .
kyo5azbgia [ 1 ] * rtP . B_Value + rtB . er40lujdmg * rtDW . kwcy3yjcpg ) + (
look2_binlxpw ( mtdehhgdcr_idx_1 , mtdehhgdcr_idx_0 , rtP . forceY_bp01Data ,
rtP . forceY_bp02Data , rtP . forceY_tableData , rtP . forceY_maxIndex , 50U
) + rtB . czszrqhgbn [ 1 ] ) ; if ( ssGetLogOutput ( rtS ) ) { { double
locTime = ssGetTaskTime ( rtS , 1 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . ml3whhvhfc
. LoggedData ) , & rtB . akgj1ibwf3 [ 0 ] , 0 ) ; } } } if ( ssGetLogOutput (
rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . gdtp522pfd . LoggedData ) , & rtB . bkxfqi0pxq [ 0 ] , 0
) ; } } } if ( ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime (
rtS , 1 ) ; ; if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) , locTime ) ) {
rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . afkq2ccnyz . LoggedData
) , & rtB . a01jyq3kex [ 0 ] , 0 ) ; } } } } UNUSED_PARAMETER ( tid ) ; }
void MdlOutputsTID2 ( int_T tid ) { rtB . bhc54zc0ex = rtP .
freeze_signal_Value ; rtB . lg50ovp1y5 = ( int16_T ) ! ( rtB . bhc54zc0ex !=
0.0 ) ; rtB . auxnwxtfvo = rtP . ones_Value * rtP . reset_signal_Value ; rtB
. jruwlwzzf4 = - rtP . A_Value ; rtB . iver2udidl = ( int16_T ) ! ( rtB .
bhc54zc0ex != 0.0 ) ; rtB . eprwmaok5p = rtP . ones_Value_a523d0oiup * rtP .
reset_signal_Value ; rtB . er40lujdmg = - rtP . A_Value ; rtB . awprf41k1q [
0 ] = rtP . reset_signal_Value ; rtB . awprf41k1q [ 1 ] = rtP .
reset_signal_Value ; rtB . ea2wltz1rm [ 0 ] = ! ( rtB . awprf41k1q [ 0 ] !=
0.0 ) ; rtB . ea2wltz1rm [ 1 ] = ! ( rtB . awprf41k1q [ 1 ] != 0.0 ) ; if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . c43cp3qtjl . LoggedData ) , & rtB . bhc54zc0ex , 0 ) ; }
} } rtB . czszrqhgbn [ 0 ] = rtP . Interactions_Value [ 0 ] ; rtB .
czszrqhgbn [ 1 ] = rtP . Interactions_Value [ 1 ] ; UNUSED_PARAMETER ( tid )
; } void MdlUpdate ( int_T tid ) { if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if
( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW . g1dnqdyxsu = ( rtP .
UniformRandomNumberx_Maximum - rtP . UniformRandomNumberx_Minimum ) *
rt_urand_Upu32_Yd_f_pw_snf ( & rtDW . aordumbgtk ) + rtP .
UniformRandomNumberx_Minimum ; rtDW . df1mxqbe3i = ( rtP .
UniformRandomNumbery_Maximum - rtP . UniformRandomNumbery_Minimum ) *
rt_urand_Upu32_Yd_f_pw_snf ( & rtDW . iusooyak1q ) + rtP .
UniformRandomNumbery_Minimum ; } rtDW . kash4ux1pw += rtP .
DiscreteTimeIntegrator2_gainval * rtB . h0heujskh3 ; rtDW . cfhfmokiqc = rtP
. DiscreteTimeIntegrator1_gainval * rtB . aozy4iaksv + rtB . k0aotrxxhp [ 0 ]
; rtDW . kwcy3yjcpg += rtP . DiscreteTimeIntegrator2_gainval_pfp1n5ezxj * rtB
. ldr2mikqjb ; rtDW . lblnmgrqpb = rtP .
DiscreteTimeIntegrator1_gainval_mmm5abugrv * rtB . apwemeo1pz + rtB .
k0aotrxxhp [ 1 ] ; rtDW . kyo5azbgia [ 0 ] = rt_nrand_Upu32_Yd_f_pw_snf ( &
rtDW . nkihzgokkq [ 0 ] ) * rtP . WhiteNoise_StdDev + rtP . WhiteNoise_Mean ;
rtDW . kyo5azbgia [ 1 ] = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . nkihzgokkq [
1 ] ) * rtP . WhiteNoise_StdDev + rtP . WhiteNoise_Mean ; } UNUSED_PARAMETER
( tid ) ; } void MdlUpdateTID2 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; }
void MdlTerminate ( void ) { if ( rt_slioCatalogue ( ) != ( NULL ) ) { void *
* slioCatalogueAddr = rt_slioCatalogueAddr ( ) ; rtwSaveDatasetsToMatFile (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ,
rt_GetMatSigstreamLoggingFileName ( ) ) ; rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = NULL ; } } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 0 ) ; ssSetNumY (
rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ;
ssSetNumSampleTimes ( rtS , 2 ) ; ssSetNumBlocks ( rtS , 90 ) ;
ssSetNumBlockIO ( rtS , 18 ) ; ssSetNumBlockParams ( rtS , 3205 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.001 ) ; ssSetOffsetTime ( rtS , 0 , 1.0 ) ;
ssSetOffsetTime ( rtS , 1 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 4043941710U ) ; ssSetChecksumVal ( rtS , 1 ,
3992423482U ) ; ssSetChecksumVal ( rtS , 2 , 1901846723U ) ; ssSetChecksumVal
( rtS , 3 , 2406263254U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( void ) { static struct _ssMdlInfo mdlInfo
; ( void ) memset ( ( char * ) rtS , 0 , sizeof ( SimStruct ) ) ; ( void )
memset ( ( char * ) & mdlInfo , 0 , sizeof ( struct _ssMdlInfo ) ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { void * dwork = ( void * ) & rtDW ; ssSetRootDWork ( rtS , dwork
) ; ( void ) memset ( dwork , 0 , sizeof ( DW ) ) ; } { static
DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0 ,
sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 14 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; }
sl_pigle_main_current_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"sl_pigle_main_current" ) ; ssSetPath ( rtS , "sl_pigle_main_current" ) ;
ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 1688.3500000000001 ) ; {
static RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval =
NULL ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { { static int_T
rt_LoggedStateWidths [ ] = { 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedStateDimensions [ ] = { 1 , 1 , 1 , 1 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE } ; static int_T rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0
} ; static RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [ ] = {
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; static const char_T *
rt_LoggedStateLabels [ ] = { "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" } ;
static const char_T * rt_LoggedStateBlockNames [ ] = {
"sl_pigle_main_current/Population 1/Delta R/dx/Discrete-Time\nIntegrator2" ,
"sl_pigle_main_current/Population 1/Delta R/dx/Discrete-Time\nIntegrator1" ,
"sl_pigle_main_current/Population 1/Delta R/dy/Discrete-Time\nIntegrator2" ,
"sl_pigle_main_current/Population 1/Delta R/dy/Discrete-Time\nIntegrator1" }
; static const char_T * rt_LoggedStateNames [ ] = { "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" } ; static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0
, 0 , 0 , 0 } ; static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = {
{ 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } } ; static RTWLogSignalInfo rt_LoggedStateSignalInfo = { 4 ,
rt_LoggedStateWidths , rt_LoggedStateNumDimensions , rt_LoggedStateDimensions
, rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert } ; static void *
rt_LoggedStateSignalPtrs [ 4 ] ; rtliSetLogXSignalPtrs ( ssGetRTWLogInfo (
rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtDW . kash4ux1pw ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtDW . cfhfmokiqc ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtDW . kwcy3yjcpg ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtDW . lblnmgrqpb ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
ssSolverInfo slvrInfo ; ssSetStepSize ( rtS , 0.001 ) ; ssSetMinStepSize (
rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError (
rtS , 0 ) ; ssSetMaxStepSize ( rtS , 0.001 ) ; ssSetSolverMaxOrder ( rtS , -
1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL )
) ; ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 0 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
0 ) ; ssSetNonContDerivSigInfos ( rtS , ( NULL ) ) ; ssSetSolverInfo ( rtS ,
& slvrInfo ) ; ssSetSolverName ( rtS , "VariableStepDiscrete" ) ;
ssSetVariableStepSolver ( rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetSolverStateProjection ( rtS ,
0 ) ; ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetTNextTid ( rtS , INT_MIN ) ;
ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; } ssSetChecksumVal ( rtS , 0 ,
4043941710U ) ; ssSetChecksumVal ( rtS , 1 , 3992423482U ) ; ssSetChecksumVal
( rtS , 2 , 1901846723U ) ; ssSetChecksumVal ( rtS , 3 , 2406263254U ) ; {
static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static
RTWExtModeInfo rt_ExtModeInfo ; static const sysRanDType * systemRan [ 2 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = &
rtAlwaysEnabled ; rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) ,
& ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo
( rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS
) , ssGetTPtr ( rtS ) ) ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 2 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID2 ( tid ) ; }
