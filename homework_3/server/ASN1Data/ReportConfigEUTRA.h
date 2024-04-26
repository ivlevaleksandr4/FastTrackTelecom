/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_ReportConfigEUTRA_H_
#define	_ReportConfigEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include "ReportInterval.h"
#include <BOOLEAN.h>
#include "Hysteresis.h"
#include "TimeToTrigger.h"
#include "ThresholdEUTRA.h"
#include <constr_SEQUENCE.h>
#include "ThresholdEUTRA-v1250.h"
#include "MeasCSI-RS-Id-r12.h"
#include "SL-CBR-r14.h"
#include <constr_CHOICE.h>
#include <NULL.h>
#include "RS-SINR-Range-r13.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ReportConfigEUTRA__triggerType_PR {
	ReportConfigEUTRA__triggerType_PR_NOTHING,	/* No components present */
	ReportConfigEUTRA__triggerType_PR_event,
	ReportConfigEUTRA__triggerType_PR_periodical
} ReportConfigEUTRA__triggerType_PR;
typedef enum ReportConfigEUTRA__triggerType__event__eventId_PR {
	ReportConfigEUTRA__triggerType__event__eventId_PR_NOTHING,	/* No components present */
	ReportConfigEUTRA__triggerType__event__eventId_PR_eventA1,
	ReportConfigEUTRA__triggerType__event__eventId_PR_eventA2,
	ReportConfigEUTRA__triggerType__event__eventId_PR_eventA3,
	ReportConfigEUTRA__triggerType__event__eventId_PR_eventA4,
	ReportConfigEUTRA__triggerType__event__eventId_PR_eventA5,
	/* Extensions may appear below */
	ReportConfigEUTRA__triggerType__event__eventId_PR_eventA6_r10,
	ReportConfigEUTRA__triggerType__event__eventId_PR_eventC1_r12,
	ReportConfigEUTRA__triggerType__event__eventId_PR_eventC2_r12,
	ReportConfigEUTRA__triggerType__event__eventId_PR_eventV1_r14,
	ReportConfigEUTRA__triggerType__event__eventId_PR_eventV2_r14,
	ReportConfigEUTRA__triggerType__event__eventId_PR_eventH1_r15,
	ReportConfigEUTRA__triggerType__event__eventId_PR_eventH2_r15
} ReportConfigEUTRA__triggerType__event__eventId_PR;
typedef enum ReportConfigEUTRA__triggerType__periodical__purpose {
	ReportConfigEUTRA__triggerType__periodical__purpose_reportStrongestCells	= 0,
	ReportConfigEUTRA__triggerType__periodical__purpose_reportCGI	= 1
} e_ReportConfigEUTRA__triggerType__periodical__purpose;
typedef enum ReportConfigEUTRA__triggerQuantity {
	ReportConfigEUTRA__triggerQuantity_rsrp	= 0,
	ReportConfigEUTRA__triggerQuantity_rsrq	= 1
} e_ReportConfigEUTRA__triggerQuantity;
typedef enum ReportConfigEUTRA__reportQuantity {
	ReportConfigEUTRA__reportQuantity_sameAsTriggerQuantity	= 0,
	ReportConfigEUTRA__reportQuantity_both	= 1
} e_ReportConfigEUTRA__reportQuantity;
typedef enum ReportConfigEUTRA__reportAmount {
	ReportConfigEUTRA__reportAmount_r1	= 0,
	ReportConfigEUTRA__reportAmount_r2	= 1,
	ReportConfigEUTRA__reportAmount_r4	= 2,
	ReportConfigEUTRA__reportAmount_r8	= 3,
	ReportConfigEUTRA__reportAmount_r16	= 4,
	ReportConfigEUTRA__reportAmount_r32	= 5,
	ReportConfigEUTRA__reportAmount_r64	= 6,
	ReportConfigEUTRA__reportAmount_infinity	= 7
} e_ReportConfigEUTRA__reportAmount;
typedef enum ReportConfigEUTRA__si_RequestForHO_r9 {
	ReportConfigEUTRA__si_RequestForHO_r9_setup	= 0
} e_ReportConfigEUTRA__si_RequestForHO_r9;
typedef enum ReportConfigEUTRA__ue_RxTxTimeDiffPeriodical_r9 {
	ReportConfigEUTRA__ue_RxTxTimeDiffPeriodical_r9_setup	= 0
} e_ReportConfigEUTRA__ue_RxTxTimeDiffPeriodical_r9;
typedef enum ReportConfigEUTRA__includeLocationInfo_r10 {
	ReportConfigEUTRA__includeLocationInfo_r10_true	= 0
} e_ReportConfigEUTRA__includeLocationInfo_r10;
typedef enum ReportConfigEUTRA__reportAddNeighMeas_r10 {
	ReportConfigEUTRA__reportAddNeighMeas_r10_setup	= 0
} e_ReportConfigEUTRA__reportAddNeighMeas_r10;
typedef enum ReportConfigEUTRA__alternativeTimeToTrigger_r12_PR {
	ReportConfigEUTRA__alternativeTimeToTrigger_r12_PR_NOTHING,	/* No components present */
	ReportConfigEUTRA__alternativeTimeToTrigger_r12_PR_release,
	ReportConfigEUTRA__alternativeTimeToTrigger_r12_PR_setup
} ReportConfigEUTRA__alternativeTimeToTrigger_r12_PR;
typedef enum ReportConfigEUTRA__rs_sinr_Config_r13_PR {
	ReportConfigEUTRA__rs_sinr_Config_r13_PR_NOTHING,	/* No components present */
	ReportConfigEUTRA__rs_sinr_Config_r13_PR_release,
	ReportConfigEUTRA__rs_sinr_Config_r13_PR_setup
} ReportConfigEUTRA__rs_sinr_Config_r13_PR;
typedef enum ReportConfigEUTRA__rs_sinr_Config_r13__setup__triggerQuantity_v1310 {
	ReportConfigEUTRA__rs_sinr_Config_r13__setup__triggerQuantity_v1310_sinr	= 0
} e_ReportConfigEUTRA__rs_sinr_Config_r13__setup__triggerQuantity_v1310;
typedef enum ReportConfigEUTRA__rs_sinr_Config_r13__setup__reportQuantity_v1310 {
	ReportConfigEUTRA__rs_sinr_Config_r13__setup__reportQuantity_v1310_rsrpANDsinr	= 0,
	ReportConfigEUTRA__rs_sinr_Config_r13__setup__reportQuantity_v1310_rsrqANDsinr	= 1,
	ReportConfigEUTRA__rs_sinr_Config_r13__setup__reportQuantity_v1310_all	= 2
} e_ReportConfigEUTRA__rs_sinr_Config_r13__setup__reportQuantity_v1310;
typedef enum ReportConfigEUTRA__includeMultiBandInfo_r13 {
	ReportConfigEUTRA__includeMultiBandInfo_r13_true	= 0
} e_ReportConfigEUTRA__includeMultiBandInfo_r13;
typedef enum ReportConfigEUTRA__purpose_v1430 {
	ReportConfigEUTRA__purpose_v1430_reportLocation	= 0,
	ReportConfigEUTRA__purpose_v1430_sidelink	= 1,
	ReportConfigEUTRA__purpose_v1430_spare2	= 2,
	ReportConfigEUTRA__purpose_v1430_spare1	= 3
} e_ReportConfigEUTRA__purpose_v1430;
typedef enum ReportConfigEUTRA__purpose_r15 {
	ReportConfigEUTRA__purpose_r15_sensing	= 0
} e_ReportConfigEUTRA__purpose_r15;

