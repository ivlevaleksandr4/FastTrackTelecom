/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_PowerRampingParameters_NB_v1450_H_
#define	_PowerRampingParameters_NB_v1450_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PowerRampingParameters_NB_v1450__preambleInitialReceivedTargetPower_v1450 {
	PowerRampingParameters_NB_v1450__preambleInitialReceivedTargetPower_v1450_dBm_130	= 0,
	PowerRampingParameters_NB_v1450__preambleInitialReceivedTargetPower_v1450_dBm_128	= 1,
	PowerRampingParameters_NB_v1450__preambleInitialReceivedTargetPower_v1450_dBm_126	= 2,
	PowerRampingParameters_NB_v1450__preambleInitialReceivedTargetPower_v1450_dBm_124	= 3,
	PowerRampingParameters_NB_v1450__preambleInitialReceivedTargetPower_v1450_dBm_122	= 4,
	PowerRampingParameters_NB_v1450__preambleInitialReceivedTargetPower_v1450_dBm_88	= 5,
	PowerRampingParameters_NB_v1450__preambleInitialReceivedTargetPower_v1450_dBm_86	= 6,
	PowerRampingParameters_NB_v1450__preambleInitialReceivedTargetPower_v1450_dBm_84	= 7,
	PowerRampingParameters_NB_v1450__preambleInitialReceivedTargetPower_v1450_dBm_82	= 8,
	PowerRampingParameters_NB_v1450__preambleInitialReceivedTargetPower_v1450_dBm_80	= 9
} e_PowerRampingParameters_NB_v1450__preambleInitialReceivedTargetPower_v1450;
typedef enum PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__powerRampingStepCE1_r14 {
	PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__powerRampingStepCE1_r14_dB0	= 0,
	PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__powerRampingStepCE1_r14_dB2	= 1,
	PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__powerRampingStepCE1_r14_dB4	= 2,
	PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__powerRampingStepCE1_r14_dB6	= 3
} e_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__powerRampingStepCE1_r14;
typedef enum PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14 {
	PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_130	= 0,
	PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_128	= 1,
	PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_126	= 2,
	PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_124	= 3,
	PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_122	= 4,
	PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_120	= 5,
	PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_118	= 6,
	PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_116	= 7,
	PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_114	= 8,
	PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_112	= 9,
	PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_110	= 10,
	PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_108	= 11,
	PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_106	= 12,
	PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_104	= 13,
	PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_102	= 14,
	PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_100	= 15,
	PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_98	= 16,
	PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_96	= 17,
	PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_94	= 18,
	PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_92	= 19,
	PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_90	= 20,
	PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_88	= 21,
	PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_86	= 22,
	PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_84	= 23,
	PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_82	= 24,
	PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_80	= 25
} e_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14;

/* PowerRampingParameters-NB-v1450 */
typedef struct PowerRampingParameters_NB_v1450 {
	long	*preambleInitialReceivedTargetPower_v1450	/* OPTIONAL */;
	struct PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14 {
		long	 powerRampingStepCE1_r14;
		long	 preambleInitialReceivedTargetPowerCE1_r14;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *powerRampingParametersCE1_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PowerRampingParameters_NB_v1450_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_preambleInitialReceivedTargetPower_v1450_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_powerRampingStepCE1_r14_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_preambleInitialReceivedTargetPowerCE1_r14_19;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PowerRampingParameters_NB_v1450;
extern asn_SEQUENCE_specifics_t asn_SPC_PowerRampingParameters_NB_v1450_specs_1;
extern asn_TYPE_member_t asn_MBR_PowerRampingParameters_NB_v1450_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PowerRampingParameters_NB_v1450_H_ */
#include <asn_internal.h>
