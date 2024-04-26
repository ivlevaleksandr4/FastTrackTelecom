/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_CellReselectionParametersCDMA2000_v920_H_
#define	_CellReselectionParametersCDMA2000_v920_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NeighCellListCDMA2000-v920.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellReselectionParametersCDMA2000-v920 */
typedef struct CellReselectionParametersCDMA2000_v920 {
	NeighCellListCDMA2000_v920_t	 neighCellList_v920;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellReselectionParametersCDMA2000_v920_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellReselectionParametersCDMA2000_v920;
extern asn_SEQUENCE_specifics_t asn_SPC_CellReselectionParametersCDMA2000_v920_specs_1;
extern asn_TYPE_member_t asn_MBR_CellReselectionParametersCDMA2000_v920_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _CellReselectionParametersCDMA2000_v920_H_ */
#include <asn_internal.h>
