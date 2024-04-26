/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_CSI_RS_ConfigNonPrecoded_v1430_H_
#define	_CSI_RS_ConfigNonPrecoded_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "CSI-RS-Config-NZP-v1430.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CSI_RS_ConfigNonPrecoded_v1430__codebookConfigN1_v1430 {
	CSI_RS_ConfigNonPrecoded_v1430__codebookConfigN1_v1430_n5	= 0,
	CSI_RS_ConfigNonPrecoded_v1430__codebookConfigN1_v1430_n6	= 1,
	CSI_RS_ConfigNonPrecoded_v1430__codebookConfigN1_v1430_n7	= 2,
	CSI_RS_ConfigNonPrecoded_v1430__codebookConfigN1_v1430_n10	= 3,
	CSI_RS_ConfigNonPrecoded_v1430__codebookConfigN1_v1430_n12	= 4,
	CSI_RS_ConfigNonPrecoded_v1430__codebookConfigN1_v1430_n14	= 5,
	CSI_RS_ConfigNonPrecoded_v1430__codebookConfigN1_v1430_n16	= 6
} e_CSI_RS_ConfigNonPrecoded_v1430__codebookConfigN1_v1430;
typedef enum CSI_RS_ConfigNonPrecoded_v1430__codebookConfigN2_v1430 {
	CSI_RS_ConfigNonPrecoded_v1430__codebookConfigN2_v1430_n5	= 0,
	CSI_RS_ConfigNonPrecoded_v1430__codebookConfigN2_v1430_n6	= 1,
	CSI_RS_ConfigNonPrecoded_v1430__codebookConfigN2_v1430_n7	= 2
} e_CSI_RS_ConfigNonPrecoded_v1430__codebookConfigN2_v1430;

/* Forward declarations */
struct CSI_RS_ConfigNZP_EMIMO_v1430;

/* CSI-RS-ConfigNonPrecoded-v1430 */
typedef struct CSI_RS_ConfigNonPrecoded_v1430 {
	struct CSI_RS_ConfigNZP_EMIMO_v1430	*csi_RS_ConfigNZP_EMIMO_v1430	/* OPTIONAL */;
	long	 codebookConfigN1_v1430;
	long	 codebookConfigN2_v1430;
	CSI_RS_Config_NZP_v1430_t	 nzp_ResourceConfigTM9_Original_v1430;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_RS_ConfigNonPrecoded_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_codebookConfigN1_v1430_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_codebookConfigN2_v1430_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CSI_RS_ConfigNonPrecoded_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_CSI_RS_ConfigNonPrecoded_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_CSI_RS_ConfigNonPrecoded_v1430_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _CSI_RS_ConfigNonPrecoded_v1430_H_ */
#include <asn_internal.h>
