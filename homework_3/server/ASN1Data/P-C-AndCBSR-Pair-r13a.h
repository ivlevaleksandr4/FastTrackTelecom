/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_P_C_AndCBSR_Pair_r13a_H_
#define	_P_C_AndCBSR_Pair_r13a_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct P_C_AndCBSR_r11;

/* P-C-AndCBSR-Pair-r13a */
typedef struct P_C_AndCBSR_Pair_r13a {
	A_SEQUENCE_OF(struct P_C_AndCBSR_r11) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} P_C_AndCBSR_Pair_r13a_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_P_C_AndCBSR_Pair_r13a;
extern asn_SET_OF_specifics_t asn_SPC_P_C_AndCBSR_Pair_r13a_specs_1;
extern asn_TYPE_member_t asn_MBR_P_C_AndCBSR_Pair_r13a_1[1];
extern asn_per_constraints_t asn_PER_type_P_C_AndCBSR_Pair_r13a_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _P_C_AndCBSR_Pair_r13a_H_ */
#include <asn_internal.h>
