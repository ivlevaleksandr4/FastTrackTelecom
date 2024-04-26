/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_BandParametersDL_r10_H_
#define	_BandParametersDL_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CA_MIMO_ParametersDL_r10;

/* BandParametersDL-r10 */
typedef struct BandParametersDL_r10 {
	A_SEQUENCE_OF(struct CA_MIMO_ParametersDL_r10) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandParametersDL_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandParametersDL_r10;
extern asn_SET_OF_specifics_t asn_SPC_BandParametersDL_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_BandParametersDL_r10_1[1];
extern asn_per_constraints_t asn_PER_type_BandParametersDL_r10_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _BandParametersDL_r10_H_ */
#include <asn_internal.h>
