/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "BandParameters-r11.h"

#include "BandParametersUL-r10.h"
#include "BandParametersDL-r10.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_supportedCSI_Proc_r11_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_supportedCSI_Proc_r11_value2enum_5[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n3" },
	{ 2,	2,	"n4" }
};
static const unsigned int asn_MAP_supportedCSI_Proc_r11_enum2value_5[] = {
	0,	/* n1(0) */
	1,	/* n3(1) */
	2	/* n4(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_supportedCSI_Proc_r11_specs_5 = {
	asn_MAP_supportedCSI_Proc_r11_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_supportedCSI_Proc_r11_enum2value_5,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_supportedCSI_Proc_r11_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_supportedCSI_Proc_r11_5 = {
	"supportedCSI-Proc-r11",
	"supportedCSI-Proc-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_supportedCSI_Proc_r11_tags_5,
	sizeof(asn_DEF_supportedCSI_Proc_r11_tags_5)
		/sizeof(asn_DEF_supportedCSI_Proc_r11_tags_5[0]) - 1, /* 1 */
	asn_DEF_supportedCSI_Proc_r11_tags_5,	/* Same as above */
	sizeof(asn_DEF_supportedCSI_Proc_r11_tags_5)
		/sizeof(asn_DEF_supportedCSI_Proc_r11_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_supportedCSI_Proc_r11_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_supportedCSI_Proc_r11_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_BandParameters_r11_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BandParameters_r11, bandEUTRA_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreqBandIndicator_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bandEUTRA-r11"
		},
	{ ATF_POINTER, 3, offsetof(struct BandParameters_r11, bandParametersUL_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BandParametersUL_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bandParametersUL-r11"
		},
	{ ATF_POINTER, 2, offsetof(struct BandParameters_r11, bandParametersDL_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BandParametersDL_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bandParametersDL-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct BandParameters_r11, supportedCSI_Proc_r11),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_supportedCSI_Proc_r11_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedCSI-Proc-r11"
		},
};
static const int asn_MAP_BandParameters_r11_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_BandParameters_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BandParameters_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bandEUTRA-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* bandParametersUL-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* bandParametersDL-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* supportedCSI-Proc-r11 */
};
asn_SEQUENCE_specifics_t asn_SPC_BandParameters_r11_specs_1 = {
	sizeof(struct BandParameters_r11),
	offsetof(struct BandParameters_r11, _asn_ctx),
	asn_MAP_BandParameters_r11_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_BandParameters_r11_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BandParameters_r11 = {
	"BandParameters-r11",
	"BandParameters-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_BandParameters_r11_tags_1,
	sizeof(asn_DEF_BandParameters_r11_tags_1)
		/sizeof(asn_DEF_BandParameters_r11_tags_1[0]), /* 1 */
	asn_DEF_BandParameters_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_BandParameters_r11_tags_1)
		/sizeof(asn_DEF_BandParameters_r11_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_BandParameters_r11_1,
	4,	/* Elements count */
	&asn_SPC_BandParameters_r11_specs_1	/* Additional specs */
};

