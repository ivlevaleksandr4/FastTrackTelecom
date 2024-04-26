/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SPS_ConfigDL_STTI_r15_H_
#define	_SPS_ConfigDL_STTI_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include "N1SPUCCH-AN-PersistentList-r15.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SPS_ConfigDL_STTI_r15_PR {
	SPS_ConfigDL_STTI_r15_PR_NOTHING,	/* No components present */
	SPS_ConfigDL_STTI_r15_PR_release,
	SPS_ConfigDL_STTI_r15_PR_setup
} SPS_ConfigDL_STTI_r15_PR;
typedef enum SPS_ConfigDL_STTI_r15__setup__semiPersistSchedIntervalDL_STTI_r15 {
	SPS_ConfigDL_STTI_r15__setup__semiPersistSchedIntervalDL_STTI_r15_sTTI1	= 0,
	SPS_ConfigDL_STTI_r15__setup__semiPersistSchedIntervalDL_STTI_r15_sTTI2	= 1,
	SPS_ConfigDL_STTI_r15__setup__semiPersistSchedIntervalDL_STTI_r15_sTTI3	= 2,
	SPS_ConfigDL_STTI_r15__setup__semiPersistSchedIntervalDL_STTI_r15_sTTI4	= 3,
	SPS_ConfigDL_STTI_r15__setup__semiPersistSchedIntervalDL_STTI_r15_sTTI6	= 4,
	SPS_ConfigDL_STTI_r15__setup__semiPersistSchedIntervalDL_STTI_r15_sTTI8	= 5,
	SPS_ConfigDL_STTI_r15__setup__semiPersistSchedIntervalDL_STTI_r15_sTTI12	= 6,
	SPS_ConfigDL_STTI_r15__setup__semiPersistSchedIntervalDL_STTI_r15_sTTI16	= 7,
	SPS_ConfigDL_STTI_r15__setup__semiPersistSchedIntervalDL_STTI_r15_sTTI20	= 8,
	SPS_ConfigDL_STTI_r15__setup__semiPersistSchedIntervalDL_STTI_r15_sTTI40	= 9,
	SPS_ConfigDL_STTI_r15__setup__semiPersistSchedIntervalDL_STTI_r15_sTTI60	= 10,
	SPS_ConfigDL_STTI_r15__setup__semiPersistSchedIntervalDL_STTI_r15_sTTI80	= 11,
	SPS_ConfigDL_STTI_r15__setup__semiPersistSchedIntervalDL_STTI_r15_sTTI120	= 12,
	SPS_ConfigDL_STTI_r15__setup__semiPersistSchedIntervalDL_STTI_r15_sTTI240	= 13,
	SPS_ConfigDL_STTI_r15__setup__semiPersistSchedIntervalDL_STTI_r15_spare2	= 14,
	SPS_ConfigDL_STTI_r15__setup__semiPersistSchedIntervalDL_STTI_r15_spare1	= 15
} e_SPS_ConfigDL_STTI_r15__setup__semiPersistSchedIntervalDL_STTI_r15;
typedef enum SPS_ConfigDL_STTI_r15__setup__twoAntennaPortActivated_r15_PR {
	SPS_ConfigDL_STTI_r15__setup__twoAntennaPortActivated_r15_PR_NOTHING,	/* No components present */
	SPS_ConfigDL_STTI_r15__setup__twoAntennaPortActivated_r15_PR_release,
	SPS_ConfigDL_STTI_r15__setup__twoAntennaPortActivated_r15_PR_setup
} SPS_ConfigDL_STTI_r15__setup__twoAntennaPortActivated_r15_PR;

/* Forward declarations */
struct TPC_PDCCH_Config;

/* SPS-ConfigDL-STTI-r15 */
typedef struct SPS_ConfigDL_STTI_r15 {
	SPS_ConfigDL_STTI_r15_PR present;
	union SPS_ConfigDL_STTI_r15_u {
		NULL_t	 release;
		struct SPS_ConfigDL_STTI_r15__setup {
			long	 semiPersistSchedIntervalDL_STTI_r15;
			long	 numberOfConfSPS_Processes_STTI_r15;
			struct SPS_ConfigDL_STTI_r15__setup__twoAntennaPortActivated_r15 {
				SPS_ConfigDL_STTI_r15__setup__twoAntennaPortActivated_r15_PR present;
				union SPS_ConfigDL_STTI_r15__setup__twoAntennaPortActivated_r15_u {
					NULL_t	 release;
					struct SPS_ConfigDL_STTI_r15__setup__twoAntennaPortActivated_r15__setup {
						N1SPUCCH_AN_PersistentList_r15_t	 n1SPUCCH_AN_PersistentListP1_r15;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} setup;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *twoAntennaPortActivated_r15;
			long	 sTTI_StartTimeDL_r15;
			struct TPC_PDCCH_Config	*tpc_PDCCH_ConfigPUCCH_SPS_r15	/* OPTIONAL */;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SPS_ConfigDL_STTI_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_semiPersistSchedIntervalDL_STTI_r15_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SPS_ConfigDL_STTI_r15;
extern asn_CHOICE_specifics_t asn_SPC_SPS_ConfigDL_STTI_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_SPS_ConfigDL_STTI_r15_1[2];
extern asn_per_constraints_t asn_PER_type_SPS_ConfigDL_STTI_r15_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SPS_ConfigDL_STTI_r15_H_ */
#include <asn_internal.h>
