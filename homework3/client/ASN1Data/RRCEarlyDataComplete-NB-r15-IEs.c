/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "RRCEarlyDataComplete-NB-r15-IEs.h"

#include "RedirectedCarrierInfo-NB-r13.h"
#include "RedirectedCarrierInfo-NB-v1430.h"
static int
memb_extendedWaitTime_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 1800)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_extendedWaitTime_r15_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  1,  1800 }	/* (1..1800) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_6 = {
	sizeof(struct RRCEarlyDataComplete_NB_r15_IEs__nonCriticalExtension),
	offsetof(struct RRCEarlyDataComplete_NB_r15_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_6 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_6,
	sizeof(asn_DEF_nonCriticalExtension_tags_6)
		/sizeof(asn_DEF_nonCriticalExtension_tags_6[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_6,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_6)
		/sizeof(asn_DEF_nonCriticalExtension_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRCEarlyDataComplete_NB_r15_IEs_1[] = {
	{ ATF_POINTER, 5, offsetof(struct RRCEarlyDataComplete_NB_r15_IEs, dedicatedInfoNAS_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DedicatedInfoNAS,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dedicatedInfoNAS-r15"
		},
	{ ATF_POINTER, 4, offsetof(struct RRCEarlyDataComplete_NB_r15_IEs, extendedWaitTime_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_extendedWaitTime_r15_constr_3,  memb_extendedWaitTime_r15_constraint_1 },
		0, 0, /* No default value */
		"extendedWaitTime-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct RRCEarlyDataComplete_NB_r15_IEs, redirectedCarrierInfo_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RedirectedCarrierInfo_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"redirectedCarrierInfo-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCEarlyDataComplete_NB_r15_IEs, redirectedCarrierInfoExt_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RedirectedCarrierInfo_NB_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"redirectedCarrierInfoExt-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCEarlyDataComplete_NB_r15_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_RRCEarlyDataComplete_NB_r15_IEs_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_RRCEarlyDataComplete_NB_r15_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCEarlyDataComplete_NB_r15_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dedicatedInfoNAS-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* extendedWaitTime-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* redirectedCarrierInfo-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* redirectedCarrierInfoExt-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCEarlyDataComplete_NB_r15_IEs_specs_1 = {
	sizeof(struct RRCEarlyDataComplete_NB_r15_IEs),
	offsetof(struct RRCEarlyDataComplete_NB_r15_IEs, _asn_ctx),
	asn_MAP_RRCEarlyDataComplete_NB_r15_IEs_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_RRCEarlyDataComplete_NB_r15_IEs_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCEarlyDataComplete_NB_r15_IEs = {
	"RRCEarlyDataComplete-NB-r15-IEs",
	"RRCEarlyDataComplete-NB-r15-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCEarlyDataComplete_NB_r15_IEs_tags_1,
	sizeof(asn_DEF_RRCEarlyDataComplete_NB_r15_IEs_tags_1)
		/sizeof(asn_DEF_RRCEarlyDataComplete_NB_r15_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCEarlyDataComplete_NB_r15_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCEarlyDataComplete_NB_r15_IEs_tags_1)
		/sizeof(asn_DEF_RRCEarlyDataComplete_NB_r15_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRCEarlyDataComplete_NB_r15_IEs_1,
	5,	/* Elements count */
	&asn_SPC_RRCEarlyDataComplete_NB_r15_IEs_specs_1	/* Additional specs */
};

