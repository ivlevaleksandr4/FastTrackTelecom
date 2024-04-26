/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_VarMeasIdleConfig_r15_H_
#define	_VarMeasIdleConfig_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum VarMeasIdleConfig_r15__measIdleDuration_r15 {
	VarMeasIdleConfig_r15__measIdleDuration_r15_sec10	= 0,
	VarMeasIdleConfig_r15__measIdleDuration_r15_sec30	= 1,
	VarMeasIdleConfig_r15__measIdleDuration_r15_sec60	= 2,
	VarMeasIdleConfig_r15__measIdleDuration_r15_sec120	= 3,
	VarMeasIdleConfig_r15__measIdleDuration_r15_sec180	= 4,
	VarMeasIdleConfig_r15__measIdleDuration_r15_sec240	= 5,
	VarMeasIdleConfig_r15__measIdleDuration_r15_sec300	= 6
} e_VarMeasIdleConfig_r15__measIdleDuration_r15;

/* Forward declarations */
struct EUTRA_CarrierList_r15;

/* VarMeasIdleConfig-r15 */
typedef struct VarMeasIdleConfig_r15 {
	struct EUTRA_CarrierList_r15	*measIdleCarrierListEUTRA_r15	/* OPTIONAL */;
	long	 measIdleDuration_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VarMeasIdleConfig_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_measIdleDuration_r15_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_VarMeasIdleConfig_r15;

#ifdef __cplusplus
}
#endif

#endif	/* _VarMeasIdleConfig_r15_H_ */
#include <asn_internal.h>
