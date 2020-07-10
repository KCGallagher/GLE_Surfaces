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
#include "look2_binlxpw.h"
#include "rt_nrand_Upu32_Yd_f_pw_snf.h"
#include "rt_urand_Upu32_Yd_f_pw_snf.h"
pgnpe5ro1j pgnpe5ro1jc ; mfkobyioa3 mfkobyioa3u ; static SimStruct model_S ;
SimStruct * const rtS = & model_S ; void MdlInitialize ( void ) { int32_T iU
; uint32_T tseed ; int32_T r ; int32_T t ; real_T tmp ; mfkobyioa3u .
luv0nigeak [ 0 ] = kwakm2xzrd . DiscreteTimeIntegrator2_IC ; mfkobyioa3u .
e5yrdplfb2 [ 0 ] = kwakm2xzrd . DiscreteTimeIntegrator1_IC ; mfkobyioa3u .
dx3000kbdr [ 0 ] = kwakm2xzrd . DiscreteTimeIntegrator2_IC_j4tad5ykz4 ;
mfkobyioa3u . btmvuptxgq [ 0 ] = kwakm2xzrd .
DiscreteTimeIntegrator1_IC_l2ngdxqqv3 ; mfkobyioa3u . luv0nigeak [ 1 ] =
kwakm2xzrd . DiscreteTimeIntegrator2_IC ; mfkobyioa3u . e5yrdplfb2 [ 1 ] =
kwakm2xzrd . DiscreteTimeIntegrator1_IC ; mfkobyioa3u . dx3000kbdr [ 1 ] =
kwakm2xzrd . DiscreteTimeIntegrator2_IC_j4tad5ykz4 ; mfkobyioa3u . btmvuptxgq
[ 1 ] = kwakm2xzrd . DiscreteTimeIntegrator1_IC_l2ngdxqqv3 ; mfkobyioa3u .
luv0nigeak [ 2 ] = kwakm2xzrd . DiscreteTimeIntegrator2_IC ; mfkobyioa3u .
e5yrdplfb2 [ 2 ] = kwakm2xzrd . DiscreteTimeIntegrator1_IC ; mfkobyioa3u .
dx3000kbdr [ 2 ] = kwakm2xzrd . DiscreteTimeIntegrator2_IC_j4tad5ykz4 ;
mfkobyioa3u . btmvuptxgq [ 2 ] = kwakm2xzrd .
DiscreteTimeIntegrator1_IC_l2ngdxqqv3 ; for ( iU = 0 ; iU < 6 ; iU ++ ) { tmp
= muDoubleScalarFloor ( rtP_seed_values_1 [ iU ] ) ; if ( muDoubleScalarIsNaN
( tmp ) || muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; } else { tmp =
muDoubleScalarRem ( tmp , 4.294967296E+9 ) ; } tseed = tmp < 0.0 ? ( uint32_T
) - ( int32_T ) ( uint32_T ) - tmp : ( uint32_T ) tmp ; r = ( int32_T ) (
tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( ( ( ( tseed -
( ( uint32_T ) r << 16U ) ) + t ) << 16U ) + t ) + r ; if ( tseed < 1U ) {
tseed = 1144108930U ; } else { if ( tseed > 2147483646U ) { tseed =
2147483646U ; } } mfkobyioa3u . mhsyeglu0n [ iU ] = tseed ; mfkobyioa3u .
jsan3mycru [ iU ] = rt_nrand_Upu32_Yd_f_pw_snf ( & mfkobyioa3u . mhsyeglu0n [
iU ] ) * kwakm2xzrd . WhiteNoise_StdDev + kwakm2xzrd . WhiteNoise_Mean ; }
tmp = muDoubleScalarFloor ( kwakm2xzrd . UniformRandomNumberx_Seed [ 0 ] ) ;
if ( muDoubleScalarIsNaN ( tmp ) || muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0
; } else { tmp = muDoubleScalarRem ( tmp , 4.294967296E+9 ) ; } tseed = tmp <
0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - tmp : ( uint32_T ) tmp ; r =
( int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = (
( ( ( tseed - ( ( uint32_T ) r << 16U ) ) + t ) << 16U ) + t ) + r ; if (
tseed < 1U ) { tseed = 1144108930U ; } else { if ( tseed > 2147483646U ) {
tseed = 2147483646U ; } } mfkobyioa3u . be0xujqbrq [ 0 ] = tseed ;
mfkobyioa3u . jqip5ulbyv [ 0 ] = ( kwakm2xzrd . UniformRandomNumberx_Maximum
- kwakm2xzrd . UniformRandomNumberx_Minimum ) * rt_urand_Upu32_Yd_f_pw_snf (
& mfkobyioa3u . be0xujqbrq [ 0 ] ) + kwakm2xzrd .
UniformRandomNumberx_Minimum ; tmp = muDoubleScalarFloor ( kwakm2xzrd .
UniformRandomNumberx_Seed [ 1 ] ) ; if ( muDoubleScalarIsNaN ( tmp ) ||
muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; } else { tmp = muDoubleScalarRem
( tmp , 4.294967296E+9 ) ; } tseed = tmp < 0.0 ? ( uint32_T ) - ( int32_T ) (
uint32_T ) - tmp : ( uint32_T ) tmp ; r = ( int32_T ) ( tseed >> 16U ) ; t =
( int32_T ) ( tseed & 32768U ) ; tseed = ( ( ( ( tseed - ( ( uint32_T ) r <<
16U ) ) + t ) << 16U ) + t ) + r ; if ( tseed < 1U ) { tseed = 1144108930U ;
} else { if ( tseed > 2147483646U ) { tseed = 2147483646U ; } } mfkobyioa3u .
be0xujqbrq [ 1 ] = tseed ; mfkobyioa3u . jqip5ulbyv [ 1 ] = ( kwakm2xzrd .
UniformRandomNumberx_Maximum - kwakm2xzrd . UniformRandomNumberx_Minimum ) *
rt_urand_Upu32_Yd_f_pw_snf ( & mfkobyioa3u . be0xujqbrq [ 1 ] ) + kwakm2xzrd
. UniformRandomNumberx_Minimum ; tmp = muDoubleScalarFloor ( kwakm2xzrd .
UniformRandomNumberx_Seed [ 2 ] ) ; if ( muDoubleScalarIsNaN ( tmp ) ||
muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; } else { tmp = muDoubleScalarRem
( tmp , 4.294967296E+9 ) ; } tseed = tmp < 0.0 ? ( uint32_T ) - ( int32_T ) (
uint32_T ) - tmp : ( uint32_T ) tmp ; r = ( int32_T ) ( tseed >> 16U ) ; t =
( int32_T ) ( tseed & 32768U ) ; tseed = ( ( ( ( tseed - ( ( uint32_T ) r <<
16U ) ) + t ) << 16U ) + t ) + r ; if ( tseed < 1U ) { tseed = 1144108930U ;
} else { if ( tseed > 2147483646U ) { tseed = 2147483646U ; } } mfkobyioa3u .
be0xujqbrq [ 2 ] = tseed ; mfkobyioa3u . jqip5ulbyv [ 2 ] = ( kwakm2xzrd .
UniformRandomNumberx_Maximum - kwakm2xzrd . UniformRandomNumberx_Minimum ) *
rt_urand_Upu32_Yd_f_pw_snf ( & mfkobyioa3u . be0xujqbrq [ 2 ] ) + kwakm2xzrd
. UniformRandomNumberx_Minimum ; tmp = muDoubleScalarFloor ( kwakm2xzrd .
UniformRandomNumbery_Seed [ 0 ] ) ; if ( muDoubleScalarIsNaN ( tmp ) ||
muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; } else { tmp = muDoubleScalarRem
( tmp , 4.294967296E+9 ) ; } tseed = tmp < 0.0 ? ( uint32_T ) - ( int32_T ) (
uint32_T ) - tmp : ( uint32_T ) tmp ; r = ( int32_T ) ( tseed >> 16U ) ; t =
( int32_T ) ( tseed & 32768U ) ; tseed = ( ( ( ( tseed - ( ( uint32_T ) r <<
16U ) ) + t ) << 16U ) + t ) + r ; if ( tseed < 1U ) { tseed = 1144108930U ;
} else { if ( tseed > 2147483646U ) { tseed = 2147483646U ; } } mfkobyioa3u .
dwhnbnorml [ 0 ] = tseed ; mfkobyioa3u . pksdb1tv2w [ 0 ] = ( kwakm2xzrd .
UniformRandomNumbery_Maximum - kwakm2xzrd . UniformRandomNumbery_Minimum ) *
rt_urand_Upu32_Yd_f_pw_snf ( & mfkobyioa3u . dwhnbnorml [ 0 ] ) + kwakm2xzrd
. UniformRandomNumbery_Minimum ; tmp = muDoubleScalarFloor ( kwakm2xzrd .
UniformRandomNumbery_Seed [ 1 ] ) ; if ( muDoubleScalarIsNaN ( tmp ) ||
muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; } else { tmp = muDoubleScalarRem
( tmp , 4.294967296E+9 ) ; } tseed = tmp < 0.0 ? ( uint32_T ) - ( int32_T ) (
uint32_T ) - tmp : ( uint32_T ) tmp ; r = ( int32_T ) ( tseed >> 16U ) ; t =
( int32_T ) ( tseed & 32768U ) ; tseed = ( ( ( ( tseed - ( ( uint32_T ) r <<
16U ) ) + t ) << 16U ) + t ) + r ; if ( tseed < 1U ) { tseed = 1144108930U ;
} else { if ( tseed > 2147483646U ) { tseed = 2147483646U ; } } mfkobyioa3u .
dwhnbnorml [ 1 ] = tseed ; mfkobyioa3u . pksdb1tv2w [ 1 ] = ( kwakm2xzrd .
UniformRandomNumbery_Maximum - kwakm2xzrd . UniformRandomNumbery_Minimum ) *
rt_urand_Upu32_Yd_f_pw_snf ( & mfkobyioa3u . dwhnbnorml [ 1 ] ) + kwakm2xzrd
. UniformRandomNumbery_Minimum ; tmp = muDoubleScalarFloor ( kwakm2xzrd .
UniformRandomNumbery_Seed [ 2 ] ) ; if ( muDoubleScalarIsNaN ( tmp ) ||
muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; } else { tmp = muDoubleScalarRem
( tmp , 4.294967296E+9 ) ; } tseed = tmp < 0.0 ? ( uint32_T ) - ( int32_T ) (
uint32_T ) - tmp : ( uint32_T ) tmp ; r = ( int32_T ) ( tseed >> 16U ) ; t =
( int32_T ) ( tseed & 32768U ) ; tseed = ( ( ( ( tseed - ( ( uint32_T ) r <<
16U ) ) + t ) << 16U ) + t ) + r ; if ( tseed < 1U ) { tseed = 1144108930U ;
} else { if ( tseed > 2147483646U ) { tseed = 2147483646U ; } } mfkobyioa3u .
dwhnbnorml [ 2 ] = tseed ; mfkobyioa3u . pksdb1tv2w [ 2 ] = ( kwakm2xzrd .
UniformRandomNumbery_Maximum - kwakm2xzrd . UniformRandomNumbery_Minimum ) *
rt_urand_Upu32_Yd_f_pw_snf ( & mfkobyioa3u . dwhnbnorml [ 2 ] ) + kwakm2xzrd
. UniformRandomNumbery_Minimum ; lq4m2waf4b ( ) ; } void MdlStart ( void ) {
int32_T i ; { void * * slioCatalogueAddr = rt_slioCatalogueAddr ( ) ; void *
r2 = ( NULL ) ; void * * pOSigstreamManagerAddr = ( NULL ) ; const int
maxErrorBufferSize = 16384 ; char errMsgCreatingOSigstreamManager [ 16384 ] ;
bool errorCreatingOSigstreamManager = false ; const char *
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
externalInputIsInDatasetFormat ) { } } { int_T dimensions [ 2 ] = { 1 , 3 } ;
mfkobyioa3u . lw42huz5gz . LoggedData = rt_CreateLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "freeze_1" , SS_DOUBLE , 0 , 0 , 0 , 3 , 2 ,
dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 50 , rtInf , 1 ) ; if
( mfkobyioa3u . lw42huz5gz . LoggedData == ( NULL ) ) return ; } oprbpyox5h (
) ; { int_T dimensions [ 2 ] = { 2 , 3 } ; mfkobyioa3u . cqmaavz11y .
LoggedData = rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS )
, ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "p1" ,
SS_DOUBLE , 0 , 0 , 0 , 6 , 2 , dimensions , NO_LOGVALDIMS , ( NULL ) , (
NULL ) , 0 , 50 , 0.001 , 1 ) ; if ( mfkobyioa3u . cqmaavz11y . LoggedData ==
( NULL ) ) return ; } { int_T dimensions [ 2 ] = { 2 , 3 } ; mfkobyioa3u .
nxv0llsori . LoggedData = rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) ,
ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS
) ) , "pos1" , SS_DOUBLE , 0 , 0 , 0 , 6 , 2 , dimensions , NO_LOGVALDIMS , (
NULL ) , ( NULL ) , 0 , 50 , 0.001 , 1 ) ; if ( mfkobyioa3u . nxv0llsori .
LoggedData == ( NULL ) ) return ; } { int_T dimensions [ 2 ] = { 2 , 3 } ;
mfkobyioa3u . bvltoxi0lq . LoggedData = rt_CreateLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "pos_supercell_1" , SS_DOUBLE , 0 , 0 , 0 , 6 ,
2 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 50 , 0.001 , 1 ) ;
if ( mfkobyioa3u . bvltoxi0lq . LoggedData == ( NULL ) ) return ; }
eieawr5uet ( ) ; for ( i = 0 ; i < 6 ; i ++ ) { mfkobyioa3u . f13zyopuod [ i
] = kwakm2xzrd . DataStoreMemory_InitialValue [ i ] ; } MdlInitialize ( ) ; }
void MdlOutputs ( int_T tid ) { int32_T idx ; real_T di2tgnc41b [ 6 ] ;
real_T bse25cksmn [ 6 ] ; int32_T i ; real_T jb5wohbh1o_p [ 6 ] ; real_T
crklehj0kf ; real_T jb5wohbh1o_idx_0 ; real_T jb5wohbh1o_idx_1 ; real_T
jb5wohbh1o_idx_2 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( ssIsSampleHit
( rtS , 1 , 0 ) ) { bse25cksmn [ 0 ] = mfkobyioa3u . jqip5ulbyv [ 0 ] *
kwakm2xzrd . celldimx_Value [ 0 ] ; bse25cksmn [ 1 ] = mfkobyioa3u .
pksdb1tv2w [ 0 ] * kwakm2xzrd . celldimy_Value [ 0 ] ; bse25cksmn [ 2 ] =
mfkobyioa3u . jqip5ulbyv [ 1 ] * kwakm2xzrd . celldimx_Value [ 1 ] ;
bse25cksmn [ 3 ] = mfkobyioa3u . pksdb1tv2w [ 1 ] * kwakm2xzrd .
celldimy_Value [ 1 ] ; bse25cksmn [ 4 ] = mfkobyioa3u . jqip5ulbyv [ 2 ] *
kwakm2xzrd . celldimx_Value [ 2 ] ; bse25cksmn [ 5 ] = mfkobyioa3u .
pksdb1tv2w [ 2 ] * kwakm2xzrd . celldimy_Value [ 2 ] ; for ( i = 0 ; i < 6 ;
i ++ ) { di2tgnc41b [ i ] = mfkobyioa3u . f13zyopuod [ i ] * ( real_T )
pgnpe5ro1jc . d1bg0wxfn3 [ i ] + pgnpe5ro1jc . jtfx14x1p1 [ i ] * bse25cksmn
[ i ] ; } } for ( i = 0 ; i < 6 ; i ++ ) { mfkobyioa3u . f13zyopuod [ i ] =
di2tgnc41b [ i ] ; } if ( pgnpe5ro1jc . jhrkdowu1q [ 0 ] != 0.0 ) {
mfkobyioa3u . luv0nigeak [ 0 ] = kwakm2xzrd . DiscreteTimeIntegrator2_IC ; }
jb5wohbh1o_idx_2 = ( real_T ) pgnpe5ro1jc . dtxhz4a2ix [ 0 ] * mfkobyioa3u .
luv0nigeak [ 0 ] ; pgnpe5ro1jc . aexyztgedn [ 0 ] = jb5wohbh1o_idx_2 /
kwakm2xzrd . mass_Value ; if ( kwakm2xzrd . reset_signal_Value [ 0 ] != 0.0 )
{ mfkobyioa3u . e5yrdplfb2 [ 0 ] = kwakm2xzrd . DiscreteTimeIntegrator1_IC ;
} pgnpe5ro1jc . a23t0d3lvw [ 0 ] = kwakm2xzrd .
DiscreteTimeIntegrator1_gainval * pgnpe5ro1jc . aexyztgedn [ 0 ] +
mfkobyioa3u . e5yrdplfb2 [ 0 ] ; if ( pgnpe5ro1jc . jf2wd03mf3 [ 0 ] != 0.0 )
{ mfkobyioa3u . dx3000kbdr [ 0 ] = kwakm2xzrd .
DiscreteTimeIntegrator2_IC_j4tad5ykz4 ; } crklehj0kf = ( real_T ) pgnpe5ro1jc
. mdsl05dmxi [ 0 ] * mfkobyioa3u . dx3000kbdr [ 0 ] ; pgnpe5ro1jc .
jkojapvkzw [ 0 ] = crklehj0kf / kwakm2xzrd . mass_Value_bobjrwbmcw ; if (
kwakm2xzrd . reset_signal_Value [ 0 ] != 0.0 ) { mfkobyioa3u . btmvuptxgq [ 0
] = kwakm2xzrd . DiscreteTimeIntegrator1_IC_l2ngdxqqv3 ; } pgnpe5ro1jc .
gt11e00gkn [ 0 ] = kwakm2xzrd . DiscreteTimeIntegrator1_gainval_ddvop3rvnp *
pgnpe5ro1jc . jkojapvkzw [ 0 ] + mfkobyioa3u . btmvuptxgq [ 0 ] ;
jb5wohbh1o_p [ 0 ] = pgnpe5ro1jc . a23t0d3lvw [ 0 ] ; jb5wohbh1o_p [ 1 ] =
pgnpe5ro1jc . gt11e00gkn [ 0 ] ; pgnpe5ro1jc . o2huc0ivol [ 0 ] =
jb5wohbh1o_idx_2 ; pgnpe5ro1jc . o2huc0ivol [ 1 ] = crklehj0kf ; if (
pgnpe5ro1jc . jhrkdowu1q [ 1 ] != 0.0 ) { mfkobyioa3u . luv0nigeak [ 1 ] =
kwakm2xzrd . DiscreteTimeIntegrator2_IC ; } jb5wohbh1o_idx_2 = ( real_T )
pgnpe5ro1jc . dtxhz4a2ix [ 1 ] * mfkobyioa3u . luv0nigeak [ 1 ] ; pgnpe5ro1jc
. aexyztgedn [ 1 ] = jb5wohbh1o_idx_2 / kwakm2xzrd . mass_Value ; if (
kwakm2xzrd . reset_signal_Value [ 1 ] != 0.0 ) { mfkobyioa3u . e5yrdplfb2 [ 1
] = kwakm2xzrd . DiscreteTimeIntegrator1_IC ; } pgnpe5ro1jc . a23t0d3lvw [ 1
] = kwakm2xzrd . DiscreteTimeIntegrator1_gainval * pgnpe5ro1jc . aexyztgedn [
1 ] + mfkobyioa3u . e5yrdplfb2 [ 1 ] ; if ( pgnpe5ro1jc . jf2wd03mf3 [ 1 ] !=
0.0 ) { mfkobyioa3u . dx3000kbdr [ 1 ] = kwakm2xzrd .
DiscreteTimeIntegrator2_IC_j4tad5ykz4 ; } crklehj0kf = ( real_T ) pgnpe5ro1jc
. mdsl05dmxi [ 1 ] * mfkobyioa3u . dx3000kbdr [ 1 ] ; pgnpe5ro1jc .
jkojapvkzw [ 1 ] = crklehj0kf / kwakm2xzrd . mass_Value_bobjrwbmcw ; if (
kwakm2xzrd . reset_signal_Value [ 1 ] != 0.0 ) { mfkobyioa3u . btmvuptxgq [ 1
] = kwakm2xzrd . DiscreteTimeIntegrator1_IC_l2ngdxqqv3 ; } pgnpe5ro1jc .
gt11e00gkn [ 1 ] = kwakm2xzrd . DiscreteTimeIntegrator1_gainval_ddvop3rvnp *
pgnpe5ro1jc . jkojapvkzw [ 1 ] + mfkobyioa3u . btmvuptxgq [ 1 ] ;
jb5wohbh1o_p [ 2 ] = pgnpe5ro1jc . a23t0d3lvw [ 1 ] ; jb5wohbh1o_p [ 3 ] =
pgnpe5ro1jc . gt11e00gkn [ 1 ] ; pgnpe5ro1jc . o2huc0ivol [ 2 ] =
jb5wohbh1o_idx_2 ; pgnpe5ro1jc . o2huc0ivol [ 3 ] = crklehj0kf ; if (
pgnpe5ro1jc . jhrkdowu1q [ 2 ] != 0.0 ) { mfkobyioa3u . luv0nigeak [ 2 ] =
kwakm2xzrd . DiscreteTimeIntegrator2_IC ; } jb5wohbh1o_idx_2 = ( real_T )
pgnpe5ro1jc . dtxhz4a2ix [ 2 ] * mfkobyioa3u . luv0nigeak [ 2 ] ; pgnpe5ro1jc
. aexyztgedn [ 2 ] = jb5wohbh1o_idx_2 / kwakm2xzrd . mass_Value ; if (
kwakm2xzrd . reset_signal_Value [ 2 ] != 0.0 ) { mfkobyioa3u . e5yrdplfb2 [ 2
] = kwakm2xzrd . DiscreteTimeIntegrator1_IC ; } pgnpe5ro1jc . a23t0d3lvw [ 2
] = kwakm2xzrd . DiscreteTimeIntegrator1_gainval * pgnpe5ro1jc . aexyztgedn [
2 ] + mfkobyioa3u . e5yrdplfb2 [ 2 ] ; if ( pgnpe5ro1jc . jf2wd03mf3 [ 2 ] !=
0.0 ) { mfkobyioa3u . dx3000kbdr [ 2 ] = kwakm2xzrd .
DiscreteTimeIntegrator2_IC_j4tad5ykz4 ; } crklehj0kf = ( real_T ) pgnpe5ro1jc
. mdsl05dmxi [ 2 ] * mfkobyioa3u . dx3000kbdr [ 2 ] ; pgnpe5ro1jc .
jkojapvkzw [ 2 ] = crklehj0kf / kwakm2xzrd . mass_Value_bobjrwbmcw ; if (
kwakm2xzrd . reset_signal_Value [ 2 ] != 0.0 ) { mfkobyioa3u . btmvuptxgq [ 2
] = kwakm2xzrd . DiscreteTimeIntegrator1_IC_l2ngdxqqv3 ; } pgnpe5ro1jc .
gt11e00gkn [ 2 ] = kwakm2xzrd . DiscreteTimeIntegrator1_gainval_ddvop3rvnp *
pgnpe5ro1jc . jkojapvkzw [ 2 ] + mfkobyioa3u . btmvuptxgq [ 2 ] ;
jb5wohbh1o_p [ 4 ] = pgnpe5ro1jc . a23t0d3lvw [ 2 ] ; jb5wohbh1o_p [ 5 ] =
pgnpe5ro1jc . gt11e00gkn [ 2 ] ; for ( i = 0 ; i < 6 ; i ++ ) { pgnpe5ro1jc .
mz0qnurgag [ i ] = mfkobyioa3u . f13zyopuod [ i ] + jb5wohbh1o_p [ i ] ;
di2tgnc41b [ i ] = muDoubleScalarMod ( pgnpe5ro1jc . mz0qnurgag [ i ] ,
kwakm2xzrd . celldim_Value [ i ] ) ; bse25cksmn [ i ] = muDoubleScalarMod (
pgnpe5ro1jc . mz0qnurgag [ i ] , kwakm2xzrd . celldim1_Value [ i ] ) ; } for
( i = 0 ; i < 2 ; i ++ ) { idx = ( int32_T ) muDoubleScalarFloor ( kwakm2xzrd
. permvec_Value [ i ] ) - 1 ; if ( idx < 0 ) { idx = 0 ; } else { if ( idx >=
2 ) { idx = 1 ; } } pgnpe5ro1jc . mflfjw2sbe [ i ] = bse25cksmn [ idx ] ;
pgnpe5ro1jc . mflfjw2sbe [ i + 2 ] = bse25cksmn [ idx + 2 ] ; pgnpe5ro1jc .
mflfjw2sbe [ i + 4 ] = bse25cksmn [ idx + 4 ] ; } for ( i = 0 ; i < 2 ; i ++
) { idx = ( int32_T ) muDoubleScalarFloor ( kwakm2xzrd . permvec_Value [ i ]
) - 1 ; if ( idx < 0 ) { idx = 0 ; } else { if ( idx >= 2 ) { idx = 1 ; } }
bse25cksmn [ i ] = di2tgnc41b [ idx ] ; bse25cksmn [ i + 2 ] = di2tgnc41b [
idx + 2 ] ; bse25cksmn [ i + 4 ] = di2tgnc41b [ idx + 4 ] ; } for ( i = 0 ; i
< 6 ; i ++ ) { pgnpe5ro1jc . lz01df3oam [ i ] = pgnpe5ro1jc . mflfjw2sbe [ i
] ; } sl_interactions ( & pgnpe5ro1jc . lz01df3oam [ 0 ] , & pgnpe5ro1jc .
hvcbbqtbfi [ 0 ] , & pgnpe5ro1jc . hlb4lsy0px [ 0 ] , & pgnpe5ro1jc .
bax2hwmyr4 [ 0 ] ) ; jb5wohbh1o_p [ 0 ] = look2_binlxpw ( bse25cksmn [ 1 ] ,
bse25cksmn [ 0 ] , kwakm2xzrd . forceX_bp01Data , kwakm2xzrd .
forceX_bp02Data , kwakm2xzrd . forceX_tableData , kwakm2xzrd .
forceX_maxIndex , 50U ) ; jb5wohbh1o_p [ 1 ] = look2_binlxpw ( bse25cksmn [ 1
] , bse25cksmn [ 0 ] , kwakm2xzrd . forceY_bp01Data , kwakm2xzrd .
forceY_bp02Data , kwakm2xzrd . forceY_tableData , kwakm2xzrd .
forceY_maxIndex , 50U ) ; jb5wohbh1o_p [ 2 ] = look2_binlxpw ( bse25cksmn [ 3
] , bse25cksmn [ 2 ] , kwakm2xzrd . forceX_bp01Data , kwakm2xzrd .
forceX_bp02Data , kwakm2xzrd . forceX_tableData , kwakm2xzrd .
forceX_maxIndex , 50U ) ; jb5wohbh1o_p [ 3 ] = look2_binlxpw ( bse25cksmn [ 3
] , bse25cksmn [ 2 ] , kwakm2xzrd . forceY_bp01Data , kwakm2xzrd .
forceY_bp02Data , kwakm2xzrd . forceY_tableData , kwakm2xzrd .
forceY_maxIndex , 50U ) ; jb5wohbh1o_p [ 4 ] = look2_binlxpw ( bse25cksmn [ 5
] , bse25cksmn [ 4 ] , kwakm2xzrd . forceX_bp01Data , kwakm2xzrd .
forceX_bp02Data , kwakm2xzrd . forceX_tableData , kwakm2xzrd .
forceX_maxIndex , 50U ) ; jb5wohbh1o_p [ 5 ] = look2_binlxpw ( bse25cksmn [ 5
] , bse25cksmn [ 4 ] , kwakm2xzrd . forceY_bp01Data , kwakm2xzrd .
forceY_bp02Data , kwakm2xzrd . forceY_tableData , kwakm2xzrd .
forceY_maxIndex , 50U ) ; for ( i = 0 ; i < 6 ; i ++ ) { di2tgnc41b [ i ] =
jb5wohbh1o_p [ i ] + pgnpe5ro1jc . bax2hwmyr4 [ i ] ; bse25cksmn [ i ] =
kwakm2xzrd . Output_Gain * mfkobyioa3u . jsan3mycru [ i ] ; }
jb5wohbh1o_idx_0 = di2tgnc41b [ 1 ] ; jb5wohbh1o_p [ 0 ] = di2tgnc41b [ 0 ] ;
jb5wohbh1o_p [ 1 ] = kwakm2xzrd . zeros_Value [ 0 ] ; jb5wohbh1o_idx_1 =
di2tgnc41b [ 3 ] ; jb5wohbh1o_p [ 2 ] = di2tgnc41b [ 2 ] ; jb5wohbh1o_p [ 3 ]
= kwakm2xzrd . zeros_Value [ 1 ] ; pgnpe5ro1jc . o2huc0ivol [ 4 ] =
jb5wohbh1o_idx_2 ; pgnpe5ro1jc . o2huc0ivol [ 5 ] = crklehj0kf ;
jb5wohbh1o_idx_2 = di2tgnc41b [ 5 ] ; jb5wohbh1o_p [ 4 ] = di2tgnc41b [ 4 ] ;
jb5wohbh1o_p [ 5 ] = kwakm2xzrd . zeros_Value [ 2 ] ; for ( i = 0 ; i < 6 ; i
++ ) { di2tgnc41b [ i ] = jb5wohbh1o_p [ i ] ; } pgnpe5ro1jc . d13mqwbs4m [ 0
] = ( pgnpe5ro1jc . bvw5c55uf3 * mfkobyioa3u . luv0nigeak [ 0 ] + kwakm2xzrd
. B_Value * bse25cksmn [ 0 ] ) + di2tgnc41b [ 0 ] ; pgnpe5ro1jc . ir0rpxetoe
[ 0 ] = ( pgnpe5ro1jc . heb4ixm4x3 * mfkobyioa3u . dx3000kbdr [ 0 ] +
kwakm2xzrd . B_Value * bse25cksmn [ 3 ] ) + jb5wohbh1o_idx_0 ; pgnpe5ro1jc .
d13mqwbs4m [ 1 ] = ( pgnpe5ro1jc . bvw5c55uf3 * mfkobyioa3u . luv0nigeak [ 1
] + kwakm2xzrd . B_Value * bse25cksmn [ 1 ] ) + di2tgnc41b [ 2 ] ;
pgnpe5ro1jc . ir0rpxetoe [ 1 ] = ( pgnpe5ro1jc . heb4ixm4x3 * mfkobyioa3u .
dx3000kbdr [ 1 ] + kwakm2xzrd . B_Value * bse25cksmn [ 4 ] ) +
jb5wohbh1o_idx_1 ; pgnpe5ro1jc . d13mqwbs4m [ 2 ] = ( pgnpe5ro1jc .
bvw5c55uf3 * mfkobyioa3u . luv0nigeak [ 2 ] + kwakm2xzrd . B_Value *
bse25cksmn [ 2 ] ) + di2tgnc41b [ 4 ] ; pgnpe5ro1jc . ir0rpxetoe [ 2 ] = (
pgnpe5ro1jc . heb4ixm4x3 * mfkobyioa3u . dx3000kbdr [ 2 ] + kwakm2xzrd .
B_Value * bse25cksmn [ 5 ] ) + jb5wohbh1o_idx_2 ; if ( ssGetLogOutput ( rtS )
) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( mfkobyioa3u . cqmaavz11y . LoggedData ) , & pgnpe5ro1jc .
o2huc0ivol [ 0 ] , 0 ) ; } } } if ( ssGetLogOutput ( rtS ) ) { { double
locTime = ssGetTaskTime ( rtS , 1 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( mfkobyioa3u .
nxv0llsori . LoggedData ) , & pgnpe5ro1jc . mz0qnurgag [ 0 ] , 0 ) ; } } } if
( ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( mfkobyioa3u . bvltoxi0lq . LoggedData ) , & pgnpe5ro1jc .
mflfjw2sbe [ 0 ] , 0 ) ; } } } } UNUSED_PARAMETER ( tid ) ; } void
MdlOutputsTID2 ( int_T tid ) { int32_T i ; pgnpe5ro1jc . bvw5c55uf3 = -
kwakm2xzrd . A_Value ; pgnpe5ro1jc . heb4ixm4x3 = - kwakm2xzrd . A_Value ;
pgnpe5ro1jc . ic5l2szdcd [ 0 ] = kwakm2xzrd . freeze_signal_Value [ 0 ] ;
pgnpe5ro1jc . dtxhz4a2ix [ 0 ] = ( int16_T ) ! ( pgnpe5ro1jc . ic5l2szdcd [ 0
] != 0.0 ) ; pgnpe5ro1jc . jhrkdowu1q [ 0 ] = kwakm2xzrd . ones_Value *
kwakm2xzrd . reset_signal_Value [ 0 ] ; pgnpe5ro1jc . mdsl05dmxi [ 0 ] = (
int16_T ) ! ( pgnpe5ro1jc . ic5l2szdcd [ 0 ] != 0.0 ) ; pgnpe5ro1jc .
jf2wd03mf3 [ 0 ] = kwakm2xzrd . ones_Value_oocx40lm3j * kwakm2xzrd .
reset_signal_Value [ 0 ] ; pgnpe5ro1jc . jtfx14x1p1 [ 0 ] = kwakm2xzrd .
reset_signal_Value [ 0 ] ; pgnpe5ro1jc . jtfx14x1p1 [ 1 ] = kwakm2xzrd .
reset_signal_Value [ 0 ] ; pgnpe5ro1jc . ic5l2szdcd [ 1 ] = kwakm2xzrd .
freeze_signal_Value [ 1 ] ; pgnpe5ro1jc . dtxhz4a2ix [ 1 ] = ( int16_T ) ! (
pgnpe5ro1jc . ic5l2szdcd [ 1 ] != 0.0 ) ; pgnpe5ro1jc . jhrkdowu1q [ 1 ] =
kwakm2xzrd . ones_Value * kwakm2xzrd . reset_signal_Value [ 1 ] ; pgnpe5ro1jc
. mdsl05dmxi [ 1 ] = ( int16_T ) ! ( pgnpe5ro1jc . ic5l2szdcd [ 1 ] != 0.0 )
; pgnpe5ro1jc . jf2wd03mf3 [ 1 ] = kwakm2xzrd . ones_Value_oocx40lm3j *
kwakm2xzrd . reset_signal_Value [ 1 ] ; pgnpe5ro1jc . jtfx14x1p1 [ 2 ] =
kwakm2xzrd . reset_signal_Value [ 1 ] ; pgnpe5ro1jc . jtfx14x1p1 [ 3 ] =
kwakm2xzrd . reset_signal_Value [ 1 ] ; pgnpe5ro1jc . ic5l2szdcd [ 2 ] =
kwakm2xzrd . freeze_signal_Value [ 2 ] ; pgnpe5ro1jc . dtxhz4a2ix [ 2 ] = (
int16_T ) ! ( pgnpe5ro1jc . ic5l2szdcd [ 2 ] != 0.0 ) ; pgnpe5ro1jc .
jhrkdowu1q [ 2 ] = kwakm2xzrd . ones_Value * kwakm2xzrd . reset_signal_Value
[ 2 ] ; pgnpe5ro1jc . mdsl05dmxi [ 2 ] = ( int16_T ) ! ( pgnpe5ro1jc .
ic5l2szdcd [ 2 ] != 0.0 ) ; pgnpe5ro1jc . jf2wd03mf3 [ 2 ] = kwakm2xzrd .
ones_Value_oocx40lm3j * kwakm2xzrd . reset_signal_Value [ 2 ] ; pgnpe5ro1jc .
jtfx14x1p1 [ 4 ] = kwakm2xzrd . reset_signal_Value [ 2 ] ; pgnpe5ro1jc .
jtfx14x1p1 [ 5 ] = kwakm2xzrd . reset_signal_Value [ 2 ] ; for ( i = 0 ; i <
6 ; i ++ ) { pgnpe5ro1jc . d1bg0wxfn3 [ i ] = ! ( pgnpe5ro1jc . jtfx14x1p1 [
i ] != 0.0 ) ; } if ( ssGetLogOutput ( rtS ) ) { { double locTime =
ssGetTaskTime ( rtS , 2 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( mfkobyioa3u .
lw42huz5gz . LoggedData ) , & pgnpe5ro1jc . ic5l2szdcd [ 0 ] , 0 ) ; } } }
pgnpe5ro1jc . hvcbbqtbfi [ 0 ] = kwakm2xzrd . identity1_Value [ 0 ] ;
pgnpe5ro1jc . hlb4lsy0px [ 0 ] = pgnpe5ro1jc . ic5l2szdcd [ 0 ] ; pgnpe5ro1jc
. hvcbbqtbfi [ 1 ] = kwakm2xzrd . identity1_Value [ 1 ] ; pgnpe5ro1jc .
hlb4lsy0px [ 1 ] = pgnpe5ro1jc . ic5l2szdcd [ 1 ] ; pgnpe5ro1jc . hvcbbqtbfi
[ 2 ] = kwakm2xzrd . identity1_Value [ 2 ] ; pgnpe5ro1jc . hlb4lsy0px [ 2 ] =
pgnpe5ro1jc . ic5l2szdcd [ 2 ] ; sl_interactionsTID1 ( ) ; UNUSED_PARAMETER (
tid ) ; } void MdlUpdate ( int_T tid ) { int32_T iU ; if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { mfkobyioa3u .
jqip5ulbyv [ 0 ] = ( kwakm2xzrd . UniformRandomNumberx_Maximum - kwakm2xzrd .
UniformRandomNumberx_Minimum ) * rt_urand_Upu32_Yd_f_pw_snf ( & mfkobyioa3u .
be0xujqbrq [ 0 ] ) + kwakm2xzrd . UniformRandomNumberx_Minimum ; mfkobyioa3u
. pksdb1tv2w [ 0 ] = ( kwakm2xzrd . UniformRandomNumbery_Maximum - kwakm2xzrd
. UniformRandomNumbery_Minimum ) * rt_urand_Upu32_Yd_f_pw_snf ( & mfkobyioa3u
. dwhnbnorml [ 0 ] ) + kwakm2xzrd . UniformRandomNumbery_Minimum ;
mfkobyioa3u . jqip5ulbyv [ 1 ] = ( kwakm2xzrd . UniformRandomNumberx_Maximum
- kwakm2xzrd . UniformRandomNumberx_Minimum ) * rt_urand_Upu32_Yd_f_pw_snf (
& mfkobyioa3u . be0xujqbrq [ 1 ] ) + kwakm2xzrd .
UniformRandomNumberx_Minimum ; mfkobyioa3u . pksdb1tv2w [ 1 ] = ( kwakm2xzrd
. UniformRandomNumbery_Maximum - kwakm2xzrd . UniformRandomNumbery_Minimum )
* rt_urand_Upu32_Yd_f_pw_snf ( & mfkobyioa3u . dwhnbnorml [ 1 ] ) +
kwakm2xzrd . UniformRandomNumbery_Minimum ; mfkobyioa3u . jqip5ulbyv [ 2 ] =
( kwakm2xzrd . UniformRandomNumberx_Maximum - kwakm2xzrd .
UniformRandomNumberx_Minimum ) * rt_urand_Upu32_Yd_f_pw_snf ( & mfkobyioa3u .
be0xujqbrq [ 2 ] ) + kwakm2xzrd . UniformRandomNumberx_Minimum ; mfkobyioa3u
. pksdb1tv2w [ 2 ] = ( kwakm2xzrd . UniformRandomNumbery_Maximum - kwakm2xzrd
. UniformRandomNumbery_Minimum ) * rt_urand_Upu32_Yd_f_pw_snf ( & mfkobyioa3u
. dwhnbnorml [ 2 ] ) + kwakm2xzrd . UniformRandomNumbery_Minimum ; }
mfkobyioa3u . luv0nigeak [ 0 ] += kwakm2xzrd .
DiscreteTimeIntegrator2_gainval * pgnpe5ro1jc . d13mqwbs4m [ 0 ] ;
mfkobyioa3u . e5yrdplfb2 [ 0 ] = kwakm2xzrd . DiscreteTimeIntegrator1_gainval
* pgnpe5ro1jc . aexyztgedn [ 0 ] + pgnpe5ro1jc . a23t0d3lvw [ 0 ] ;
mfkobyioa3u . dx3000kbdr [ 0 ] += kwakm2xzrd .
DiscreteTimeIntegrator2_gainval_iujtnnssqz * pgnpe5ro1jc . ir0rpxetoe [ 0 ] ;
mfkobyioa3u . btmvuptxgq [ 0 ] = kwakm2xzrd .
DiscreteTimeIntegrator1_gainval_ddvop3rvnp * pgnpe5ro1jc . jkojapvkzw [ 0 ] +
pgnpe5ro1jc . gt11e00gkn [ 0 ] ; mfkobyioa3u . luv0nigeak [ 1 ] += kwakm2xzrd
. DiscreteTimeIntegrator2_gainval * pgnpe5ro1jc . d13mqwbs4m [ 1 ] ;
mfkobyioa3u . e5yrdplfb2 [ 1 ] = kwakm2xzrd . DiscreteTimeIntegrator1_gainval
* pgnpe5ro1jc . aexyztgedn [ 1 ] + pgnpe5ro1jc . a23t0d3lvw [ 1 ] ;
mfkobyioa3u . dx3000kbdr [ 1 ] += kwakm2xzrd .
DiscreteTimeIntegrator2_gainval_iujtnnssqz * pgnpe5ro1jc . ir0rpxetoe [ 1 ] ;
mfkobyioa3u . btmvuptxgq [ 1 ] = kwakm2xzrd .
DiscreteTimeIntegrator1_gainval_ddvop3rvnp * pgnpe5ro1jc . jkojapvkzw [ 1 ] +
pgnpe5ro1jc . gt11e00gkn [ 1 ] ; mfkobyioa3u . luv0nigeak [ 2 ] += kwakm2xzrd
. DiscreteTimeIntegrator2_gainval * pgnpe5ro1jc . d13mqwbs4m [ 2 ] ;
mfkobyioa3u . e5yrdplfb2 [ 2 ] = kwakm2xzrd . DiscreteTimeIntegrator1_gainval
* pgnpe5ro1jc . aexyztgedn [ 2 ] + pgnpe5ro1jc . a23t0d3lvw [ 2 ] ;
mfkobyioa3u . dx3000kbdr [ 2 ] += kwakm2xzrd .
DiscreteTimeIntegrator2_gainval_iujtnnssqz * pgnpe5ro1jc . ir0rpxetoe [ 2 ] ;
mfkobyioa3u . btmvuptxgq [ 2 ] = kwakm2xzrd .
DiscreteTimeIntegrator1_gainval_ddvop3rvnp * pgnpe5ro1jc . jkojapvkzw [ 2 ] +
pgnpe5ro1jc . gt11e00gkn [ 2 ] ; ogxwx0k0re ( ) ; for ( iU = 0 ; iU < 6 ; iU
++ ) { mfkobyioa3u . jsan3mycru [ iU ] = rt_nrand_Upu32_Yd_f_pw_snf ( &
mfkobyioa3u . mhsyeglu0n [ iU ] ) * kwakm2xzrd . WhiteNoise_StdDev +
kwakm2xzrd . WhiteNoise_Mean ; } } UNUSED_PARAMETER ( tid ) ; } void
MdlUpdateTID2 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void MdlTerminate
( void ) { jnbmdmhdqg ( ) ; f04maqikgc ( ) ; if ( rt_slioCatalogue ( ) != (
NULL ) ) { void * * slioCatalogueAddr = rt_slioCatalogueAddr ( ) ;
rtwSaveDatasetsToMatFile ( rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( )
) , rt_GetMatSigstreamLoggingFileName ( ) ) ; rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = NULL ; } } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 0 ) ; ssSetNumY (
rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ;
ssSetNumSampleTimes ( rtS , 2 ) ; ssSetNumBlocks ( rtS , 91 ) ;
ssSetNumBlockIO ( rtS , 22 ) ; ssSetNumBlockParams ( rtS , 3232 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.001 ) ; ssSetOffsetTime ( rtS , 0 , 1.0 ) ;
ssSetOffsetTime ( rtS , 1 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 3827255553U ) ; ssSetChecksumVal ( rtS , 1 ,
3528999091U ) ; ssSetChecksumVal ( rtS , 2 , 2712209232U ) ; ssSetChecksumVal
( rtS , 3 , 2237025405U ) ; }
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
( ( void * ) & pgnpe5ro1jc ) ) ; ( void ) memset ( ( ( void * ) & pgnpe5ro1jc
) , 0 , sizeof ( pgnpe5ro1j ) ) ; } { void * dwork = ( void * ) & mfkobyioa3u
; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork , 0 , sizeof (
mfkobyioa3 ) ) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset ( (
char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS ,
& dtInfo ) ; dtInfo . numDataTypes = 14 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . BTransTable = & rtBTransTable ; dtInfo . PTransTable = &
rtPTransTable ; dtInfo . dataTypeInfoTable = rtDataTypeInfoTable ; }
sl_pigle_main_current_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"sl_pigle_main_current" ) ; ssSetPath ( rtS , "sl_pigle_main_current" ) ;
ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 152.35000000000002 ) ;
dtonp0nc4x ( rtS , 1 , 0 , NULL , 0 , & ( rt_dataMapInfoPtr -> mmi ) ,
"sl_pigle_main_current/Interactions" , 0 , - 1 ) ; { char_T * tempStr =
rtwCAPI_EncodePath ( "sl_pigle_main_current/Interactions" ) ;
rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr ->
mmi ) , 0 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } { static RTWLogInfo
rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = NULL ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { rtliSetLogT (
ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetMMI ( ssGetRTWLogInfo ( rtS ) , & ( rt_dataMapInfoPtr -> mmi
) ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogYSignalInfo (
ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; rtliSetLogYSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static ssSolverInfo slvrInfo ;
ssSetStepSize ( rtS , 0.001 ) ; ssSetMinStepSize ( rtS , 0.0 ) ;
ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ;
ssSetMaxStepSize ( rtS , 0.001 ) ; ssSetSolverMaxOrder ( rtS , - 1 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
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
3827255553U ) ; ssSetChecksumVal ( rtS , 1 , 3528999091U ) ; ssSetChecksumVal
( rtS , 2 , 2712209232U ) ; ssSetChecksumVal ( rtS , 3 , 2237025405U ) ; {
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
