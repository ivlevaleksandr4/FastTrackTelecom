/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_PhysicalConfigDedicated_v13c0_H_
#define	_PhysicalConfigDedicated_v13c0_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PUCCH-ConfigDedicated-v13c0.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PhysicalConfigDedicated-v13c0 */
typedef struct PhysicalConfigDedicated_v13c0 {
	PUCCH_ConfigDedicated_v13c0_t	 pucch_ConfigDedicated_v13c0;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhysicalConfigDedicated_v13c0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhysicalConfigDedicated_v13c0;
extern asn_SEQUENCE_specifics_t asn_SPC_PhysicalConfigDedicated_v13c0_specs_1;
extern asn_TYPE_member_t asn_MBR_PhysicalConfigDedicated_v13c0_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _PhysicalConfigDedicated_v13c0_H_ */
#include <asn_internal.h>
