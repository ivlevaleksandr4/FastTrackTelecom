/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_Paging_v1310_IEs_H_
#define	_Paging_v1310_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Paging_v1310_IEs__redistributionIndication_r13 {
	Paging_v1310_IEs__redistributionIndication_r13_true	= 0
} e_Paging_v1310_IEs__redistributionIndication_r13;
typedef enum Paging_v1310_IEs__systemInfoModification_eDRX_r13 {
	Paging_v1310_IEs__systemInfoModification_eDRX_r13_true	= 0
} e_Paging_v1310_IEs__systemInfoModification_eDRX_r13;

/* Forward declarations */
struct Paging_v1530_IEs;

/* Paging-v1310-IEs */
typedef struct Paging_v1310_IEs {
	long	*redistributionIndication_r13	/* OPTIONAL */;
	long	*systemInfoModification_eDRX_r13	/* OPTIONAL */;
	struct Paging_v1530_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Paging_v1310_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_redistributionIndication_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_systemInfoModification_eDRX_r13_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Paging_v1310_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_Paging_v1310_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_Paging_v1310_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _Paging_v1310_IEs_H_ */
#include <asn_internal.h>
