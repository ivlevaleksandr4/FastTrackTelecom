/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_EDT_TBS_NB_r15_H_
#define	_EDT_TBS_NB_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EDT_TBS_NB_r15__edt_TBS_r15 {
	EDT_TBS_NB_r15__edt_TBS_r15_b328	= 0,
	EDT_TBS_NB_r15__edt_TBS_r15_b408	= 1,
	EDT_TBS_NB_r15__edt_TBS_r15_b504	= 2,
	EDT_TBS_NB_r15__edt_TBS_r15_b584	= 3,
	EDT_TBS_NB_r15__edt_TBS_r15_b680	= 4,
	EDT_TBS_NB_r15__edt_TBS_r15_b808	= 5,
	EDT_TBS_NB_r15__edt_TBS_r15_b936	= 6,
	EDT_TBS_NB_r15__edt_TBS_r15_b1000	= 7
} e_EDT_TBS_NB_r15__edt_TBS_r15;

/* EDT-TBS-NB-r15 */
typedef struct EDT_TBS_NB_r15 {
	BOOLEAN_t	 edt_SmallTBS_Enabled_r15;
	long	 edt_TBS_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EDT_TBS_NB_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_edt_TBS_r15_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_EDT_TBS_NB_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_EDT_TBS_NB_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_EDT_TBS_NB_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _EDT_TBS_NB_r15_H_ */
#include <asn_internal.h>
