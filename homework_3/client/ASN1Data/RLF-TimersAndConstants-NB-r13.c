/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "RLF-TimersAndConstants-NB-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_t301_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_t310_r13_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_n310_r13_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_t311_r13_constr_30 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_n311_r13_constr_38 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_t311_v1350_constr_48 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_t301_v1530_constr_53 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_t311_v1530_constr_57 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_RLF_TimersAndConstants_NB_r13_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_t301_r13_value2enum_4[] = {
	{ 0,	6,	"ms2500" },
	{ 1,	6,	"ms4000" },
	{ 2,	6,	"ms6000" },
	{ 3,	7,	"ms10000" },
	{ 4,	7,	"ms15000" },
	{ 5,	7,	"ms25000" },
	{ 6,	7,	"ms40000" },
	{ 7,	7,	"ms60000" }
};
static const unsigned int asn_MAP_t301_r13_enum2value_4[] = {
	3,	/* ms10000(3) */
	4,	/* ms15000(4) */
	0,	/* ms2500(0) */
	5,	/* ms25000(5) */
	1,	/* ms4000(1) */
	6,	/* ms40000(6) */
	2,	/* ms6000(2) */
	7	/* ms60000(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_t301_r13_specs_4 = {
	asn_MAP_t301_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_t301_r13_enum2value_4,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_t301_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_t301_r13_4 = {
	"t301-r13",
	"t301-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_t301_r13_tags_4,
	sizeof(asn_DEF_t301_r13_tags_4)
		/sizeof(asn_DEF_t301_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_t301_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_t301_r13_tags_4)
		/sizeof(asn_DEF_t301_r13_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_t301_r13_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_t301_r13_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_t310_r13_value2enum_13[] = {
	{ 0,	3,	"ms0" },
	{ 1,	5,	"ms200" },
	{ 2,	5,	"ms500" },
	{ 3,	6,	"ms1000" },
	{ 4,	6,	"ms2000" },
	{ 5,	6,	"ms4000" },
	{ 6,	6,	"ms8000" }
};
static const unsigned int asn_MAP_t310_r13_enum2value_13[] = {
	0,	/* ms0(0) */
	3,	/* ms1000(3) */
	1,	/* ms200(1) */
	4,	/* ms2000(4) */
	5,	/* ms4000(5) */
	2,	/* ms500(2) */
	6	/* ms8000(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_t310_r13_specs_13 = {
	asn_MAP_t310_r13_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_t310_r13_enum2value_13,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_t310_r13_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_t310_r13_13 = {
	"t310-r13",
	"t310-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_t310_r13_tags_13,
	sizeof(asn_DEF_t310_r13_tags_13)
		/sizeof(asn_DEF_t310_r13_tags_13[0]) - 1, /* 1 */
	asn_DEF_t310_r13_tags_13,	/* Same as above */
	sizeof(asn_DEF_t310_r13_tags_13)
		/sizeof(asn_DEF_t310_r13_tags_13[0]), /* 2 */
	{ 0, &asn_PER_type_t310_r13_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_t310_r13_specs_13	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_n310_r13_value2enum_21[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" },
	{ 3,	2,	"n4" },
	{ 4,	2,	"n6" },
	{ 5,	2,	"n8" },
	{ 6,	3,	"n10" },
	{ 7,	3,	"n20" }
};
static const unsigned int asn_MAP_n310_r13_enum2value_21[] = {
	0,	/* n1(0) */
	6,	/* n10(6) */
	1,	/* n2(1) */
	7,	/* n20(7) */
	2,	/* n3(2) */
	3,	/* n4(3) */
	4,	/* n6(4) */
	5	/* n8(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_n310_r13_specs_21 = {
	asn_MAP_n310_r13_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_n310_r13_enum2value_21,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_n310_r13_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_n310_r13_21 = {
	"n310-r13",
	"n310-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_n310_r13_tags_21,
	sizeof(asn_DEF_n310_r13_tags_21)
		/sizeof(asn_DEF_n310_r13_tags_21[0]) - 1, /* 1 */
	asn_DEF_n310_r13_tags_21,	/* Same as above */
	sizeof(asn_DEF_n310_r13_tags_21)
		/sizeof(asn_DEF_n310_r13_tags_21[0]), /* 2 */
	{ 0, &asn_PER_type_n310_r13_constr_21, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_n310_r13_specs_21	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_t311_r13_value2enum_30[] = {
	{ 0,	6,	"ms1000" },
	{ 1,	6,	"ms3000" },
	{ 2,	6,	"ms5000" },
	{ 3,	7,	"ms10000" },
	{ 4,	7,	"ms15000" },
	{ 5,	7,	"ms20000" },
	{ 6,	7,	"ms30000" }
};
static const unsigned int asn_MAP_t311_r13_enum2value_30[] = {
	0,	/* ms1000(0) */
	3,	/* ms10000(3) */
	4,	/* ms15000(4) */
	5,	/* ms20000(5) */
	1,	/* ms3000(1) */
	6,	/* ms30000(6) */
	2	/* ms5000(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_t311_r13_specs_30 = {
	asn_MAP_t311_r13_value2enum_30,	/* "tag" => N; sorted by tag */
	asn_MAP_t311_r13_enum2value_30,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_t311_r13_tags_30[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_t311_r13_30 = {
	"t311-r13",
	"t311-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_t311_r13_tags_30,
	sizeof(asn_DEF_t311_r13_tags_30)
		/sizeof(asn_DEF_t311_r13_tags_30[0]) - 1, /* 1 */
	asn_DEF_t311_r13_tags_30,	/* Same as above */
	sizeof(asn_DEF_t311_r13_tags_30)
		/sizeof(asn_DEF_t311_r13_tags_30[0]), /* 2 */
	{ 0, &asn_PER_type_t311_r13_constr_30, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_t311_r13_specs_30	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_n311_r13_value2enum_38[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" },
	{ 3,	2,	"n4" },
	{ 4,	2,	"n5" },
	{ 5,	2,	"n6" },
	{ 6,	2,	"n8" },
	{ 7,	3,	"n10" }
};
static const unsigned int asn_MAP_n311_r13_enum2value_38[] = {
	0,	/* n1(0) */
	7,	/* n10(7) */
	1,	/* n2(1) */
	2,	/* n3(2) */
	3,	/* n4(3) */
	4,	/* n5(4) */
	5,	/* n6(5) */
	6	/* n8(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_n311_r13_specs_38 = {
	asn_MAP_n311_r13_value2enum_38,	/* "tag" => N; sorted by tag */
	asn_MAP_n311_r13_enum2value_38,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_n311_r13_tags_38[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_n311_r13_38 = {
	"n311-r13",
	"n311-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_n311_r13_tags_38,
	sizeof(asn_DEF_n311_r13_tags_38)
		/sizeof(asn_DEF_n311_r13_tags_38[0]) - 1, /* 1 */
	asn_DEF_n311_r13_tags_38,	/* Same as above */
	sizeof(asn_DEF_n311_r13_tags_38)
		/sizeof(asn_DEF_n311_r13_tags_38[0]), /* 2 */
	{ 0, &asn_PER_type_n311_r13_constr_38, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_n311_r13_specs_38	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_t311_v1350_value2enum_48[] = {
	{ 0,	7,	"ms40000" },
	{ 1,	7,	"ms60000" },
	{ 2,	7,	"ms90000" },
	{ 3,	8,	"ms120000" }
};
static const unsigned int asn_MAP_t311_v1350_enum2value_48[] = {
	3,	/* ms120000(3) */
	0,	/* ms40000(0) */
	1,	/* ms60000(1) */
	2	/* ms90000(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_t311_v1350_specs_48 = {
	asn_MAP_t311_v1350_value2enum_48,	/* "tag" => N; sorted by tag */
	asn_MAP_t311_v1350_enum2value_48,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_t311_v1350_tags_48[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_t311_v1350_48 = {
	"t311-v1350",
	"t311-v1350",
	&asn_OP_NativeEnumerated,
	asn_DEF_t311_v1350_tags_48,
	sizeof(asn_DEF_t311_v1350_tags_48)
		/sizeof(asn_DEF_t311_v1350_tags_48[0]) - 1, /* 1 */
	asn_DEF_t311_v1350_tags_48,	/* Same as above */
	sizeof(asn_DEF_t311_v1350_tags_48)
		/sizeof(asn_DEF_t311_v1350_tags_48[0]), /* 2 */
	{ 0, &asn_PER_type_t311_v1350_constr_48, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_t311_v1350_specs_48	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_t301_v1530_value2enum_53[] = {
	{ 0,	7,	"ms80000" },
	{ 1,	8,	"ms100000" },
	{ 2,	8,	"ms120000" }
};
static const unsigned int asn_MAP_t301_v1530_enum2value_53[] = {
	1,	/* ms100000(1) */
	2,	/* ms120000(2) */
	0	/* ms80000(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_t301_v1530_specs_53 = {
	asn_MAP_t301_v1530_value2enum_53,	/* "tag" => N; sorted by tag */
	asn_MAP_t301_v1530_enum2value_53,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_t301_v1530_tags_53[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_t301_v1530_53 = {
	"t301-v1530",
	"t301-v1530",
	&asn_OP_NativeEnumerated,
	asn_DEF_t301_v1530_tags_53,
	sizeof(asn_DEF_t301_v1530_tags_53)
		/sizeof(asn_DEF_t301_v1530_tags_53[0]) - 1, /* 1 */
	asn_DEF_t301_v1530_tags_53,	/* Same as above */
	sizeof(asn_DEF_t301_v1530_tags_53)
		/sizeof(asn_DEF_t301_v1530_tags_53[0]), /* 2 */
	{ 0, &asn_PER_type_t301_v1530_constr_53, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_t301_v1530_specs_53	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_t311_v1530_value2enum_57[] = {
	{ 0,	8,	"ms160000" },
	{ 1,	8,	"ms200000" }
};
static const unsigned int asn_MAP_t311_v1530_enum2value_57[] = {
	0,	/* ms160000(0) */
	1	/* ms200000(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_t311_v1530_specs_57 = {
	asn_MAP_t311_v1530_value2enum_57,	/* "tag" => N; sorted by tag */
	asn_MAP_t311_v1530_enum2value_57,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_t311_v1530_tags_57[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_t311_v1530_57 = {
	"t311-v1530",
	"t311-v1530",
	&asn_OP_NativeEnumerated,
	asn_DEF_t311_v1530_tags_57,
	sizeof(asn_DEF_t311_v1530_tags_57)
		/sizeof(asn_DEF_t311_v1530_tags_57[0]) - 1, /* 1 */
	asn_DEF_t311_v1530_tags_57,	/* Same as above */
	sizeof(asn_DEF_t311_v1530_tags_57)
		/sizeof(asn_DEF_t311_v1530_tags_57[0]), /* 2 */
	{ 0, &asn_PER_type_t311_v1530_constr_57, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_t311_v1530_specs_57	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RLF_TimersAndConstants_NB_r13__setup, t301_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_t301_r13_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t301-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RLF_TimersAndConstants_NB_r13__setup, t310_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_t310_r13_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t310-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RLF_TimersAndConstants_NB_r13__setup, n310_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_n310_r13_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"n310-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RLF_TimersAndConstants_NB_r13__setup, t311_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_t311_r13_30,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t311-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RLF_TimersAndConstants_NB_r13__setup, n311_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_n311_r13_38,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"n311-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct RLF_TimersAndConstants_NB_r13__setup, t311_v1350),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_t311_v1350_48,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t311-v1350"
		},
	{ ATF_POINTER, 2, offsetof(struct RLF_TimersAndConstants_NB_r13__setup, t301_v1530),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_t301_v1530_53,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t301-v1530"
		},
	{ ATF_POINTER, 1, offsetof(struct RLF_TimersAndConstants_NB_r13__setup, t311_v1530),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_t311_v1530_57,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t311-v1530"
		},
};
static const int asn_MAP_setup_oms_3[] = { 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* t301-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* t310-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* n310-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* t311-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* n311-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* t311-v1350 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* t301-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* t311-v1530 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct RLF_TimersAndConstants_NB_r13__setup),
	offsetof(struct RLF_TimersAndConstants_NB_r13__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	8,	/* Count of tags in the map */
	asn_MAP_setup_oms_3,	/* Optional members */
	0, 3,	/* Root/Additions */
	5,	/* First extension addition */
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
	8,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RLF_TimersAndConstants_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RLF_TimersAndConstants_NB_r13, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RLF_TimersAndConstants_NB_r13, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_RLF_TimersAndConstants_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_RLF_TimersAndConstants_NB_r13_specs_1 = {
	sizeof(struct RLF_TimersAndConstants_NB_r13),
	offsetof(struct RLF_TimersAndConstants_NB_r13, _asn_ctx),
	offsetof(struct RLF_TimersAndConstants_NB_r13, present),
	sizeof(((struct RLF_TimersAndConstants_NB_r13 *)0)->present),
	asn_MAP_RLF_TimersAndConstants_NB_r13_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_RLF_TimersAndConstants_NB_r13 = {
	"RLF-TimersAndConstants-NB-r13",
	"RLF-TimersAndConstants-NB-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_RLF_TimersAndConstants_NB_r13_constr_1, CHOICE_constraint },
	asn_MBR_RLF_TimersAndConstants_NB_r13_1,
	2,	/* Elements count */
	&asn_SPC_RLF_TimersAndConstants_NB_r13_specs_1	/* Additional specs */
};

