/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_AdditionalReestabInfo_H_
#define	_AdditionalReestabInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CellIdentity.h"
#include "Key-eNodeB-Star.h"
#include "ShortMAC-I.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AdditionalReestabInfo */
typedef struct AdditionalReestabInfo {
	CellIdentity_t	 cellIdentity;
	Key_eNodeB_Star_t	 key_eNodeB_Star;
	ShortMAC_I_t	 shortMAC_I;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AdditionalReestabInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AdditionalReestabInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_AdditionalReestabInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_AdditionalReestabInfo_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _AdditionalReestabInfo_H_ */
#include <asn_internal.h>
