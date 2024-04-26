/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_RACH_ConfigCommon_H_
#define	_RACH_ConfigCommon_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PowerRampingParameters.h"
#include <NativeInteger.h>
#include "PreambleTransMax.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RACH_ConfigCommon__preambleInfo__numberOfRA_Preambles {
	RACH_ConfigCommon__preambleInfo__numberOfRA_Preambles_n4	= 0,
	RACH_ConfigCommon__preambleInfo__numberOfRA_Preambles_n8	= 1,
	RACH_ConfigCommon__preambleInfo__numberOfRA_Preambles_n12	= 2,
	RACH_ConfigCommon__preambleInfo__numberOfRA_Preambles_n16	= 3,
	RACH_ConfigCommon__preambleInfo__numberOfRA_Preambles_n20	= 4,
	RACH_ConfigCommon__preambleInfo__numberOfRA_Preambles_n24	= 5,
	RACH_ConfigCommon__preambleInfo__numberOfRA_Preambles_n28	= 6,
	RACH_ConfigCommon__preambleInfo__numberOfRA_Preambles_n32	= 7,
	RACH_ConfigCommon__preambleInfo__numberOfRA_Preambles_n36	= 8,
	RACH_ConfigCommon__preambleInfo__numberOfRA_Preambles_n40	= 9,
	RACH_ConfigCommon__preambleInfo__numberOfRA_Preambles_n44	= 10,
	RACH_ConfigCommon__preambleInfo__numberOfRA_Preambles_n48	= 11,
	RACH_ConfigCommon__preambleInfo__numberOfRA_Preambles_n52	= 12,
	RACH_ConfigCommon__preambleInfo__numberOfRA_Preambles_n56	= 13,
	RACH_ConfigCommon__preambleInfo__numberOfRA_Preambles_n60	= 14,
	RACH_ConfigCommon__preambleInfo__numberOfRA_Preambles_n64	= 15
} e_RACH_ConfigCommon__preambleInfo__numberOfRA_Preambles;
typedef enum RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__sizeOfRA_PreamblesGroupA {
	RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__sizeOfRA_PreamblesGroupA_n4	= 0,
	RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__sizeOfRA_PreamblesGroupA_n8	= 1,
	RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__sizeOfRA_PreamblesGroupA_n12	= 2,
	RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__sizeOfRA_PreamblesGroupA_n16	= 3,
	RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__sizeOfRA_PreamblesGroupA_n20	= 4,
	RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__sizeOfRA_PreamblesGroupA_n24	= 5,
	RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__sizeOfRA_PreamblesGroupA_n28	= 6,
	RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__sizeOfRA_PreamblesGroupA_n32	= 7,
	RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__sizeOfRA_PreamblesGroupA_n36	= 8,
	RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__sizeOfRA_PreamblesGroupA_n40	= 9,
	RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__sizeOfRA_PreamblesGroupA_n44	= 10,
	RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__sizeOfRA_PreamblesGroupA_n48	= 11,
	RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__sizeOfRA_PreamblesGroupA_n52	= 12,
	RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__sizeOfRA_PreamblesGroupA_n56	= 13,
	RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__sizeOfRA_PreamblesGroupA_n60	= 14
} e_RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__sizeOfRA_PreamblesGroupA;
typedef enum RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__messageSizeGroupA {
	RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__messageSizeGroupA_b56	= 0,
	RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__messageSizeGroupA_b144	= 1,
	RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__messageSizeGroupA_b208	= 2,
	RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__messageSizeGroupA_b256	= 3
} e_RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__messageSizeGroupA;
typedef enum RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__messagePowerOffsetGroupB {
	RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__messagePowerOffsetGroupB_minusinfinity	= 0,
	RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__messagePowerOffsetGroupB_dB0	= 1,
	RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__messagePowerOffsetGroupB_dB5	= 2,
	RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__messagePowerOffsetGroupB_dB8	= 3,
	RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__messagePowerOffsetGroupB_dB10	= 4,
	RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__messagePowerOffsetGroupB_dB12	= 5,
	RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__messagePowerOffsetGroupB_dB15	= 6,
	RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__messagePowerOffsetGroupB_dB18	= 7
} e_RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig__messagePowerOffsetGroupB;
typedef enum RACH_ConfigCommon__ra_SupervisionInfo__ra_ResponseWindowSize {
	RACH_ConfigCommon__ra_SupervisionInfo__ra_ResponseWindowSize_sf2	= 0,
	RACH_ConfigCommon__ra_SupervisionInfo__ra_ResponseWindowSize_sf3	= 1,
	RACH_ConfigCommon__ra_SupervisionInfo__ra_ResponseWindowSize_sf4	= 2,
	RACH_ConfigCommon__ra_SupervisionInfo__ra_ResponseWindowSize_sf5	= 3,
	RACH_ConfigCommon__ra_SupervisionInfo__ra_ResponseWindowSize_sf6	= 4,
	RACH_ConfigCommon__ra_SupervisionInfo__ra_ResponseWindowSize_sf7	= 5,
	RACH_ConfigCommon__ra_SupervisionInfo__ra_ResponseWindowSize_sf8	= 6,
	RACH_ConfigCommon__ra_SupervisionInfo__ra_ResponseWindowSize_sf10	= 7
} e_RACH_ConfigCommon__ra_SupervisionInfo__ra_ResponseWindowSize;
typedef enum RACH_ConfigCommon__ra_SupervisionInfo__mac_ContentionResolutionTimer {
	RACH_ConfigCommon__ra_SupervisionInfo__mac_ContentionResolutionTimer_sf8	= 0,
	RACH_ConfigCommon__ra_SupervisionInfo__mac_ContentionResolutionTimer_sf16	= 1,
	RACH_ConfigCommon__ra_SupervisionInfo__mac_ContentionResolutionTimer_sf24	= 2,
	RACH_ConfigCommon__ra_SupervisionInfo__mac_ContentionResolutionTimer_sf32	= 3,
	RACH_ConfigCommon__ra_SupervisionInfo__mac_ContentionResolutionTimer_sf40	= 4,
	RACH_ConfigCommon__ra_SupervisionInfo__mac_ContentionResolutionTimer_sf48	= 5,
	RACH_ConfigCommon__ra_SupervisionInfo__mac_ContentionResolutionTimer_sf56	= 6,
	RACH_ConfigCommon__ra_SupervisionInfo__mac_ContentionResolutionTimer_sf64	= 7
} e_RACH_ConfigCommon__ra_SupervisionInfo__mac_ContentionResolutionTimer;
typedef enum RACH_ConfigCommon__edt_SmallTBS_Subset_r15 {
	RACH_ConfigCommon__edt_SmallTBS_Subset_r15_true	= 0
} e_RACH_ConfigCommon__edt_SmallTBS_Subset_r15;

