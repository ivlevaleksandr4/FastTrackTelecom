/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "MeasParameters-v1520.h"

static int
memb_measGapPatterns_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_measGapPatterns_r15_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_MeasParameters_v1520_1[] = {
	{ ATF_POINTER, 1, offsetof(struct MeasParameters_v1520, measGapPatterns_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_measGapPatterns_r15_constr_2,  memb_measGapPatterns_r15_constraint_1 },
		0, 0, /* No default value */
		"measGapPatterns-r15"
		},
};
static const int asn_MAP_MeasParameters_v1520_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_MeasParameters_v1520_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasParameters_v1520_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* measGapPatterns-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasParameters_v1520_specs_1 = {
	sizeof(struct MeasParameters_v1520),
	offsetof(struct MeasParameters_v1520, _asn_ctx),
	asn_MAP_MeasParameters_v1520_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_MeasParameters_v1520_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasParameters_v1520 = {
	"MeasParameters-v1520",
	"MeasParameters-v1520",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasParameters_v1520_tags_1,
	sizeof(asn_DEF_MeasParameters_v1520_tags_1)
		/sizeof(asn_DEF_MeasParameters_v1520_tags_1[0]), /* 1 */
	asn_DEF_MeasParameters_v1520_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasParameters_v1520_tags_1)
		/sizeof(asn_DEF_MeasParameters_v1520_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasParameters_v1520_1,
	1,	/* Elements count */
	&asn_SPC_MeasParameters_v1520_specs_1	/* Additional specs */
};

