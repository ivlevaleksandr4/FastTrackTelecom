/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_V2X_BandwidthClass_r14_H_
#define	_V2X_BandwidthClass_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum V2X_BandwidthClass_r14 {
	V2X_BandwidthClass_r14_a	= 0,
	V2X_BandwidthClass_r14_b	= 1,
	V2X_BandwidthClass_r14_c	= 2,
	V2X_BandwidthClass_r14_d	= 3,
	V2X_BandwidthClass_r14_e	= 4,
	V2X_BandwidthClass_r14_f	= 5,
	/*
	 * Enumeration is extensible
	 */
	V2X_BandwidthClass_r14_c1_v1530	= 6
} e_V2X_BandwidthClass_r14;

/* V2X-BandwidthClass-r14 */
typedef long	 V2X_BandwidthClass_r14_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_V2X_BandwidthClass_r14_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_V2X_BandwidthClass_r14;
extern const asn_INTEGER_specifics_t asn_SPC_V2X_BandwidthClass_r14_specs_1;
asn_struct_free_f V2X_BandwidthClass_r14_free;
asn_struct_print_f V2X_BandwidthClass_r14_print;
asn_constr_check_f V2X_BandwidthClass_r14_constraint;
ber_type_decoder_f V2X_BandwidthClass_r14_decode_ber;
der_type_encoder_f V2X_BandwidthClass_r14_encode_der;
xer_type_decoder_f V2X_BandwidthClass_r14_decode_xer;
xer_type_encoder_f V2X_BandwidthClass_r14_encode_xer;
per_type_decoder_f V2X_BandwidthClass_r14_decode_uper;
per_type_encoder_f V2X_BandwidthClass_r14_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _V2X_BandwidthClass_r14_H_ */
#include <asn_internal.h>
