/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_MeasIdToRemoveListExt_r12_H_
#define	_MeasIdToRemoveListExt_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasId-v1250.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasIdToRemoveListExt-r12 */
typedef struct MeasIdToRemoveListExt_r12 {
	A_SEQUENCE_OF(MeasId_v1250_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasIdToRemoveListExt_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasIdToRemoveListExt_r12;
extern asn_SET_OF_specifics_t asn_SPC_MeasIdToRemoveListExt_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasIdToRemoveListExt_r12_1[1];
extern asn_per_constraints_t asn_PER_type_MeasIdToRemoveListExt_r12_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasIdToRemoveListExt_r12_H_ */
#include <asn_internal.h>
