/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SupportedBandCombinationReduced_v1450_H_
#define	_SupportedBandCombinationReduced_v1450_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BandCombinationParameters_v1450;

/* SupportedBandCombinationReduced-v1450 */
typedef struct SupportedBandCombinationReduced_v1450 {
	A_SEQUENCE_OF(struct BandCombinationParameters_v1450) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SupportedBandCombinationReduced_v1450_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SupportedBandCombinationReduced_v1450;
extern asn_SET_OF_specifics_t asn_SPC_SupportedBandCombinationReduced_v1450_specs_1;
extern asn_TYPE_member_t asn_MBR_SupportedBandCombinationReduced_v1450_1[1];
extern asn_per_constraints_t asn_PER_type_SupportedBandCombinationReduced_v1450_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SupportedBandCombinationReduced_v1450_H_ */
#include <asn_internal.h>
