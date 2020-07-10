#ifndef RTW_HEADER_sl_interactions_cap_host_h_
#define RTW_HEADER_sl_interactions_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
#include "frmBuilder_sl_interactions_with_sfun_capi_host.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo *
childMMI [ 1 ] ; frmBuilder_sl_interactions_with_sfun_host_DataMapInfo_T
child0 ; } sl_interactions_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void sl_interactions_host_InitializeDataMapInfo (
sl_interactions_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
