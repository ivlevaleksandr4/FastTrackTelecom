/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_RAN_NotificationAreaInfo_r15_H_
#define	_RAN_NotificationAreaInfo_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMN-RAN-AreaCellList-r15.h"
#include "PLMN-RAN-AreaConfigList-r15.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RAN_NotificationAreaInfo_r15_PR {
	RAN_NotificationAreaInfo_r15_PR_NOTHING,	/* No components present */
	RAN_NotificationAreaInfo_r15_PR_cellList_r15,
	RAN_NotificationAreaInfo_r15_PR_ran_AreaConfigList_r15
} RAN_NotificationAreaInfo_r15_PR;

/* RAN-NotificationAreaInfo-r15 */
typedef struct RAN_NotificationAreaInfo_r15 {
	RAN_NotificationAreaInfo_r15_PR present;
	union RAN_NotificationAreaInfo_r15_u {
		PLMN_RAN_AreaCellList_r15_t	 cellList_r15;
		PLMN_RAN_AreaConfigList_r15_t	 ran_AreaConfigList_r15;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RAN_NotificationAreaInfo_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RAN_NotificationAreaInfo_r15;
extern asn_CHOICE_specifics_t asn_SPC_RAN_NotificationAreaInfo_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_RAN_NotificationAreaInfo_r15_1[2];
extern asn_per_constraints_t asn_PER_type_RAN_NotificationAreaInfo_r15_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RAN_NotificationAreaInfo_r15_H_ */
#include <asn_internal.h>
