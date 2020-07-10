#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "frmBuilder_sl_interactions_with_sfun_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "frmBuilder_sl_interactions_with_sfun.h"
#include "frmBuilder_sl_interactions_with_sfun_capi.h"
#include "frmBuilder_sl_interactions_with_sfun_private.h"
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
, TARGET_STRING (
"frmBuilder_sl_interactions_with_sfun/Counter\nLimited/Output" ) ,
TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 0 , -
1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void frmBuilder_sl_interactions_with_sfun_InitializeDataAddr ( void *
dataAddr [ ] ) { dataAddr [ 0 ] = ( void * ) ( & lwptvauccs5 . elmzpr4w3v ) ;
}
#endif
#ifndef HOST_CAPI_BUILD
static void frmBuilder_sl_interactions_with_sfun_InitializeVarDimsAddr (
int32_T * vardimsAddr [ ] ) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void frmBuilder_sl_interactions_with_sfun_InitializeLoggingFunctions (
RTWLoggingFcnPtr loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { {
"unsigned char" , "uint8_T" , 0 , 0 , sizeof ( uint8_T ) , SS_UINT8 , 0 , 0 ,
0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 1 , 1
} ; static const real_T rtcapiStoredFloats [ ] = { 0.2 , 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 1 ] , 0 , 0 } } ; static int_T
rtContextSystems [ 2 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] =
{ { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 2 , rtContextSystems , loggingMetaInfo , 0 , NULL ,
{ 0 , NULL , NULL } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 1 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 2153158766U , 1413582232U , 290221728U ,
1758668587U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo *
frmBuilder_sl_interactions_with_sfun_GetCAPIStaticMap ( void ) { return &
mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void frmBuilder_sl_interactions_with_sfun_InitializeSystemRan (
e45f22iatl * const owevraunpv , sysRanDType * systemRan [ ] , int_T systemTid
[ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( owevraunpv )
; systemRan [ 0 ] = ( sysRanDType * ) rootSysRanPtr ; systemRan [ 1 ] = (
NULL ) ; systemTid [ 1 ] = rootTid ; systemTid [ 0 ] = rootTid ;
rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void frmBuilder_sl_interactions_with_sfun_InitializeDataMapInfo ( e45f22iatl
* const owevraunpv , void * sysRanPtr , int contextTid ) { rtwCAPI_SetVersion
( owevraunpv -> DataMapInfo . mmi , 1 ) ; rtwCAPI_SetStaticMap ( owevraunpv
-> DataMapInfo . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap (
owevraunpv -> DataMapInfo . mmi , & mmiStaticInfoLogging ) ;
frmBuilder_sl_interactions_with_sfun_InitializeDataAddr ( owevraunpv ->
DataMapInfo . dataAddress ) ; rtwCAPI_SetDataAddressMap ( owevraunpv ->
DataMapInfo . mmi , owevraunpv -> DataMapInfo . dataAddress ) ;
frmBuilder_sl_interactions_with_sfun_InitializeVarDimsAddr ( owevraunpv ->
DataMapInfo . vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( owevraunpv ->
DataMapInfo . mmi , owevraunpv -> DataMapInfo . vardimsAddress ) ;
rtwCAPI_SetPath ( owevraunpv -> DataMapInfo . mmi , ( NULL ) ) ;
rtwCAPI_SetFullPath ( owevraunpv -> DataMapInfo . mmi , ( NULL ) ) ;
frmBuilder_sl_interactions_with_sfun_InitializeLoggingFunctions ( owevraunpv
-> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( owevraunpv ->
DataMapInfo . mmi , owevraunpv -> DataMapInfo . loggingPtrs ) ;
rtwCAPI_SetInstanceLoggingInfo ( owevraunpv -> DataMapInfo . mmi , &
owevraunpv -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
owevraunpv -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen (
owevraunpv -> DataMapInfo . mmi , 0 ) ;
frmBuilder_sl_interactions_with_sfun_InitializeSystemRan ( owevraunpv ,
owevraunpv -> DataMapInfo . systemRan , owevraunpv -> DataMapInfo . systemTid
, sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( owevraunpv -> DataMapInfo
. mmi , owevraunpv -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
owevraunpv -> DataMapInfo . mmi , owevraunpv -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( owevraunpv -> DataMapInfo . mmi , & owevraunpv ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void frmBuilder_sl_interactions_with_sfun_host_InitializeDataMapInfo (
frmBuilder_sl_interactions_with_sfun_host_DataMapInfo_T * dataMap , const
char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
