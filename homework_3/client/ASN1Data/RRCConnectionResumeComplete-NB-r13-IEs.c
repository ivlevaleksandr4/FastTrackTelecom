/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "RRCConnectionResumeComplete-NB-r13-IEs.h"

#include "RRCConnectionResumeComplete-NB-v1470-IEs.h"
static int
memb_selectedPLMN_Identity_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 6)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_selectedPLMN_Identity_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  6 }	/* (1..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_RRCConnectionResumeComplete_NB_r13_IEs_1[] = {
	{ ATF_POINTER, 4, offsetof(struct RRCConnectionResumeComplete_NB_r13_IEs, selectedPLMN_Identity_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_selectedPLMN_Identity_r13_constr_2,  memb_selectedPLMN_Identity_r13_constraint_1 },
		0, 0, /* No default value */
		"selectedPLMN-Identity-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct RRCConnectionResumeComplete_NB_r13_IEs, dedicatedInfoNAS_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DedicatedInfoNAS,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dedicatedInfoNAS-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCConnectionResumeComplete_NB_r13_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionResumeComplete_NB_r13_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionResumeComplete_NB_v1470_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_RRCConnectionResumeComplete_NB_r13_IEs_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_RRCConnectionResumeComplete_NB_r13_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCConnectionResumeComplete_NB_r13_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* selectedPLMN-Identity-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dedicatedInfoNAS-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionResumeComplete_NB_r13_IEs_specs_1 = {
	sizeof(struct RRCConnectionResumeComplete_NB_r13_IEs),
	offsetof(struct RRCConnectionResumeComplete_NB_r13_IEs, _asn_ctx),
	asn_MAP_RRCConnectionResumeComplete_NB_r13_IEs_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_RRCConnectionResumeComplete_NB_r13_IEs_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionResumeComplete_NB_r13_IEs = {
	"RRCConnectionResumeComplete-NB-r13-IEs",
	"RRCConnectionResumeComplete-NB-r13-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCConnectionResumeComplete_NB_r13_IEs_tags_1,
	sizeof(asn_DEF_RRCConnectionResumeComplete_NB_r13_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionResumeComplete_NB_r13_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionResumeComplete_NB_r13_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionResumeComplete_NB_r13_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionResumeComplete_NB_r13_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRCConnectionResumeComplete_NB_r13_IEs_1,
	4,	/* Elements count */
	&asn_SPC_RRCConnectionResumeComplete_NB_r13_IEs_specs_1	/* Additional specs */
};

