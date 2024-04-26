/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_RRCConnectionResumeRequest_5GC_r15_IEs_H_
#define	_RRCConnectionResumeRequest_5GC_r15_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include "ResumeCause-r15.h"
#include "I-RNTI-r15.h"
#include "ShortI-RNTI-r15.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionResumeRequest_5GC_r15_IEs__resumeIdentity_r15_PR {
	RRCConnectionResumeRequest_5GC_r15_IEs__resumeIdentity_r15_PR_NOTHING,	/* No components present */
	RRCConnectionResumeRequest_5GC_r15_IEs__resumeIdentity_r15_PR_fullI_RNTI_r15,
	RRCConnectionResumeRequest_5GC_r15_IEs__resumeIdentity_r15_PR_shortI_RNTI_r15
} RRCConnectionResumeRequest_5GC_r15_IEs__resumeIdentity_r15_PR;

/* RRCConnectionResumeRequest-5GC-r15-IEs */
typedef struct RRCConnectionResumeRequest_5GC_r15_IEs {
	struct RRCConnectionResumeRequest_5GC_r15_IEs__resumeIdentity_r15 {
		RRCConnectionResumeRequest_5GC_r15_IEs__resumeIdentity_r15_PR present;
		union RRCConnectionResumeRequest_5GC_r15_IEs__resumeIdentity_r15_u {
			I_RNTI_r15_t	 fullI_RNTI_r15;
			ShortI_RNTI_r15_t	 shortI_RNTI_r15;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} resumeIdentity_r15;
	BIT_STRING_t	 shortResumeMAC_I_r15;
	ResumeCause_r15_t	 resumeCause_r15;
	BIT_STRING_t	 spare;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionResumeRequest_5GC_r15_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionResumeRequest_5GC_r15_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionResumeRequest_5GC_r15_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionResumeRequest_5GC_r15_IEs_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionResumeRequest_5GC_r15_IEs_H_ */
#include <asn_internal.h>
