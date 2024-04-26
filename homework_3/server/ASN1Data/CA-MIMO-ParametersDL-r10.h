/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_CA_MIMO_ParametersDL_r10_H_
#define	_CA_MIMO_ParametersDL_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CA-BandwidthClass-r10.h"
#include "MIMO-CapabilityDL-r10.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CA-MIMO-ParametersDL-r10 */
typedef struct CA_MIMO_ParametersDL_r10 {
	CA_BandwidthClass_r10_t	 ca_BandwidthClassDL_r10;
	MIMO_CapabilityDL_r10_t	*supportedMIMO_CapabilityDL_r10	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CA_MIMO_ParametersDL_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CA_MIMO_ParametersDL_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_CA_MIMO_ParametersDL_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_CA_MIMO_ParametersDL_r10_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CA_MIMO_ParametersDL_r10_H_ */
#include <asn_internal.h>