/* Forward declarations */
struct RSRQ_RangeConfig_r12;
struct MeasRSSI_ReportConfig_r13;
struct UL_DelayConfig_r13;
struct BT_NameListConfig_r15;
struct WLAN_NameListConfig_r15;

/* ReportConfigEUTRA */
typedef struct ReportConfigEUTRA {
	struct ReportConfigEUTRA__triggerType {
		ReportConfigEUTRA__triggerType_PR present;
		union ReportConfigEUTRA__triggerType_u {
			struct ReportConfigEUTRA__triggerType__event {
				struct ReportConfigEUTRA__triggerType__event__eventId {
					ReportConfigEUTRA__triggerType__event__eventId_PR present;
					union ReportConfigEUTRA__triggerType__event__eventId_u {
						struct ReportConfigEUTRA__triggerType__event__eventId__eventA1 {
							ThresholdEUTRA_t	 a1_Threshold;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventA1;
						struct ReportConfigEUTRA__triggerType__event__eventId__eventA2 {
							ThresholdEUTRA_t	 a2_Threshold;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventA2;
						struct ReportConfigEUTRA__triggerType__event__eventId__eventA3 {
							long	 a3_Offset;
							BOOLEAN_t	 reportOnLeave;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventA3;
						struct ReportConfigEUTRA__triggerType__event__eventId__eventA4 {
							ThresholdEUTRA_t	 a4_Threshold;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventA4;
						struct ReportConfigEUTRA__triggerType__event__eventId__eventA5 {
							ThresholdEUTRA_t	 a5_Threshold1;
							ThresholdEUTRA_t	 a5_Threshold2;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventA5;
						/*
						 * This type is extensible,
						 * possible extensions are below.
						 */
						struct ReportConfigEUTRA__triggerType__event__eventId__eventA6_r10 {
							long	 a6_Offset_r10;
							BOOLEAN_t	 a6_ReportOnLeave_r10;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventA6_r10;
						struct ReportConfigEUTRA__triggerType__event__eventId__eventC1_r12 {
							ThresholdEUTRA_v1250_t	 c1_Threshold_r12;
							BOOLEAN_t	 c1_ReportOnLeave_r12;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventC1_r12;
						struct ReportConfigEUTRA__triggerType__event__eventId__eventC2_r12 {
							MeasCSI_RS_Id_r12_t	 c2_RefCSI_RS_r12;
							long	 c2_Offset_r12;
							BOOLEAN_t	 c2_ReportOnLeave_r12;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventC2_r12;
						struct ReportConfigEUTRA__triggerType__event__eventId__eventV1_r14 {
							SL_CBR_r14_t	 v1_Threshold_r14;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventV1_r14;
						struct ReportConfigEUTRA__triggerType__event__eventId__eventV2_r14 {
							SL_CBR_r14_t	 v2_Threshold_r14;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventV2_r14;
						struct ReportConfigEUTRA__triggerType__event__eventId__eventH1_r15 {
							long	 h1_ThresholdOffset_r15;
							long	 h1_Hysteresis_15;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventH1_r15;
						struct ReportConfigEUTRA__triggerType__event__eventId__eventH2_r15 {
							long	 h2_ThresholdOffset_r15;
							long	 h2_Hysteresis_15;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventH2_r15;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} eventId;
				Hysteresis_t	 hysteresis;
				TimeToTrigger_t	 timeToTrigger;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} event;
			struct ReportConfigEUTRA__triggerType__periodical {
				long	 purpose;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} periodical;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} triggerType;
	long	 triggerQuantity;
	long	 reportQuantity;
	long	 maxReportCells;
	ReportInterval_t	 reportInterval;
	long	 reportAmount;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	long	*si_RequestForHO_r9	/* OPTIONAL */;
	long	*ue_RxTxTimeDiffPeriodical_r9	/* OPTIONAL */;
	long	*includeLocationInfo_r10	/* OPTIONAL */;
	long	*reportAddNeighMeas_r10	/* OPTIONAL */;
	struct ReportConfigEUTRA__alternativeTimeToTrigger_r12 {
		ReportConfigEUTRA__alternativeTimeToTrigger_r12_PR present;
		union ReportConfigEUTRA__alternativeTimeToTrigger_r12_u {
			NULL_t	 release;
			TimeToTrigger_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *alternativeTimeToTrigger_r12;
	BOOLEAN_t	*useT312_r12	/* OPTIONAL */;
	BOOLEAN_t	*usePSCell_r12	/* OPTIONAL */;
	struct RSRQ_RangeConfig_r12	*aN_Threshold1_v1250	/* OPTIONAL */;
	struct RSRQ_RangeConfig_r12	*a5_Threshold2_v1250	/* OPTIONAL */;
	BOOLEAN_t	*reportStrongestCSI_RSs_r12	/* OPTIONAL */;
	BOOLEAN_t	*reportCRS_Meas_r12	/* OPTIONAL */;
	BOOLEAN_t	*triggerQuantityCSI_RS_r12	/* OPTIONAL */;
	BOOLEAN_t	*reportSSTD_Meas_r13	/* OPTIONAL */;
	struct ReportConfigEUTRA__rs_sinr_Config_r13 {
		ReportConfigEUTRA__rs_sinr_Config_r13_PR present;
		union ReportConfigEUTRA__rs_sinr_Config_r13_u {
			NULL_t	 release;
			struct ReportConfigEUTRA__rs_sinr_Config_r13__setup {
				long	*triggerQuantity_v1310	/* OPTIONAL */;
				RS_SINR_Range_r13_t	*aN_Threshold1_r13	/* OPTIONAL */;
				RS_SINR_Range_r13_t	*a5_Threshold2_r13	/* OPTIONAL */;
				long	 reportQuantity_v1310;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rs_sinr_Config_r13;
	BOOLEAN_t	*useWhiteCellList_r13	/* OPTIONAL */;
	struct MeasRSSI_ReportConfig_r13	*measRSSI_ReportConfig_r13	/* OPTIONAL */;
	long	*includeMultiBandInfo_r13	/* OPTIONAL */;
	struct UL_DelayConfig_r13	*ul_DelayConfig_r13	/* OPTIONAL */;
	BOOLEAN_t	*ue_RxTxTimeDiffPeriodicalTDD_r13	/* OPTIONAL */;
	long	*purpose_v1430	/* OPTIONAL */;
	long	*maxReportRS_Index_r15	/* OPTIONAL */;
	struct BT_NameListConfig_r15	*includeBT_Meas_r15	/* OPTIONAL */;
	struct WLAN_NameListConfig_r15	*includeWLAN_Meas_r15	/* OPTIONAL */;
	long	*purpose_r15	/* OPTIONAL */;
	long	*numberOfTriggeringCells_r15	/* OPTIONAL */;
	BOOLEAN_t	*a4_a5_ReportOnLeave_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReportConfigEUTRA_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_purpose_41;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_triggerQuantity_44;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_reportQuantity_47;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_reportAmount_52;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_si_RequestForHO_r9_62;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ue_RxTxTimeDiffPeriodical_r9_64;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_includeLocationInfo_r10_66;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_reportAddNeighMeas_r10_68;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_triggerQuantity_v1310_84;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_reportQuantity_v1310_88;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_includeMultiBandInfo_r13_94;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_purpose_v1430_98;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_purpose_r15_106;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ReportConfigEUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_ReportConfigEUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_ReportConfigEUTRA_1[32];

#ifdef __cplusplus
}
#endif

#endif	/* _ReportConfigEUTRA_H_ */
#include <asn_internal.h>
