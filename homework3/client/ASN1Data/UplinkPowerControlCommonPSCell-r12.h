/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_UplinkPowerControlCommonPSCell_r12_H_
#define	_UplinkPowerControlCommonPSCell_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include "DeltaFList-PUCCH.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UplinkPowerControlCommonPSCell_r12__deltaF_PUCCH_Format3_r12 {
	UplinkPowerControlCommonPSCell_r12__deltaF_PUCCH_Format3_r12_deltaF_1	= 0,
	UplinkPowerControlCommonPSCell_r12__deltaF_PUCCH_Format3_r12_deltaF0	= 1,
	UplinkPowerControlCommonPSCell_r12__deltaF_PUCCH_Format3_r12_deltaF1	= 2,
	UplinkPowerControlCommonPSCell_r12__deltaF_PUCCH_Format3_r12_deltaF2	= 3,
	UplinkPowerControlCommonPSCell_r12__deltaF_PUCCH_Format3_r12_deltaF3	= 4,
	UplinkPowerControlCommonPSCell_r12__deltaF_PUCCH_Format3_r12_deltaF4	= 5,
	UplinkPowerControlCommonPSCell_r12__deltaF_PUCCH_Format3_r12_deltaF5	= 6,
	UplinkPowerControlCommonPSCell_r12__deltaF_PUCCH_Format3_r12_deltaF6	= 7
} e_UplinkPowerControlCommonPSCell_r12__deltaF_PUCCH_Format3_r12;
typedef enum UplinkPowerControlCommonPSCell_r12__deltaF_PUCCH_Format1bCS_r12 {
	UplinkPowerControlCommonPSCell_r12__deltaF_PUCCH_Format1bCS_r12_deltaF1	= 0,
	UplinkPowerControlCommonPSCell_r12__deltaF_PUCCH_Format1bCS_r12_deltaF2	= 1,
	UplinkPowerControlCommonPSCell_r12__deltaF_PUCCH_Format1bCS_r12_spare2	= 2,
	UplinkPowerControlCommonPSCell_r12__deltaF_PUCCH_Format1bCS_r12_spare1	= 3
} e_UplinkPowerControlCommonPSCell_r12__deltaF_PUCCH_Format1bCS_r12;

/* UplinkPowerControlCommonPSCell-r12 */
typedef struct UplinkPowerControlCommonPSCell_r12 {
	long	 deltaF_PUCCH_Format3_r12;
	long	 deltaF_PUCCH_Format1bCS_r12;
	long	 p0_NominalPUCCH_r12;
	DeltaFList_PUCCH_t	 deltaFList_PUCCH_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UplinkPowerControlCommonPSCell_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_deltaF_PUCCH_Format3_r12_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_deltaF_PUCCH_Format1bCS_r12_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UplinkPowerControlCommonPSCell_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_UplinkPowerControlCommonPSCell_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_UplinkPowerControlCommonPSCell_r12_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _UplinkPowerControlCommonPSCell_r12_H_ */
#include <asn_internal.h>