/* Forward declarations */
struct RACH_CE_LevelInfoList_r13;

/* RACH-ConfigCommon */
typedef struct RACH_ConfigCommon {
	struct RACH_ConfigCommon__preambleInfo {
		long	 numberOfRA_Preambles;
		struct RACH_ConfigCommon__preambleInfo__preamblesGroupAConfig {
			long	 sizeOfRA_PreamblesGroupA;
			long	 messageSizeGroupA;
			long	 messagePowerOffsetGroupB;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *preamblesGroupAConfig;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} preambleInfo;
	PowerRampingParameters_t	 powerRampingParameters;
	struct RACH_ConfigCommon__ra_SupervisionInfo {
		PreambleTransMax_t	 preambleTransMax;
		long	 ra_ResponseWindowSize;
		long	 mac_ContentionResolutionTimer;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ra_SupervisionInfo;
	long	 maxHARQ_Msg3Tx;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	PreambleTransMax_t	*preambleTransMax_CE_r13	/* OPTIONAL */;
	struct RACH_CE_LevelInfoList_r13	*rach_CE_LevelInfoList_r13	/* OPTIONAL */;
	long	*edt_SmallTBS_Subset_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RACH_ConfigCommon_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_numberOfRA_Preambles_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sizeOfRA_PreamblesGroupA_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_messageSizeGroupA_37;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_messagePowerOffsetGroupB_42;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ra_ResponseWindowSize_55;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mac_ContentionResolutionTimer_64;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_edt_SmallTBS_Subset_r15_77;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RACH_ConfigCommon;
extern asn_SEQUENCE_specifics_t asn_SPC_RACH_ConfigCommon_specs_1;
extern asn_TYPE_member_t asn_MBR_RACH_ConfigCommon_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _RACH_ConfigCommon_H_ */
#include <asn_internal.h>
