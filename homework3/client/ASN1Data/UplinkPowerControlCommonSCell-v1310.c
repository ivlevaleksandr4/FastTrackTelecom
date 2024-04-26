/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "UplinkPowerControlCommonSCell-v1310.h"

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
static int
memb_p0_NominalPUCCH_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -127 && value <= -96)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_deltaF_PUCCH_Format3_r12_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_deltaF_PUCCH_Format1bCS_r12_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_deltaF_PUCCH_Format4_r13_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_deltaF_PUCCH_Format5_13_constr_27 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_p0_NominalPUCCH_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5, -127, -96 }	/* (-127..-96) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_deltaF_PUCCH_Format3_r12_value2enum_4[] = {
	{ 0,	8,	"deltaF-1" },
	{ 1,	7,	"deltaF0" },
	{ 2,	7,	"deltaF1" },
	{ 3,	7,	"deltaF2" },
	{ 4,	7,	"deltaF3" },
	{ 5,	7,	"deltaF4" },
	{ 6,	7,	"deltaF5" },
	{ 7,	7,	"deltaF6" }
};
static const unsigned int asn_MAP_deltaF_PUCCH_Format3_r12_enum2value_4[] = {
	0,	/* deltaF-1(0) */
	1,	/* deltaF0(1) */
	2,	/* deltaF1(2) */
	3,	/* deltaF2(3) */
	4,	/* deltaF3(4) */
	5,	/* deltaF4(5) */
	6,	/* deltaF5(6) */
	7	/* deltaF6(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_deltaF_PUCCH_Format3_r12_specs_4 = {
	asn_MAP_deltaF_PUCCH_Format3_r12_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_deltaF_PUCCH_Format3_r12_enum2value_4,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_deltaF_PUCCH_Format3_r12_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_deltaF_PUCCH_Format3_r12_4 = {
	"deltaF-PUCCH-Format3-r12",
	"deltaF-PUCCH-Format3-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_deltaF_PUCCH_Format3_r12_tags_4,
	sizeof(asn_DEF_deltaF_PUCCH_Format3_r12_tags_4)
		/sizeof(asn_DEF_deltaF_PUCCH_Format3_r12_tags_4[0]) - 1, /* 1 */
	asn_DEF_deltaF_PUCCH_Format3_r12_tags_4,	/* Same as above */
	sizeof(asn_DEF_deltaF_PUCCH_Format3_r12_tags_4)
		/sizeof(asn_DEF_deltaF_PUCCH_Format3_r12_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_deltaF_PUCCH_Format3_r12_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_deltaF_PUCCH_Format3_r12_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_deltaF_PUCCH_Format1bCS_r12_value2enum_13[] = {
	{ 0,	7,	"deltaF1" },
	{ 1,	7,	"deltaF2" },
	{ 2,	6,	"spare2" },
	{ 3,	6,	"spare1" }
};
static const unsigned int asn_MAP_deltaF_PUCCH_Format1bCS_r12_enum2value_13[] = {
	0,	/* deltaF1(0) */
	1,	/* deltaF2(1) */
	3,	/* spare1(3) */
	2	/* spare2(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_deltaF_PUCCH_Format1bCS_r12_specs_13 = {
	asn_MAP_deltaF_PUCCH_Format1bCS_r12_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_deltaF_PUCCH_Format1bCS_r12_enum2value_13,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_deltaF_PUCCH_Format1bCS_r12_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_deltaF_PUCCH_Format1bCS_r12_13 = {
	"deltaF-PUCCH-Format1bCS-r12",
	"deltaF-PUCCH-Format1bCS-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_deltaF_PUCCH_Format1bCS_r12_tags_13,
	sizeof(asn_DEF_deltaF_PUCCH_Format1bCS_r12_tags_13)
		/sizeof(asn_DEF_deltaF_PUCCH_Format1bCS_r12_tags_13[0]) - 1, /* 1 */
	asn_DEF_deltaF_PUCCH_Format1bCS_r12_tags_13,	/* Same as above */
	sizeof(asn_DEF_deltaF_PUCCH_Format1bCS_r12_tags_13)
		/sizeof(asn_DEF_deltaF_PUCCH_Format1bCS_r12_tags_13[0]), /* 2 */
	{ 0, &asn_PER_type_deltaF_PUCCH_Format1bCS_r12_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_deltaF_PUCCH_Format1bCS_r12_specs_13	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_deltaF_PUCCH_Format4_r13_value2enum_18[] = {
	{ 0,	8,	"deltaF16" },
	{ 1,	8,	"deltaF15" },
	{ 2,	8,	"deltaF14" },
	{ 3,	8,	"deltaF13" },
	{ 4,	8,	"deltaF12" },
	{ 5,	8,	"deltaF11" },
	{ 6,	8,	"deltaF10" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_deltaF_PUCCH_Format4_r13_enum2value_18[] = {
	6,	/* deltaF10(6) */
	5,	/* deltaF11(5) */
	4,	/* deltaF12(4) */
	3,	/* deltaF13(3) */
	2,	/* deltaF14(2) */
	1,	/* deltaF15(1) */
	0,	/* deltaF16(0) */
	7	/* spare1(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_deltaF_PUCCH_Format4_r13_specs_18 = {
	asn_MAP_deltaF_PUCCH_Format4_r13_value2enum_18,	/* "tag" => N; sorted by tag */
	asn_MAP_deltaF_PUCCH_Format4_r13_enum2value_18,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_deltaF_PUCCH_Format4_r13_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_deltaF_PUCCH_Format4_r13_18 = {
	"deltaF-PUCCH-Format4-r13",
	"deltaF-PUCCH-Format4-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_deltaF_PUCCH_Format4_r13_tags_18,
	sizeof(asn_DEF_deltaF_PUCCH_Format4_r13_tags_18)
		/sizeof(asn_DEF_deltaF_PUCCH_Format4_r13_tags_18[0]) - 1, /* 1 */
	asn_DEF_deltaF_PUCCH_Format4_r13_tags_18,	/* Same as above */
	sizeof(asn_DEF_deltaF_PUCCH_Format4_r13_tags_18)
		/sizeof(asn_DEF_deltaF_PUCCH_Format4_r13_tags_18[0]), /* 2 */
	{ 0, &asn_PER_type_deltaF_PUCCH_Format4_r13_constr_18, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_deltaF_PUCCH_Format4_r13_specs_18	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_deltaF_PUCCH_Format5_13_value2enum_27[] = {
	{ 0,	8,	"deltaF13" },
	{ 1,	8,	"deltaF12" },
	{ 2,	8,	"deltaF11" },
	{ 3,	8,	"deltaF10" },
	{ 4,	7,	"deltaF9" },
	{ 5,	7,	"deltaF8" },
	{ 6,	7,	"deltaF7" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_deltaF_PUCCH_Format5_13_enum2value_27[] = {
	3,	/* deltaF10(3) */
	2,	/* deltaF11(2) */
	1,	/* deltaF12(1) */
	0,	/* deltaF13(0) */
	6,	/* deltaF7(6) */
	5,	/* deltaF8(5) */
	4,	/* deltaF9(4) */
	7	/* spare1(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_deltaF_PUCCH_Format5_13_specs_27 = {
	asn_MAP_deltaF_PUCCH_Format5_13_value2enum_27,	/* "tag" => N; sorted by tag */
	asn_MAP_deltaF_PUCCH_Format5_13_enum2value_27,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_deltaF_PUCCH_Format5_13_tags_27[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_deltaF_PUCCH_Format5_13_27 = {
	"deltaF-PUCCH-Format5-13",
	"deltaF-PUCCH-Format5-13",
	&asn_OP_NativeEnumerated,
	asn_DEF_deltaF_PUCCH_Format5_13_tags_27,
	sizeof(asn_DEF_deltaF_PUCCH_Format5_13_tags_27)
		/sizeof(asn_DEF_deltaF_PUCCH_Format5_13_tags_27[0]) - 1, /* 1 */
	asn_DEF_deltaF_PUCCH_Format5_13_tags_27,	/* Same as above */
	sizeof(asn_DEF_deltaF_PUCCH_Format5_13_tags_27)
		/sizeof(asn_DEF_deltaF_PUCCH_Format5_13_tags_27[0]), /* 2 */
	{ 0, &asn_PER_type_deltaF_PUCCH_Format5_13_constr_27, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_deltaF_PUCCH_Format5_13_specs_27	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UplinkPowerControlCommonSCell_v1310_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkPowerControlCommonSCell_v1310, p0_NominalPUCCH),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_p0_NominalPUCCH_constr_2,  memb_p0_NominalPUCCH_constraint_1 },
		0, 0, /* No default value */
		"p0-NominalPUCCH"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkPowerControlCommonSCell_v1310, deltaFList_PUCCH),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeltaFList_PUCCH,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deltaFList-PUCCH"
		},
	{ ATF_POINTER, 4, offsetof(struct UplinkPowerControlCommonSCell_v1310, deltaF_PUCCH_Format3_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_deltaF_PUCCH_Format3_r12_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deltaF-PUCCH-Format3-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct UplinkPowerControlCommonSCell_v1310, deltaF_PUCCH_Format1bCS_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_deltaF_PUCCH_Format1bCS_r12_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deltaF-PUCCH-Format1bCS-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct UplinkPowerControlCommonSCell_v1310, deltaF_PUCCH_Format4_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_deltaF_PUCCH_Format4_r13_18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deltaF-PUCCH-Format4-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct UplinkPowerControlCommonSCell_v1310, deltaF_PUCCH_Format5_13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_deltaF_PUCCH_Format5_13_27,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deltaF-PUCCH-Format5-13"
		},
};
static const int asn_MAP_UplinkPowerControlCommonSCell_v1310_oms_1[] = { 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_UplinkPowerControlCommonSCell_v1310_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UplinkPowerControlCommonSCell_v1310_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* p0-NominalPUCCH */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* deltaFList-PUCCH */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* deltaF-PUCCH-Format3-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* deltaF-PUCCH-Format1bCS-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* deltaF-PUCCH-Format4-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* deltaF-PUCCH-Format5-13 */
};
asn_SEQUENCE_specifics_t asn_SPC_UplinkPowerControlCommonSCell_v1310_specs_1 = {
	sizeof(struct UplinkPowerControlCommonSCell_v1310),
	offsetof(struct UplinkPowerControlCommonSCell_v1310, _asn_ctx),
	asn_MAP_UplinkPowerControlCommonSCell_v1310_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_UplinkPowerControlCommonSCell_v1310_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UplinkPowerControlCommonSCell_v1310 = {
	"UplinkPowerControlCommonSCell-v1310",
	"UplinkPowerControlCommonSCell-v1310",
	&asn_OP_SEQUENCE,
	asn_DEF_UplinkPowerControlCommonSCell_v1310_tags_1,
	sizeof(asn_DEF_UplinkPowerControlCommonSCell_v1310_tags_1)
		/sizeof(asn_DEF_UplinkPowerControlCommonSCell_v1310_tags_1[0]), /* 1 */
	asn_DEF_UplinkPowerControlCommonSCell_v1310_tags_1,	/* Same as above */
	sizeof(asn_DEF_UplinkPowerControlCommonSCell_v1310_tags_1)
		/sizeof(asn_DEF_UplinkPowerControlCommonSCell_v1310_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UplinkPowerControlCommonSCell_v1310_1,
	6,	/* Elements count */
	&asn_SPC_UplinkPowerControlCommonSCell_v1310_specs_1	/* Additional specs */
};

