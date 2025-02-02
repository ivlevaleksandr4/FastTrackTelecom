/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_InDeviceCoexIndication_v1530_IEs_H_
#define	_InDeviceCoexIndication_v1530_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MRDC_AssistanceInfo_r15;

/* InDeviceCoexIndication-v1530-IEs */
typedef struct InDeviceCoexIndication_v1530_IEs {
	struct MRDC_AssistanceInfo_r15	*mrdc_AssistanceInfo_r15	/* OPTIONAL */;
	struct InDeviceCoexIndication_v1530_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InDeviceCoexIndication_v1530_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InDeviceCoexIndication_v1530_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_InDeviceCoexIndication_v1530_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_InDeviceCoexIndication_v1530_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _InDeviceCoexIndication_v1530_IEs_H_ */
#include <asn_internal.h>
