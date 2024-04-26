/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "NPRACH-ParametersTDD-NB-v1550.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_maxNumPreambleAttemptCE_v1550_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_numRepetitionsPerPreambleAttempt_v1550_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  10 }	/* (0..10) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_maxNumPreambleAttemptCE_v1550_value2enum_2[] = {
	{ 0,	2,	"n3" },
	{ 1,	2,	"n4" },
	{ 2,	2,	"n5" },
	{ 3,	2,	"n6" },
	{ 4,	2,	"n7" },
	{ 5,	2,	"n8" },
	{ 6,	3,	"n10" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_maxNumPreambleAttemptCE_v1550_enum2value_2[] = {
	6,	/* n10(6) */
	0,	/* n3(0) */
	1,	/* n4(1) */
	2,	/* n5(2) */
	3,	/* n6(3) */
	4,	/* n7(4) */
	5,	/* n8(5) */
	7	/* spare1(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_maxNumPreambleAttemptCE_v1550_specs_2 = {
	asn_MAP_maxNumPreambleAttemptCE_v1550_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_maxNumPreambleAttemptCE_v1550_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maxNumPreambleAttemptCE_v1550_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maxNumPreambleAttemptCE_v1550_2 = {
	"maxNumPreambleAttemptCE-v1550",
	"maxNumPreambleAttemptCE-v1550",
	&asn_OP_NativeEnumerated,
	asn_DEF_maxNumPreambleAttemptCE_v1550_tags_2,
	sizeof(asn_DEF_maxNumPreambleAttemptCE_v1550_tags_2)
		/sizeof(asn_DEF_maxNumPreambleAttemptCE_v1550_tags_2[0]) - 1, /* 1 */
	asn_DEF_maxNumPreambleAttemptCE_v1550_tags_2,	/* Same as above */
	sizeof(asn_DEF_maxNumPreambleAttemptCE_v1550_tags_2)
		/sizeof(asn_DEF_maxNumPreambleAttemptCE_v1550_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_maxNumPreambleAttemptCE_v1550_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maxNumPreambleAttemptCE_v1550_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_numRepetitionsPerPreambleAttempt_v1550_value2enum_11[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n8" },
	{ 4,	3,	"n16" },
	{ 5,	3,	"n32" },
	{ 6,	3,	"n64" },
	{ 7,	4,	"n128" },
	{ 8,	4,	"n256" },
	{ 9,	4,	"n512" },
	{ 10,	5,	"n1024" }
};
static const unsigned int asn_MAP_numRepetitionsPerPreambleAttempt_v1550_enum2value_11[] = {
	0,	/* n1(0) */
	10,	/* n1024(10) */
	7,	/* n128(7) */
	4,	/* n16(4) */
	1,	/* n2(1) */
	8,	/* n256(8) */
	5,	/* n32(5) */
	2,	/* n4(2) */
	9,	/* n512(9) */
	6,	/* n64(6) */
	3	/* n8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_numRepetitionsPerPreambleAttempt_v1550_specs_11 = {
	asn_MAP_numRepetitionsPerPreambleAttempt_v1550_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_numRepetitionsPerPreambleAttempt_v1550_enum2value_11,	/* N => "tag"; sorted by N */
	11,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_numRepetitionsPerPreambleAttempt_v1550_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_numRepetitionsPerPreambleAttempt_v1550_11 = {
	"numRepetitionsPerPreambleAttempt-v1550",
	"numRepetitionsPerPreambleAttempt-v1550",
	&asn_OP_NativeEnumerated,
	asn_DEF_numRepetitionsPerPreambleAttempt_v1550_tags_11,
	sizeof(asn_DEF_numRepetitionsPerPreambleAttempt_v1550_tags_11)
		/sizeof(asn_DEF_numRepetitionsPerPreambleAttempt_v1550_tags_11[0]) - 1, /* 1 */
	asn_DEF_numRepetitionsPerPreambleAttempt_v1550_tags_11,	/* Same as above */
	sizeof(asn_DEF_numRepetitionsPerPreambleAttempt_v1550_tags_11)
		/sizeof(asn_DEF_numRepetitionsPerPreambleAttempt_v1550_tags_11[0]), /* 2 */
	{ 0, &asn_PER_type_numRepetitionsPerPreambleAttempt_v1550_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_numRepetitionsPerPreambleAttempt_v1550_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NPRACH_ParametersTDD_NB_v1550_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NPRACH_ParametersTDD_NB_v1550, maxNumPreambleAttemptCE_v1550),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maxNumPreambleAttemptCE_v1550_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxNumPreambleAttemptCE-v1550"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NPRACH_ParametersTDD_NB_v1550, numRepetitionsPerPreambleAttempt_v1550),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_numRepetitionsPerPreambleAttempt_v1550_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"numRepetitionsPerPreambleAttempt-v1550"
		},
};
static const ber_tlv_tag_t asn_DEF_NPRACH_ParametersTDD_NB_v1550_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NPRACH_ParametersTDD_NB_v1550_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxNumPreambleAttemptCE-v1550 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* numRepetitionsPerPreambleAttempt-v1550 */
};
asn_SEQUENCE_specifics_t asn_SPC_NPRACH_ParametersTDD_NB_v1550_specs_1 = {
	sizeof(struct NPRACH_ParametersTDD_NB_v1550),
	offsetof(struct NPRACH_ParametersTDD_NB_v1550, _asn_ctx),
	asn_MAP_NPRACH_ParametersTDD_NB_v1550_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NPRACH_ParametersTDD_NB_v1550 = {
	"NPRACH-ParametersTDD-NB-v1550",
	"NPRACH-ParametersTDD-NB-v1550",
	&asn_OP_SEQUENCE,
	asn_DEF_NPRACH_ParametersTDD_NB_v1550_tags_1,
	sizeof(asn_DEF_NPRACH_ParametersTDD_NB_v1550_tags_1)
		/sizeof(asn_DEF_NPRACH_ParametersTDD_NB_v1550_tags_1[0]), /* 1 */
	asn_DEF_NPRACH_ParametersTDD_NB_v1550_tags_1,	/* Same as above */
	sizeof(asn_DEF_NPRACH_ParametersTDD_NB_v1550_tags_1)
		/sizeof(asn_DEF_NPRACH_ParametersTDD_NB_v1550_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NPRACH_ParametersTDD_NB_v1550_1,
	2,	/* Elements count */
	&asn_SPC_NPRACH_ParametersTDD_NB_v1550_specs_1	/* Additional specs */
};

