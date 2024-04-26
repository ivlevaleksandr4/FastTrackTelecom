/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_MRDC_AssistanceInfo_r15_H_
#define	_MRDC_AssistanceInfo_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AffectedCarrierFreqCombInfoMRDC_r15;

/* MRDC-AssistanceInfo-r15 */
typedef struct MRDC_AssistanceInfo_r15 {
	struct MRDC_AssistanceInfo_r15__affectedCarrierFreqCombInfoListMRDC_r15 {
		A_SEQUENCE_OF(struct AffectedCarrierFreqCombInfoMRDC_r15) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} affectedCarrierFreqCombInfoListMRDC_r15;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MRDC_AssistanceInfo_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MRDC_AssistanceInfo_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_MRDC_AssistanceInfo_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_MRDC_AssistanceInfo_r15_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _MRDC_AssistanceInfo_r15_H_ */
#include <asn_internal.h>
