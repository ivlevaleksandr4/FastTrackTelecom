/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_NPRACH_ConfigSIB_NB_v1330_H_
#define	_NPRACH_ConfigSIB_NB_v1330_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NPRACH-ParametersList-NB-v1330.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NPRACH-ConfigSIB-NB-v1330 */
typedef struct NPRACH_ConfigSIB_NB_v1330 {
	NPRACH_ParametersList_NB_v1330_t	 nprach_ParametersList_v1330;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NPRACH_ConfigSIB_NB_v1330_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NPRACH_ConfigSIB_NB_v1330;
extern asn_SEQUENCE_specifics_t asn_SPC_NPRACH_ConfigSIB_NB_v1330_specs_1;
extern asn_TYPE_member_t asn_MBR_NPRACH_ConfigSIB_NB_v1330_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NPRACH_ConfigSIB_NB_v1330_H_ */
#include <asn_internal.h>
