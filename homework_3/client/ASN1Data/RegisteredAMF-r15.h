/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_RegisteredAMF_r15_H_
#define	_RegisteredAMF_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AMF-Identifier-r15.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PLMN_Identity;

/* RegisteredAMF-r15 */
typedef struct RegisteredAMF_r15 {
	struct PLMN_Identity	*plmn_Identity_r15	/* OPTIONAL */;
	AMF_Identifier_r15_t	 amf_Identifier_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RegisteredAMF_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RegisteredAMF_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_RegisteredAMF_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_RegisteredAMF_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RegisteredAMF_r15_H_ */
#include <asn_internal.h>
