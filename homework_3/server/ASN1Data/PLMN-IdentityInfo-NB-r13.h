/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_PLMN_IdentityInfo_NB_r13_H_
#define	_PLMN_IdentityInfo_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMN-Identity.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PLMN_IdentityInfo_NB_r13__cellReservedForOperatorUse_r13 {
	PLMN_IdentityInfo_NB_r13__cellReservedForOperatorUse_r13_reserved	= 0,
	PLMN_IdentityInfo_NB_r13__cellReservedForOperatorUse_r13_notReserved	= 1
} e_PLMN_IdentityInfo_NB_r13__cellReservedForOperatorUse_r13;
typedef enum PLMN_IdentityInfo_NB_r13__attachWithoutPDN_Connectivity_r13 {
	PLMN_IdentityInfo_NB_r13__attachWithoutPDN_Connectivity_r13_true	= 0
} e_PLMN_IdentityInfo_NB_r13__attachWithoutPDN_Connectivity_r13;

/* PLMN-IdentityInfo-NB-r13 */
typedef struct PLMN_IdentityInfo_NB_r13 {
	PLMN_Identity_t	 plmn_Identity_r13;
	long	 cellReservedForOperatorUse_r13;
	long	*attachWithoutPDN_Connectivity_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PLMN_IdentityInfo_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_cellReservedForOperatorUse_r13_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_attachWithoutPDN_Connectivity_r13_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PLMN_IdentityInfo_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_PLMN_IdentityInfo_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_PLMN_IdentityInfo_NB_r13_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PLMN_IdentityInfo_NB_r13_H_ */
#include <asn_internal.h>
