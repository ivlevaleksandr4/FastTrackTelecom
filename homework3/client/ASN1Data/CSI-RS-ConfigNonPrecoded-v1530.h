/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_CSI_RS_ConfigNonPrecoded_v1530_H_
#define	_CSI_RS_ConfigNonPrecoded_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct P_C_AndCBSR_Pair_r15;

/* CSI-RS-ConfigNonPrecoded-v1530 */
typedef struct CSI_RS_ConfigNonPrecoded_v1530 {
	struct P_C_AndCBSR_Pair_r15	*p_C_AndCBSRList_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_RS_ConfigNonPrecoded_v1530_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSI_RS_ConfigNonPrecoded_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_CSI_RS_ConfigNonPrecoded_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_CSI_RS_ConfigNonPrecoded_v1530_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _CSI_RS_ConfigNonPrecoded_v1530_H_ */
#include <asn_internal.h>
