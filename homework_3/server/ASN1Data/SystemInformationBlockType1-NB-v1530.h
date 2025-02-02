/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SystemInformationBlockType1_NB_v1530_H_
#define	_SystemInformationBlockType1_NB_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TDD-Config-NB-r15.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformationBlockType1_NB_v1530__tdd_Parameters_r15__tdd_SI_CarrierInfo_r15 {
	SystemInformationBlockType1_NB_v1530__tdd_Parameters_r15__tdd_SI_CarrierInfo_r15_anchor	= 0,
	SystemInformationBlockType1_NB_v1530__tdd_Parameters_r15__tdd_SI_CarrierInfo_r15_non_anchor	= 1
} e_SystemInformationBlockType1_NB_v1530__tdd_Parameters_r15__tdd_SI_CarrierInfo_r15;

/* Forward declarations */
struct SchedulingInfoList_NB_v1530;
struct DL_Bitmap_NB_r13;

/* SystemInformationBlockType1-NB-v1530 */
typedef struct SystemInformationBlockType1_NB_v1530 {
	struct SystemInformationBlockType1_NB_v1530__tdd_Parameters_r15 {
		TDD_Config_NB_r15_t	 tdd_Config_r15;
		long	 tdd_SI_CarrierInfo_r15;
		struct DL_Bitmap_NB_r13	*tdd_SI_SubframesBitmap_r15	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *tdd_Parameters_r15;
	struct SchedulingInfoList_NB_v1530	*schedulingInfoList_v1530	/* OPTIONAL */;
	struct SystemInformationBlockType1_NB_v1530__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType1_NB_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_tdd_SI_CarrierInfo_r15_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType1_NB_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType1_NB_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType1_NB_v1530_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType1_NB_v1530_H_ */
#include <asn_internal.h>
