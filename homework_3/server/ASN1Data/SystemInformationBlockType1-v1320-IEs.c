/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "SystemInformationBlockType1-v1320-IEs.h"

#include "SystemInformationBlockType1-v1350-IEs.h"
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
static int
memb_mpdcch_pdsch_HoppingOffset_r13_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_mpdcch_pdsch_HoppingNB_r13_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_interval_FDD_r13_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_interval_TDD_r13_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_interval_DLHoppingConfigCommonModeA_r13_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_interval_FDD_r13_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_interval_TDD_r13_constr_23 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_interval_DLHoppingConfigCommonModeB_r13_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_mpdcch_pdsch_HoppingOffset_r13_constr_28 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (1..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_mpdcch_pdsch_HoppingNB_r13_value2enum_3[] = {
	{ 0,	3,	"nb2" },
	{ 1,	3,	"nb4" }
};
static const unsigned int asn_MAP_mpdcch_pdsch_HoppingNB_r13_enum2value_3[] = {
	0,	/* nb2(0) */
	1	/* nb4(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_mpdcch_pdsch_HoppingNB_r13_specs_3 = {
	asn_MAP_mpdcch_pdsch_HoppingNB_r13_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_mpdcch_pdsch_HoppingNB_r13_enum2value_3,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mpdcch_pdsch_HoppingNB_r13_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mpdcch_pdsch_HoppingNB_r13_3 = {
	"mpdcch-pdsch-HoppingNB-r13",
	"mpdcch-pdsch-HoppingNB-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_mpdcch_pdsch_HoppingNB_r13_tags_3,
	sizeof(asn_DEF_mpdcch_pdsch_HoppingNB_r13_tags_3)
		/sizeof(asn_DEF_mpdcch_pdsch_HoppingNB_r13_tags_3[0]) - 1, /* 1 */
	asn_DEF_mpdcch_pdsch_HoppingNB_r13_tags_3,	/* Same as above */
	sizeof(asn_DEF_mpdcch_pdsch_HoppingNB_r13_tags_3)
		/sizeof(asn_DEF_mpdcch_pdsch_HoppingNB_r13_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_mpdcch_pdsch_HoppingNB_r13_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mpdcch_pdsch_HoppingNB_r13_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_interval_FDD_r13_value2enum_7[] = {
	{ 0,	4,	"int1" },
	{ 1,	4,	"int2" },
	{ 2,	4,	"int4" },
	{ 3,	4,	"int8" }
};
static const unsigned int asn_MAP_interval_FDD_r13_enum2value_7[] = {
	0,	/* int1(0) */
	1,	/* int2(1) */
	2,	/* int4(2) */
	3	/* int8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_interval_FDD_r13_specs_7 = {
	asn_MAP_interval_FDD_r13_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_interval_FDD_r13_enum2value_7,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_interval_FDD_r13_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_interval_FDD_r13_7 = {
	"interval-FDD-r13",
	"interval-FDD-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_interval_FDD_r13_tags_7,
	sizeof(asn_DEF_interval_FDD_r13_tags_7)
		/sizeof(asn_DEF_interval_FDD_r13_tags_7[0]) - 1, /* 1 */
	asn_DEF_interval_FDD_r13_tags_7,	/* Same as above */
	sizeof(asn_DEF_interval_FDD_r13_tags_7)
		/sizeof(asn_DEF_interval_FDD_r13_tags_7[0]), /* 2 */
	{ 0, &asn_PER_type_interval_FDD_r13_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_interval_FDD_r13_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_interval_TDD_r13_value2enum_12[] = {
	{ 0,	4,	"int1" },
	{ 1,	4,	"int5" },
	{ 2,	5,	"int10" },
	{ 3,	5,	"int20" }
};
static const unsigned int asn_MAP_interval_TDD_r13_enum2value_12[] = {
	0,	/* int1(0) */
	2,	/* int10(2) */
	3,	/* int20(3) */
	1	/* int5(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_interval_TDD_r13_specs_12 = {
	asn_MAP_interval_TDD_r13_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_interval_TDD_r13_enum2value_12,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_interval_TDD_r13_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_interval_TDD_r13_12 = {
	"interval-TDD-r13",
	"interval-TDD-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_interval_TDD_r13_tags_12,
	sizeof(asn_DEF_interval_TDD_r13_tags_12)
		/sizeof(asn_DEF_interval_TDD_r13_tags_12[0]) - 1, /* 1 */
	asn_DEF_interval_TDD_r13_tags_12,	/* Same as above */
	sizeof(asn_DEF_interval_TDD_r13_tags_12)
		/sizeof(asn_DEF_interval_TDD_r13_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_interval_TDD_r13_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_interval_TDD_r13_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_interval_DLHoppingConfigCommonModeA_r13_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeA_r13, choice.interval_FDD_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_interval_FDD_r13_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interval-FDD-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeA_r13, choice.interval_TDD_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_interval_TDD_r13_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interval-TDD-r13"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_interval_DLHoppingConfigCommonModeA_r13_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* interval-FDD-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* interval-TDD-r13 */
};
static asn_CHOICE_specifics_t asn_SPC_interval_DLHoppingConfigCommonModeA_r13_specs_6 = {
	sizeof(struct SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeA_r13),
	offsetof(struct SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeA_r13, _asn_ctx),
	offsetof(struct SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeA_r13, present),
	sizeof(((struct SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeA_r13 *)0)->present),
	asn_MAP_interval_DLHoppingConfigCommonModeA_r13_tag2el_6,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_interval_DLHoppingConfigCommonModeA_r13_6 = {
	"interval-DLHoppingConfigCommonModeA-r13",
	"interval-DLHoppingConfigCommonModeA-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_interval_DLHoppingConfigCommonModeA_r13_constr_6, CHOICE_constraint },
	asn_MBR_interval_DLHoppingConfigCommonModeA_r13_6,
	2,	/* Elements count */
	&asn_SPC_interval_DLHoppingConfigCommonModeA_r13_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_interval_FDD_r13_value2enum_18[] = {
	{ 0,	4,	"int2" },
	{ 1,	4,	"int4" },
	{ 2,	4,	"int8" },
	{ 3,	5,	"int16" }
};
static const unsigned int asn_MAP_interval_FDD_r13_enum2value_18[] = {
	3,	/* int16(3) */
	0,	/* int2(0) */
	1,	/* int4(1) */
	2	/* int8(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_interval_FDD_r13_specs_18 = {
	asn_MAP_interval_FDD_r13_value2enum_18,	/* "tag" => N; sorted by tag */
	asn_MAP_interval_FDD_r13_enum2value_18,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_interval_FDD_r13_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_interval_FDD_r13_18 = {
	"interval-FDD-r13",
	"interval-FDD-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_interval_FDD_r13_tags_18,
	sizeof(asn_DEF_interval_FDD_r13_tags_18)
		/sizeof(asn_DEF_interval_FDD_r13_tags_18[0]) - 1, /* 1 */
	asn_DEF_interval_FDD_r13_tags_18,	/* Same as above */
	sizeof(asn_DEF_interval_FDD_r13_tags_18)
		/sizeof(asn_DEF_interval_FDD_r13_tags_18[0]), /* 2 */
	{ 0, &asn_PER_type_interval_FDD_r13_constr_18, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_interval_FDD_r13_specs_18	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_interval_TDD_r13_value2enum_23[] = {
	{ 0,	4,	"int5" },
	{ 1,	5,	"int10" },
	{ 2,	5,	"int20" },
	{ 3,	5,	"int40" }
};
static const unsigned int asn_MAP_interval_TDD_r13_enum2value_23[] = {
	1,	/* int10(1) */
	2,	/* int20(2) */
	3,	/* int40(3) */
	0	/* int5(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_interval_TDD_r13_specs_23 = {
	asn_MAP_interval_TDD_r13_value2enum_23,	/* "tag" => N; sorted by tag */
	asn_MAP_interval_TDD_r13_enum2value_23,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_interval_TDD_r13_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_interval_TDD_r13_23 = {
	"interval-TDD-r13",
	"interval-TDD-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_interval_TDD_r13_tags_23,
	sizeof(asn_DEF_interval_TDD_r13_tags_23)
		/sizeof(asn_DEF_interval_TDD_r13_tags_23[0]) - 1, /* 1 */
	asn_DEF_interval_TDD_r13_tags_23,	/* Same as above */
	sizeof(asn_DEF_interval_TDD_r13_tags_23)
		/sizeof(asn_DEF_interval_TDD_r13_tags_23[0]), /* 2 */
	{ 0, &asn_PER_type_interval_TDD_r13_constr_23, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_interval_TDD_r13_specs_23	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_interval_DLHoppingConfigCommonModeB_r13_17[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeB_r13, choice.interval_FDD_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_interval_FDD_r13_18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interval-FDD-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeB_r13, choice.interval_TDD_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_interval_TDD_r13_23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interval-TDD-r13"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_interval_DLHoppingConfigCommonModeB_r13_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* interval-FDD-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* interval-TDD-r13 */
};
static asn_CHOICE_specifics_t asn_SPC_interval_DLHoppingConfigCommonModeB_r13_specs_17 = {
	sizeof(struct SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeB_r13),
	offsetof(struct SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeB_r13, _asn_ctx),
	offsetof(struct SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeB_r13, present),
	sizeof(((struct SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeB_r13 *)0)->present),
	asn_MAP_interval_DLHoppingConfigCommonModeB_r13_tag2el_17,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_interval_DLHoppingConfigCommonModeB_r13_17 = {
	"interval-DLHoppingConfigCommonModeB-r13",
	"interval-DLHoppingConfigCommonModeB-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_interval_DLHoppingConfigCommonModeB_r13_constr_17, CHOICE_constraint },
	asn_MBR_interval_DLHoppingConfigCommonModeB_r13_17,
	2,	/* Elements count */
	&asn_SPC_interval_DLHoppingConfigCommonModeB_r13_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_freqHoppingParametersDL_r13_2[] = {
	{ ATF_POINTER, 4, offsetof(struct SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13, mpdcch_pdsch_HoppingNB_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mpdcch_pdsch_HoppingNB_r13_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mpdcch-pdsch-HoppingNB-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13, interval_DLHoppingConfigCommonModeA_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_interval_DLHoppingConfigCommonModeA_r13_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interval-DLHoppingConfigCommonModeA-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13, interval_DLHoppingConfigCommonModeB_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_interval_DLHoppingConfigCommonModeB_r13_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interval-DLHoppingConfigCommonModeB-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13, mpdcch_pdsch_HoppingOffset_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_mpdcch_pdsch_HoppingOffset_r13_constr_28,  memb_mpdcch_pdsch_HoppingOffset_r13_constraint_2 },
		0, 0, /* No default value */
		"mpdcch-pdsch-HoppingOffset-r13"
		},
};
static const int asn_MAP_freqHoppingParametersDL_r13_oms_2[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_freqHoppingParametersDL_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_freqHoppingParametersDL_r13_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mpdcch-pdsch-HoppingNB-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* interval-DLHoppingConfigCommonModeA-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* interval-DLHoppingConfigCommonModeB-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* mpdcch-pdsch-HoppingOffset-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_freqHoppingParametersDL_r13_specs_2 = {
	sizeof(struct SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13),
	offsetof(struct SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13, _asn_ctx),
	asn_MAP_freqHoppingParametersDL_r13_tag2el_2,
	4,	/* Count of tags in the map */
	asn_MAP_freqHoppingParametersDL_r13_oms_2,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_freqHoppingParametersDL_r13_2 = {
	"freqHoppingParametersDL-r13",
	"freqHoppingParametersDL-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_freqHoppingParametersDL_r13_tags_2,
	sizeof(asn_DEF_freqHoppingParametersDL_r13_tags_2)
		/sizeof(asn_DEF_freqHoppingParametersDL_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_freqHoppingParametersDL_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_freqHoppingParametersDL_r13_tags_2)
		/sizeof(asn_DEF_freqHoppingParametersDL_r13_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_freqHoppingParametersDL_r13_2,
	4,	/* Elements count */
	&asn_SPC_freqHoppingParametersDL_r13_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SystemInformationBlockType1_v1320_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType1_v1320_IEs, freqHoppingParametersDL_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_freqHoppingParametersDL_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"freqHoppingParametersDL-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType1_v1320_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType1_v1350_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_SystemInformationBlockType1_v1320_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType1_v1320_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType1_v1320_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* freqHoppingParametersDL-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType1_v1320_IEs_specs_1 = {
	sizeof(struct SystemInformationBlockType1_v1320_IEs),
	offsetof(struct SystemInformationBlockType1_v1320_IEs, _asn_ctx),
	asn_MAP_SystemInformationBlockType1_v1320_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType1_v1320_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType1_v1320_IEs = {
	"SystemInformationBlockType1-v1320-IEs",
	"SystemInformationBlockType1-v1320-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType1_v1320_IEs_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType1_v1320_IEs_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType1_v1320_IEs_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType1_v1320_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType1_v1320_IEs_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType1_v1320_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformationBlockType1_v1320_IEs_1,
	2,	/* Elements count */
	&asn_SPC_SystemInformationBlockType1_v1320_IEs_specs_1	/* Additional specs */
};

