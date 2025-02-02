/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_InDeviceCoexIndication_r11_IEs_H_
#define	_InDeviceCoexIndication_r11_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AffectedCarrierFreqList_r11;
struct TDM_AssistanceInfo_r11;
struct InDeviceCoexIndication_v11d0_IEs;

/* InDeviceCoexIndication-r11-IEs */
typedef struct InDeviceCoexIndication_r11_IEs {
	struct AffectedCarrierFreqList_r11	*affectedCarrierFreqList_r11	/* OPTIONAL */;
	struct TDM_AssistanceInfo_r11	*tdm_AssistanceInfo_r11	/* OPTIONAL */;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct InDeviceCoexIndication_v11d0_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InDeviceCoexIndication_r11_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InDeviceCoexIndication_r11_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_InDeviceCoexIndication_r11_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_InDeviceCoexIndication_r11_IEs_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _InDeviceCoexIndication_r11_IEs_H_ */
#include <asn_internal.h>
