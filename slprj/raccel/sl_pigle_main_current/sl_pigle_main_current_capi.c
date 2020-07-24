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
"sl_pigle_main_current/Selector 1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 1 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Absolute Position/Permute Matrix" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 2 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Absolute Position/Add" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 1 } , { 3 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/Matrix Concatenate" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 4 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/Matrix Concatenate1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 5 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/freeze_signal" ) , TARGET_STRING
( "" ) , 0 , 0 , 1 , 0 , 0 } , { 6 , 1 , TARGET_STRING (
"sl_pigle_main_current/Population 1/r_init/Matrix Concatenate" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 7 , 1 , TARGET_STRING (
"sl_pigle_main_current/Population 1/r_init/Logical Operator" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dx/Discrete-Time Integrator1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 9 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dx/Logical Operator3" ) ,
TARGET_STRING ( "" ) , 0 , 2 , 1 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dx/Divide" ) , TARGET_STRING (
"velocity" ) , 0 , 0 , 1 , 0 , 1 } , { 11 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dx/Product1" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dx/Add" ) , TARGET_STRING (
"Forces" ) , 0 , 0 , 1 , 0 , 1 } , { 13 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dx/Unary Minus" ) , TARGET_STRING
( "" ) , 0 , 0 , 1 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dy/Discrete-Time Integrator1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 15 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dy/Logical Operator3" ) ,
TARGET_STRING ( "" ) , 0 , 2 , 1 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dy/Divide" ) , TARGET_STRING (
"velocity" ) , 0 , 0 , 1 , 0 , 1 } , { 17 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dy/Product1" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 0 } , { 18 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dy/Add" ) , TARGET_STRING (
"Forces" ) , 0 , 0 , 1 , 0 , 1 } , { 19 , 0 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dy/Unary Minus" ) , TARGET_STRING
( "" ) , 0 , 0 , 1 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0
, 0 } } ; static const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 20
, TARGET_STRING ( "sl_pigle_main_current/Interactions" ) , TARGET_STRING (
"Value" ) , 0 , 2 , 0 } , { 21 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Data Store Memory" ) , TARGET_STRING (
"InitialValue" ) , 0 , 2 , 0 } , { 22 , TARGET_STRING (
"sl_pigle_main_current/Population 1/A" ) , TARGET_STRING ( "Value" ) , 0 , 1
, 0 } , { 23 , TARGET_STRING ( "sl_pigle_main_current/Population 1/B" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 24 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Absolute Position/celldim" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 25 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Absolute Position/celldim1" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 26 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Absolute Position/perm vec" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 27 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/freeze_signal" ) , TARGET_STRING
( "Value" ) , 0 , 1 , 0 } , { 28 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/reset_signal" ) , TARGET_STRING (
"Value" ) , 0 , 1 , 0 } , { 29 , TARGET_STRING (
"sl_pigle_main_current/Population 1/PES/force X" ) , TARGET_STRING ( "Table"
) , 0 , 4 , 0 } , { 30 , TARGET_STRING (
"sl_pigle_main_current/Population 1/PES/force X" ) , TARGET_STRING (
"BreakpointsForDimension1" ) , 0 , 5 , 0 } , { 31 , TARGET_STRING (
"sl_pigle_main_current/Population 1/PES/force X" ) , TARGET_STRING (
"BreakpointsForDimension2" ) , 0 , 6 , 0 } , { 32 , TARGET_STRING (
"sl_pigle_main_current/Population 1/PES/force X" ) , TARGET_STRING (
"maxIndex" ) , 3 , 2 , 0 } , { 33 , TARGET_STRING (
"sl_pigle_main_current/Population 1/PES/force Y" ) , TARGET_STRING ( "Table"
) , 0 , 4 , 0 } , { 34 , TARGET_STRING (
"sl_pigle_main_current/Population 1/PES/force Y" ) , TARGET_STRING (
"BreakpointsForDimension1" ) , 0 , 5 , 0 } , { 35 , TARGET_STRING (
"sl_pigle_main_current/Population 1/PES/force Y" ) , TARGET_STRING (
"BreakpointsForDimension2" ) , 0 , 6 , 0 } , { 36 , TARGET_STRING (
"sl_pigle_main_current/Population 1/PES/force Y" ) , TARGET_STRING (
"maxIndex" ) , 3 , 2 , 0 } , { 37 , TARGET_STRING (
"sl_pigle_main_current/Population 1/r_init/celldim x" ) , TARGET_STRING (
"Value" ) , 0 , 1 , 0 } , { 38 , TARGET_STRING (
"sl_pigle_main_current/Population 1/r_init/celldim y" ) , TARGET_STRING (
"Value" ) , 0 , 1 , 0 } , { 39 , TARGET_STRING (
"sl_pigle_main_current/Population 1/r_init/Uniform Random Number x" ) ,
TARGET_STRING ( "Minimum" ) , 0 , 1 , 0 } , { 40 , TARGET_STRING (
"sl_pigle_main_current/Population 1/r_init/Uniform Random Number x" ) ,
TARGET_STRING ( "Maximum" ) , 0 , 1 , 0 } , { 41 , TARGET_STRING (
"sl_pigle_main_current/Population 1/r_init/Uniform Random Number x" ) ,
TARGET_STRING ( "Seed" ) , 0 , 1 , 0 } , { 42 , TARGET_STRING (
"sl_pigle_main_current/Population 1/r_init/Uniform Random Number y" ) ,
TARGET_STRING ( "Minimum" ) , 0 , 1 , 0 } , { 43 , TARGET_STRING (
"sl_pigle_main_current/Population 1/r_init/Uniform Random Number y" ) ,
TARGET_STRING ( "Maximum" ) , 0 , 1 , 0 } , { 44 , TARGET_STRING (
"sl_pigle_main_current/Population 1/r_init/Uniform Random Number y" ) ,
TARGET_STRING ( "Seed" ) , 0 , 1 , 0 } , { 45 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/Band-Limited White Noise/Output"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 46 , TARGET_STRING (
 "sl_pigle_main_current/Population 1/Delta R/Band-Limited White Noise/White Noise"
) , TARGET_STRING ( "Mean" ) , 0 , 1 , 0 } , { 47 , TARGET_STRING (
 "sl_pigle_main_current/Population 1/Delta R/Band-Limited White Noise/White Noise"
) , TARGET_STRING ( "StdDev" ) , 0 , 1 , 0 } , { 48 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dx/mass" ) , TARGET_STRING (
"Value" ) , 0 , 1 , 0 } , { 49 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dx/ones" ) , TARGET_STRING (
"Value" ) , 0 , 1 , 0 } , { 50 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dx/zeros" ) , TARGET_STRING (
"Value" ) , 0 , 1 , 0 } , { 51 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dx/Discrete-Time Integrator1" ) ,
TARGET_STRING ( "gainval" ) , 0 , 1 , 0 } , { 52 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dx/Discrete-Time Integrator1" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 53 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dx/Discrete-Time Integrator2" ) ,
TARGET_STRING ( "gainval" ) , 0 , 1 , 0 } , { 54 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dx/Discrete-Time Integrator2" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 55 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dy/mass" ) , TARGET_STRING (
"Value" ) , 0 , 1 , 0 } , { 56 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dy/ones" ) , TARGET_STRING (
"Value" ) , 0 , 1 , 0 } , { 57 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dy/zeros" ) , TARGET_STRING (
"Value" ) , 0 , 1 , 0 } , { 58 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dy/Discrete-Time Integrator1" ) ,
TARGET_STRING ( "gainval" ) , 0 , 1 , 0 } , { 59 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dy/Discrete-Time Integrator1" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 60 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dy/Discrete-Time Integrator2" ) ,
TARGET_STRING ( "gainval" ) , 0 , 1 , 0 } , { 61 , TARGET_STRING (
"sl_pigle_main_current/Population 1/Delta R/dy/Discrete-Time Integrator2" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [
] = { { 62 , TARGET_STRING ( "seed_values_1" ) , 0 , 7 , 0 } , { 0 , ( NULL )
, 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . czszrqhgbn [ 0 ] , & rtB .
a01jyq3kex [ 0 ] , & rtB . bkxfqi0pxq [ 0 ] , & rtB . k0aotrxxhp [ 0 ] , &
rtB . akgj1ibwf3 [ 0 ] , & rtB . bhc54zc0ex , & rtB . awprf41k1q [ 0 ] , &
rtB . ea2wltz1rm [ 0 ] , & rtB . k0aotrxxhp [ 0 ] , & rtB . lg50ovp1y5 , &
rtB . aozy4iaksv , & rtB . auxnwxtfvo , & rtB . h0heujskh3 , & rtB .
jruwlwzzf4 , ( & rtB . k0aotrxxhp [ 0 ] + 1 ) , & rtB . iver2udidl , & rtB .
apwemeo1pz , & rtB . eprwmaok5p , & rtB . ldr2mikqjb , & rtB . er40lujdmg , &
rtP . Interactions_Value [ 0 ] , & rtP . DataStoreMemory_InitialValue [ 0 ] ,
& rtP . A_Value , & rtP . B_Value , & rtP . celldim_Value [ 0 ] , & rtP .
celldim1_Value [ 0 ] , & rtP . permvec_Value [ 0 ] , & rtP .
freeze_signal_Value , & rtP . reset_signal_Value , & rtP . forceX_tableData [
0 ] , & rtP . forceX_bp01Data [ 0 ] , & rtP . forceX_bp02Data [ 0 ] , & rtP .
forceX_maxIndex [ 0 ] , & rtP . forceY_tableData [ 0 ] , & rtP .
forceY_bp01Data [ 0 ] , & rtP . forceY_bp02Data [ 0 ] , & rtP .
forceY_maxIndex [ 0 ] , & rtP . celldimx_Value , & rtP . celldimy_Value , &
rtP . UniformRandomNumberx_Minimum , & rtP . UniformRandomNumberx_Maximum , &
rtP . UniformRandomNumberx_Seed , & rtP . UniformRandomNumbery_Minimum , &
rtP . UniformRandomNumbery_Maximum , & rtP . UniformRandomNumbery_Seed , &
rtP . Output_Gain , & rtP . WhiteNoise_Mean , & rtP . WhiteNoise_StdDev , &
rtP . mass_Value , & rtP . ones_Value , & rtP . zeros_Value , & rtP .
DiscreteTimeIntegrator1_gainval , & rtP . DiscreteTimeIntegrator1_IC , & rtP
. DiscreteTimeIntegrator2_gainval , & rtP . DiscreteTimeIntegrator2_IC , &
rtP . mass_Value_ay4mlzeqvo , & rtP . ones_Value_a523d0oiup , & rtP .
zeros_Value_ljr13py54z , & rtP . DiscreteTimeIntegrator1_gainval_mmm5abugrv ,
& rtP . DiscreteTimeIntegrator1_IC_fwd0synzow , & rtP .
DiscreteTimeIntegrator2_gainval_pfp1n5ezxj , & rtP .
DiscreteTimeIntegrator2_IC_a5b0eygpkp , & rtP . seed_values_1 [ 0 ] , } ;
static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
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
rtwCAPI_MATRIX_COL_MAJOR , 0 , 2 , 0 } , { rtwCAPI_SCALAR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 4 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 6 , 2 , 0 } , { rtwCAPI_VECTOR , 8 , 2 , 0 } , {
rtwCAPI_VECTOR , 10 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR_ND , 12 , 3 , 0 }
} ; static const uint_T rtDimensionArray [ ] = { 2 , 1 , 1 , 1 , 1 , 2 , 50 ,
30 , 1 , 50 , 1 , 30 , 1 , 1 , 2 } ; static const real_T rtcapiStoredFloats [
] = { 2.0E-5 , 0.0 } ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { (
NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( NULL ) , ( NULL ) , 2 , 0 }
, { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) &
rtcapiStoredFloats [ 1 ] , 1 , 0 } } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 20 , ( NULL ) , 0 , ( NULL ) , 0 } , {
rtBlockParameters , 42 , rtModelParameters , 1 } , { ( NULL ) , 0 } , {
rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap
, rtDimensionArray } , "float" , { 1797516055U , 1455765115U , 654015503U ,
3858682458U } , ( NULL ) , 0 , 0 } ; const rtwCAPI_ModelMappingStaticInfo *
sl_pigle_main_current_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void sl_pigle_main_current_InitializeDataMapInfo ( void ) {
rtwCAPI_SetVersion ( ( * rt_dataMapInfoPtr ) . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetDataAddressMap ( ( * rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ;
rtwCAPI_SetVarDimsAddressMap ( ( * rt_dataMapInfoPtr ) . mmi ,
rtVarDimsAddrMap ) ; rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr )
. mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi
, ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi ,
0 ) ; }
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
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
