/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SoundingRS_UL_ConfigDedicatedAperiodic_v1310_H_
#define	_SoundingRS_UL_ConfigDedicatedAperiodic_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SoundingRS_UL_ConfigDedicatedAperiodic_v1310_PR {
	SoundingRS_UL_ConfigDedicatedAperiodic_v1310_PR_NOTHING,	/* No components present */
	SoundingRS_UL_ConfigDedicatedAperiodic_v1310_PR_release,
	SoundingRS_UL_ConfigDedicatedAperiodic_v1310_PR_setup
} SoundingRS_UL_ConfigDedicatedAperiodic_v1310_PR;
typedef enum SoundingRS_UL_ConfigDedicatedAperiodic_v1310__setup__srs_ActivateAp_v1310_PR {
	SoundingRS_UL_ConfigDedicatedAperiodic_v1310__setup__srs_ActivateAp_v1310_PR_NOTHING,	/* No components present */
	SoundingRS_UL_ConfigDedicatedAperiodic_v1310__setup__srs_ActivateAp_v1310_PR_release,
	SoundingRS_UL_ConfigDedicatedAperiodic_v1310__setup__srs_ActivateAp_v1310_PR_setup
} SoundingRS_UL_ConfigDedicatedAperiodic_v1310__setup__srs_ActivateAp_v1310_PR;

/* Forward declarations */
struct SRS_ConfigAp_v1310;

/* SoundingRS-UL-ConfigDedicatedAperiodic-v1310 */
typedef struct SoundingRS_UL_ConfigDedicatedAperiodic_v1310 {
	SoundingRS_UL_ConfigDedicatedAperiodic_v1310_PR present;
	union SoundingRS_UL_ConfigDedicatedAperiodic_v1310_u {
		NULL_t	 release;
		struct SoundingRS_UL_ConfigDedicatedAperiodic_v1310__setup {
			struct SoundingRS_UL_ConfigDedicatedAperiodic_v1310__setup__srs_ConfigApDCI_Format4_v1310 {
				A_SEQUENCE_OF(struct SRS_ConfigAp_v1310) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *srs_ConfigApDCI_Format4_v1310;
			struct SoundingRS_UL_ConfigDedicatedAperiodic_v1310__setup__srs_ActivateAp_v1310 {
				SoundingRS_UL_ConfigDedicatedAperiodic_v1310__setup__srs_ActivateAp_v1310_PR present;
				union SoundingRS_UL_ConfigDedicatedAperiodic_v1310__setup__srs_ActivateAp_v1310_u {
					NULL_t	 release;
					struct SoundingRS_UL_ConfigDedicatedAperiodic_v1310__setup__srs_ActivateAp_v1310__setup {
						struct SRS_ConfigAp_v1310	*srs_ConfigApDCI_Format0_v1310	/* OPTIONAL */;
						struct SRS_ConfigAp_v1310	*srs_ConfigApDCI_Format1a2b2c_v1310	/* OPTIONAL */;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} setup;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *srs_ActivateAp_v1310;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SoundingRS_UL_ConfigDedicatedAperiodic_v1310_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SoundingRS_UL_ConfigDedicatedAperiodic_v1310;
extern asn_CHOICE_specifics_t asn_SPC_SoundingRS_UL_ConfigDedicatedAperiodic_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_SoundingRS_UL_ConfigDedicatedAperiodic_v1310_1[2];
extern asn_per_constraints_t asn_PER_type_SoundingRS_UL_ConfigDedicatedAperiodic_v1310_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SoundingRS_UL_ConfigDedicatedAperiodic_v1310_H_ */
#include <asn_internal.h>
