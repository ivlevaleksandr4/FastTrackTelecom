/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_ReportInterval_H_
#define	_ReportInterval_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ReportInterval {
	ReportInterval_ms120	= 0,
	ReportInterval_ms240	= 1,
	ReportInterval_ms480	= 2,
	ReportInterval_ms640	= 3,
	ReportInterval_ms1024	= 4,
	ReportInterval_ms2048	= 5,
	ReportInterval_ms5120	= 6,
	ReportInterval_ms10240	= 7,
	ReportInterval_min1	= 8,
	ReportInterval_min6	= 9,
	ReportInterval_min12	= 10,
	ReportInterval_min30	= 11,
	ReportInterval_min60	= 12,
	ReportInterval_spare3	= 13,
	ReportInterval_spare2	= 14,
	ReportInterval_spare1	= 15
} e_ReportInterval;

/* ReportInterval */
typedef long	 ReportInterval_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ReportInterval_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ReportInterval;
extern const asn_INTEGER_specifics_t asn_SPC_ReportInterval_specs_1;
asn_struct_free_f ReportInterval_free;
asn_struct_print_f ReportInterval_print;
asn_constr_check_f ReportInterval_constraint;
ber_type_decoder_f ReportInterval_decode_ber;
der_type_encoder_f ReportInterval_encode_der;
xer_type_decoder_f ReportInterval_decode_xer;
xer_type_encoder_f ReportInterval_encode_xer;
per_type_decoder_f ReportInterval_decode_uper;
per_type_encoder_f ReportInterval_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ReportInterval_H_ */
#include <asn_internal.h>
