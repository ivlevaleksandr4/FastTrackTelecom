/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_VarLogMeasReport_r10_H_
#define	_VarLogMeasReport_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TraceReference-r10.h"
#include <OCTET_STRING.h>
#include "PLMN-Identity.h"
#include "AbsoluteTimeInfo-r10.h"
#include "LogMeasInfoList2-r10.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* VarLogMeasReport-r10 */
typedef struct VarLogMeasReport_r10 {
	TraceReference_r10_t	 traceReference_r10;
	OCTET_STRING_t	 traceRecordingSessionRef_r10;
	OCTET_STRING_t	 tce_Id_r10;
	PLMN_Identity_t	 plmn_Identity_r10;
	AbsoluteTimeInfo_r10_t	 absoluteTimeInfo_r10;
	LogMeasInfoList2_r10_t	 logMeasInfoList_r10;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VarLogMeasReport_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VarLogMeasReport_r10;

#ifdef __cplusplus
}
#endif

#endif	/* _VarLogMeasReport_r10_H_ */
#include <asn_internal.h>
