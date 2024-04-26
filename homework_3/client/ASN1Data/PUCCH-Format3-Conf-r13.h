/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_PUCCH_Format3_Conf_r13_H_
#define	_PUCCH_Format3_Conf_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <NULL.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUCCH_Format3_Conf_r13__twoAntennaPortActivatedPUCCH_Format3_r13_PR {
	PUCCH_Format3_Conf_r13__twoAntennaPortActivatedPUCCH_Format3_r13_PR_NOTHING,	/* No components present */
	PUCCH_Format3_Conf_r13__twoAntennaPortActivatedPUCCH_Format3_r13_PR_release,
	PUCCH_Format3_Conf_r13__twoAntennaPortActivatedPUCCH_Format3_r13_PR_setup
} PUCCH_Format3_Conf_r13__twoAntennaPortActivatedPUCCH_Format3_r13_PR;

/* PUCCH-Format3-Conf-r13 */
typedef struct PUCCH_Format3_Conf_r13 {
	struct PUCCH_Format3_Conf_r13__n3PUCCH_AN_List_r13 {
		A_SEQUENCE_OF(long) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *n3PUCCH_AN_List_r13;
	struct PUCCH_Format3_Conf_r13__twoAntennaPortActivatedPUCCH_Format3_r13 {
		PUCCH_Format3_Conf_r13__twoAntennaPortActivatedPUCCH_Format3_r13_PR present;
		union PUCCH_Format3_Conf_r13__twoAntennaPortActivatedPUCCH_Format3_r13_u {
			NULL_t	 release;
			struct PUCCH_Format3_Conf_r13__twoAntennaPortActivatedPUCCH_Format3_r13__setup {
				struct PUCCH_Format3_Conf_r13__twoAntennaPortActivatedPUCCH_Format3_r13__setup__n3PUCCH_AN_ListP1_r13 {
					A_SEQUENCE_OF(long) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} n3PUCCH_AN_ListP1_r13;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *twoAntennaPortActivatedPUCCH_Format3_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUCCH_Format3_Conf_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PUCCH_Format3_Conf_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_PUCCH_Format3_Conf_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_PUCCH_Format3_Conf_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PUCCH_Format3_Conf_r13_H_ */
#include <asn_internal.h>
