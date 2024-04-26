/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SL_Parameters_v1430_H_
#define	_SL_Parameters_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_Parameters_v1430__zoneBasedPoolSelection_r14 {
	SL_Parameters_v1430__zoneBasedPoolSelection_r14_supported	= 0
} e_SL_Parameters_v1430__zoneBasedPoolSelection_r14;
typedef enum SL_Parameters_v1430__ue_AutonomousWithFullSensing_r14 {
	SL_Parameters_v1430__ue_AutonomousWithFullSensing_r14_supported	= 0
} e_SL_Parameters_v1430__ue_AutonomousWithFullSensing_r14;
typedef enum SL_Parameters_v1430__ue_AutonomousWithPartialSensing_r14 {
	SL_Parameters_v1430__ue_AutonomousWithPartialSensing_r14_supported	= 0
} e_SL_Parameters_v1430__ue_AutonomousWithPartialSensing_r14;
typedef enum SL_Parameters_v1430__sl_CongestionControl_r14 {
	SL_Parameters_v1430__sl_CongestionControl_r14_supported	= 0
} e_SL_Parameters_v1430__sl_CongestionControl_r14;
typedef enum SL_Parameters_v1430__v2x_TxWithShortResvInterval_r14 {
	SL_Parameters_v1430__v2x_TxWithShortResvInterval_r14_supported	= 0
} e_SL_Parameters_v1430__v2x_TxWithShortResvInterval_r14;
typedef enum SL_Parameters_v1430__v2x_nonAdjacentPSCCH_PSSCH_r14 {
	SL_Parameters_v1430__v2x_nonAdjacentPSCCH_PSSCH_r14_supported	= 0
} e_SL_Parameters_v1430__v2x_nonAdjacentPSCCH_PSSCH_r14;
typedef enum SL_Parameters_v1430__slss_TxRx_r14 {
	SL_Parameters_v1430__slss_TxRx_r14_supported	= 0
} e_SL_Parameters_v1430__slss_TxRx_r14;

/* Forward declarations */
struct V2X_SupportedBandCombination_r14;

/* SL-Parameters-v1430 */
typedef struct SL_Parameters_v1430 {
	long	*zoneBasedPoolSelection_r14	/* OPTIONAL */;
	long	*ue_AutonomousWithFullSensing_r14	/* OPTIONAL */;
	long	*ue_AutonomousWithPartialSensing_r14	/* OPTIONAL */;
	long	*sl_CongestionControl_r14	/* OPTIONAL */;
	long	*v2x_TxWithShortResvInterval_r14	/* OPTIONAL */;
	long	*v2x_numberTxRxTiming_r14	/* OPTIONAL */;
	long	*v2x_nonAdjacentPSCCH_PSSCH_r14	/* OPTIONAL */;
	long	*slss_TxRx_r14	/* OPTIONAL */;
	struct V2X_SupportedBandCombination_r14	*v2x_SupportedBandCombinationList_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_Parameters_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_zoneBasedPoolSelection_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ue_AutonomousWithFullSensing_r14_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ue_AutonomousWithPartialSensing_r14_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sl_CongestionControl_r14_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_v2x_TxWithShortResvInterval_r14_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_v2x_nonAdjacentPSCCH_PSSCH_r14_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_slss_TxRx_r14_15;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_Parameters_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_Parameters_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_Parameters_v1430_1[9];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_Parameters_v1430_H_ */
#include <asn_internal.h>
