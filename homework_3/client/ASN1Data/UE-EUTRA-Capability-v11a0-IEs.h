/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_UE_EUTRA_Capability_v11a0_IEs_H_
#define	_UE_EUTRA_Capability_v11a0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasParameters_v11a0;
struct UE_EUTRA_Capability_v1250_IEs;

/* UE-EUTRA-Capability-v11a0-IEs */
typedef struct UE_EUTRA_Capability_v11a0_IEs {
	long	*ue_Category_v11a0	/* OPTIONAL */;
	struct MeasParameters_v11a0	*measParameters_v11a0	/* OPTIONAL */;
	struct UE_EUTRA_Capability_v1250_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_v11a0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v11a0_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v11a0_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v11a0_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_EUTRA_Capability_v11a0_IEs_H_ */
#include <asn_internal.h>
