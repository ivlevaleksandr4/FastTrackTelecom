/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_RRCConnectionRequest_NB_H_
#define	_RRCConnectionRequest_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRCConnectionRequest-NB-r13-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionRequest_NB__criticalExtensions_PR {
	RRCConnectionRequest_NB__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCConnectionRequest_NB__criticalExtensions_PR_rrcConnectionRequest_r13,
	RRCConnectionRequest_NB__criticalExtensions_PR_criticalExtensionsFuture
} RRCConnectionRequest_NB__criticalExtensions_PR;

/* RRCConnectionRequest-NB */
typedef struct RRCConnectionRequest_NB {
	struct RRCConnectionRequest_NB__criticalExtensions {
		RRCConnectionRequest_NB__criticalExtensions_PR present;
		union RRCConnectionRequest_NB__criticalExtensions_u {
			RRCConnectionRequest_NB_r13_IEs_t	 rrcConnectionRequest_r13;
			struct RRCConnectionRequest_NB__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionRequest_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionRequest_NB;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionRequest_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionRequest_NB_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionRequest_NB_H_ */
#include <asn_internal.h>
