/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SL_Parameters_v1530_H_
#define	_SL_Parameters_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_Parameters_v1530__slss_SupportedTxFreq_r15 {
	SL_Parameters_v1530__slss_SupportedTxFreq_r15_single	= 0,
	SL_Parameters_v1530__slss_SupportedTxFreq_r15_multiple	= 1
} e_SL_Parameters_v1530__slss_SupportedTxFreq_r15;
typedef enum SL_Parameters_v1530__sl_64QAM_Tx_r15 {
	SL_Parameters_v1530__sl_64QAM_Tx_r15_supported	= 0
} e_SL_Parameters_v1530__sl_64QAM_Tx_r15;
typedef enum SL_Parameters_v1530__sl_TxDiversity_r15 {
	SL_Parameters_v1530__sl_TxDiversity_r15_supported	= 0
} e_SL_Parameters_v1530__sl_TxDiversity_r15;

/* Forward declarations */
struct UE_CategorySL_r15;
struct V2X_SupportedBandCombination_v1530;

/* SL-Parameters-v1530 */
typedef struct SL_Parameters_v1530 {
	long	*slss_SupportedTxFreq_r15	/* OPTIONAL */;
	long	*sl_64QAM_Tx_r15	/* OPTIONAL */;
	long	*sl_TxDiversity_r15	/* OPTIONAL */;
	struct UE_CategorySL_r15	*ue_CategorySL_r15	/* OPTIONAL */;
	struct V2X_SupportedBandCombination_v1530	*v2x_SupportedBandCombinationList_v1530	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_Parameters_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_slss_SupportedTxFreq_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sl_64QAM_Tx_r15_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sl_TxDiversity_r15_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_Parameters_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_Parameters_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_Parameters_v1530_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_Parameters_v1530_H_ */
#include <asn_internal.h>
