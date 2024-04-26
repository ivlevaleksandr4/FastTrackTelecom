/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_MBSFN_SubframeConfigList_H_
#define	_MBSFN_SubframeConfigList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MBSFN_SubframeConfig;

/* MBSFN-SubframeConfigList */
typedef struct MBSFN_SubframeConfigList {
	A_SEQUENCE_OF(struct MBSFN_SubframeConfig) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBSFN_SubframeConfigList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBSFN_SubframeConfigList;
extern asn_SET_OF_specifics_t asn_SPC_MBSFN_SubframeConfigList_specs_1;
extern asn_TYPE_member_t asn_MBR_MBSFN_SubframeConfigList_1[1];
extern asn_per_constraints_t asn_PER_type_MBSFN_SubframeConfigList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _MBSFN_SubframeConfigList_H_ */
#include <asn_internal.h>
