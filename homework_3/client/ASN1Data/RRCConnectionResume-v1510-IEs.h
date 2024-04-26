/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_RRCConnectionResume_v1510_IEs_H_
#define	_RRCConnectionResume_v1510_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRCConnectionResume_v1530_IEs;

/* RRCConnectionResume-v1510-IEs */
typedef struct RRCConnectionResume_v1510_IEs {
	long	*sk_Counter_r15	/* OPTIONAL */;
	OCTET_STRING_t	*nr_RadioBearerConfig1_r15	/* OPTIONAL */;
	OCTET_STRING_t	*nr_RadioBearerConfig2_r15	/* OPTIONAL */;
	struct RRCConnectionResume_v1530_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionResume_v1510_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionResume_v1510_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionResume_v1510_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionResume_v1510_IEs_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionResume_v1510_IEs_H_ */
#include <asn_internal.h>
