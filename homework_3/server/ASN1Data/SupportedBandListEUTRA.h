/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SupportedBandListEUTRA_H_
#define	_SupportedBandListEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SupportedBandEUTRA;

/* SupportedBandListEUTRA */
typedef struct SupportedBandListEUTRA {
	A_SEQUENCE_OF(struct SupportedBandEUTRA) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SupportedBandListEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SupportedBandListEUTRA;
extern asn_SET_OF_specifics_t asn_SPC_SupportedBandListEUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_SupportedBandListEUTRA_1[1];
extern asn_per_constraints_t asn_PER_type_SupportedBandListEUTRA_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SupportedBandListEUTRA_H_ */
#include <asn_internal.h>
