/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_RadioResourceConfigCommon_H_
#define	_RadioResourceConfigCommon_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PRACH-Config.h"
#include "PUSCH-ConfigCommon.h"
#include "P-Max.h"
#include "UL-CyclicPrefixLength.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RACH_ConfigCommon;
struct PDSCH_ConfigCommon;
struct PHICH_Config;
struct PUCCH_ConfigCommon;
struct SoundingRS_UL_ConfigCommon;
struct UplinkPowerControlCommon;
struct AntennaInfoCommon;
struct TDD_Config;
struct UplinkPowerControlCommon_v1020;
struct TDD_Config_v1130;
struct PUSCH_ConfigCommon_v1270;
struct PRACH_Config_v1310;
struct FreqHoppingParameters_r13;
struct PDSCH_ConfigCommon_v1310;
struct PUCCH_ConfigCommon_v1310;
struct PUSCH_ConfigCommon_v1310;
struct UplinkPowerControlCommon_v1310;
struct HighSpeedConfig_r14;
struct PRACH_Config_v1430;
struct PUCCH_ConfigCommon_v1430;
struct TDD_Config_v1430;
struct TDD_Config_v1450;
struct UplinkPowerControlCommon_v1530;
struct HighSpeedConfig_v1530;

/* RadioResourceConfigCommon */
typedef struct RadioResourceConfigCommon {
	struct RACH_ConfigCommon	*rach_ConfigCommon	/* OPTIONAL */;
	PRACH_Config_t	 prach_Config;
	struct PDSCH_ConfigCommon	*pdsch_ConfigCommon	/* OPTIONAL */;
	PUSCH_ConfigCommon_t	 pusch_ConfigCommon;
	struct PHICH_Config	*phich_Config	/* OPTIONAL */;
	struct PUCCH_ConfigCommon	*pucch_ConfigCommon	/* OPTIONAL */;
	struct SoundingRS_UL_ConfigCommon	*soundingRS_UL_ConfigCommon	/* OPTIONAL */;
	struct UplinkPowerControlCommon	*uplinkPowerControlCommon	/* OPTIONAL */;
	struct AntennaInfoCommon	*antennaInfoCommon	/* OPTIONAL */;
	P_Max_t	*p_Max	/* OPTIONAL */;
	struct TDD_Config	*tdd_Config	/* OPTIONAL */;
	UL_CyclicPrefixLength_t	 ul_CyclicPrefixLength;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct UplinkPowerControlCommon_v1020	*uplinkPowerControlCommon_v1020	/* OPTIONAL */;
	struct TDD_Config_v1130	*tdd_Config_v1130	/* OPTIONAL */;
	struct PUSCH_ConfigCommon_v1270	*pusch_ConfigCommon_v1270	/* OPTIONAL */;
	struct PRACH_Config_v1310	*prach_Config_v1310	/* OPTIONAL */;
	struct FreqHoppingParameters_r13	*freqHoppingParameters_r13	/* OPTIONAL */;
	struct PDSCH_ConfigCommon_v1310	*pdsch_ConfigCommon_v1310	/* OPTIONAL */;
	struct PUCCH_ConfigCommon_v1310	*pucch_ConfigCommon_v1310	/* OPTIONAL */;
	struct PUSCH_ConfigCommon_v1310	*pusch_ConfigCommon_v1310	/* OPTIONAL */;
	struct UplinkPowerControlCommon_v1310	*uplinkPowerControlCommon_v1310	/* OPTIONAL */;
	struct HighSpeedConfig_r14	*highSpeedConfig_r14	/* OPTIONAL */;
	struct PRACH_Config_v1430	*prach_Config_v1430	/* OPTIONAL */;
	struct PUCCH_ConfigCommon_v1430	*pucch_ConfigCommon_v1430	/* OPTIONAL */;
	struct TDD_Config_v1430	*tdd_Config_v1430	/* OPTIONAL */;
	struct TDD_Config_v1450	*tdd_Config_v1450	/* OPTIONAL */;
	struct UplinkPowerControlCommon_v1530	*uplinkPowerControlCommon_v1530	/* OPTIONAL */;
	struct HighSpeedConfig_v1530	*highSpeedConfig_v1530	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioResourceConfigCommon_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigCommon;
extern asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigCommon_specs_1;
extern asn_TYPE_member_t asn_MBR_RadioResourceConfigCommon_1[28];

#ifdef __cplusplus
}
#endif

#endif	/* _RadioResourceConfigCommon_H_ */
#include <asn_internal.h>
