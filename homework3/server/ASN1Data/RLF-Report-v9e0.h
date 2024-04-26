/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_RLF_Report_v9e0_H_
#define	_RLF_Report_v9e0_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasResultList2EUTRA-v9e0.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RLF-Report-v9e0 */
typedef struct RLF_Report_v9e0 {
	MeasResultList2EUTRA_v9e0_t	 measResultListEUTRA_v9e0;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLF_Report_v9e0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RLF_Report_v9e0;
extern asn_SEQUENCE_specifics_t asn_SPC_RLF_Report_v9e0_specs_1;
extern asn_TYPE_member_t asn_MBR_RLF_Report_v9e0_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RLF_Report_v9e0_H_ */
#include <asn_internal.h>
