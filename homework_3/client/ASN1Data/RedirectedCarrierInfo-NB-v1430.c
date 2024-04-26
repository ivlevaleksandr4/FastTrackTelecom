/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "RedirectedCarrierInfo-NB-v1430.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_redirectedCarrierOffsetDedicated_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_t322_r14_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_redirectedCarrierOffsetDedicated_r14_value2enum_2[] = {
	{ 0,	3,	"dB1" },
	{ 1,	3,	"dB2" },
	{ 2,	3,	"dB3" },
	{ 3,	3,	"dB4" },
	{ 4,	3,	"dB5" },
	{ 5,	3,	"dB6" },
	{ 6,	3,	"dB8" },
	{ 7,	4,	"dB10" },
	{ 8,	4,	"dB12" },
	{ 9,	4,	"dB14" },
	{ 10,	4,	"dB16" },
	{ 11,	4,	"dB18" },
	{ 12,	4,	"dB20" },
	{ 13,	4,	"dB22" },
	{ 14,	4,	"dB24" },
	{ 15,	4,	"dB26" }
};
static const unsigned int asn_MAP_redirectedCarrierOffsetDedicated_r14_enum2value_2[] = {
	0,	/* dB1(0) */
	7,	/* dB10(7) */
	8,	/* dB12(8) */
	9,	/* dB14(9) */
	10,	/* dB16(10) */
	11,	/* dB18(11) */
	1,	/* dB2(1) */
	12,	/* dB20(12) */
	13,	/* dB22(13) */
	14,	/* dB24(14) */
	15,	/* dB26(15) */
	2,	/* dB3(2) */
	3,	/* dB4(3) */
	4,	/* dB5(4) */
	5,	/* dB6(5) */
	6	/* dB8(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_redirectedCarrierOffsetDedicated_r14_specs_2 = {
	asn_MAP_redirectedCarrierOffsetDedicated_r14_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_redirectedCarrierOffsetDedicated_r14_enum2value_2,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_redirectedCarrierOffsetDedicated_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_redirectedCarrierOffsetDedicated_r14_2 = {
	"redirectedCarrierOffsetDedicated-r14",
	"redirectedCarrierOffsetDedicated-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_redirectedCarrierOffsetDedicated_r14_tags_2,
	sizeof(asn_DEF_redirectedCarrierOffsetDedicated_r14_tags_2)
		/sizeof(asn_DEF_redirectedCarrierOffsetDedicated_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_redirectedCarrierOffsetDedicated_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_redirectedCarrierOffsetDedicated_r14_tags_2)
		/sizeof(asn_DEF_redirectedCarrierOffsetDedicated_r14_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_redirectedCarrierOffsetDedicated_r14_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_redirectedCarrierOffsetDedicated_r14_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_t322_r14_value2enum_19[] = {
	{ 0,	4,	"min5" },
	{ 1,	5,	"min10" },
	{ 2,	5,	"min20" },
	{ 3,	5,	"min30" },
	{ 4,	5,	"min60" },
	{ 5,	6,	"min120" },
	{ 6,	6,	"min180" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_t322_r14_enum2value_19[] = {
	1,	/* min10(1) */
	5,	/* min120(5) */
	6,	/* min180(6) */
	2,	/* min20(2) */
	3,	/* min30(3) */
	0,	/* min5(0) */
	4,	/* min60(4) */
	7	/* spare1(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_t322_r14_specs_19 = {
	asn_MAP_t322_r14_value2enum_19,	/* "tag" => N; sorted by tag */
	asn_MAP_t322_r14_enum2value_19,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_t322_r14_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_t322_r14_19 = {
	"t322-r14",
	"t322-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_t322_r14_tags_19,
	sizeof(asn_DEF_t322_r14_tags_19)
		/sizeof(asn_DEF_t322_r14_tags_19[0]) - 1, /* 1 */
	asn_DEF_t322_r14_tags_19,	/* Same as above */
	sizeof(asn_DEF_t322_r14_tags_19)
		/sizeof(asn_DEF_t322_r14_tags_19[0]), /* 2 */
	{ 0, &asn_PER_type_t322_r14_constr_19, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_t322_r14_specs_19	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RedirectedCarrierInfo_NB_v1430_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RedirectedCarrierInfo_NB_v1430, redirectedCarrierOffsetDedicated_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_redirectedCarrierOffsetDedicated_r14_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"redirectedCarrierOffsetDedicated-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RedirectedCarrierInfo_NB_v1430, t322_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_t322_r14_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t322-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_RedirectedCarrierInfo_NB_v1430_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RedirectedCarrierInfo_NB_v1430_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* redirectedCarrierOffsetDedicated-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* t322-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_RedirectedCarrierInfo_NB_v1430_specs_1 = {
	sizeof(struct RedirectedCarrierInfo_NB_v1430),
	offsetof(struct RedirectedCarrierInfo_NB_v1430, _asn_ctx),
	asn_MAP_RedirectedCarrierInfo_NB_v1430_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RedirectedCarrierInfo_NB_v1430 = {
	"RedirectedCarrierInfo-NB-v1430",
	"RedirectedCarrierInfo-NB-v1430",
	&asn_OP_SEQUENCE,
	asn_DEF_RedirectedCarrierInfo_NB_v1430_tags_1,
	sizeof(asn_DEF_RedirectedCarrierInfo_NB_v1430_tags_1)
		/sizeof(asn_DEF_RedirectedCarrierInfo_NB_v1430_tags_1[0]), /* 1 */
	asn_DEF_RedirectedCarrierInfo_NB_v1430_tags_1,	/* Same as above */
	sizeof(asn_DEF_RedirectedCarrierInfo_NB_v1430_tags_1)
		/sizeof(asn_DEF_RedirectedCarrierInfo_NB_v1430_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RedirectedCarrierInfo_NB_v1430_1,
	2,	/* Elements count */
	&asn_SPC_RedirectedCarrierInfo_NB_v1430_specs_1	/* Additional specs */
};

