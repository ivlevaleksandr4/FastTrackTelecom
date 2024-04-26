/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_RLC_Config_v1530_H_
#define	_RLC_Config_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RLC_Config_v1530_PR {
	RLC_Config_v1530_PR_NOTHING,	/* No components present */
	RLC_Config_v1530_PR_release,
	RLC_Config_v1530_PR_setup
} RLC_Config_v1530_PR;
typedef enum RLC_Config_v1530__setup__rlc_OutOfOrderDelivery_r15 {
	RLC_Config_v1530__setup__rlc_OutOfOrderDelivery_r15_true	= 0
} e_RLC_Config_v1530__setup__rlc_OutOfOrderDelivery_r15;

/* RLC-Config-v1530 */
typedef struct RLC_Config_v1530 {
	RLC_Config_v1530_PR present;
	union RLC_Config_v1530_u {
		NULL_t	 release;
		struct RLC_Config_v1530__setup {
			long	 rlc_OutOfOrderDelivery_r15;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLC_Config_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_rlc_OutOfOrderDelivery_r15_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RLC_Config_v1530;
extern asn_CHOICE_specifics_t asn_SPC_RLC_Config_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_RLC_Config_v1530_1[2];
extern asn_per_constraints_t asn_PER_type_RLC_Config_v1530_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RLC_Config_v1530_H_ */
#include <asn_internal.h>
