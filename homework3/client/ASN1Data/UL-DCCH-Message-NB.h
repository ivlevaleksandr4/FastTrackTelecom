/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_UL_DCCH_Message_NB_H_
#define	_UL_DCCH_Message_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UL-DCCH-MessageType-NB.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UL-DCCH-Message-NB */
typedef struct UL_DCCH_Message_NB {
	UL_DCCH_MessageType_NB_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_DCCH_Message_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_DCCH_Message_NB;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_DCCH_Message_NB_H_ */
#include <asn_internal.h>
