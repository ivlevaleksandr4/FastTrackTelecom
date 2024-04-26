/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SL_InterFreqInfoV2X_r14_H_
#define	_SL_InterFreqInfoV2X_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueEUTRA-r9.h"
#include "P-Max.h"
#include <NativeEnumerated.h>
#include "AdditionalSpectrumEmission.h"
#include "AdditionalSpectrumEmission-v10l0.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_InterFreqInfoV2X_r14__sl_Bandwidth_r14 {
	SL_InterFreqInfoV2X_r14__sl_Bandwidth_r14_n6	= 0,
	SL_InterFreqInfoV2X_r14__sl_Bandwidth_r14_n15	= 1,
	SL_InterFreqInfoV2X_r14__sl_Bandwidth_r14_n25	= 2,
	SL_InterFreqInfoV2X_r14__sl_Bandwidth_r14_n50	= 3,
	SL_InterFreqInfoV2X_r14__sl_Bandwidth_r14_n75	= 4,
	SL_InterFreqInfoV2X_r14__sl_Bandwidth_r14_n100	= 5
} e_SL_InterFreqInfoV2X_r14__sl_Bandwidth_r14;
typedef enum SL_InterFreqInfoV2X_r14__additionalSpectrumEmissionV2X_r14_PR {
	SL_InterFreqInfoV2X_r14__additionalSpectrumEmissionV2X_r14_PR_NOTHING,	/* No components present */
	SL_InterFreqInfoV2X_r14__additionalSpectrumEmissionV2X_r14_PR_additionalSpectrumEmission_r14,
	SL_InterFreqInfoV2X_r14__additionalSpectrumEmissionV2X_r14_PR_additionalSpectrumEmission_v1440
} SL_InterFreqInfoV2X_r14__additionalSpectrumEmissionV2X_r14_PR;

/* Forward declarations */
struct PLMN_IdentityList;
struct SL_CommResourcePoolV2X_r14;
struct SL_V2X_UE_ConfigList_r14;
struct SL_V2X_FreqSelectionConfigList_r15;

/* SL-InterFreqInfoV2X-r14 */
typedef struct SL_InterFreqInfoV2X_r14 {
	struct PLMN_IdentityList	*plmn_IdentityList_r14	/* OPTIONAL */;
	ARFCN_ValueEUTRA_r9_t	 v2x_CommCarrierFreq_r14;
	P_Max_t	*sl_MaxTxPower_r14	/* OPTIONAL */;
	long	*sl_Bandwidth_r14	/* OPTIONAL */;
	struct SL_CommResourcePoolV2X_r14	*v2x_SchedulingPool_r14	/* OPTIONAL */;
	struct SL_V2X_UE_ConfigList_r14	*v2x_UE_ConfigList_r14	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct SL_InterFreqInfoV2X_r14__additionalSpectrumEmissionV2X_r14 {
		SL_InterFreqInfoV2X_r14__additionalSpectrumEmissionV2X_r14_PR present;
		union SL_InterFreqInfoV2X_r14__additionalSpectrumEmissionV2X_r14_u {
			AdditionalSpectrumEmission_t	 additionalSpectrumEmission_r14;
			AdditionalSpectrumEmission_v10l0_t	 additionalSpectrumEmission_v1440;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *additionalSpectrumEmissionV2X_r14;
	struct SL_V2X_FreqSelectionConfigList_r15	*v2x_FreqSelectionConfigList_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_InterFreqInfoV2X_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_sl_Bandwidth_r14_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_InterFreqInfoV2X_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_InterFreqInfoV2X_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_InterFreqInfoV2X_r14_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_InterFreqInfoV2X_r14_H_ */
#include <asn_internal.h>
