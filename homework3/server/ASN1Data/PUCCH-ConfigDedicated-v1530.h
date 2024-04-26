/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_PUCCH_ConfigDedicated_v1530_H_
#define	_PUCCH_ConfigDedicated_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUCCH_ConfigDedicated_v1530__codebooksizeDeterminationSTTI_r15 {
	PUCCH_ConfigDedicated_v1530__codebooksizeDeterminationSTTI_r15_dai	= 0,
	PUCCH_ConfigDedicated_v1530__codebooksizeDeterminationSTTI_r15_cc	= 1
} e_PUCCH_ConfigDedicated_v1530__codebooksizeDeterminationSTTI_r15;

/* PUCCH-ConfigDedicated-v1530 */
typedef struct PUCCH_ConfigDedicated_v1530 {
	long	*n1PUCCH_AN_SPT_r15	/* OPTIONAL */;
	long	*codebooksizeDeterminationSTTI_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUCCH_ConfigDedicated_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_codebooksizeDeterminationSTTI_r15_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PUCCH_ConfigDedicated_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_PUCCH_ConfigDedicated_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_PUCCH_ConfigDedicated_v1530_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PUCCH_ConfigDedicated_v1530_H_ */
#include <asn_internal.h>
