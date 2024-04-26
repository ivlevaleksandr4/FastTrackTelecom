/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_CRS_AssistanceInfo_r15_H_
#define	_CRS_AssistanceInfo_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhysCellId.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CRS_AssistanceInfo_r15__crs_IntfMitigEnabled_15 {
	CRS_AssistanceInfo_r15__crs_IntfMitigEnabled_15_enabled	= 0
} e_CRS_AssistanceInfo_r15__crs_IntfMitigEnabled_15;

/* CRS-AssistanceInfo-r15 */
typedef struct CRS_AssistanceInfo_r15 {
	PhysCellId_t	 physCellId_r15;
	long	*crs_IntfMitigEnabled_15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CRS_AssistanceInfo_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_crs_IntfMitigEnabled_15_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CRS_AssistanceInfo_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_CRS_AssistanceInfo_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_CRS_AssistanceInfo_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CRS_AssistanceInfo_r15_H_ */
#include <asn_internal.h>
