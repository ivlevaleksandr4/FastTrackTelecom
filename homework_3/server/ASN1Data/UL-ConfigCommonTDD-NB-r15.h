/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_UL_ConfigCommonTDD_NB_r15_H_
#define	_UL_ConfigCommonTDD_NB_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TDD-UL-DL-AlignmentOffset-NB-r15.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NPRACH_ParametersListTDD_NB_r15;

/* UL-ConfigCommonTDD-NB-r15 */
typedef struct UL_ConfigCommonTDD_NB_r15 {
	TDD_UL_DL_AlignmentOffset_NB_r15_t	 tdd_UL_DL_AlignmentOffset_r15;
	struct NPRACH_ParametersListTDD_NB_r15	*nprach_ParametersListTDD_r15	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_ConfigCommonTDD_NB_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_ConfigCommonTDD_NB_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_UL_ConfigCommonTDD_NB_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_UL_ConfigCommonTDD_NB_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UL_ConfigCommonTDD_NB_r15_H_ */
#include <asn_internal.h>
