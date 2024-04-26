/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SystemInformationBlockType1_NB_H_
#define	_SystemInformationBlockType1_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include "P-Max.h"
#include "FreqBandIndicator-NB-r13.h"
#include <NativeEnumerated.h>
#include "SchedulingInfoList-NB-r13.h"
#include <NativeInteger.h>
#include <OCTET_STRING.h>
#include "PLMN-IdentityList-NB-r13.h"
#include "TrackingAreaCode.h"
#include "CellIdentity.h"
#include <constr_SEQUENCE.h>
#include "Q-RxLevMin.h"
#include "Q-QualMin-r9.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformationBlockType1_NB__cellAccessRelatedInfo_r13__cellBarred_r13 {
	SystemInformationBlockType1_NB__cellAccessRelatedInfo_r13__cellBarred_r13_barred	= 0,
	SystemInformationBlockType1_NB__cellAccessRelatedInfo_r13__cellBarred_r13_notBarred	= 1
} e_SystemInformationBlockType1_NB__cellAccessRelatedInfo_r13__cellBarred_r13;
typedef enum SystemInformationBlockType1_NB__cellAccessRelatedInfo_r13__intraFreqReselection_r13 {
	SystemInformationBlockType1_NB__cellAccessRelatedInfo_r13__intraFreqReselection_r13_allowed	= 0,
	SystemInformationBlockType1_NB__cellAccessRelatedInfo_r13__intraFreqReselection_r13_notAllowed	= 1
} e_SystemInformationBlockType1_NB__cellAccessRelatedInfo_r13__intraFreqReselection_r13;
typedef enum SystemInformationBlockType1_NB__eutraControlRegionSize_r13 {
	SystemInformationBlockType1_NB__eutraControlRegionSize_r13_n1	= 0,
	SystemInformationBlockType1_NB__eutraControlRegionSize_r13_n2	= 1,
	SystemInformationBlockType1_NB__eutraControlRegionSize_r13_n3	= 2
} e_SystemInformationBlockType1_NB__eutraControlRegionSize_r13;
typedef enum SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13 {
	SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB_6	= 0,
	SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB_4dot77	= 1,
	SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB_3	= 2,
	SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB_1dot77	= 3,
	SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB0	= 4,
	SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB1	= 5,
	SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB1dot23	= 6,
	SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB2	= 7,
	SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB3	= 8,
	SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB4	= 9,
	SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB4dot23	= 10,
	SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB5	= 11,
	SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB6	= 12,
	SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB7	= 13,
	SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB8	= 14,
	SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB9	= 15
} e_SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13;
typedef enum SystemInformationBlockType1_NB__si_WindowLength_r13 {
	SystemInformationBlockType1_NB__si_WindowLength_r13_ms160	= 0,
	SystemInformationBlockType1_NB__si_WindowLength_r13_ms320	= 1,
	SystemInformationBlockType1_NB__si_WindowLength_r13_ms480	= 2,
	SystemInformationBlockType1_NB__si_WindowLength_r13_ms640	= 3,
	SystemInformationBlockType1_NB__si_WindowLength_r13_ms960	= 4,
	SystemInformationBlockType1_NB__si_WindowLength_r13_ms1280	= 5,
	SystemInformationBlockType1_NB__si_WindowLength_r13_ms1600	= 6,
	SystemInformationBlockType1_NB__si_WindowLength_r13_spare1	= 7
} e_SystemInformationBlockType1_NB__si_WindowLength_r13;

/* Forward declarations */
struct NS_PmaxList_NB_r13;
struct MultiBandInfoList_NB_r13;
struct DL_Bitmap_NB_r13;
struct SystemInfoValueTagList_NB_r13;
struct SystemInformationBlockType1_NB_v1350;

/* SystemInformationBlockType1-NB */
typedef struct SystemInformationBlockType1_NB {
	BIT_STRING_t	 hyperSFN_MSB_r13;
	struct SystemInformationBlockType1_NB__cellAccessRelatedInfo_r13 {
		PLMN_IdentityList_NB_r13_t	 plmn_IdentityList_r13;
		TrackingAreaCode_t	 trackingAreaCode_r13;
		CellIdentity_t	 cellIdentity_r13;
		long	 cellBarred_r13;
		long	 intraFreqReselection_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} cellAccessRelatedInfo_r13;
	struct SystemInformationBlockType1_NB__cellSelectionInfo_r13 {
		Q_RxLevMin_t	 q_RxLevMin_r13;
		Q_QualMin_r9_t	 q_QualMin_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} cellSelectionInfo_r13;
	P_Max_t	*p_Max_r13	/* OPTIONAL */;
	FreqBandIndicator_NB_r13_t	 freqBandIndicator_r13;
	struct NS_PmaxList_NB_r13	*freqBandInfo_r13	/* OPTIONAL */;
	struct MultiBandInfoList_NB_r13	*multiBandInfoList_r13	/* OPTIONAL */;
	struct DL_Bitmap_NB_r13	*downlinkBitmap_r13	/* OPTIONAL */;
	long	*eutraControlRegionSize_r13	/* OPTIONAL */;
	long	*nrs_CRS_PowerOffset_r13	/* OPTIONAL */;
	SchedulingInfoList_NB_r13_t	 schedulingInfoList_r13;
	long	 si_WindowLength_r13;
	long	*si_RadioFrameOffset_r13	/* OPTIONAL */;
	struct SystemInfoValueTagList_NB_r13	*systemInfoValueTagList_r13	/* OPTIONAL */;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct SystemInformationBlockType1_NB_v1350	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType1_NB_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_cellBarred_r13_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_intraFreqReselection_r13_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_eutraControlRegionSize_r13_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nrs_CRS_PowerOffset_r13_25;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_si_WindowLength_r13_43;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType1_NB;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType1_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType1_NB_1[16];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType1_NB_H_ */
#include <asn_internal.h>
