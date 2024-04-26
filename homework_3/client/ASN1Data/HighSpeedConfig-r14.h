/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_HighSpeedConfig_r14_H_
#define	_HighSpeedConfig_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HighSpeedConfig_r14__highSpeedEnhancedMeasFlag_r14 {
	HighSpeedConfig_r14__highSpeedEnhancedMeasFlag_r14_true	= 0
} e_HighSpeedConfig_r14__highSpeedEnhancedMeasFlag_r14;
typedef enum HighSpeedConfig_r14__highSpeedEnhancedDemodulationFlag_r14 {
	HighSpeedConfig_r14__highSpeedEnhancedDemodulationFlag_r14_true	= 0
} e_HighSpeedConfig_r14__highSpeedEnhancedDemodulationFlag_r14;

/* HighSpeedConfig-r14 */
typedef struct HighSpeedConfig_r14 {
	long	*highSpeedEnhancedMeasFlag_r14	/* OPTIONAL */;
	long	*highSpeedEnhancedDemodulationFlag_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HighSpeedConfig_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_highSpeedEnhancedMeasFlag_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_highSpeedEnhancedDemodulationFlag_r14_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_HighSpeedConfig_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_HighSpeedConfig_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_HighSpeedConfig_r14_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _HighSpeedConfig_r14_H_ */
#include <asn_internal.h>
