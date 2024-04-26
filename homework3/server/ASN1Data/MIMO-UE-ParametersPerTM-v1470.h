/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_MIMO_UE_ParametersPerTM_v1470_H_
#define	_MIMO_UE_ParametersPerTM_v1470_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MIMO_UE_ParametersPerTM_v1470__csi_ReportingAdvancedMaxPorts_r14 {
	MIMO_UE_ParametersPerTM_v1470__csi_ReportingAdvancedMaxPorts_r14_n8	= 0,
	MIMO_UE_ParametersPerTM_v1470__csi_ReportingAdvancedMaxPorts_r14_n12	= 1,
	MIMO_UE_ParametersPerTM_v1470__csi_ReportingAdvancedMaxPorts_r14_n16	= 2,
	MIMO_UE_ParametersPerTM_v1470__csi_ReportingAdvancedMaxPorts_r14_n20	= 3,
	MIMO_UE_ParametersPerTM_v1470__csi_ReportingAdvancedMaxPorts_r14_n24	= 4,
	MIMO_UE_ParametersPerTM_v1470__csi_ReportingAdvancedMaxPorts_r14_n28	= 5
} e_MIMO_UE_ParametersPerTM_v1470__csi_ReportingAdvancedMaxPorts_r14;

/* MIMO-UE-ParametersPerTM-v1470 */
typedef struct MIMO_UE_ParametersPerTM_v1470 {
	long	*csi_ReportingAdvancedMaxPorts_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MIMO_UE_ParametersPerTM_v1470_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_csi_ReportingAdvancedMaxPorts_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MIMO_UE_ParametersPerTM_v1470;
extern asn_SEQUENCE_specifics_t asn_SPC_MIMO_UE_ParametersPerTM_v1470_specs_1;
extern asn_TYPE_member_t asn_MBR_MIMO_UE_ParametersPerTM_v1470_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _MIMO_UE_ParametersPerTM_v1470_H_ */
#include <asn_internal.h>
