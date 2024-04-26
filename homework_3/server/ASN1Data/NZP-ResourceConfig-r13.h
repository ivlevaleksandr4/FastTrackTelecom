/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_NZP_ResourceConfig_r13_H_
#define	_NZP_ResourceConfig_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ResourceConfig-r13.h"
#include "NZP-TransmissionComb-r14.h"
#include "NZP-FrequencyDensity-r14.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NZP-ResourceConfig-r13 */
typedef struct NZP_ResourceConfig_r13 {
	ResourceConfig_r13_t	 resourceConfig_r13;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	NZP_TransmissionComb_r14_t	*transmissionComb_r14	/* OPTIONAL */;
	NZP_FrequencyDensity_r14_t	*frequencyDensity_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NZP_ResourceConfig_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NZP_ResourceConfig_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_NZP_ResourceConfig_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_NZP_ResourceConfig_r13_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NZP_ResourceConfig_r13_H_ */
#include <asn_internal.h>
