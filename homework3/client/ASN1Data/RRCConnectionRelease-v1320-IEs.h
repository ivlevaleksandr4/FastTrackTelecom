/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_RRCConnectionRelease_v1320_IEs_H_
#define	_RRCConnectionRelease_v1320_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ResumeIdentity-r13.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRCConnectionRelease_v1530_IEs;

/* RRCConnectionRelease-v1320-IEs */
typedef struct RRCConnectionRelease_v1320_IEs {
	ResumeIdentity_r13_t	*resumeIdentity_r13	/* OPTIONAL */;
	struct RRCConnectionRelease_v1530_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionRelease_v1320_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionRelease_v1320_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionRelease_v1320_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionRelease_v1320_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionRelease_v1320_IEs_H_ */
#include <asn_internal.h>
