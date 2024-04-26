/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_RRCConnectionRelease_r8_IEs_H_
#define	_RRCConnectionRelease_r8_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ReleaseCause.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RedirectedCarrierInfo;
struct IdleModeMobilityControlInfo;
struct RRCConnectionRelease_v890_IEs;

/* RRCConnectionRelease-r8-IEs */
typedef struct RRCConnectionRelease_r8_IEs {
	ReleaseCause_t	 releaseCause;
	struct RedirectedCarrierInfo	*redirectedCarrierInfo	/* OPTIONAL */;
	struct IdleModeMobilityControlInfo	*idleModeMobilityControlInfo	/* OPTIONAL */;
	struct RRCConnectionRelease_v890_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionRelease_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionRelease_r8_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionRelease_r8_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionRelease_r8_IEs_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionRelease_r8_IEs_H_ */
#include <asn_internal.h>
