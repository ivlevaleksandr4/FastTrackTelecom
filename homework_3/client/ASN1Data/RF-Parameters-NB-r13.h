/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_RF_Parameters_NB_r13_H_
#define	_RF_Parameters_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SupportedBandList-NB-r13.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RF_Parameters_NB_r13__multiNS_Pmax_r13 {
	RF_Parameters_NB_r13__multiNS_Pmax_r13_supported	= 0
} e_RF_Parameters_NB_r13__multiNS_Pmax_r13;

/* RF-Parameters-NB-r13 */
typedef struct RF_Parameters_NB_r13 {
	SupportedBandList_NB_r13_t	 supportedBandList_r13;
	long	*multiNS_Pmax_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RF_Parameters_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_multiNS_Pmax_r13_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RF_Parameters_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_RF_Parameters_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_RF_Parameters_NB_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RF_Parameters_NB_r13_H_ */
#include <asn_internal.h>
