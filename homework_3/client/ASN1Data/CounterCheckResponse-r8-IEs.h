/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_CounterCheckResponse_r8_IEs_H_
#define	_CounterCheckResponse_r8_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DRB-CountInfoList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CounterCheckResponse_v8a0_IEs;

/* CounterCheckResponse-r8-IEs */
typedef struct CounterCheckResponse_r8_IEs {
	DRB_CountInfoList_t	 drb_CountInfoList;
	struct CounterCheckResponse_v8a0_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CounterCheckResponse_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CounterCheckResponse_r8_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_CounterCheckResponse_r8_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_CounterCheckResponse_r8_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CounterCheckResponse_r8_IEs_H_ */
#include <asn_internal.h>
