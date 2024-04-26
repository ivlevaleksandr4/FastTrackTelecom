/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_MeasGapConfigPerCC_r14_H_
#define	_MeasGapConfigPerCC_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ServCellIndex-r13.h"
#include "MeasGapConfig.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasGapConfigPerCC-r14 */
typedef struct MeasGapConfigPerCC_r14 {
	ServCellIndex_r13_t	 servCellId_r14;
	MeasGapConfig_t	 measGapConfigCC_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasGapConfigPerCC_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasGapConfigPerCC_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasGapConfigPerCC_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasGapConfigPerCC_r14_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasGapConfigPerCC_r14_H_ */
#include <asn_internal.h>
