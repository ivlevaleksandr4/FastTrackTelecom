/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_BCCH_BCH_MessageType_H_
#define	_BCCH_BCH_MessageType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MasterInformationBlock.h"

#ifdef __cplusplus
extern "C" {
#endif

/* BCCH-BCH-MessageType */
typedef MasterInformationBlock_t	 BCCH_BCH_MessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BCCH_BCH_MessageType;
asn_struct_free_f BCCH_BCH_MessageType_free;
asn_struct_print_f BCCH_BCH_MessageType_print;
asn_constr_check_f BCCH_BCH_MessageType_constraint;
ber_type_decoder_f BCCH_BCH_MessageType_decode_ber;
der_type_encoder_f BCCH_BCH_MessageType_encode_der;
xer_type_decoder_f BCCH_BCH_MessageType_decode_xer;
xer_type_encoder_f BCCH_BCH_MessageType_encode_xer;
per_type_decoder_f BCCH_BCH_MessageType_decode_uper;
per_type_encoder_f BCCH_BCH_MessageType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _BCCH_BCH_MessageType_H_ */
#include <asn_internal.h>
