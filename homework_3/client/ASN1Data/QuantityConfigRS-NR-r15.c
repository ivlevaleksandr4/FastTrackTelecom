/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "QuantityConfigRS-NR-r15.h"

static int asn_DFL_2_cmp_4(const void *sptr) {
	const FilterCoefficient_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 4 */
	return (*st != 4);
}
static int asn_DFL_2_set_4(void **sptr) {
	FilterCoefficient_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 4 */
	*st = 4;
	return 0;
}
static int asn_DFL_3_cmp_4(const void *sptr) {
	const FilterCoefficient_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 4 */
	return (*st != 4);
}
static int asn_DFL_3_set_4(void **sptr) {
	FilterCoefficient_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 4 */
	*st = 4;
	return 0;
}
static int asn_DFL_4_cmp_4(const void *sptr) {
	const FilterCoefficient_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 4 */
	return (*st != 4);
}
static int asn_DFL_4_set_4(void **sptr) {
	FilterCoefficient_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 4 */
	*st = 4;
	return 0;
}
asn_TYPE_member_t asn_MBR_QuantityConfigRS_NR_r15_1[] = {
	{ ATF_POINTER, 3, offsetof(struct QuantityConfigRS_NR_r15, filterCoeff_RSRP_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FilterCoefficient,
		0,
		{ 0, 0, 0 },
		&asn_DFL_2_cmp_4,	/* Compare DEFAULT 4 */
		&asn_DFL_2_set_4,	/* Set DEFAULT 4 */
		"filterCoeff-RSRP-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct QuantityConfigRS_NR_r15, filterCoeff_RSRQ_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FilterCoefficient,
		0,
		{ 0, 0, 0 },
		&asn_DFL_3_cmp_4,	/* Compare DEFAULT 4 */
		&asn_DFL_3_set_4,	/* Set DEFAULT 4 */
		"filterCoeff-RSRQ-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct QuantityConfigRS_NR_r15, filterCoefficient_SINR_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FilterCoefficient,
		0,
		{ 0, 0, 0 },
		&asn_DFL_4_cmp_4,	/* Compare DEFAULT 4 */
		&asn_DFL_4_set_4,	/* Set DEFAULT 4 */
		"filterCoefficient-SINR-r13"
		},
};
static const int asn_MAP_QuantityConfigRS_NR_r15_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_QuantityConfigRS_NR_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_QuantityConfigRS_NR_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* filterCoeff-RSRP-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* filterCoeff-RSRQ-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* filterCoefficient-SINR-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_QuantityConfigRS_NR_r15_specs_1 = {
	sizeof(struct QuantityConfigRS_NR_r15),
	offsetof(struct QuantityConfigRS_NR_r15, _asn_ctx),
	asn_MAP_QuantityConfigRS_NR_r15_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_QuantityConfigRS_NR_r15_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_QuantityConfigRS_NR_r15 = {
	"QuantityConfigRS-NR-r15",
	"QuantityConfigRS-NR-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_QuantityConfigRS_NR_r15_tags_1,
	sizeof(asn_DEF_QuantityConfigRS_NR_r15_tags_1)
		/sizeof(asn_DEF_QuantityConfigRS_NR_r15_tags_1[0]), /* 1 */
	asn_DEF_QuantityConfigRS_NR_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_QuantityConfigRS_NR_r15_tags_1)
		/sizeof(asn_DEF_QuantityConfigRS_NR_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_QuantityConfigRS_NR_r15_1,
	3,	/* Elements count */
	&asn_SPC_QuantityConfigRS_NR_r15_specs_1	/* Additional specs */
};

