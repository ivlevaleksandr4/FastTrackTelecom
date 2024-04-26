/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_AntennaInfoUL_r10_H_
#define	_AntennaInfoUL_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AntennaInfoUL_r10__transmissionModeUL_r10 {
	AntennaInfoUL_r10__transmissionModeUL_r10_tm1	= 0,
	AntennaInfoUL_r10__transmissionModeUL_r10_tm2	= 1,
	AntennaInfoUL_r10__transmissionModeUL_r10_spare6	= 2,
	AntennaInfoUL_r10__transmissionModeUL_r10_spare5	= 3,
	AntennaInfoUL_r10__transmissionModeUL_r10_spare4	= 4,
	AntennaInfoUL_r10__transmissionModeUL_r10_spare3	= 5,
	AntennaInfoUL_r10__transmissionModeUL_r10_spare2	= 6,
	AntennaInfoUL_r10__transmissionModeUL_r10_spare1	= 7
} e_AntennaInfoUL_r10__transmissionModeUL_r10;
typedef enum AntennaInfoUL_r10__fourAntennaPortActivated_r10 {
	AntennaInfoUL_r10__fourAntennaPortActivated_r10_setup	= 0
} e_AntennaInfoUL_r10__fourAntennaPortActivated_r10;

/* AntennaInfoUL-r10 */
typedef struct AntennaInfoUL_r10 {
	long	*transmissionModeUL_r10	/* OPTIONAL */;
	long	*fourAntennaPortActivated_r10	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AntennaInfoUL_r10_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_transmissionModeUL_r10_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_fourAntennaPortActivated_r10_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_AntennaInfoUL_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_AntennaInfoUL_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_AntennaInfoUL_r10_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _AntennaInfoUL_r10_H_ */
#include <asn_internal.h>
