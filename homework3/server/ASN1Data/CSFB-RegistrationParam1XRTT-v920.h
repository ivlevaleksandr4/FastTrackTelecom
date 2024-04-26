/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_CSFB_RegistrationParam1XRTT_v920_H_
#define	_CSFB_RegistrationParam1XRTT_v920_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CSFB_RegistrationParam1XRTT_v920__powerDownReg_r9 {
	CSFB_RegistrationParam1XRTT_v920__powerDownReg_r9_true	= 0
} e_CSFB_RegistrationParam1XRTT_v920__powerDownReg_r9;

/* CSFB-RegistrationParam1XRTT-v920 */
typedef struct CSFB_RegistrationParam1XRTT_v920 {
	long	 powerDownReg_r9;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSFB_RegistrationParam1XRTT_v920_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_powerDownReg_r9_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CSFB_RegistrationParam1XRTT_v920;
extern asn_SEQUENCE_specifics_t asn_SPC_CSFB_RegistrationParam1XRTT_v920_specs_1;
extern asn_TYPE_member_t asn_MBR_CSFB_RegistrationParam1XRTT_v920_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _CSFB_RegistrationParam1XRTT_v920_H_ */
#include <asn_internal.h>
