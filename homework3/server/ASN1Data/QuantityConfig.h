/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_QuantityConfig_H_
#define	_QuantityConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct QuantityConfigEUTRA;
struct QuantityConfigUTRA;
struct QuantityConfigGERAN;
struct QuantityConfigCDMA2000;
struct QuantityConfigUTRA_v1020;
struct QuantityConfigEUTRA_v1250;
struct QuantityConfigEUTRA_v1310;
struct QuantityConfigWLAN_r13;
struct QuantityConfigNRList_r15;

/* QuantityConfig */
typedef struct QuantityConfig {
	struct QuantityConfigEUTRA	*quantityConfigEUTRA	/* OPTIONAL */;
	struct QuantityConfigUTRA	*quantityConfigUTRA	/* OPTIONAL */;
	struct QuantityConfigGERAN	*quantityConfigGERAN	/* OPTIONAL */;
	struct QuantityConfigCDMA2000	*quantityConfigCDMA2000	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct QuantityConfigUTRA_v1020	*quantityConfigUTRA_v1020	/* OPTIONAL */;
	struct QuantityConfigEUTRA_v1250	*quantityConfigEUTRA_v1250	/* OPTIONAL */;
	struct QuantityConfigEUTRA_v1310	*quantityConfigEUTRA_v1310	/* OPTIONAL */;
	struct QuantityConfigWLAN_r13	*quantityConfigWLAN_r13	/* OPTIONAL */;
	struct QuantityConfigNRList_r15	*quantityConfigNRList_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} QuantityConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_QuantityConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_QuantityConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_QuantityConfig_1[9];

#ifdef __cplusplus
}
#endif

#endif	/* _QuantityConfig_H_ */
#include <asn_internal.h>
