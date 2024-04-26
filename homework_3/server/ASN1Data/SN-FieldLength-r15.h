/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SN_FieldLength_r15_H_
#define	_SN_FieldLength_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SN_FieldLength_r15 {
	SN_FieldLength_r15_size5	= 0,
	SN_FieldLength_r15_size10	= 1,
	SN_FieldLength_r15_size16_r15	= 2
} e_SN_FieldLength_r15;

/* SN-FieldLength-r15 */
typedef long	 SN_FieldLength_r15_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SN_FieldLength_r15_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SN_FieldLength_r15;
extern const asn_INTEGER_specifics_t asn_SPC_SN_FieldLength_r15_specs_1;
asn_struct_free_f SN_FieldLength_r15_free;
asn_struct_print_f SN_FieldLength_r15_print;
asn_constr_check_f SN_FieldLength_r15_constraint;
ber_type_decoder_f SN_FieldLength_r15_decode_ber;
der_type_encoder_f SN_FieldLength_r15_encode_der;
xer_type_decoder_f SN_FieldLength_r15_decode_xer;
xer_type_encoder_f SN_FieldLength_r15_encode_xer;
per_type_decoder_f SN_FieldLength_r15_decode_uper;
per_type_encoder_f SN_FieldLength_r15_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _SN_FieldLength_r15_H_ */
#include <asn_internal.h>
