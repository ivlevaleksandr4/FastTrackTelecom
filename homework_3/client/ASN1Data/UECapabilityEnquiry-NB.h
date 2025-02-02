/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_UECapabilityEnquiry_NB_H_
#define	_UECapabilityEnquiry_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "UECapabilityEnquiry-NB-r13-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UECapabilityEnquiry_NB__criticalExtensions_PR {
	UECapabilityEnquiry_NB__criticalExtensions_PR_NOTHING,	/* No components present */
	UECapabilityEnquiry_NB__criticalExtensions_PR_c1,
	UECapabilityEnquiry_NB__criticalExtensions_PR_criticalExtensionsFuture
} UECapabilityEnquiry_NB__criticalExtensions_PR;
typedef enum UECapabilityEnquiry_NB__criticalExtensions__c1_PR {
	UECapabilityEnquiry_NB__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	UECapabilityEnquiry_NB__criticalExtensions__c1_PR_ueCapabilityEnquiry_r13,
	UECapabilityEnquiry_NB__criticalExtensions__c1_PR_spare1
} UECapabilityEnquiry_NB__criticalExtensions__c1_PR;

/* UECapabilityEnquiry-NB */
typedef struct UECapabilityEnquiry_NB {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct UECapabilityEnquiry_NB__criticalExtensions {
		UECapabilityEnquiry_NB__criticalExtensions_PR present;
		union UECapabilityEnquiry_NB__criticalExtensions_u {
			struct UECapabilityEnquiry_NB__criticalExtensions__c1 {
				UECapabilityEnquiry_NB__criticalExtensions__c1_PR present;
				union UECapabilityEnquiry_NB__criticalExtensions__c1_u {
					UECapabilityEnquiry_NB_r13_IEs_t	 ueCapabilityEnquiry_r13;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct UECapabilityEnquiry_NB__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UECapabilityEnquiry_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UECapabilityEnquiry_NB;
extern asn_SEQUENCE_specifics_t asn_SPC_UECapabilityEnquiry_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_UECapabilityEnquiry_NB_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UECapabilityEnquiry_NB_H_ */
#include <asn_internal.h>
