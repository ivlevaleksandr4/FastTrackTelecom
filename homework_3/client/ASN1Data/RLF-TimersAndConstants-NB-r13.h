/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_RLF_TimersAndConstants_NB_r13_H_
#define	_RLF_TimersAndConstants_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RLF_TimersAndConstants_NB_r13_PR {
	RLF_TimersAndConstants_NB_r13_PR_NOTHING,	/* No components present */
	RLF_TimersAndConstants_NB_r13_PR_release,
	RLF_TimersAndConstants_NB_r13_PR_setup
} RLF_TimersAndConstants_NB_r13_PR;
typedef enum RLF_TimersAndConstants_NB_r13__setup__t301_r13 {
	RLF_TimersAndConstants_NB_r13__setup__t301_r13_ms2500	= 0,
	RLF_TimersAndConstants_NB_r13__setup__t301_r13_ms4000	= 1,
	RLF_TimersAndConstants_NB_r13__setup__t301_r13_ms6000	= 2,
	RLF_TimersAndConstants_NB_r13__setup__t301_r13_ms10000	= 3,
	RLF_TimersAndConstants_NB_r13__setup__t301_r13_ms15000	= 4,
	RLF_TimersAndConstants_NB_r13__setup__t301_r13_ms25000	= 5,
	RLF_TimersAndConstants_NB_r13__setup__t301_r13_ms40000	= 6,
	RLF_TimersAndConstants_NB_r13__setup__t301_r13_ms60000	= 7
} e_RLF_TimersAndConstants_NB_r13__setup__t301_r13;
typedef enum RLF_TimersAndConstants_NB_r13__setup__t310_r13 {
	RLF_TimersAndConstants_NB_r13__setup__t310_r13_ms0	= 0,
	RLF_TimersAndConstants_NB_r13__setup__t310_r13_ms200	= 1,
	RLF_TimersAndConstants_NB_r13__setup__t310_r13_ms500	= 2,
	RLF_TimersAndConstants_NB_r13__setup__t310_r13_ms1000	= 3,
	RLF_TimersAndConstants_NB_r13__setup__t310_r13_ms2000	= 4,
	RLF_TimersAndConstants_NB_r13__setup__t310_r13_ms4000	= 5,
	RLF_TimersAndConstants_NB_r13__setup__t310_r13_ms8000	= 6
} e_RLF_TimersAndConstants_NB_r13__setup__t310_r13;
typedef enum RLF_TimersAndConstants_NB_r13__setup__n310_r13 {
	RLF_TimersAndConstants_NB_r13__setup__n310_r13_n1	= 0,
	RLF_TimersAndConstants_NB_r13__setup__n310_r13_n2	= 1,
	RLF_TimersAndConstants_NB_r13__setup__n310_r13_n3	= 2,
	RLF_TimersAndConstants_NB_r13__setup__n310_r13_n4	= 3,
	RLF_TimersAndConstants_NB_r13__setup__n310_r13_n6	= 4,
	RLF_TimersAndConstants_NB_r13__setup__n310_r13_n8	= 5,
	RLF_TimersAndConstants_NB_r13__setup__n310_r13_n10	= 6,
	RLF_TimersAndConstants_NB_r13__setup__n310_r13_n20	= 7
} e_RLF_TimersAndConstants_NB_r13__setup__n310_r13;
typedef enum RLF_TimersAndConstants_NB_r13__setup__t311_r13 {
	RLF_TimersAndConstants_NB_r13__setup__t311_r13_ms1000	= 0,
	RLF_TimersAndConstants_NB_r13__setup__t311_r13_ms3000	= 1,
	RLF_TimersAndConstants_NB_r13__setup__t311_r13_ms5000	= 2,
	RLF_TimersAndConstants_NB_r13__setup__t311_r13_ms10000	= 3,
	RLF_TimersAndConstants_NB_r13__setup__t311_r13_ms15000	= 4,
	RLF_TimersAndConstants_NB_r13__setup__t311_r13_ms20000	= 5,
	RLF_TimersAndConstants_NB_r13__setup__t311_r13_ms30000	= 6
} e_RLF_TimersAndConstants_NB_r13__setup__t311_r13;
typedef enum RLF_TimersAndConstants_NB_r13__setup__n311_r13 {
	RLF_TimersAndConstants_NB_r13__setup__n311_r13_n1	= 0,
	RLF_TimersAndConstants_NB_r13__setup__n311_r13_n2	= 1,
	RLF_TimersAndConstants_NB_r13__setup__n311_r13_n3	= 2,
	RLF_TimersAndConstants_NB_r13__setup__n311_r13_n4	= 3,
	RLF_TimersAndConstants_NB_r13__setup__n311_r13_n5	= 4,
	RLF_TimersAndConstants_NB_r13__setup__n311_r13_n6	= 5,
	RLF_TimersAndConstants_NB_r13__setup__n311_r13_n8	= 6,
	RLF_TimersAndConstants_NB_r13__setup__n311_r13_n10	= 7
} e_RLF_TimersAndConstants_NB_r13__setup__n311_r13;
typedef enum RLF_TimersAndConstants_NB_r13__setup__t311_v1350 {
	RLF_TimersAndConstants_NB_r13__setup__t311_v1350_ms40000	= 0,
	RLF_TimersAndConstants_NB_r13__setup__t311_v1350_ms60000	= 1,
	RLF_TimersAndConstants_NB_r13__setup__t311_v1350_ms90000	= 2,
	RLF_TimersAndConstants_NB_r13__setup__t311_v1350_ms120000	= 3
} e_RLF_TimersAndConstants_NB_r13__setup__t311_v1350;
typedef enum RLF_TimersAndConstants_NB_r13__setup__t301_v1530 {
	RLF_TimersAndConstants_NB_r13__setup__t301_v1530_ms80000	= 0,
	RLF_TimersAndConstants_NB_r13__setup__t301_v1530_ms100000	= 1,
	RLF_TimersAndConstants_NB_r13__setup__t301_v1530_ms120000	= 2
} e_RLF_TimersAndConstants_NB_r13__setup__t301_v1530;
typedef enum RLF_TimersAndConstants_NB_r13__setup__t311_v1530 {
	RLF_TimersAndConstants_NB_r13__setup__t311_v1530_ms160000	= 0,
	RLF_TimersAndConstants_NB_r13__setup__t311_v1530_ms200000	= 1
} e_RLF_TimersAndConstants_NB_r13__setup__t311_v1530;

/* RLF-TimersAndConstants-NB-r13 */
typedef struct RLF_TimersAndConstants_NB_r13 {
	RLF_TimersAndConstants_NB_r13_PR present;
	union RLF_TimersAndConstants_NB_r13_u {
		NULL_t	 release;
		struct RLF_TimersAndConstants_NB_r13__setup {
			long	 t301_r13;
			long	 t310_r13;
			long	 n310_r13;
			long	 t311_r13;
			long	 n311_r13;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			long	*t311_v1350	/* OPTIONAL */;
			long	*t301_v1530	/* OPTIONAL */;
			long	*t311_v1530	/* OPTIONAL */;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLF_TimersAndConstants_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_t301_r13_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_t310_r13_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_n310_r13_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_t311_r13_30;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_n311_r13_38;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_t311_v1350_48;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_t301_v1530_53;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_t311_v1530_57;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RLF_TimersAndConstants_NB_r13;
extern asn_CHOICE_specifics_t asn_SPC_RLF_TimersAndConstants_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_RLF_TimersAndConstants_NB_r13_1[2];
extern asn_per_constraints_t asn_PER_type_RLF_TimersAndConstants_NB_r13_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RLF_TimersAndConstants_NB_r13_H_ */
#include <asn_internal.h>
