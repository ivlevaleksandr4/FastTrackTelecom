/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_CQI_ReportPeriodic_v1310_H_
#define	_CQI_ReportPeriodic_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CQI_ReportPeriodic_v1310__simultaneousAckNackAndCQI_Format4_Format5_r13 {
	CQI_ReportPeriodic_v1310__simultaneousAckNackAndCQI_Format4_Format5_r13_setup	= 0
} e_CQI_ReportPeriodic_v1310__simultaneousAckNackAndCQI_Format4_Format5_r13;

/* Forward declarations */
struct CRI_ReportConfig_r13;

/* CQI-ReportPeriodic-v1310 */
typedef struct CQI_ReportPeriodic_v1310 {
	struct CRI_ReportConfig_r13	*cri_ReportConfig_r13	/* OPTIONAL */;
	long	*simultaneousAckNackAndCQI_Format4_Format5_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CQI_ReportPeriodic_v1310_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_simultaneousAckNackAndCQI_Format4_Format5_r13_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CQI_ReportPeriodic_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_CQI_ReportPeriodic_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_CQI_ReportPeriodic_v1310_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CQI_ReportPeriodic_v1310_H_ */
#include <asn_internal.h>
