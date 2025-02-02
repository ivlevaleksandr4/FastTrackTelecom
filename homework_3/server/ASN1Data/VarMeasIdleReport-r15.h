/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_VarMeasIdleReport_r15_H_
#define	_VarMeasIdleReport_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasResultListIdle-r15.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* VarMeasIdleReport-r15 */
typedef struct VarMeasIdleReport_r15 {
	MeasResultListIdle_r15_t	 measReportIdle_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VarMeasIdleReport_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VarMeasIdleReport_r15;

#ifdef __cplusplus
}
#endif

#endif	/* _VarMeasIdleReport_r15_H_ */
#include <asn_internal.h>
