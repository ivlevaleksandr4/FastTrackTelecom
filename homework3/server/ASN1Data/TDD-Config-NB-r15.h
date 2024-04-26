/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_TDD_Config_NB_r15_H_
#define	_TDD_Config_NB_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TDD_Config_NB_r15__subframeAssignment_r15 {
	TDD_Config_NB_r15__subframeAssignment_r15_sa1	= 0,
	TDD_Config_NB_r15__subframeAssignment_r15_sa2	= 1,
	TDD_Config_NB_r15__subframeAssignment_r15_sa3	= 2,
	TDD_Config_NB_r15__subframeAssignment_r15_sa4	= 3,
	TDD_Config_NB_r15__subframeAssignment_r15_sa5	= 4
} e_TDD_Config_NB_r15__subframeAssignment_r15;
typedef enum TDD_Config_NB_r15__specialSubframePatterns_r15 {
	TDD_Config_NB_r15__specialSubframePatterns_r15_ssp0	= 0,
	TDD_Config_NB_r15__specialSubframePatterns_r15_ssp1	= 1,
	TDD_Config_NB_r15__specialSubframePatterns_r15_ssp2	= 2,
	TDD_Config_NB_r15__specialSubframePatterns_r15_ssp3	= 3,
	TDD_Config_NB_r15__specialSubframePatterns_r15_ssp4	= 4,
	TDD_Config_NB_r15__specialSubframePatterns_r15_ssp5	= 5,
	TDD_Config_NB_r15__specialSubframePatterns_r15_ssp6	= 6,
	TDD_Config_NB_r15__specialSubframePatterns_r15_ssp7	= 7,
	TDD_Config_NB_r15__specialSubframePatterns_r15_ssp8	= 8,
	TDD_Config_NB_r15__specialSubframePatterns_r15_ssp9	= 9,
	TDD_Config_NB_r15__specialSubframePatterns_r15_ssp10	= 10,
	TDD_Config_NB_r15__specialSubframePatterns_r15_ssp10_CRS_LessDwPTS	= 11
} e_TDD_Config_NB_r15__specialSubframePatterns_r15;

/* TDD-Config-NB-r15 */
typedef struct TDD_Config_NB_r15 {
	long	 subframeAssignment_r15;
	long	 specialSubframePatterns_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TDD_Config_NB_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_subframeAssignment_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_specialSubframePatterns_r15_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_TDD_Config_NB_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_TDD_Config_NB_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_TDD_Config_NB_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _TDD_Config_NB_r15_H_ */
#include <asn_internal.h>
