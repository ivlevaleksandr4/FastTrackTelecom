/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_BandCombinationParameters_v1530_H_
#define	_BandCombinationParameters_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SPT_Parameters_r15;
struct BandParameters_v1530;

/* BandCombinationParameters-v1530 */
typedef struct BandCombinationParameters_v1530 {
	struct BandCombinationParameters_v1530__bandParameterList_v1530 {
		A_SEQUENCE_OF(struct BandParameters_v1530) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *bandParameterList_v1530;
	struct SPT_Parameters_r15	*spt_Parameters_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandCombinationParameters_v1530_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandCombinationParameters_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_BandCombinationParameters_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_BandCombinationParameters_v1530_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _BandCombinationParameters_v1530_H_ */
#include <asn_internal.h>
