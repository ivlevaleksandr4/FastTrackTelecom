/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_LWIP_Parameters_v1430_H_
#define	_LWIP_Parameters_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LWIP_Parameters_v1430__lwip_Aggregation_DL_r14 {
	LWIP_Parameters_v1430__lwip_Aggregation_DL_r14_supported	= 0
} e_LWIP_Parameters_v1430__lwip_Aggregation_DL_r14;
typedef enum LWIP_Parameters_v1430__lwip_Aggregation_UL_r14 {
	LWIP_Parameters_v1430__lwip_Aggregation_UL_r14_supported	= 0
} e_LWIP_Parameters_v1430__lwip_Aggregation_UL_r14;

/* LWIP-Parameters-v1430 */
typedef struct LWIP_Parameters_v1430 {
	long	*lwip_Aggregation_DL_r14	/* OPTIONAL */;
	long	*lwip_Aggregation_UL_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LWIP_Parameters_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_lwip_Aggregation_DL_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_lwip_Aggregation_UL_r14_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LWIP_Parameters_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_LWIP_Parameters_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_LWIP_Parameters_v1430_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LWIP_Parameters_v1430_H_ */
#include <asn_internal.h>
