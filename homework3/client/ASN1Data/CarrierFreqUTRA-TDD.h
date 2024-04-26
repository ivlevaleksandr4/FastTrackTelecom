/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_CarrierFreqUTRA_TDD_H_
#define	_CarrierFreqUTRA_TDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueUTRA.h"
#include "CellReselectionPriority.h"
#include "ReselectionThreshold.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CarrierFreqUTRA-TDD */
typedef struct CarrierFreqUTRA_TDD {
	ARFCN_ValueUTRA_t	 carrierFreq;
	CellReselectionPriority_t	*cellReselectionPriority	/* OPTIONAL */;
	ReselectionThreshold_t	 threshX_High;
	ReselectionThreshold_t	 threshX_Low;
	long	 q_RxLevMin;
	long	 p_MaxUTRA;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CarrierFreqUTRA_TDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CarrierFreqUTRA_TDD;
extern asn_SEQUENCE_specifics_t asn_SPC_CarrierFreqUTRA_TDD_specs_1;
extern asn_TYPE_member_t asn_MBR_CarrierFreqUTRA_TDD_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _CarrierFreqUTRA_TDD_H_ */
#include <asn_internal.h>
