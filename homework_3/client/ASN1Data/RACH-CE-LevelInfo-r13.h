/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_RACH_CE_LevelInfo_r13_H_
#define	_RACH_CE_LevelInfo_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <BOOLEAN.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RACH_CE_LevelInfo_r13__ra_ResponseWindowSize_r13 {
	RACH_CE_LevelInfo_r13__ra_ResponseWindowSize_r13_sf20	= 0,
	RACH_CE_LevelInfo_r13__ra_ResponseWindowSize_r13_sf50	= 1,
	RACH_CE_LevelInfo_r13__ra_ResponseWindowSize_r13_sf80	= 2,
	RACH_CE_LevelInfo_r13__ra_ResponseWindowSize_r13_sf120	= 3,
	RACH_CE_LevelInfo_r13__ra_ResponseWindowSize_r13_sf180	= 4,
	RACH_CE_LevelInfo_r13__ra_ResponseWindowSize_r13_sf240	= 5,
	RACH_CE_LevelInfo_r13__ra_ResponseWindowSize_r13_sf320	= 6,
	RACH_CE_LevelInfo_r13__ra_ResponseWindowSize_r13_sf400	= 7
} e_RACH_CE_LevelInfo_r13__ra_ResponseWindowSize_r13;
typedef enum RACH_CE_LevelInfo_r13__mac_ContentionResolutionTimer_r13 {
	RACH_CE_LevelInfo_r13__mac_ContentionResolutionTimer_r13_sf80	= 0,
	RACH_CE_LevelInfo_r13__mac_ContentionResolutionTimer_r13_sf100	= 1,
	RACH_CE_LevelInfo_r13__mac_ContentionResolutionTimer_r13_sf120	= 2,
	RACH_CE_LevelInfo_r13__mac_ContentionResolutionTimer_r13_sf160	= 3,
	RACH_CE_LevelInfo_r13__mac_ContentionResolutionTimer_r13_sf200	= 4,
	RACH_CE_LevelInfo_r13__mac_ContentionResolutionTimer_r13_sf240	= 5,
	RACH_CE_LevelInfo_r13__mac_ContentionResolutionTimer_r13_sf480	= 6,
	RACH_CE_LevelInfo_r13__mac_ContentionResolutionTimer_r13_sf960	= 7
} e_RACH_CE_LevelInfo_r13__mac_ContentionResolutionTimer_r13;
typedef enum RACH_CE_LevelInfo_r13__rar_HoppingConfig_r13 {
	RACH_CE_LevelInfo_r13__rar_HoppingConfig_r13_on	= 0,
	RACH_CE_LevelInfo_r13__rar_HoppingConfig_r13_off	= 1
} e_RACH_CE_LevelInfo_r13__rar_HoppingConfig_r13;
typedef enum RACH_CE_LevelInfo_r13__edt_Parameters_r15__edt_TBS_r15 {
	RACH_CE_LevelInfo_r13__edt_Parameters_r15__edt_TBS_r15_b328	= 0,
	RACH_CE_LevelInfo_r13__edt_Parameters_r15__edt_TBS_r15_b408	= 1,
	RACH_CE_LevelInfo_r13__edt_Parameters_r15__edt_TBS_r15_b504	= 2,
	RACH_CE_LevelInfo_r13__edt_Parameters_r15__edt_TBS_r15_b600	= 3,
	RACH_CE_LevelInfo_r13__edt_Parameters_r15__edt_TBS_r15_b712	= 4,
	RACH_CE_LevelInfo_r13__edt_Parameters_r15__edt_TBS_r15_b808	= 5,
	RACH_CE_LevelInfo_r13__edt_Parameters_r15__edt_TBS_r15_b936	= 6,
	RACH_CE_LevelInfo_r13__edt_Parameters_r15__edt_TBS_r15_b1000or456	= 7
} e_RACH_CE_LevelInfo_r13__edt_Parameters_r15__edt_TBS_r15;
typedef enum RACH_CE_LevelInfo_r13__edt_Parameters_r15__mac_ContentionResolutionTimer_r15 {
	RACH_CE_LevelInfo_r13__edt_Parameters_r15__mac_ContentionResolutionTimer_r15_sf240	= 0,
	RACH_CE_LevelInfo_r13__edt_Parameters_r15__mac_ContentionResolutionTimer_r15_sf480	= 1,
	RACH_CE_LevelInfo_r13__edt_Parameters_r15__mac_ContentionResolutionTimer_r15_sf960	= 2,
	RACH_CE_LevelInfo_r13__edt_Parameters_r15__mac_ContentionResolutionTimer_r15_sf1920	= 3,
	RACH_CE_LevelInfo_r13__edt_Parameters_r15__mac_ContentionResolutionTimer_r15_sf3840	= 4,
	RACH_CE_LevelInfo_r13__edt_Parameters_r15__mac_ContentionResolutionTimer_r15_sf5760	= 5,
	RACH_CE_LevelInfo_r13__edt_Parameters_r15__mac_ContentionResolutionTimer_r15_sf7680	= 6,
	RACH_CE_LevelInfo_r13__edt_Parameters_r15__mac_ContentionResolutionTimer_r15_sf10240	= 7
} e_RACH_CE_LevelInfo_r13__edt_Parameters_r15__mac_ContentionResolutionTimer_r15;

/* RACH-CE-LevelInfo-r13 */
typedef struct RACH_CE_LevelInfo_r13 {
	struct RACH_CE_LevelInfo_r13__preambleMappingInfo_r13 {
		long	 firstPreamble_r13;
		long	 lastPreamble_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} preambleMappingInfo_r13;
	long	 ra_ResponseWindowSize_r13;
	long	 mac_ContentionResolutionTimer_r13;
	long	 rar_HoppingConfig_r13;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct RACH_CE_LevelInfo_r13__edt_Parameters_r15 {
		long	 edt_LastPreamble_r15;
		BOOLEAN_t	 edt_SmallTBS_Enabled_r15;
		long	 edt_TBS_r15;
		long	*mac_ContentionResolutionTimer_r15	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *edt_Parameters_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RACH_CE_LevelInfo_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ra_ResponseWindowSize_r13_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mac_ContentionResolutionTimer_r13_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_rar_HoppingConfig_r13_23;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_edt_TBS_r15_30;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mac_ContentionResolutionTimer_r15_39;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RACH_CE_LevelInfo_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_RACH_CE_LevelInfo_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_RACH_CE_LevelInfo_r13_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _RACH_CE_LevelInfo_r13_H_ */
#include <asn_internal.h>
