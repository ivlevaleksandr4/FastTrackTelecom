/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SoundingRS_UL_ConfigDedicatedAperiodic_v1430_H_
#define	_SoundingRS_UL_ConfigDedicatedAperiodic_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SoundingRS_UL_ConfigDedicatedAperiodic_v1430_PR {
	SoundingRS_UL_ConfigDedicatedAperiodic_v1430_PR_NOTHING,	/* No components present */
	SoundingRS_UL_ConfigDedicatedAperiodic_v1430_PR_release,
	SoundingRS_UL_ConfigDedicatedAperiodic_v1430_PR_setup
} SoundingRS_UL_ConfigDedicatedAperiodic_v1430_PR;

/* SoundingRS-UL-ConfigDedicatedAperiodic-v1430 */
typedef struct SoundingRS_UL_ConfigDedicatedAperiodic_v1430 {
	SoundingRS_UL_ConfigDedicatedAperiodic_v1430_PR present;
	union SoundingRS_UL_ConfigDedicatedAperiodic_v1430_u {
		NULL_t	 release;
		struct SoundingRS_UL_ConfigDedicatedAperiodic_v1430__setup {
			long	*srs_SubframeIndication_r14	/* OPTIONAL */;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SoundingRS_UL_ConfigDedicatedAperiodic_v1430_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SoundingRS_UL_ConfigDedicatedAperiodic_v1430;
extern asn_CHOICE_specifics_t asn_SPC_SoundingRS_UL_ConfigDedicatedAperiodic_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_SoundingRS_UL_ConfigDedicatedAperiodic_v1430_1[2];
extern asn_per_constraints_t asn_PER_type_SoundingRS_UL_ConfigDedicatedAperiodic_v1430_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SoundingRS_UL_ConfigDedicatedAperiodic_v1430_H_ */
#include <asn_internal.h>
