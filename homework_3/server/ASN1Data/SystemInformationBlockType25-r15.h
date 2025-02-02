/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SystemInformationBlockType25_r15_H_
#define	_SystemInformationBlockType25_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UAC-BarringInfoSetList-r15.h"
#include <OCTET_STRING.h>
#include "UAC-AC1-SelectAssistInfo-r15.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformationBlockType25_r15__uac_AC1_SelectAssistInfo_r15_PR {
	SystemInformationBlockType25_r15__uac_AC1_SelectAssistInfo_r15_PR_NOTHING,	/* No components present */
	SystemInformationBlockType25_r15__uac_AC1_SelectAssistInfo_r15_PR_plmnCommon_r15,
	SystemInformationBlockType25_r15__uac_AC1_SelectAssistInfo_r15_PR_individualPLMNList_r15
} SystemInformationBlockType25_r15__uac_AC1_SelectAssistInfo_r15_PR;

/* Forward declarations */
struct UAC_BarringPerCatList_r15;
struct UAC_BarringPerPLMN_List_r15;

/* SystemInformationBlockType25-r15 */
typedef struct SystemInformationBlockType25_r15 {
	struct UAC_BarringPerCatList_r15	*uac_BarringForCommon_r15	/* OPTIONAL */;
	struct UAC_BarringPerPLMN_List_r15	*uac_BarringPerPLMN_List_r15	/* OPTIONAL */;
	UAC_BarringInfoSetList_r15_t	 uac_BarringInfoSetList_r15;
	struct SystemInformationBlockType25_r15__uac_AC1_SelectAssistInfo_r15 {
		SystemInformationBlockType25_r15__uac_AC1_SelectAssistInfo_r15_PR present;
		union SystemInformationBlockType25_r15__uac_AC1_SelectAssistInfo_r15_u {
			UAC_AC1_SelectAssistInfo_r15_t	 plmnCommon_r15;
			struct SystemInformationBlockType25_r15__uac_AC1_SelectAssistInfo_r15__individualPLMNList_r15 {
				A_SEQUENCE_OF(UAC_AC1_SelectAssistInfo_r15_t) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} individualPLMNList_r15;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *uac_AC1_SelectAssistInfo_r15;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType25_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType25_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType25_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType25_r15_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType25_r15_H_ */
#include <asn_internal.h>
