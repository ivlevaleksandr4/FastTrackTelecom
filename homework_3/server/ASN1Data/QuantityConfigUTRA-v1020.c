/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "QuantityConfigUTRA-v1020.h"

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
asn_TYPE_member_t asn_MBR_QuantityConfigUTRA_v1020_1[] = {
	{ ATF_POINTER, 1, offsetof(struct QuantityConfigUTRA_v1020, filterCoefficient2_FDD_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FilterCoefficient,
		0,
		{ 0, 0, 0 },
		&asn_DFL_2_cmp_4,	/* Compare DEFAULT 4 */
		&asn_DFL_2_set_4,	/* Set DEFAULT 4 */
		"filterCoefficient2-FDD-r10"
		},
};
static const int asn_MAP_QuantityConfigUTRA_v1020_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_QuantityConfigUTRA_v1020_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_QuantityConfigUTRA_v1020_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* filterCoefficient2-FDD-r10 */
};
asn_SEQUENCE_specifics_t asn_SPC_QuantityConfigUTRA_v1020_specs_1 = {
	sizeof(struct QuantityConfigUTRA_v1020),
	offsetof(struct QuantityConfigUTRA_v1020, _asn_ctx),
	asn_MAP_QuantityConfigUTRA_v1020_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_QuantityConfigUTRA_v1020_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_QuantityConfigUTRA_v1020 = {
	"QuantityConfigUTRA-v1020",
	"QuantityConfigUTRA-v1020",
	&asn_OP_SEQUENCE,
	asn_DEF_QuantityConfigUTRA_v1020_tags_1,
	sizeof(asn_DEF_QuantityConfigUTRA_v1020_tags_1)
		/sizeof(asn_DEF_QuantityConfigUTRA_v1020_tags_1[0]), /* 1 */
	asn_DEF_QuantityConfigUTRA_v1020_tags_1,	/* Same as above */
	sizeof(asn_DEF_QuantityConfigUTRA_v1020_tags_1)
		/sizeof(asn_DEF_QuantityConfigUTRA_v1020_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_QuantityConfigUTRA_v1020_1,
	1,	/* Elements count */
	&asn_SPC_QuantityConfigUTRA_v1020_specs_1	/* Additional specs */
};

