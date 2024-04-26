/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_MeasIdleCarrierEUTRA_r15_H_
#define	_MeasIdleCarrierEUTRA_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueEUTRA-r9.h"
#include "AllowedMeasBandwidth.h"
#include <NativeEnumerated.h>
#include "RSRP-Range.h"
#include "RSRQ-Range-r13.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasIdleCarrierEUTRA_r15__reportQuantities {
	MeasIdleCarrierEUTRA_r15__reportQuantities_rsrp	= 0,
	MeasIdleCarrierEUTRA_r15__reportQuantities_rsrq	= 1,
	MeasIdleCarrierEUTRA_r15__reportQuantities_both	= 2
} e_MeasIdleCarrierEUTRA_r15__reportQuantities;

/* Forward declarations */
struct CellList_r15;

/* MeasIdleCarrierEUTRA-r15 */
typedef struct MeasIdleCarrierEUTRA_r15 {
	ARFCN_ValueEUTRA_r9_t	 carrierFreq_r15;
	AllowedMeasBandwidth_t	 allowedMeasBandwidth_r15;
	struct CellList_r15	*validityArea_r15	/* OPTIONAL */;
	struct CellList_r15	*measCellList_r15	/* OPTIONAL */;
	long	 reportQuantities;
	struct MeasIdleCarrierEUTRA_r15__qualityThreshold_r15 {
		RSRP_Range_t	*idleRSRP_Threshold_r15	/* OPTIONAL */;
		RSRQ_Range_r13_t	*idleRSRQ_Threshold_r15	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *qualityThreshold_r15;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasIdleCarrierEUTRA_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_reportQuantities_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MeasIdleCarrierEUTRA_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasIdleCarrierEUTRA_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasIdleCarrierEUTRA_r15_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasIdleCarrierEUTRA_r15_H_ */
#include <asn_internal.h>
