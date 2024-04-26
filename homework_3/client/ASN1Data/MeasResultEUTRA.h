/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_MeasResultEUTRA_H_
#define	_MeasResultEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhysCellId.h"
#include "CellGlobalIdEUTRA.h"
#include "TrackingAreaCode.h"
#include <constr_SEQUENCE.h>
#include "RSRP-Range.h"
#include "RSRQ-Range.h"
#include <NativeEnumerated.h>
#include "RSRQ-Range-v1250.h"
#include "RS-SINR-Range-r13.h"
#include "RSRP-Range-v1360.h"
#include "FreqBandIndicator-r11.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasResultEUTRA__measResult__primaryPLMN_Suitable_r12 {
	MeasResultEUTRA__measResult__primaryPLMN_Suitable_r12_true	= 0
} e_MeasResultEUTRA__measResult__primaryPLMN_Suitable_r12;
typedef enum MeasResultEUTRA__measResult__cgi_Info_v1310__freqBandIndicatorPriority_r13 {
	MeasResultEUTRA__measResult__cgi_Info_v1310__freqBandIndicatorPriority_r13_true	= 0
} e_MeasResultEUTRA__measResult__cgi_Info_v1310__freqBandIndicatorPriority_r13;

/* Forward declarations */
struct PLMN_IdentityList2;
struct AdditionalSI_Info_r9;
struct MultiBandInfoList_r11;
struct CellAccessRelatedInfo_5GC_r15;

/* MeasResultEUTRA */
typedef struct MeasResultEUTRA {
	PhysCellId_t	 physCellId;
	struct MeasResultEUTRA__cgi_Info {
		CellGlobalIdEUTRA_t	 cellGlobalId;
		TrackingAreaCode_t	 trackingAreaCode;
		struct PLMN_IdentityList2	*plmn_IdentityList	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cgi_Info;
	struct MeasResultEUTRA__measResult {
		RSRP_Range_t	*rsrpResult	/* OPTIONAL */;
		RSRQ_Range_t	*rsrqResult	/* OPTIONAL */;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		struct AdditionalSI_Info_r9	*additionalSI_Info_r9	/* OPTIONAL */;
		long	*primaryPLMN_Suitable_r12	/* OPTIONAL */;
		RSRQ_Range_v1250_t	*measResult_v1250	/* OPTIONAL */;
		RS_SINR_Range_r13_t	*rs_sinr_Result_r13	/* OPTIONAL */;
		struct MeasResultEUTRA__measResult__cgi_Info_v1310 {
			FreqBandIndicator_r11_t	*freqBandIndicator_r13	/* OPTIONAL */;
			struct MultiBandInfoList_r11	*multiBandInfoList_r13	/* OPTIONAL */;
			long	*freqBandIndicatorPriority_r13	/* OPTIONAL */;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *cgi_Info_v1310;
		RSRP_Range_v1360_t	*measResult_v1360	/* OPTIONAL */;
		struct MeasResultEUTRA__measResult__cgi_Info_5GC_r15 {
			A_SEQUENCE_OF(struct CellAccessRelatedInfo_5GC_r15) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *cgi_Info_5GC_r15;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResult;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultEUTRA_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_primaryPLMN_Suitable_r12_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_freqBandIndicatorPriority_r13_19;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultEUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResultEUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultEUTRA_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultEUTRA_H_ */
#include <asn_internal.h>
