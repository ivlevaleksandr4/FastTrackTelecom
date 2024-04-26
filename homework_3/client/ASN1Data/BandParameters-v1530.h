/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_BandParameters_v1530_H_
#define	_BandParameters_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BandParameters_v1530__ue_TxAntennaSelection_SRS_1T4R_r15 {
	BandParameters_v1530__ue_TxAntennaSelection_SRS_1T4R_r15_supported	= 0
} e_BandParameters_v1530__ue_TxAntennaSelection_SRS_1T4R_r15;
typedef enum BandParameters_v1530__ue_TxAntennaSelection_SRS_2T4R_2Pairs_r15 {
	BandParameters_v1530__ue_TxAntennaSelection_SRS_2T4R_2Pairs_r15_supported	= 0
} e_BandParameters_v1530__ue_TxAntennaSelection_SRS_2T4R_2Pairs_r15;
typedef enum BandParameters_v1530__ue_TxAntennaSelection_SRS_2T4R_3Pairs_r15 {
	BandParameters_v1530__ue_TxAntennaSelection_SRS_2T4R_3Pairs_r15_supported	= 0
} e_BandParameters_v1530__ue_TxAntennaSelection_SRS_2T4R_3Pairs_r15;
typedef enum BandParameters_v1530__dl_1024QAM_r15 {
	BandParameters_v1530__dl_1024QAM_r15_supported	= 0
} e_BandParameters_v1530__dl_1024QAM_r15;
typedef enum BandParameters_v1530__qcl_TypeC_Operation_r15 {
	BandParameters_v1530__qcl_TypeC_Operation_r15_supported	= 0
} e_BandParameters_v1530__qcl_TypeC_Operation_r15;
typedef enum BandParameters_v1530__qcl_CRI_BasedCSI_Reporting_r15 {
	BandParameters_v1530__qcl_CRI_BasedCSI_Reporting_r15_supported	= 0
} e_BandParameters_v1530__qcl_CRI_BasedCSI_Reporting_r15;

/* Forward declarations */
struct STTI_SPT_BandParameters_r15;

/* BandParameters-v1530 */
typedef struct BandParameters_v1530 {
	long	*ue_TxAntennaSelection_SRS_1T4R_r15	/* OPTIONAL */;
	long	*ue_TxAntennaSelection_SRS_2T4R_2Pairs_r15	/* OPTIONAL */;
	long	*ue_TxAntennaSelection_SRS_2T4R_3Pairs_r15	/* OPTIONAL */;
	long	*dl_1024QAM_r15	/* OPTIONAL */;
	long	*qcl_TypeC_Operation_r15	/* OPTIONAL */;
	long	*qcl_CRI_BasedCSI_Reporting_r15	/* OPTIONAL */;
	struct STTI_SPT_BandParameters_r15	*stti_SPT_BandParameters_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandParameters_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ue_TxAntennaSelection_SRS_1T4R_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ue_TxAntennaSelection_SRS_2T4R_2Pairs_r15_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ue_TxAntennaSelection_SRS_2T4R_3Pairs_r15_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dl_1024QAM_r15_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_qcl_TypeC_Operation_r15_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_qcl_CRI_BasedCSI_Reporting_r15_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_BandParameters_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_BandParameters_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_BandParameters_v1530_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _BandParameters_v1530_H_ */
#include <asn_internal.h>
