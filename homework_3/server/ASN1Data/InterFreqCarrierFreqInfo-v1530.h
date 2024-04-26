/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_InterFreqCarrierFreqInfo_v1530_H_
#define	_InterFreqCarrierFreqInfo_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterFreqNeighHSDN_CellList_r15;
struct CellSelectionInfoCE_v1530;

/* InterFreqCarrierFreqInfo-v1530 */
typedef struct InterFreqCarrierFreqInfo_v1530 {
	BOOLEAN_t	 hsdn_Indication_r15;
	struct InterFreqNeighHSDN_CellList_r15	*interFreqNeighHSDN_CellList_r15	/* OPTIONAL */;
	struct CellSelectionInfoCE_v1530	*cellSelectionInfoCE_v1530	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqCarrierFreqInfo_v1530_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqCarrierFreqInfo_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_InterFreqCarrierFreqInfo_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_InterFreqCarrierFreqInfo_v1530_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _InterFreqCarrierFreqInfo_v1530_H_ */
#include <asn_internal.h>
