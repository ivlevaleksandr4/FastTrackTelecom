/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_RACH_ConfigCommon_NB_r13_H_
#define	_RACH_ConfigCommon_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PreambleTransMax.h"
#include "PowerRampingParameters.h"
#include "RACH-InfoList-NB-r13.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PowerRampingParameters_NB_v1450;
struct RACH_InfoList_NB_v1530;

/* RACH-ConfigCommon-NB-r13 */
typedef struct RACH_ConfigCommon_NB_r13 {
	PreambleTransMax_t	 preambleTransMax_CE_r13;
	PowerRampingParameters_t	 powerRampingParameters_r13;
	RACH_InfoList_NB_r13_t	 rach_InfoList_r13;
	long	*connEstFailOffset_r13	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct PowerRampingParameters_NB_v1450	*powerRampingParameters_v1450	/* OPTIONAL */;
	struct RACH_InfoList_NB_v1530	*rach_InfoList_v1530	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RACH_ConfigCommon_NB_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RACH_ConfigCommon_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_RACH_ConfigCommon_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_RACH_ConfigCommon_NB_r13_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _RACH_ConfigCommon_NB_r13_H_ */
#include <asn_internal.h>
