/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_MBMSCountingRequest_r10_H_
#define	_MBMSCountingRequest_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CountingRequestList-r10.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MBMSCountingRequest-r10 */
typedef struct MBMSCountingRequest_r10 {
	CountingRequestList_r10_t	 countingRequestList_r10;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct MBMSCountingRequest_r10__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMSCountingRequest_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMSCountingRequest_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_MBMSCountingRequest_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_MBMSCountingRequest_r10_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _MBMSCountingRequest_r10_H_ */
#include <asn_internal.h>
