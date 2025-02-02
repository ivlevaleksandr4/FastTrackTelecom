/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_Cell_ToAddMod_r12_H_
#define	_Cell_ToAddMod_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SCellIndex-r10.h"
#include "SCellIndex-r13.h"
#include "PhysCellId.h"
#include "ARFCN-ValueEUTRA-r9.h"
#include <constr_SEQUENCE.h>
#include "RSRP-Range.h"
#include "RSRQ-Range.h"
#include "RS-SINR-Range-r13.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Cell-ToAddMod-r12 */
typedef struct Cell_ToAddMod_r12 {
	SCellIndex_r10_t	 sCellIndex_r12;
	struct Cell_ToAddMod_r12__cellIdentification_r12 {
		PhysCellId_t	 physCellId_r12;
		ARFCN_ValueEUTRA_r9_t	 dl_CarrierFreq_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cellIdentification_r12;
	struct Cell_ToAddMod_r12__measResultCellToAdd_r12 {
		RSRP_Range_t	 rsrpResult_r12;
		RSRQ_Range_t	 rsrqResult_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultCellToAdd_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	SCellIndex_r13_t	*sCellIndex_r13	/* OPTIONAL */;
	struct Cell_ToAddMod_r12__measResultCellToAdd_v1310 {
		RS_SINR_Range_r13_t	 rs_sinr_Result_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultCellToAdd_v1310;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Cell_ToAddMod_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Cell_ToAddMod_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_Cell_ToAddMod_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_Cell_ToAddMod_r12_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _Cell_ToAddMod_r12_H_ */
#include <asn_internal.h>
