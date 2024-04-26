/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SCG_ConfigInfo_v1530_IEs_H_
#define	_SCG_ConfigInfo_v1530_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DRB_InfoListSCG_r15;
struct DRB_ToReleaseList_r15;

/* SCG-ConfigInfo-v1530-IEs */
typedef struct SCG_ConfigInfo_v1530_IEs {
	struct DRB_InfoListSCG_r15	*drb_ToAddModListSCG_r15	/* OPTIONAL */;
	struct DRB_ToReleaseList_r15	*drb_ToReleaseListSCG_r15	/* OPTIONAL */;
	struct SCG_ConfigInfo_v1530_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCG_ConfigInfo_v1530_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCG_ConfigInfo_v1530_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SCG_ConfigInfo_v1530_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SCG_ConfigInfo_v1530_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SCG_ConfigInfo_v1530_IEs_H_ */
#include <asn_internal.h>
