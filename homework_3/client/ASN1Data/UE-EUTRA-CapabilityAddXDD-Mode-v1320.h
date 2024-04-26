/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_UE_EUTRA_CapabilityAddXDD_Mode_v1320_H_
#define	_UE_EUTRA_CapabilityAddXDD_Mode_v1320_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhyLayerParameters_v1320;
struct SCPTM_Parameters_r13;

/* UE-EUTRA-CapabilityAddXDD-Mode-v1320 */
typedef struct UE_EUTRA_CapabilityAddXDD_Mode_v1320 {
	struct PhyLayerParameters_v1320	*phyLayerParameters_v1320	/* OPTIONAL */;
	struct SCPTM_Parameters_r13	*scptm_Parameters_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_CapabilityAddXDD_Mode_v1320_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1320;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_CapabilityAddXDD_Mode_v1320_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_EUTRA_CapabilityAddXDD_Mode_v1320_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_EUTRA_CapabilityAddXDD_Mode_v1320_H_ */
#include <asn_internal.h>
