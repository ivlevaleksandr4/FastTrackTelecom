/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_AntennaInfoDedicated_v1530_H_
#define	_AntennaInfoDedicated_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeEnumerated.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AntennaInfoDedicated_v1530_PR {
	AntennaInfoDedicated_v1530_PR_NOTHING,	/* No components present */
	AntennaInfoDedicated_v1530_PR_release,
	AntennaInfoDedicated_v1530_PR_setup
} AntennaInfoDedicated_v1530_PR;
typedef enum AntennaInfoDedicated_v1530__setup_PR {
	AntennaInfoDedicated_v1530__setup_PR_NOTHING,	/* No components present */
	AntennaInfoDedicated_v1530__setup_PR_ue_TxAntennaSelection_SRS_1T4R_Config_r15,
	AntennaInfoDedicated_v1530__setup_PR_ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15
} AntennaInfoDedicated_v1530__setup_PR;
typedef enum AntennaInfoDedicated_v1530__setup__ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15 {
	AntennaInfoDedicated_v1530__setup__ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15_two	= 0,
	AntennaInfoDedicated_v1530__setup__ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15_three	= 1
} e_AntennaInfoDedicated_v1530__setup__ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15;

/* AntennaInfoDedicated-v1530 */
typedef struct AntennaInfoDedicated_v1530 {
	AntennaInfoDedicated_v1530_PR present;
	union AntennaInfoDedicated_v1530_u {
		NULL_t	 release;
		struct AntennaInfoDedicated_v1530__setup {
			AntennaInfoDedicated_v1530__setup_PR present;
			union AntennaInfoDedicated_v1530__setup_u {
				NULL_t	 ue_TxAntennaSelection_SRS_1T4R_Config_r15;
				long	 ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AntennaInfoDedicated_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_AntennaInfoDedicated_v1530;
extern asn_CHOICE_specifics_t asn_SPC_AntennaInfoDedicated_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_AntennaInfoDedicated_v1530_1[2];
extern asn_per_constraints_t asn_PER_type_AntennaInfoDedicated_v1530_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _AntennaInfoDedicated_v1530_H_ */
#include <asn_internal.h>
