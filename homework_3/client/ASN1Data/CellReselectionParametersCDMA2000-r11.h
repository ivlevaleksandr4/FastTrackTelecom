/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_CellReselectionParametersCDMA2000_r11_H_
#define	_CellReselectionParametersCDMA2000_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BandClassListCDMA2000.h"
#include "T-Reselection.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SpeedStateScaleFactors;
struct NeighCellCDMA2000_r11;

/* CellReselectionParametersCDMA2000-r11 */
typedef struct CellReselectionParametersCDMA2000_r11 {
	BandClassListCDMA2000_t	 bandClassList;
	struct CellReselectionParametersCDMA2000_r11__neighCellList_r11 {
		A_SEQUENCE_OF(struct NeighCellCDMA2000_r11) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} neighCellList_r11;
	T_Reselection_t	 t_ReselectionCDMA2000;
	struct SpeedStateScaleFactors	*t_ReselectionCDMA2000_SF	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellReselectionParametersCDMA2000_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellReselectionParametersCDMA2000_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_CellReselectionParametersCDMA2000_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_CellReselectionParametersCDMA2000_r11_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _CellReselectionParametersCDMA2000_r11_H_ */
#include <asn_internal.h>
