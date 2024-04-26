/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_RRCEarlyDataComplete_r15_H_
#define	_RRCEarlyDataComplete_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRCEarlyDataComplete-r15-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCEarlyDataComplete_r15__criticalExtensions_PR {
	RRCEarlyDataComplete_r15__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCEarlyDataComplete_r15__criticalExtensions_PR_rrcEarlyDataComplete_r15,
	RRCEarlyDataComplete_r15__criticalExtensions_PR_criticalExtensionsFuture
} RRCEarlyDataComplete_r15__criticalExtensions_PR;

/* RRCEarlyDataComplete-r15 */
typedef struct RRCEarlyDataComplete_r15 {
	struct RRCEarlyDataComplete_r15__criticalExtensions {
		RRCEarlyDataComplete_r15__criticalExtensions_PR present;
		union RRCEarlyDataComplete_r15__criticalExtensions_u {
			RRCEarlyDataComplete_r15_IEs_t	 rrcEarlyDataComplete_r15;
			struct RRCEarlyDataComplete_r15__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCEarlyDataComplete_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCEarlyDataComplete_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCEarlyDataComplete_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCEarlyDataComplete_r15_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCEarlyDataComplete_r15_H_ */
#include <asn_internal.h>
