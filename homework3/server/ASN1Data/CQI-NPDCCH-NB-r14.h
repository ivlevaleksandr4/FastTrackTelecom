/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_CQI_NPDCCH_NB_r14_H_
#define	_CQI_NPDCCH_NB_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CQI_NPDCCH_NB_r14 {
	CQI_NPDCCH_NB_r14_noMeasurements	= 0,
	CQI_NPDCCH_NB_r14_candidateRep_A	= 1,
	CQI_NPDCCH_NB_r14_candidateRep_B	= 2,
	CQI_NPDCCH_NB_r14_candidateRep_C	= 3,
	CQI_NPDCCH_NB_r14_candidateRep_D	= 4,
	CQI_NPDCCH_NB_r14_candidateRep_E	= 5,
	CQI_NPDCCH_NB_r14_candidateRep_F	= 6,
	CQI_NPDCCH_NB_r14_candidateRep_G	= 7,
	CQI_NPDCCH_NB_r14_candidateRep_H	= 8,
	CQI_NPDCCH_NB_r14_candidateRep_I	= 9,
	CQI_NPDCCH_NB_r14_candidateRep_J	= 10,
	CQI_NPDCCH_NB_r14_candidateRep_K	= 11,
	CQI_NPDCCH_NB_r14_candidateRep_L	= 12
} e_CQI_NPDCCH_NB_r14;

/* CQI-NPDCCH-NB-r14 */
typedef long	 CQI_NPDCCH_NB_r14_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_CQI_NPDCCH_NB_r14_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_CQI_NPDCCH_NB_r14;
extern const asn_INTEGER_specifics_t asn_SPC_CQI_NPDCCH_NB_r14_specs_1;
asn_struct_free_f CQI_NPDCCH_NB_r14_free;
asn_struct_print_f CQI_NPDCCH_NB_r14_print;
asn_constr_check_f CQI_NPDCCH_NB_r14_constraint;
ber_type_decoder_f CQI_NPDCCH_NB_r14_decode_ber;
der_type_encoder_f CQI_NPDCCH_NB_r14_encode_der;
xer_type_decoder_f CQI_NPDCCH_NB_r14_decode_xer;
xer_type_encoder_f CQI_NPDCCH_NB_r14_encode_xer;
per_type_decoder_f CQI_NPDCCH_NB_r14_decode_uper;
per_type_encoder_f CQI_NPDCCH_NB_r14_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _CQI_NPDCCH_NB_r14_H_ */
#include <asn_internal.h>
