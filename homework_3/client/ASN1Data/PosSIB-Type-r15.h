/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_PosSIB_Type_r15_H_
#define	_PosSIB_Type_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PosSIB_Type_r15__encrypted_r15 {
	PosSIB_Type_r15__encrypted_r15_true	= 0
} e_PosSIB_Type_r15__encrypted_r15;
typedef enum PosSIB_Type_r15__posSibType_r15 {
	PosSIB_Type_r15__posSibType_r15_posSibType1_1	= 0,
	PosSIB_Type_r15__posSibType_r15_posSibType1_2	= 1,
	PosSIB_Type_r15__posSibType_r15_posSibType1_3	= 2,
	PosSIB_Type_r15__posSibType_r15_posSibType1_4	= 3,
	PosSIB_Type_r15__posSibType_r15_posSibType1_5	= 4,
	PosSIB_Type_r15__posSibType_r15_posSibType1_6	= 5,
	PosSIB_Type_r15__posSibType_r15_posSibType1_7	= 6,
	PosSIB_Type_r15__posSibType_r15_posSibType2_1	= 7,
	PosSIB_Type_r15__posSibType_r15_posSibType2_2	= 8,
	PosSIB_Type_r15__posSibType_r15_posSibType2_3	= 9,
	PosSIB_Type_r15__posSibType_r15_posSibType2_4	= 10,
	PosSIB_Type_r15__posSibType_r15_posSibType2_5	= 11,
	PosSIB_Type_r15__posSibType_r15_posSibType2_6	= 12,
	PosSIB_Type_r15__posSibType_r15_posSibType2_7	= 13,
	PosSIB_Type_r15__posSibType_r15_posSibType2_8	= 14,
	PosSIB_Type_r15__posSibType_r15_posSibType2_9	= 15,
	PosSIB_Type_r15__posSibType_r15_posSibType2_10	= 16,
	PosSIB_Type_r15__posSibType_r15_posSibType2_11	= 17,
	PosSIB_Type_r15__posSibType_r15_posSibType2_12	= 18,
	PosSIB_Type_r15__posSibType_r15_posSibType2_13	= 19,
	PosSIB_Type_r15__posSibType_r15_posSibType2_14	= 20,
	PosSIB_Type_r15__posSibType_r15_posSibType2_15	= 21,
	PosSIB_Type_r15__posSibType_r15_posSibType2_16	= 22,
	PosSIB_Type_r15__posSibType_r15_posSibType2_17	= 23,
	PosSIB_Type_r15__posSibType_r15_posSibType2_18	= 24,
	PosSIB_Type_r15__posSibType_r15_posSibType2_19	= 25,
	PosSIB_Type_r15__posSibType_r15_posSibType3_1	= 26
	/*
	 * Enumeration is extensible
	 */
} e_PosSIB_Type_r15__posSibType_r15;

/* Forward declarations */
struct GNSS_ID_r15;
struct SBAS_ID_r15;

/* PosSIB-Type-r15 */
typedef struct PosSIB_Type_r15 {
	long	*encrypted_r15	/* OPTIONAL */;
	struct GNSS_ID_r15	*gnss_id_r15	/* OPTIONAL */;
	struct SBAS_ID_r15	*sbas_id_r15	/* OPTIONAL */;
	long	 posSibType_r15;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PosSIB_Type_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_encrypted_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_posSibType_r15_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PosSIB_Type_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_PosSIB_Type_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_PosSIB_Type_r15_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _PosSIB_Type_r15_H_ */
#include <asn_internal.h>
