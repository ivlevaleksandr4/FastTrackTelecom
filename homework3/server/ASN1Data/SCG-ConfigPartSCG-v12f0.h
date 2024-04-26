/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SCG_ConfigPartSCG_v12f0_H_
#define	_SCG_ConfigPartSCG_v12f0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PSCellToAddMod_v12f0;
struct SCellToAddModList_v10l0;

/* SCG-ConfigPartSCG-v12f0 */
typedef struct SCG_ConfigPartSCG_v12f0 {
	struct PSCellToAddMod_v12f0	*pSCellToAddMod_v12f0	/* OPTIONAL */;
	struct SCellToAddModList_v10l0	*sCellToAddModListSCG_v12f0	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCG_ConfigPartSCG_v12f0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCG_ConfigPartSCG_v12f0;
extern asn_SEQUENCE_specifics_t asn_SPC_SCG_ConfigPartSCG_v12f0_specs_1;
extern asn_TYPE_member_t asn_MBR_SCG_ConfigPartSCG_v12f0_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SCG_ConfigPartSCG_v12f0_H_ */
#include <asn_internal.h>
