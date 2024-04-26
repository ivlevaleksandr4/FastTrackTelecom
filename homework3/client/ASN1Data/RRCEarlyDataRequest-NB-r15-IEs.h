/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_RRCEarlyDataRequest_NB_r15_IEs_H_
#define	_RRCEarlyDataRequest_NB_r15_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S-TMSI.h"
#include <NativeEnumerated.h>
#include "CQI-NPDCCH-NB-r14.h"
#include "DedicatedInfoNAS.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCEarlyDataRequest_NB_r15_IEs__establishmentCause_r15 {
	RRCEarlyDataRequest_NB_r15_IEs__establishmentCause_r15_mo_Data_r15	= 0,
	RRCEarlyDataRequest_NB_r15_IEs__establishmentCause_r15_mo_ExceptionData_r15	= 1,
	RRCEarlyDataRequest_NB_r15_IEs__establishmentCause_r15_delayTolerantAccess_r15	= 2,
	RRCEarlyDataRequest_NB_r15_IEs__establishmentCause_r15_spare1	= 3
} e_RRCEarlyDataRequest_NB_r15_IEs__establishmentCause_r15;

/* RRCEarlyDataRequest-NB-r15-IEs */
typedef struct RRCEarlyDataRequest_NB_r15_IEs {
	S_TMSI_t	 s_TMSI_r15;
	long	 establishmentCause_r15;
	CQI_NPDCCH_NB_r14_t	*cqi_NPDCCH_r15	/* OPTIONAL */;
	DedicatedInfoNAS_t	 dedicatedInfoNAS_r15;
	struct RRCEarlyDataRequest_NB_r15_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCEarlyDataRequest_NB_r15_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_establishmentCause_r15_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCEarlyDataRequest_NB_r15_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCEarlyDataRequest_NB_r15_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCEarlyDataRequest_NB_r15_IEs_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCEarlyDataRequest_NB_r15_IEs_H_ */
#include <asn_internal.h>
