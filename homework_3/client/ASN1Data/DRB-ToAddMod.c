/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "DRB-ToAddMod.h"

#include "PDCP-Config.h"
#include "RLC-Config.h"
#include "LogicalChannelConfig.h"
#include "RLC-Config-v1250.h"
#include "RLC-Config-v1310.h"
#include "RLC-Config-v1430.h"
#include "RLC-Config-v1510.h"
#include "RLC-Config-v1530.h"
#include "RLC-BearerConfig-r15.h"
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
memb_eps_BearerIdentity_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
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
memb_logicalChannelIdentity_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 3 && value <= 10)) {
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
memb_logicalChannelIdentity_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 32 && value <= 38)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_drb_TypeChange_r12_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_drb_TypeLWIP_r13_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_lwa_WLAN_AC_r14_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_eps_BearerIdentity_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_logicalChannelIdentity_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  3,  10 }	/* (3..10) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_logicalChannelIdentity_r15_constr_30 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  32,  38 }	/* (32..38) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_drb_TypeChange_r12_value2enum_9[] = {
	{ 0,	5,	"toMCG" }
};
static const unsigned int asn_MAP_drb_TypeChange_r12_enum2value_9[] = {
	0	/* toMCG(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_drb_TypeChange_r12_specs_9 = {
	asn_MAP_drb_TypeChange_r12_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_drb_TypeChange_r12_enum2value_9,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_drb_TypeChange_r12_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_drb_TypeChange_r12_9 = {
	"drb-TypeChange-r12",
	"drb-TypeChange-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_drb_TypeChange_r12_tags_9,
	sizeof(asn_DEF_drb_TypeChange_r12_tags_9)
		/sizeof(asn_DEF_drb_TypeChange_r12_tags_9[0]) - 1, /* 1 */
	asn_DEF_drb_TypeChange_r12_tags_9,	/* Same as above */
	sizeof(asn_DEF_drb_TypeChange_r12_tags_9)
		/sizeof(asn_DEF_drb_TypeChange_r12_tags_9[0]), /* 2 */
	{ 0, &asn_PER_type_drb_TypeChange_r12_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_drb_TypeChange_r12_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_drb_TypeLWIP_r13_value2enum_14[] = {
	{ 0,	4,	"lwip" },
	{ 1,	12,	"lwip-DL-only" },
	{ 2,	12,	"lwip-UL-only" },
	{ 3,	6,	"eutran" }
};
static const unsigned int asn_MAP_drb_TypeLWIP_r13_enum2value_14[] = {
	3,	/* eutran(3) */
	0,	/* lwip(0) */
	1,	/* lwip-DL-only(1) */
	2	/* lwip-UL-only(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_drb_TypeLWIP_r13_specs_14 = {
	asn_MAP_drb_TypeLWIP_r13_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_drb_TypeLWIP_r13_enum2value_14,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_drb_TypeLWIP_r13_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_drb_TypeLWIP_r13_14 = {
	"drb-TypeLWIP-r13",
	"drb-TypeLWIP-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_drb_TypeLWIP_r13_tags_14,
	sizeof(asn_DEF_drb_TypeLWIP_r13_tags_14)
		/sizeof(asn_DEF_drb_TypeLWIP_r13_tags_14[0]) - 1, /* 1 */
	asn_DEF_drb_TypeLWIP_r13_tags_14,	/* Same as above */
	sizeof(asn_DEF_drb_TypeLWIP_r13_tags_14)
		/sizeof(asn_DEF_drb_TypeLWIP_r13_tags_14[0]), /* 2 */
	{ 0, &asn_PER_type_drb_TypeLWIP_r13_constr_14, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_drb_TypeLWIP_r13_specs_14	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_lwa_WLAN_AC_r14_value2enum_22[] = {
	{ 0,	5,	"ac-bk" },
	{ 1,	5,	"ac-be" },
	{ 2,	5,	"ac-vi" },
	{ 3,	5,	"ac-vo" }
};
static const unsigned int asn_MAP_lwa_WLAN_AC_r14_enum2value_22[] = {
	1,	/* ac-be(1) */
	0,	/* ac-bk(0) */
	2,	/* ac-vi(2) */
	3	/* ac-vo(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_lwa_WLAN_AC_r14_specs_22 = {
	asn_MAP_lwa_WLAN_AC_r14_value2enum_22,	/* "tag" => N; sorted by tag */
	asn_MAP_lwa_WLAN_AC_r14_enum2value_22,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_lwa_WLAN_AC_r14_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_lwa_WLAN_AC_r14_22 = {
	"lwa-WLAN-AC-r14",
	"lwa-WLAN-AC-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_lwa_WLAN_AC_r14_tags_22,
	sizeof(asn_DEF_lwa_WLAN_AC_r14_tags_22)
		/sizeof(asn_DEF_lwa_WLAN_AC_r14_tags_22[0]) - 1, /* 1 */
	asn_DEF_lwa_WLAN_AC_r14_tags_22,	/* Same as above */
	sizeof(asn_DEF_lwa_WLAN_AC_r14_tags_22)
		/sizeof(asn_DEF_lwa_WLAN_AC_r14_tags_22[0]), /* 2 */
	{ 0, &asn_PER_type_lwa_WLAN_AC_r14_constr_22, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_lwa_WLAN_AC_r14_specs_22	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_DRB_ToAddMod_1[] = {
	{ ATF_POINTER, 1, offsetof(struct DRB_ToAddMod, eps_BearerIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_eps_BearerIdentity_constr_2,  memb_eps_BearerIdentity_constraint_1 },
		0, 0, /* No default value */
		"eps-BearerIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRB_ToAddMod, drb_Identity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRB_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-Identity"
		},
	{ ATF_POINTER, 17, offsetof(struct DRB_ToAddMod, pdcp_Config),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCP_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcp-Config"
		},
	{ ATF_POINTER, 16, offsetof(struct DRB_ToAddMod, rlc_Config),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RLC_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-Config"
		},
	{ ATF_POINTER, 15, offsetof(struct DRB_ToAddMod, logicalChannelIdentity),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_logicalChannelIdentity_constr_6,  memb_logicalChannelIdentity_constraint_1 },
		0, 0, /* No default value */
		"logicalChannelIdentity"
		},
	{ ATF_POINTER, 14, offsetof(struct DRB_ToAddMod, logicalChannelConfig),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LogicalChannelConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logicalChannelConfig"
		},
	{ ATF_POINTER, 13, offsetof(struct DRB_ToAddMod, drb_TypeChange_r12),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_drb_TypeChange_r12_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-TypeChange-r12"
		},
	{ ATF_POINTER, 12, offsetof(struct DRB_ToAddMod, rlc_Config_v1250),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLC_Config_v1250,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-Config-v1250"
		},
	{ ATF_POINTER, 11, offsetof(struct DRB_ToAddMod, rlc_Config_v1310),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLC_Config_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-Config-v1310"
		},
	{ ATF_POINTER, 10, offsetof(struct DRB_ToAddMod, drb_TypeLWA_r13),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-TypeLWA-r13"
		},
	{ ATF_POINTER, 9, offsetof(struct DRB_ToAddMod, drb_TypeLWIP_r13),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_drb_TypeLWIP_r13_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-TypeLWIP-r13"
		},
	{ ATF_POINTER, 8, offsetof(struct DRB_ToAddMod, rlc_Config_v1430),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RLC_Config_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-Config-v1430"
		},
	{ ATF_POINTER, 7, offsetof(struct DRB_ToAddMod, lwip_UL_Aggregation_r14),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lwip-UL-Aggregation-r14"
		},
	{ ATF_POINTER, 6, offsetof(struct DRB_ToAddMod, lwip_DL_Aggregation_r14),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lwip-DL-Aggregation-r14"
		},
	{ ATF_POINTER, 5, offsetof(struct DRB_ToAddMod, lwa_WLAN_AC_r14),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_lwa_WLAN_AC_r14_22,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lwa-WLAN-AC-r14"
		},
	{ ATF_POINTER, 4, offsetof(struct DRB_ToAddMod, rlc_Config_v1510),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLC_Config_v1510,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-Config-v1510"
		},
	{ ATF_POINTER, 3, offsetof(struct DRB_ToAddMod, rlc_Config_v1530),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RLC_Config_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-Config-v1530"
		},
	{ ATF_POINTER, 2, offsetof(struct DRB_ToAddMod, rlc_BearerConfigSecondary_r15),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RLC_BearerConfig_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-BearerConfigSecondary-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct DRB_ToAddMod, logicalChannelIdentity_r15),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_logicalChannelIdentity_r15_constr_30,  memb_logicalChannelIdentity_r15_constraint_1 },
		0, 0, /* No default value */
		"logicalChannelIdentity-r15"
		},
};
static const int asn_MAP_DRB_ToAddMod_oms_1[] = { 0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18 };
static const ber_tlv_tag_t asn_DEF_DRB_ToAddMod_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DRB_ToAddMod_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eps-BearerIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* drb-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pdcp-Config */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rlc-Config */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* logicalChannelIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* logicalChannelConfig */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* drb-TypeChange-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* rlc-Config-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* rlc-Config-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* drb-TypeLWA-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* drb-TypeLWIP-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* rlc-Config-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* lwip-UL-Aggregation-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* lwip-DL-Aggregation-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* lwa-WLAN-AC-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* rlc-Config-v1510 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* rlc-Config-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* rlc-BearerConfigSecondary-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 } /* logicalChannelIdentity-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_DRB_ToAddMod_specs_1 = {
	sizeof(struct DRB_ToAddMod),
	offsetof(struct DRB_ToAddMod, _asn_ctx),
	asn_MAP_DRB_ToAddMod_tag2el_1,
	19,	/* Count of tags in the map */
	asn_MAP_DRB_ToAddMod_oms_1,	/* Optional members */
	5, 13,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DRB_ToAddMod = {
	"DRB-ToAddMod",
	"DRB-ToAddMod",
	&asn_OP_SEQUENCE,
	asn_DEF_DRB_ToAddMod_tags_1,
	sizeof(asn_DEF_DRB_ToAddMod_tags_1)
		/sizeof(asn_DEF_DRB_ToAddMod_tags_1[0]), /* 1 */
	asn_DEF_DRB_ToAddMod_tags_1,	/* Same as above */
	sizeof(asn_DEF_DRB_ToAddMod_tags_1)
		/sizeof(asn_DEF_DRB_ToAddMod_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DRB_ToAddMod_1,
	19,	/* Elements count */
	&asn_SPC_DRB_ToAddMod_specs_1	/* Additional specs */
};

