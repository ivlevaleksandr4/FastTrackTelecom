/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "MeasGapSharingConfig-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_measGapSharingScheme_r14_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_MeasGapSharingConfig_r14_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_measGapSharingScheme_r14_value2enum_4[] = {
	{ 0,	8,	"scheme00" },
	{ 1,	8,	"scheme01" },
	{ 2,	8,	"scheme10" },
	{ 3,	8,	"scheme11" }
};
static const unsigned int asn_MAP_measGapSharingScheme_r14_enum2value_4[] = {
	0,	/* scheme00(0) */
	1,	/* scheme01(1) */
	2,	/* scheme10(2) */
	3	/* scheme11(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_measGapSharingScheme_r14_specs_4 = {
	asn_MAP_measGapSharingScheme_r14_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_measGapSharingScheme_r14_enum2value_4,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_measGapSharingScheme_r14_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measGapSharingScheme_r14_4 = {
	"measGapSharingScheme-r14",
	"measGapSharingScheme-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_measGapSharingScheme_r14_tags_4,
	sizeof(asn_DEF_measGapSharingScheme_r14_tags_4)
		/sizeof(asn_DEF_measGapSharingScheme_r14_tags_4[0]) - 1, /* 1 */
	asn_DEF_measGapSharingScheme_r14_tags_4,	/* Same as above */
	sizeof(asn_DEF_measGapSharingScheme_r14_tags_4)
		/sizeof(asn_DEF_measGapSharingScheme_r14_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_measGapSharingScheme_r14_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_measGapSharingScheme_r14_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasGapSharingConfig_r14__setup, measGapSharingScheme_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_measGapSharingScheme_r14_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measGapSharingScheme-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* measGapSharingScheme-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct MeasGapSharingConfig_r14__setup),
	offsetof(struct MeasGapSharingConfig_r14__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_3 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_3,
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_3,
	1,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasGapSharingConfig_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasGapSharingConfig_r14, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasGapSharingConfig_r14, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_MeasGapSharingConfig_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_MeasGapSharingConfig_r14_specs_1 = {
	sizeof(struct MeasGapSharingConfig_r14),
	offsetof(struct MeasGapSharingConfig_r14, _asn_ctx),
	offsetof(struct MeasGapSharingConfig_r14, present),
	sizeof(((struct MeasGapSharingConfig_r14 *)0)->present),
	asn_MAP_MeasGapSharingConfig_r14_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_MeasGapSharingConfig_r14 = {
	"MeasGapSharingConfig-r14",
	"MeasGapSharingConfig-r14",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_MeasGapSharingConfig_r14_constr_1, CHOICE_constraint },
	asn_MBR_MeasGapSharingConfig_r14_1,
	2,	/* Elements count */
	&asn_SPC_MeasGapSharingConfig_r14_specs_1	/* Additional specs */
};

