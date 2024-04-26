/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "FeatureSetDL-r15.h"

#include "MIMO-CA-ParametersPerBoBC-r15.h"
static int
memb_featureSetPerCC_ListDL_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 32)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_featureSetPerCC_ListDL_r15_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_featureSetPerCC_ListDL_r15_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_featureSetPerCC_ListDL_r15_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_FeatureSetDL_PerCC_Id_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_featureSetPerCC_ListDL_r15_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_featureSetPerCC_ListDL_r15_specs_3 = {
	sizeof(struct FeatureSetDL_r15__featureSetPerCC_ListDL_r15),
	offsetof(struct FeatureSetDL_r15__featureSetPerCC_ListDL_r15, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_featureSetPerCC_ListDL_r15_3 = {
	"featureSetPerCC-ListDL-r15",
	"featureSetPerCC-ListDL-r15",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_featureSetPerCC_ListDL_r15_tags_3,
	sizeof(asn_DEF_featureSetPerCC_ListDL_r15_tags_3)
		/sizeof(asn_DEF_featureSetPerCC_ListDL_r15_tags_3[0]) - 1, /* 1 */
	asn_DEF_featureSetPerCC_ListDL_r15_tags_3,	/* Same as above */
	sizeof(asn_DEF_featureSetPerCC_ListDL_r15_tags_3)
		/sizeof(asn_DEF_featureSetPerCC_ListDL_r15_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_featureSetPerCC_ListDL_r15_constr_3, SEQUENCE_OF_constraint },
	asn_MBR_featureSetPerCC_ListDL_r15_3,
	1,	/* Single element */
	&asn_SPC_featureSetPerCC_ListDL_r15_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_FeatureSetDL_r15_1[] = {
	{ ATF_POINTER, 1, offsetof(struct FeatureSetDL_r15, mimo_CA_ParametersPerBoBC_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MIMO_CA_ParametersPerBoBC_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mimo-CA-ParametersPerBoBC-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FeatureSetDL_r15, featureSetPerCC_ListDL_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_featureSetPerCC_ListDL_r15_3,
		0,
		{ 0, &asn_PER_memb_featureSetPerCC_ListDL_r15_constr_3,  memb_featureSetPerCC_ListDL_r15_constraint_1 },
		0, 0, /* No default value */
		"featureSetPerCC-ListDL-r15"
		},
};
static const int asn_MAP_FeatureSetDL_r15_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_FeatureSetDL_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FeatureSetDL_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mimo-CA-ParametersPerBoBC-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* featureSetPerCC-ListDL-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_FeatureSetDL_r15_specs_1 = {
	sizeof(struct FeatureSetDL_r15),
	offsetof(struct FeatureSetDL_r15, _asn_ctx),
	asn_MAP_FeatureSetDL_r15_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_FeatureSetDL_r15_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FeatureSetDL_r15 = {
	"FeatureSetDL-r15",
	"FeatureSetDL-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_FeatureSetDL_r15_tags_1,
	sizeof(asn_DEF_FeatureSetDL_r15_tags_1)
		/sizeof(asn_DEF_FeatureSetDL_r15_tags_1[0]), /* 1 */
	asn_DEF_FeatureSetDL_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_FeatureSetDL_r15_tags_1)
		/sizeof(asn_DEF_FeatureSetDL_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_FeatureSetDL_r15_1,
	2,	/* Elements count */
	&asn_SPC_FeatureSetDL_r15_specs_1	/* Additional specs */
};

