/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "RMTC-Config-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_rmtc_SubframeOffset_r13_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 639)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_rmtc_Period_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_measDuration_r13_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_rmtc_SubframeOffset_r13_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  639 }	/* (0..639) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_RMTC_Config_r13_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_rmtc_Period_r13_value2enum_4[] = {
	{ 0,	4,	"ms40" },
	{ 1,	4,	"ms80" },
	{ 2,	5,	"ms160" },
	{ 3,	5,	"ms320" },
	{ 4,	5,	"ms640" }
};
static const unsigned int asn_MAP_rmtc_Period_r13_enum2value_4[] = {
	2,	/* ms160(2) */
	3,	/* ms320(3) */
	0,	/* ms40(0) */
	4,	/* ms640(4) */
	1	/* ms80(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_rmtc_Period_r13_specs_4 = {
	asn_MAP_rmtc_Period_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_rmtc_Period_r13_enum2value_4,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_rmtc_Period_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rmtc_Period_r13_4 = {
	"rmtc-Period-r13",
	"rmtc-Period-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_rmtc_Period_r13_tags_4,
	sizeof(asn_DEF_rmtc_Period_r13_tags_4)
		/sizeof(asn_DEF_rmtc_Period_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_rmtc_Period_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_rmtc_Period_r13_tags_4)
		/sizeof(asn_DEF_rmtc_Period_r13_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_rmtc_Period_r13_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rmtc_Period_r13_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_measDuration_r13_value2enum_11[] = {
	{ 0,	4,	"sym1" },
	{ 1,	5,	"sym14" },
	{ 2,	5,	"sym28" },
	{ 3,	5,	"sym42" },
	{ 4,	5,	"sym70" }
};
static const unsigned int asn_MAP_measDuration_r13_enum2value_11[] = {
	0,	/* sym1(0) */
	1,	/* sym14(1) */
	2,	/* sym28(2) */
	3,	/* sym42(3) */
	4	/* sym70(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_measDuration_r13_specs_11 = {
	asn_MAP_measDuration_r13_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_measDuration_r13_enum2value_11,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_measDuration_r13_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measDuration_r13_11 = {
	"measDuration-r13",
	"measDuration-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_measDuration_r13_tags_11,
	sizeof(asn_DEF_measDuration_r13_tags_11)
		/sizeof(asn_DEF_measDuration_r13_tags_11[0]) - 1, /* 1 */
	asn_DEF_measDuration_r13_tags_11,	/* Same as above */
	sizeof(asn_DEF_measDuration_r13_tags_11)
		/sizeof(asn_DEF_measDuration_r13_tags_11[0]), /* 2 */
	{ 0, &asn_PER_type_measDuration_r13_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_measDuration_r13_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RMTC_Config_r13__setup, rmtc_Period_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_rmtc_Period_r13_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rmtc-Period-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct RMTC_Config_r13__setup, rmtc_SubframeOffset_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_rmtc_SubframeOffset_r13_constr_10,  memb_rmtc_SubframeOffset_r13_constraint_3 },
		0, 0, /* No default value */
		"rmtc-SubframeOffset-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RMTC_Config_r13__setup, measDuration_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_measDuration_r13_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measDuration-r13"
		},
};
static const int asn_MAP_setup_oms_3[] = { 1 };
static const ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rmtc-Period-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rmtc-SubframeOffset-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* measDuration-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct RMTC_Config_r13__setup),
	offsetof(struct RMTC_Config_r13__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	3,	/* Count of tags in the map */
	asn_MAP_setup_oms_3,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
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
	3,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RMTC_Config_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RMTC_Config_r13, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RMTC_Config_r13, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_RMTC_Config_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_RMTC_Config_r13_specs_1 = {
	sizeof(struct RMTC_Config_r13),
	offsetof(struct RMTC_Config_r13, _asn_ctx),
	offsetof(struct RMTC_Config_r13, present),
	sizeof(((struct RMTC_Config_r13 *)0)->present),
	asn_MAP_RMTC_Config_r13_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_RMTC_Config_r13 = {
	"RMTC-Config-r13",
	"RMTC-Config-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_RMTC_Config_r13_constr_1, CHOICE_constraint },
	asn_MBR_RMTC_Config_r13_1,
	2,	/* Elements count */
	&asn_SPC_RMTC_Config_r13_specs_1	/* Additional specs */
};

