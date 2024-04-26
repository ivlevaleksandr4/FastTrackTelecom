/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_UE_EUTRA_Capability_v10f0_IEs_H_
#define	_UE_EUTRA_Capability_v10f0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RF_Parameters_v10f0;
struct UE_EUTRA_Capability_v10i0_IEs;

/* UE-EUTRA-Capability-v10f0-IEs */
typedef struct UE_EUTRA_Capability_v10f0_IEs {
	struct RF_Parameters_v10f0	*rf_Parameters_v10f0	/* OPTIONAL */;
	struct UE_EUTRA_Capability_v10i0_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_v10f0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v10f0_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v10f0_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v10f0_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_EUTRA_Capability_v10f0_IEs_H_ */
#include <asn_internal.h>
