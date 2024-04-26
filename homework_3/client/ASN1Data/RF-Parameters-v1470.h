/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_RF_Parameters_v1470_H_
#define	_RF_Parameters_v1470_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SupportedBandCombination_v1470;
struct SupportedBandCombinationAdd_v1470;
struct SupportedBandCombinationReduced_v1470;

/* RF-Parameters-v1470 */
typedef struct RF_Parameters_v1470 {
	struct SupportedBandCombination_v1470	*supportedBandCombination_v1470	/* OPTIONAL */;
	struct SupportedBandCombinationAdd_v1470	*supportedBandCombinationAdd_v1470	/* OPTIONAL */;
	struct SupportedBandCombinationReduced_v1470	*supportedBandCombinationReduced_v1470	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RF_Parameters_v1470_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RF_Parameters_v1470;
extern asn_SEQUENCE_specifics_t asn_SPC_RF_Parameters_v1470_specs_1;
extern asn_TYPE_member_t asn_MBR_RF_Parameters_v1470_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _RF_Parameters_v1470_H_ */
#include <asn_internal.h>
