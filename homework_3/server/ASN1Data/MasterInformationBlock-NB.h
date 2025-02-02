/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_MasterInformationBlock_NB_H_
#define	_MasterInformationBlock_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include "Inband-SamePCI-NB-r13.h"
#include "Inband-DifferentPCI-NB-r13.h"
#include "Guardband-NB-r13.h"
#include "Standalone-NB-r13.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MasterInformationBlock_NB__operationModeInfo_r13_PR {
	MasterInformationBlock_NB__operationModeInfo_r13_PR_NOTHING,	/* No components present */
	MasterInformationBlock_NB__operationModeInfo_r13_PR_inband_SamePCI_r13,
	MasterInformationBlock_NB__operationModeInfo_r13_PR_inband_DifferentPCI_r13,
	MasterInformationBlock_NB__operationModeInfo_r13_PR_guardband_r13,
	MasterInformationBlock_NB__operationModeInfo_r13_PR_standalone_r13
} MasterInformationBlock_NB__operationModeInfo_r13_PR;

/* MasterInformationBlock-NB */
typedef struct MasterInformationBlock_NB {
	BIT_STRING_t	 systemFrameNumber_MSB_r13;
	BIT_STRING_t	 hyperSFN_LSB_r13;
	long	 schedulingInfoSIB1_r13;
	long	 systemInfoValueTag_r13;
	BOOLEAN_t	 ab_Enabled_r13;
	struct MasterInformationBlock_NB__operationModeInfo_r13 {
		MasterInformationBlock_NB__operationModeInfo_r13_PR present;
		union MasterInformationBlock_NB__operationModeInfo_r13_u {
			Inband_SamePCI_NB_r13_t	 inband_SamePCI_r13;
			Inband_DifferentPCI_NB_r13_t	 inband_DifferentPCI_r13;
			Guardband_NB_r13_t	 guardband_r13;
			Standalone_NB_r13_t	 standalone_r13;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} operationModeInfo_r13;
	BOOLEAN_t	 additionalTransmissionSIB1_r15;
	BIT_STRING_t	 spare;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MasterInformationBlock_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MasterInformationBlock_NB;
extern asn_SEQUENCE_specifics_t asn_SPC_MasterInformationBlock_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_MasterInformationBlock_NB_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _MasterInformationBlock_NB_H_ */
#include <asn_internal.h>
