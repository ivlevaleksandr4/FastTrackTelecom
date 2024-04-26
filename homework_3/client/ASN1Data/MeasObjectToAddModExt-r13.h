/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_MeasObjectToAddModExt_r13_H_
#define	_MeasObjectToAddModExt_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasObjectId-v1310.h"
#include "MeasObjectEUTRA.h"
#include "MeasObjectUTRA.h"
#include "MeasObjectGERAN.h"
#include "MeasObjectCDMA2000.h"
#include "MeasObjectWLAN-r13.h"
#include "MeasObjectNR-r15.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasObjectToAddModExt_r13__measObject_r13_PR {
	MeasObjectToAddModExt_r13__measObject_r13_PR_NOTHING,	/* No components present */
	MeasObjectToAddModExt_r13__measObject_r13_PR_measObjectEUTRA_r13,
	MeasObjectToAddModExt_r13__measObject_r13_PR_measObjectUTRA_r13,
	MeasObjectToAddModExt_r13__measObject_r13_PR_measObjectGERAN_r13,
	MeasObjectToAddModExt_r13__measObject_r13_PR_measObjectCDMA2000_r13,
	/* Extensions may appear below */
	MeasObjectToAddModExt_r13__measObject_r13_PR_measObjectWLAN_v1320,
	MeasObjectToAddModExt_r13__measObject_r13_PR_measObjectNR_r15
} MeasObjectToAddModExt_r13__measObject_r13_PR;

/* MeasObjectToAddModExt-r13 */
typedef struct MeasObjectToAddModExt_r13 {
	MeasObjectId_v1310_t	 measObjectId_r13;
	struct MeasObjectToAddModExt_r13__measObject_r13 {
		MeasObjectToAddModExt_r13__measObject_r13_PR present;
		union MeasObjectToAddModExt_r13__measObject_r13_u {
			MeasObjectEUTRA_t	 measObjectEUTRA_r13;
			MeasObjectUTRA_t	 measObjectUTRA_r13;
			MeasObjectGERAN_t	 measObjectGERAN_r13;
			MeasObjectCDMA2000_t	 measObjectCDMA2000_r13;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			MeasObjectWLAN_r13_t	 measObjectWLAN_v1320;
			MeasObjectNR_r15_t	 measObjectNR_r15;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measObject_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasObjectToAddModExt_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasObjectToAddModExt_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasObjectToAddModExt_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasObjectToAddModExt_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasObjectToAddModExt_r13_H_ */
#include <asn_internal.h>
