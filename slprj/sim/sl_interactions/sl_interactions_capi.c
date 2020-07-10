#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "sl_interactions_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "sl_interactions.h"
#include "sl_interactions_capi.h"
#include "sl_interactions_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , - 1
, ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "" , "" , 0 ,
0 , 0 , 0 , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 0 , 0 } } ; static uint_T rtDimensionArray [ ] = { 0 } ;
static rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( NULL ) , ( NULL ) , 0 , 0 } } ; static int_T
rtContextSystems [ 2 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] =
{ { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 2 , rtContextSystems , loggingMetaInfo , 0 , NULL ,
{ 0 , NULL , NULL } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 0 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 1561041309U , 647503648U , 768529094U ,
3606720078U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * sl_interactions_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void sl_interactions_InitializeSystemRan ( j3rlvzivig * const
de0xo2sqs5 , sysRanDType * systemRan [ ] , int_T systemTid [ ] , void *
rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( de0xo2sqs5 ) ; systemRan [
0 ] = ( sysRanDType * ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ;
systemTid [ 1 ] = rootTid ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0
] = 0 ; rtContextSystems [ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void sl_interactions_InitializeDataMapInfo ( j3rlvzivig * const de0xo2sqs5 ,
void * sysRanPtr , int contextTid ) { rtwCAPI_SetVersion ( de0xo2sqs5 ->
DataMapInfo . mmi , 1 ) ; rtwCAPI_SetStaticMap ( de0xo2sqs5 -> DataMapInfo .
mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( de0xo2sqs5 -> DataMapInfo
. mmi , & mmiStaticInfoLogging ) ; rtwCAPI_SetPath ( de0xo2sqs5 ->
DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath ( de0xo2sqs5 ->
DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetInstanceLoggingInfo ( de0xo2sqs5
-> DataMapInfo . mmi , & de0xo2sqs5 -> DataMapInfo . mmiLogInstanceInfo ) ;
rtwCAPI_SetChildMMIArray ( de0xo2sqs5 -> DataMapInfo . mmi , de0xo2sqs5 ->
DataMapInfo . childMMI ) ; rtwCAPI_SetChildMMIArrayLen ( de0xo2sqs5 ->
DataMapInfo . mmi , 1 ) ; sl_interactions_InitializeSystemRan ( de0xo2sqs5 ,
de0xo2sqs5 -> DataMapInfo . systemRan , de0xo2sqs5 -> DataMapInfo . systemTid
, sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( de0xo2sqs5 -> DataMapInfo
. mmi , de0xo2sqs5 -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
de0xo2sqs5 -> DataMapInfo . mmi , de0xo2sqs5 -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( de0xo2sqs5 -> DataMapInfo . mmi , & de0xo2sqs5 ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void sl_interactions_host_InitializeDataMapInfo (
sl_interactions_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
dataMap -> childMMI [ 0 ] = & ( dataMap -> child0 . mmi ) ;
frmBuilder_sl_interactions_with_sfun_host_InitializeDataMapInfo ( & ( dataMap
-> child0 ) , "sl_interactions/Model" ) ; rtwCAPI_SetChildMMIArray ( dataMap
-> mmi , dataMap -> childMMI ) ; rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi
, 1 ) ; }
#ifdef __cplusplus
}
#endif
#endif
