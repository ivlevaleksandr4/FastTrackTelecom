/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "PMCH-Config-r12.h"

static int
memb_normal_r12_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 28)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_higerOrder_r12_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 27)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_sf_AllocEnd_r12_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1535)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_normal_r12_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  28 }	/* (0..28) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_higerOrder_r12_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  27 }	/* (0..27) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_dataMCS_r12_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_mch_SchedulingPeriod_r12_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  8 }	/* (0..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_mch_SchedulingPeriod_v1430_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sf_AllocEnd_r12_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  1535 }	/* (0..1535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_dataMCS_r12_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PMCH_Config_r12__dataMCS_r12, choice.normal_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_normal_r12_constr_4,  memb_normal_r12_constraint_3 },
		0, 0, /* No default value */
		"normal-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PMCH_Config_r12__dataMCS_r12, choice.higerOrder_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_higerOrder_r12_constr_5,  memb_higerOrder_r12_constraint_3 },
		0, 0, /* No default value */
		"higerOrder-r12"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_dataMCS_r12_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* normal-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* higerOrder-r12 */
};
static asn_CHOICE_specifics_t asn_SPC_dataMCS_r12_specs_3 = {
	sizeof(struct PMCH_Config_r12__dataMCS_r12),
	offsetof(struct PMCH_Config_r12__dataMCS_r12, _asn_ctx),
	offsetof(struct PMCH_Config_r12__dataMCS_r12, present),
	sizeof(((struct PMCH_Config_r12__dataMCS_r12 *)0)->present),
	asn_MAP_dataMCS_r12_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dataMCS_r12_3 = {
	"dataMCS-r12",
	"dataMCS-r12",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_dataMCS_r12_constr_3, CHOICE_constraint },
	asn_MBR_dataMCS_r12_3,
	2,	/* Elements count */
	&asn_SPC_dataMCS_r12_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_mch_SchedulingPeriod_r12_value2enum_6[] = {
	{ 0,	3,	"rf4" },
	{ 1,	3,	"rf8" },
	{ 2,	4,	"rf16" },
	{ 3,	4,	"rf32" },
	{ 4,	4,	"rf64" },
	{ 5,	5,	"rf128" },
	{ 6,	5,	"rf256" },
	{ 7,	5,	"rf512" },
	{ 8,	6,	"rf1024" }
};
static const unsigned int asn_MAP_mch_SchedulingPeriod_r12_enum2value_6[] = {
	8,	/* rf1024(8) */
	5,	/* rf128(5) */
	2,	/* rf16(2) */
	6,	/* rf256(6) */
	3,	/* rf32(3) */
	0,	/* rf4(0) */
	7,	/* rf512(7) */
	4,	/* rf64(4) */
	1	/* rf8(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_mch_SchedulingPeriod_r12_specs_6 = {
	asn_MAP_mch_SchedulingPeriod_r12_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_mch_SchedulingPeriod_r12_enum2value_6,	/* N => "tag"; sorted by N */
	9,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mch_SchedulingPeriod_r12_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mch_SchedulingPeriod_r12_6 = {
	"mch-SchedulingPeriod-r12",
	"mch-SchedulingPeriod-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_mch_SchedulingPeriod_r12_tags_6,
	sizeof(asn_DEF_mch_SchedulingPeriod_r12_tags_6)
		/sizeof(asn_DEF_mch_SchedulingPeriod_r12_tags_6[0]) - 1, /* 1 */
	asn_DEF_mch_SchedulingPeriod_r12_tags_6,	/* Same as above */
	sizeof(asn_DEF_mch_SchedulingPeriod_r12_tags_6)
		/sizeof(asn_DEF_mch_SchedulingPeriod_r12_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_mch_SchedulingPeriod_r12_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mch_SchedulingPeriod_r12_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_mch_SchedulingPeriod_v1430_value2enum_17[] = {
	{ 0,	3,	"rf1" },
	{ 1,	3,	"rf2" }
};
static const unsigned int asn_MAP_mch_SchedulingPeriod_v1430_enum2value_17[] = {
	0,	/* rf1(0) */
	1	/* rf2(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_mch_SchedulingPeriod_v1430_specs_17 = {
	asn_MAP_mch_SchedulingPeriod_v1430_value2enum_17,	/* "tag" => N; sorted by tag */
	asn_MAP_mch_SchedulingPeriod_v1430_enum2value_17,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mch_SchedulingPeriod_v1430_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mch_SchedulingPeriod_v1430_17 = {
	"mch-SchedulingPeriod-v1430",
	"mch-SchedulingPeriod-v1430",
	&asn_OP_NativeEnumerated,
	asn_DEF_mch_SchedulingPeriod_v1430_tags_17,
	sizeof(asn_DEF_mch_SchedulingPeriod_v1430_tags_17)
		/sizeof(asn_DEF_mch_SchedulingPeriod_v1430_tags_17[0]) - 1, /* 1 */
	asn_DEF_mch_SchedulingPeriod_v1430_tags_17,	/* Same as above */
	sizeof(asn_DEF_mch_SchedulingPeriod_v1430_tags_17)
		/sizeof(asn_DEF_mch_SchedulingPeriod_v1430_tags_17[0]), /* 2 */
	{ 0, &asn_PER_type_mch_SchedulingPeriod_v1430_constr_17, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mch_SchedulingPeriod_v1430_specs_17	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PMCH_Config_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PMCH_Config_r12, sf_AllocEnd_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sf_AllocEnd_r12_constr_2,  memb_sf_AllocEnd_r12_constraint_1 },
		0, 0, /* No default value */
		"sf-AllocEnd-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PMCH_Config_r12, dataMCS_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_dataMCS_r12_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dataMCS-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PMCH_Config_r12, mch_SchedulingPeriod_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mch_SchedulingPeriod_r12_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mch-SchedulingPeriod-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct PMCH_Config_r12, mch_SchedulingPeriod_v1430),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mch_SchedulingPeriod_v1430_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mch-SchedulingPeriod-v1430"
		},
};
static const int asn_MAP_PMCH_Config_r12_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_PMCH_Config_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PMCH_Config_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sf-AllocEnd-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dataMCS-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mch-SchedulingPeriod-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* mch-SchedulingPeriod-v1430 */
};
asn_SEQUENCE_specifics_t asn_SPC_PMCH_Config_r12_specs_1 = {
	sizeof(struct PMCH_Config_r12),
	offsetof(struct PMCH_Config_r12, _asn_ctx),
	asn_MAP_PMCH_Config_r12_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_PMCH_Config_r12_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PMCH_Config_r12 = {
	"PMCH-Config-r12",
	"PMCH-Config-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_PMCH_Config_r12_tags_1,
	sizeof(asn_DEF_PMCH_Config_r12_tags_1)
		/sizeof(asn_DEF_PMCH_Config_r12_tags_1[0]), /* 1 */
	asn_DEF_PMCH_Config_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_PMCH_Config_r12_tags_1)
		/sizeof(asn_DEF_PMCH_Config_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PMCH_Config_r12_1,
	4,	/* Elements count */
	&asn_SPC_PMCH_Config_r12_specs_1	/* Additional specs */
};

