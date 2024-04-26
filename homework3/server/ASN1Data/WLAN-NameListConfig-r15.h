/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_WLAN_NameListConfig_r15_H_
#define	_WLAN_NameListConfig_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "WLAN-NameList-r15.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum WLAN_NameListConfig_r15_PR {
	WLAN_NameListConfig_r15_PR_NOTHING,	/* No components present */
	WLAN_NameListConfig_r15_PR_release,
	WLAN_NameListConfig_r15_PR_setup
} WLAN_NameListConfig_r15_PR;

/* WLAN-NameListConfig-r15 */
typedef struct WLAN_NameListConfig_r15 {
	WLAN_NameListConfig_r15_PR present;
	union WLAN_NameListConfig_r15_u {
		NULL_t	 release;
		WLAN_NameList_r15_t	 setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} WLAN_NameListConfig_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WLAN_NameListConfig_r15;
extern asn_CHOICE_specifics_t asn_SPC_WLAN_NameListConfig_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_WLAN_NameListConfig_r15_1[2];
extern asn_per_constraints_t asn_PER_type_WLAN_NameListConfig_r15_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _WLAN_NameListConfig_r15_H_ */
#include <asn_internal.h>
