/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_V2X_BandParameters_v1530_H_
#define	_V2X_BandParameters_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum V2X_BandParameters_v1530__v2x_EnhancedHighReception_r15 {
	V2X_BandParameters_v1530__v2x_EnhancedHighReception_r15_supported	= 0
} e_V2X_BandParameters_v1530__v2x_EnhancedHighReception_r15;

/* V2X-BandParameters-v1530 */
typedef struct V2X_BandParameters_v1530 {
	long	*v2x_EnhancedHighReception_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} V2X_BandParameters_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_v2x_EnhancedHighReception_r15_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_V2X_BandParameters_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_V2X_BandParameters_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_V2X_BandParameters_v1530_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _V2X_BandParameters_v1530_H_ */
#include <asn_internal.h>
