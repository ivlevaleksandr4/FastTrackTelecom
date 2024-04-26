/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_CellsToAddModUTRA_FDD_H_
#define	_CellsToAddModUTRA_FDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "PhysCellIdUTRA-FDD.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellsToAddModUTRA-FDD */
typedef struct CellsToAddModUTRA_FDD {
	long	 cellIndex;
	PhysCellIdUTRA_FDD_t	 physCellId;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellsToAddModUTRA_FDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellsToAddModUTRA_FDD;
extern asn_SEQUENCE_specifics_t asn_SPC_CellsToAddModUTRA_FDD_specs_1;
extern asn_TYPE_member_t asn_MBR_CellsToAddModUTRA_FDD_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CellsToAddModUTRA_FDD_H_ */
#include <asn_internal.h>
