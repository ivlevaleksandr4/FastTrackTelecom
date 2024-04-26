/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_CRS_AssistanceInfo_r11_H_
#define	_CRS_AssistanceInfo_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhysCellId.h"
#include <NativeEnumerated.h>
#include "MBSFN-SubframeConfigList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CRS_AssistanceInfo_r11__antennaPortsCount_r11 {
	CRS_AssistanceInfo_r11__antennaPortsCount_r11_an1	= 0,
	CRS_AssistanceInfo_r11__antennaPortsCount_r11_an2	= 1,
	CRS_AssistanceInfo_r11__antennaPortsCount_r11_an4	= 2,
	CRS_AssistanceInfo_r11__antennaPortsCount_r11_spare1	= 3
} e_CRS_AssistanceInfo_r11__antennaPortsCount_r11;

/* Forward declarations */
struct MBSFN_SubframeConfigList_v1430;

/* CRS-AssistanceInfo-r11 */
typedef struct CRS_AssistanceInfo_r11 {
	PhysCellId_t	 physCellId_r11;
	long	 antennaPortsCount_r11;
	MBSFN_SubframeConfigList_t	 mbsfn_SubframeConfigList_r11;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct MBSFN_SubframeConfigList_v1430	*mbsfn_SubframeConfigList_v1430	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CRS_AssistanceInfo_r11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_antennaPortsCount_r11_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CRS_AssistanceInfo_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_CRS_AssistanceInfo_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_CRS_AssistanceInfo_r11_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _CRS_AssistanceInfo_r11_H_ */
#include <asn_internal.h>
