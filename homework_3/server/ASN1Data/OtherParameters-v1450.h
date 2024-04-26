/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_OtherParameters_v1450_H_
#define	_OtherParameters_v1450_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum OtherParameters_v1450__overheatingInd_r14 {
	OtherParameters_v1450__overheatingInd_r14_supported	= 0
} e_OtherParameters_v1450__overheatingInd_r14;

/* OtherParameters-v1450 */
typedef struct OtherParameters_v1450 {
	long	*overheatingInd_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OtherParameters_v1450_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_overheatingInd_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_OtherParameters_v1450;
extern asn_SEQUENCE_specifics_t asn_SPC_OtherParameters_v1450_specs_1;
extern asn_TYPE_member_t asn_MBR_OtherParameters_v1450_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _OtherParameters_v1450_H_ */
#include <asn_internal.h>
