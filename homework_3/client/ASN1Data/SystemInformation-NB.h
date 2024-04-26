/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SystemInformation_NB_H_
#define	_SystemInformation_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SystemInformation-NB-r13-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformation_NB__criticalExtensions_PR {
	SystemInformation_NB__criticalExtensions_PR_NOTHING,	/* No components present */
	SystemInformation_NB__criticalExtensions_PR_systemInformation_r13,
	SystemInformation_NB__criticalExtensions_PR_criticalExtensionsFuture
} SystemInformation_NB__criticalExtensions_PR;

/* SystemInformation-NB */
typedef struct SystemInformation_NB {
	struct SystemInformation_NB__criticalExtensions {
		SystemInformation_NB__criticalExtensions_PR present;
		union SystemInformation_NB__criticalExtensions_u {
			SystemInformation_NB_r13_IEs_t	 systemInformation_r13;
			struct SystemInformation_NB__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformation_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformation_NB;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformation_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformation_NB_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformation_NB_H_ */
#include <asn_internal.h>
