/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_IRAT_ParametersUTRA_v9c0_H_
#define	_IRAT_ParametersUTRA_v9c0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IRAT_ParametersUTRA_v9c0__voiceOverPS_HS_UTRA_FDD_r9 {
	IRAT_ParametersUTRA_v9c0__voiceOverPS_HS_UTRA_FDD_r9_supported	= 0
} e_IRAT_ParametersUTRA_v9c0__voiceOverPS_HS_UTRA_FDD_r9;
typedef enum IRAT_ParametersUTRA_v9c0__voiceOverPS_HS_UTRA_TDD128_r9 {
	IRAT_ParametersUTRA_v9c0__voiceOverPS_HS_UTRA_TDD128_r9_supported	= 0
} e_IRAT_ParametersUTRA_v9c0__voiceOverPS_HS_UTRA_TDD128_r9;
typedef enum IRAT_ParametersUTRA_v9c0__srvcc_FromUTRA_FDD_ToUTRA_FDD_r9 {
	IRAT_ParametersUTRA_v9c0__srvcc_FromUTRA_FDD_ToUTRA_FDD_r9_supported	= 0
} e_IRAT_ParametersUTRA_v9c0__srvcc_FromUTRA_FDD_ToUTRA_FDD_r9;
typedef enum IRAT_ParametersUTRA_v9c0__srvcc_FromUTRA_FDD_ToGERAN_r9 {
	IRAT_ParametersUTRA_v9c0__srvcc_FromUTRA_FDD_ToGERAN_r9_supported	= 0
} e_IRAT_ParametersUTRA_v9c0__srvcc_FromUTRA_FDD_ToGERAN_r9;
typedef enum IRAT_ParametersUTRA_v9c0__srvcc_FromUTRA_TDD128_ToUTRA_TDD128_r9 {
	IRAT_ParametersUTRA_v9c0__srvcc_FromUTRA_TDD128_ToUTRA_TDD128_r9_supported	= 0
} e_IRAT_ParametersUTRA_v9c0__srvcc_FromUTRA_TDD128_ToUTRA_TDD128_r9;
typedef enum IRAT_ParametersUTRA_v9c0__srvcc_FromUTRA_TDD128_ToGERAN_r9 {
	IRAT_ParametersUTRA_v9c0__srvcc_FromUTRA_TDD128_ToGERAN_r9_supported	= 0
} e_IRAT_ParametersUTRA_v9c0__srvcc_FromUTRA_TDD128_ToGERAN_r9;

/* IRAT-ParametersUTRA-v9c0 */
typedef struct IRAT_ParametersUTRA_v9c0 {
	long	*voiceOverPS_HS_UTRA_FDD_r9	/* OPTIONAL */;
	long	*voiceOverPS_HS_UTRA_TDD128_r9	/* OPTIONAL */;
	long	*srvcc_FromUTRA_FDD_ToUTRA_FDD_r9	/* OPTIONAL */;
	long	*srvcc_FromUTRA_FDD_ToGERAN_r9	/* OPTIONAL */;
	long	*srvcc_FromUTRA_TDD128_ToUTRA_TDD128_r9	/* OPTIONAL */;
	long	*srvcc_FromUTRA_TDD128_ToGERAN_r9	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IRAT_ParametersUTRA_v9c0_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_voiceOverPS_HS_UTRA_FDD_r9_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_voiceOverPS_HS_UTRA_TDD128_r9_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_srvcc_FromUTRA_FDD_ToUTRA_FDD_r9_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_srvcc_FromUTRA_FDD_ToGERAN_r9_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_srvcc_FromUTRA_TDD128_ToUTRA_TDD128_r9_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_srvcc_FromUTRA_TDD128_ToGERAN_r9_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_IRAT_ParametersUTRA_v9c0;
extern asn_SEQUENCE_specifics_t asn_SPC_IRAT_ParametersUTRA_v9c0_specs_1;
extern asn_TYPE_member_t asn_MBR_IRAT_ParametersUTRA_v9c0_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _IRAT_ParametersUTRA_v9c0_H_ */
#include <asn_internal.h>
