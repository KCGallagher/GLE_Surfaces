#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "sl_pigle_main_current_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "sl_pigle_main_current.h"
#include "sl_pigle_main_current_capi.h"
#include "sl_pigle_main_current_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"sl_pigle_main_current/Matrix Concatenate" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 1 , 0 , TARGET_STRING (
"sl_pigle_main_current/Matrix Concatenate1" ) , TARGET_STRING ( "" ) , 0 , 0
, 1 , 0 , 1 } , { 2 , 0 , TARGET_STRING (
"sl_pigle_main_current/Matrix Concatenate2" ) , TARGET_STRING ( "" ) , 0 , 0
, 1 , 0 , 1 } , { 3 , 0 , TARGET_STRING (
"sl_pigle_main_current/Interactions" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0
, 0 } , { 4 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Absolute Position/Permute Matrix" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Absolute Position/Add" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/Matrix Concatenate1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/freeze_signal" ) , TARGET_STRING
( "" ) , 0 , 0 , 1 , 0 , 1 } , { 8 , 1 , TARGET_STRING (
"sl_pigle_main_current/Population 1/r_init/Matrix Concatenate" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 9 , 1 , TARGET_STRING (
"sl_pigle_main_current/Population 1/r_init/Logical Operator" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 1 } , { 10 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dx/Discrete-Time Integrator1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dx/Logical Operator3" ) ,
TARGET_STRING ( "" ) , 0 , 2 , 1 , 0 , 1 } , { 12 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dx/Divide" ) , TARGET_STRING (
"velocity" ) , 0 , 0 , 1 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dx/Product1" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 1 } , { 14 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dx/Add" ) , TARGET_STRING (
"Forces" ) , 0 , 0 , 1 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dx/Unary Minus" ) , TARGET_STRING
( "" ) , 0 , 0 , 2 , 0 , 1 } , { 16 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dy/Discrete-Time Integrator1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dy/Logical Operator3" ) ,
TARGET_STRING ( "" ) , 0 , 2 , 1 , 0 , 1 } , { 18 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dy/Divide" ) , TARGET_STRING (
"velocity" ) , 0 , 0 , 1 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dy/Product1" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 1 } , { 20 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dy/Add" ) , TARGET_STRING (
"Forces" ) , 0 , 0 , 1 , 0 , 0 } , { 21 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dy/Unary Minus" ) , TARGET_STRING
( "" ) , 0 , 0 , 2 , 0 , 1 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0
, 0 } } ; static const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 22
, TARGET_STRING ( "sl_pigle_main_current/identity 1" ) , TARGET_STRING (
"Value" ) , 0 , 3 , 0 } , { 23 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Data Store Memory" ) , TARGET_STRING (
"InitialValue" ) , 0 , 0 , 0 } , { 24 , TARGET_STRING (
"sl_pigle_main_current/Population 1/A" ) , TARGET_STRING ( "Value" ) , 0 , 2
, 0 } , { 25 , TARGET_STRING ( "sl_pigle_main_current/Population 1/B" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 26 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Absolute Position/celldim" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 27 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Absolute Position/celldim1" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 28 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Absolute Position/perm vec" ) ,
TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 29 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/freeze_signal" ) , TARGET_STRING
( "Value" ) , 0 , 3 , 0 } , { 30 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/reset_signal" ) , TARGET_STRING (
"Value" ) , 0 , 3 , 0 } , { 31 , TARGET_STRING (
"sl_pigle_main_current/Population 1/PES/force X" ) , TARGET_STRING ( "Table"
) , 0 , 5 , 0 } , { 32 , TARGET_STRING (
"sl_pigle_main_current/Population 1/PES/force X" ) , TARGET_STRING (
"BreakpointsForDimension1" ) , 0 , 6 , 0 } , { 33 , TARGET_STRING (
"sl_pigle_main_current/Population 1/PES/force X" ) , TARGET_STRING (
"BreakpointsForDimension2" ) , 0 , 7 , 0 } , { 34 , TARGET_STRING (
"sl_pigle_main_current/Population 1/PES/force X" ) , TARGET_STRING (
"maxIndex" ) , 3 , 8 , 0 } , { 35 , TARGET_STRING (
"sl_pigle_main_current/Population 1/PES/force Y" ) , TARGET_STRING ( "Table"
) , 0 , 5 , 0 } , { 36 , TARGET_STRING (
"sl_pigle_main_current/Population 1/PES/force Y" ) , TARGET_STRING (
"BreakpointsForDimension1" ) , 0 , 6 , 0 } , { 37 , TARGET_STRING (
"sl_pigle_main_current/Population 1/PES/force Y" ) , TARGET_STRING (
"BreakpointsForDimension2" ) , 0 , 7 , 0 } , { 38 , TARGET_STRING (
"sl_pigle_main_current/Population 1/PES/force Y" ) , TARGET_STRING (
"maxIndex" ) , 3 , 8 , 0 } , { 39 , TARGET_STRING (
"sl_pigle_main_current/Population 1/r_init/celldim x" ) , TARGET_STRING (
"Value" ) , 0 , 3 , 0 } , { 40 , TARGET_STRING (
"sl_pigle_main_current/Population 1/r_init/celldim y" ) , TARGET_STRING (
"Value" ) , 0 , 3 , 0 } , { 41 , TARGET_STRING (
"sl_pigle_main_current/Population 1/r_init/Uniform Random Number x" ) ,
TARGET_STRING ( "Minimum" ) , 0 , 2 , 0 } , { 42 , TARGET_STRING (
"sl_pigle_main_current/Population 1/r_init/Uniform Random Number x" ) ,
TARGET_STRING ( "Maximum" ) , 0 , 2 , 0 } , { 43 , TARGET_STRING (
"sl_pigle_main_current/Population 1/r_init/Uniform Random Number x" ) ,
TARGET_STRING ( "Seed" ) , 0 , 3 , 0 } , { 44 , TARGET_STRING (
"sl_pigle_main_current/Population 1/r_init/Uniform Random Number y" ) ,
TARGET_STRING ( "Minimum" ) , 0 , 2 , 0 } , { 45 , TARGET_STRING (
"sl_pigle_main_current/Population 1/r_init/Uniform Random Number y" ) ,
TARGET_STRING ( "Maximum" ) , 0 , 2 , 0 } , { 46 , TARGET_STRING (
"sl_pigle_main_current/Population 1/r_init/Uniform Random Number y" ) ,
TARGET_STRING ( "Seed" ) , 0 , 3 , 0 } , { 47 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/Band-Limited White Noise/Output"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 48 , TARGET_STRING (
 "sl_pigle_main_current/Population 1/Delta R/Band-Limited White Noise/White Noise"
) , TARGET_STRING ( "Mean" ) , 0 , 2 , 0 } , { 49 , TARGET_STRING (
 "sl_pigle_main_current/Population 1/Delta R/Band-Limited White Noise/White Noise"
) , TARGET_STRING ( "StdDev" ) , 0 , 2 , 0 } , { 50 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dx/mass" ) , TARGET_STRING (
"Value" ) , 0 , 2 , 0 } , { 51 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dx/ones" ) , TARGET_STRING (
"Value" ) , 0 , 2 , 0 } , { 52 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dx/zeros" ) , TARGET_STRING (
"Value" ) , 0 , 3 , 0 } , { 53 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dx/Discrete-Time Integrator1" ) ,
TARGET_STRING ( "gainval" ) , 0 , 2 , 0 } , { 54 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dx/Discrete-Time Integrator1" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 2 , 0 } , { 55 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dx/Discrete-Time Integrator2" ) ,
TARGET_STRING ( "gainval" ) , 0 , 2 , 0 } , { 56 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dx/Discrete-Time Integrator2" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 2 , 0 } , { 57 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dy/mass" ) , TARGET_STRING (
"Value" ) , 0 , 2 , 0 } , { 58 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dy/ones" ) , TARGET_STRING (
"Value" ) , 0 , 2 , 0 } , { 59 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dy/zeros" ) , TARGET_STRING (
"Value" ) , 0 , 3 , 0 } , { 60 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dy/Discrete-Time Integrator1" ) ,
TARGET_STRING ( "gainval" ) , 0 , 2 , 0 } , { 61 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dy/Discrete-Time Integrator1" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 2 , 0 } , { 62 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dy/Discrete-Time Integrator2" ) ,
TARGET_STRING ( "gainval" ) , 0 , 2 , 0 } , { 63 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dy/Discrete-Time Integrator2" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 2 , 0 } , { 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 } } ; static const rtwCAPI_States rtBlockStates [ ] = { { 64 ,
- 1 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dx/Discrete-Time\nIntegrator1" )
, TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 9 , 0 , 0 , 0 , - 1 , 0 } , { 65
, - 1 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dx/Discrete-Time\nIntegrator2" )
, TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 9 , 0 , 0 , 0 , - 1 , 0 } , { 66
, - 1 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dy/Discrete-Time\nIntegrator1" )
, TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 9 , 0 , 0 , 0 , - 1 , 0 } , { 67
, - 1 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dy/Discrete-Time\nIntegrator2" )
, TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 9 , 0 , 0 , 0 , - 1 , 0 } , { 0 ,
- 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 68 ,
TARGET_STRING ( "seed_values_1" ) , 0 , 10 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0
} } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & pgnpe5ro1jc . lz01df3oam [ 0 ] , &
pgnpe5ro1jc . hvcbbqtbfi [ 0 ] , & pgnpe5ro1jc . hlb4lsy0px [ 0 ] , &
pgnpe5ro1jc . bax2hwmyr4 [ 0 ] , & pgnpe5ro1jc . mflfjw2sbe [ 0 ] , &
pgnpe5ro1jc . mz0qnurgag [ 0 ] , & pgnpe5ro1jc . o2huc0ivol [ 0 ] , &
pgnpe5ro1jc . ic5l2szdcd [ 0 ] , & pgnpe5ro1jc . jtfx14x1p1 [ 0 ] , &
pgnpe5ro1jc . d1bg0wxfn3 [ 0 ] , & pgnpe5ro1jc . a23t0d3lvw [ 0 ] , &
pgnpe5ro1jc . dtxhz4a2ix [ 0 ] , & pgnpe5ro1jc . aexyztgedn [ 0 ] , &
pgnpe5ro1jc . jhrkdowu1q [ 0 ] , & pgnpe5ro1jc . d13mqwbs4m [ 0 ] , &
pgnpe5ro1jc . bvw5c55uf3 , & pgnpe5ro1jc . gt11e00gkn [ 0 ] , & pgnpe5ro1jc .
mdsl05dmxi [ 0 ] , & pgnpe5ro1jc . jkojapvkzw [ 0 ] , & pgnpe5ro1jc .
jf2wd03mf3 [ 0 ] , & pgnpe5ro1jc . ir0rpxetoe [ 0 ] , & pgnpe5ro1jc .
heb4ixm4x3 , & kwakm2xzrd . identity1_Value [ 0 ] , & kwakm2xzrd .
DataStoreMemory_InitialValue [ 0 ] , & kwakm2xzrd . A_Value , & kwakm2xzrd .
B_Value , & kwakm2xzrd . celldim_Value [ 0 ] , & kwakm2xzrd . celldim1_Value
[ 0 ] , & kwakm2xzrd . permvec_Value [ 0 ] , & kwakm2xzrd .
freeze_signal_Value [ 0 ] , & kwakm2xzrd . reset_signal_Value [ 0 ] , &
kwakm2xzrd . forceX_tableData [ 0 ] , & kwakm2xzrd . forceX_bp01Data [ 0 ] ,
& kwakm2xzrd . forceX_bp02Data [ 0 ] , & kwakm2xzrd . forceX_maxIndex [ 0 ] ,
& kwakm2xzrd . forceY_tableData [ 0 ] , & kwakm2xzrd . forceY_bp01Data [ 0 ]
, & kwakm2xzrd . forceY_bp02Data [ 0 ] , & kwakm2xzrd . forceY_maxIndex [ 0 ]
, & kwakm2xzrd . celldimx_Value [ 0 ] , & kwakm2xzrd . celldimy_Value [ 0 ] ,
& kwakm2xzrd . UniformRandomNumberx_Minimum , & kwakm2xzrd .
UniformRandomNumberx_Maximum , & kwakm2xzrd . UniformRandomNumberx_Seed [ 0 ]
, & kwakm2xzrd . UniformRandomNumbery_Minimum , & kwakm2xzrd .
UniformRandomNumbery_Maximum , & kwakm2xzrd . UniformRandomNumbery_Seed [ 0 ]
, & kwakm2xzrd . Output_Gain , & kwakm2xzrd . WhiteNoise_Mean , & kwakm2xzrd
. WhiteNoise_StdDev , & kwakm2xzrd . mass_Value , & kwakm2xzrd . ones_Value ,
& kwakm2xzrd . zeros_Value [ 0 ] , & kwakm2xzrd .
DiscreteTimeIntegrator1_gainval , & kwakm2xzrd . DiscreteTimeIntegrator1_IC ,
& kwakm2xzrd . DiscreteTimeIntegrator2_gainval , & kwakm2xzrd .
DiscreteTimeIntegrator2_IC , & kwakm2xzrd . mass_Value_bobjrwbmcw , &
kwakm2xzrd . ones_Value_oocx40lm3j , & kwakm2xzrd . zeros_Value_cq0rpxk0gt [
0 ] , & kwakm2xzrd . DiscreteTimeIntegrator1_gainval_ddvop3rvnp , &
kwakm2xzrd . DiscreteTimeIntegrator1_IC_l2ngdxqqv3 , & kwakm2xzrd .
DiscreteTimeIntegrator2_gainval_iujtnnssqz , & kwakm2xzrd .
DiscreteTimeIntegrator2_IC_j4tad5ykz4 , & mfkobyioa3u . e5yrdplfb2 [ 0 ] , &
mfkobyioa3u . luv0nigeak [ 0 ] , & mfkobyioa3u . btmvuptxgq [ 0 ] , &
mfkobyioa3u . dx3000kbdr [ 0 ] , rtP_seed_values_1 , } ; static int32_T *
rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } , {
"unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , SS_BOOLEAN , 0
, 0 , 0 } , { "short" , "int16_T" , 0 , 0 , sizeof ( int16_T ) , SS_INT16 , 0
, 0 , 0 } , { "unsigned int" , "uint32_T" , 0 , 0 , sizeof ( uint32_T ) ,
SS_UINT32 , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_MATRIX_COL_MAJOR , 0 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 2 , 2 ,
0 } , { rtwCAPI_SCALAR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 6 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 8 , 2 , 0 } , {
rtwCAPI_VECTOR , 10 , 2 , 0 } , { rtwCAPI_VECTOR , 12 , 2 , 0 } , {
rtwCAPI_VECTOR , 14 , 2 , 0 } , { rtwCAPI_VECTOR , 16 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR_ND , 18 , 3 , 0 } } ; static const uint_T
rtDimensionArray [ ] = { 2 , 3 , 1 , 3 , 1 , 1 , 1 , 2 , 50 , 30 , 1 , 50 , 1
, 30 , 2 , 1 , 3 , 1 , 1 , 3 , 2 } ; static const real_T rtcapiStoredFloats [
] = { 0.001 , 0.0 } ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { (
NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 1 ,
0 } , { ( NULL ) , ( NULL ) , 2 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 22 , ( NULL )
, 0 , ( NULL ) , 0 } , { rtBlockParameters , 42 , rtModelParameters , 1 } , {
rtBlockStates , 4 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap ,
rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" , { 3827255553U
, 3528999091U , 2712209232U , 2237025405U } , ( NULL ) , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * sl_pigle_main_current_GetCAPIStaticMap (
void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void sl_pigle_main_current_InitializeDataMapInfo ( void ) {
rtwCAPI_SetVersion ( ( * rt_dataMapInfoPtr ) . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetDataAddressMap ( ( * rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ;
rtwCAPI_SetVarDimsAddressMap ( ( * rt_dataMapInfoPtr ) . mmi ,
rtVarDimsAddrMap ) ; rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr )
. mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi
, ( * rt_dataMapInfoPtr ) . childMMI ) ; rtwCAPI_SetChildMMIArrayLen ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void sl_pigle_main_current_host_InitializeDataMapInfo (
sl_pigle_main_current_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
dataMap -> childMMI [ 0 ] = & ( dataMap -> child0 . mmi ) ;
sl_interactions_host_InitializeDataMapInfo ( & ( dataMap -> child0 ) ,
"sl_pigle_main_current/Interactions" ) ; rtwCAPI_SetChildMMIArray ( dataMap
-> mmi , dataMap -> childMMI ) ; rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi
, 1 ) ; }
#ifdef __cplusplus
}
#endif
#endif
