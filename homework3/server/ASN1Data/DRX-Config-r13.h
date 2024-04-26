/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_DRX_Config_r13_H_
#define	_DRX_Config_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DRX_Config_r13__onDurationTimer_v1310 {
	DRX_Config_r13__onDurationTimer_v1310_psf300	= 0,
	DRX_Config_r13__onDurationTimer_v1310_psf400	= 1,
	DRX_Config_r13__onDurationTimer_v1310_psf500	= 2,
	DRX_Config_r13__onDurationTimer_v1310_psf600	= 3,
	DRX_Config_r13__onDurationTimer_v1310_psf800	= 4,
	DRX_Config_r13__onDurationTimer_v1310_psf1000	= 5,
	DRX_Config_r13__onDurationTimer_v1310_psf1200	= 6,
	DRX_Config_r13__onDurationTimer_v1310_psf1600	= 7
} e_DRX_Config_r13__onDurationTimer_v1310;
typedef enum DRX_Config_r13__drx_RetransmissionTimer_v1310 {
	DRX_Config_r13__drx_RetransmissionTimer_v1310_psf40	= 0,
	DRX_Config_r13__drx_RetransmissionTimer_v1310_psf64	= 1,
	DRX_Config_r13__drx_RetransmissionTimer_v1310_psf80	= 2,
	DRX_Config_r13__drx_RetransmissionTimer_v1310_psf96	= 3,
	DRX_Config_r13__drx_RetransmissionTimer_v1310_psf112	= 4,
	DRX_Config_r13__drx_RetransmissionTimer_v1310_psf128	= 5,
	DRX_Config_r13__drx_RetransmissionTimer_v1310_psf160	= 6,
	DRX_Config_r13__drx_RetransmissionTimer_v1310_psf320	= 7
} e_DRX_Config_r13__drx_RetransmissionTimer_v1310;
typedef enum DRX_Config_r13__drx_ULRetransmissionTimer_r13 {
	DRX_Config_r13__drx_ULRetransmissionTimer_r13_psf0	= 0,
	DRX_Config_r13__drx_ULRetransmissionTimer_r13_psf1	= 1,
	DRX_Config_r13__drx_ULRetransmissionTimer_r13_psf2	= 2,
	DRX_Config_r13__drx_ULRetransmissionTimer_r13_psf4	= 3,
	DRX_Config_r13__drx_ULRetransmissionTimer_r13_psf6	= 4,
	DRX_Config_r13__drx_ULRetransmissionTimer_r13_psf8	= 5,
	DRX_Config_r13__drx_ULRetransmissionTimer_r13_psf16	= 6,
	DRX_Config_r13__drx_ULRetransmissionTimer_r13_psf24	= 7,
	DRX_Config_r13__drx_ULRetransmissionTimer_r13_psf33	= 8,
	DRX_Config_r13__drx_ULRetransmissionTimer_r13_psf40	= 9,
	DRX_Config_r13__drx_ULRetransmissionTimer_r13_psf64	= 10,
	DRX_Config_r13__drx_ULRetransmissionTimer_r13_psf80	= 11,
	DRX_Config_r13__drx_ULRetransmissionTimer_r13_psf96	= 12,
	DRX_Config_r13__drx_ULRetransmissionTimer_r13_psf112	= 13,
	DRX_Config_r13__drx_ULRetransmissionTimer_r13_psf128	= 14,
	DRX_Config_r13__drx_ULRetransmissionTimer_r13_psf160	= 15,
	DRX_Config_r13__drx_ULRetransmissionTimer_r13_psf320	= 16
} e_DRX_Config_r13__drx_ULRetransmissionTimer_r13;

/* DRX-Config-r13 */
typedef struct DRX_Config_r13 {
	long	*onDurationTimer_v1310	/* OPTIONAL */;
	long	*drx_RetransmissionTimer_v1310	/* OPTIONAL */;
	long	*drx_ULRetransmissionTimer_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DRX_Config_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_onDurationTimer_v1310_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_drx_RetransmissionTimer_v1310_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_drx_ULRetransmissionTimer_r13_20;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DRX_Config_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_DRX_Config_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_DRX_Config_r13_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _DRX_Config_r13_H_ */
#include <asn_internal.h>
