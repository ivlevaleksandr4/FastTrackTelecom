/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_CarrierFreqUTRA_FDD_H_
#define	_CarrierFreqUTRA_FDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueUTRA.h"
#include "CellReselectionPriority.h"
#include "ReselectionThreshold.h"
#include <NativeInteger.h>
#include "ReselectionThresholdQ-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CarrierFreqUTRA-FDD */
typedef struct CarrierFreqUTRA_FDD {
	ARFCN_ValueUTRA_t	 carrierFreq;
	CellReselectionPriority_t	*cellReselectionPriority	/* OPTIONAL */;
	ReselectionThreshold_t	 threshX_High;
	ReselectionThreshold_t	 threshX_Low;
	long	 q_RxLevMin;
	long	 p_MaxUTRA;
	long	 q_QualMin;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct CarrierFreqUTRA_FDD__threshX_Q_r9 {
		ReselectionThresholdQ_r9_t	 threshX_HighQ_r9;
		ReselectionThresholdQ_r9_t	 threshX_LowQ_r9;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *threshX_Q_r9;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CarrierFreqUTRA_FDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CarrierFreqUTRA_FDD;
extern asn_SEQUENCE_specifics_t asn_SPC_CarrierFreqUTRA_FDD_specs_1;
extern asn_TYPE_member_t asn_MBR_CarrierFreqUTRA_FDD_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _CarrierFreqUTRA_FDD_H_ */
#include <asn_internal.h>
