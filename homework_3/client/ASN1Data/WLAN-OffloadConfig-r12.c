/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "WLAN-OffloadConfig-r12.h"

static int
memb_thresholdChannelUtilizationLow_r12_constraint_17(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
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
memb_thresholdChannelUtilizationHigh_r12_constraint_17(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
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
memb_thresholdWLAN_RSSI_Low_r12_constraint_25(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
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
memb_thresholdWLAN_RSSI_High_r12_constraint_25(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
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
memb_offloadPreferenceIndicator_r12_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_thresholdChannelUtilizationLow_r12_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_thresholdChannelUtilizationHigh_r12_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_thresholdWLAN_RSSI_Low_r12_constr_26 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_thresholdWLAN_RSSI_High_r12_constr_27 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_offloadPreferenceIndicator_r12_constr_28 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_thresholdRSRP_r12_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct WLAN_OffloadConfig_r12__thresholdRSRP_r12, thresholdRSRP_Low_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"thresholdRSRP-Low-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct WLAN_OffloadConfig_r12__thresholdRSRP_r12, thresholdRSRP_High_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"thresholdRSRP-High-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_thresholdRSRP_r12_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_thresholdRSRP_r12_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* thresholdRSRP-Low-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* thresholdRSRP-High-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_thresholdRSRP_r12_specs_2 = {
	sizeof(struct WLAN_OffloadConfig_r12__thresholdRSRP_r12),
	offsetof(struct WLAN_OffloadConfig_r12__thresholdRSRP_r12, _asn_ctx),
	asn_MAP_thresholdRSRP_r12_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_thresholdRSRP_r12_2 = {
	"thresholdRSRP-r12",
	"thresholdRSRP-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_thresholdRSRP_r12_tags_2,
	sizeof(asn_DEF_thresholdRSRP_r12_tags_2)
		/sizeof(asn_DEF_thresholdRSRP_r12_tags_2[0]) - 1, /* 1 */
	asn_DEF_thresholdRSRP_r12_tags_2,	/* Same as above */
	sizeof(asn_DEF_thresholdRSRP_r12_tags_2)
		/sizeof(asn_DEF_thresholdRSRP_r12_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_thresholdRSRP_r12_2,
	2,	/* Elements count */
	&asn_SPC_thresholdRSRP_r12_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_thresholdRSRQ_r12_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct WLAN_OffloadConfig_r12__thresholdRSRQ_r12, thresholdRSRQ_Low_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"thresholdRSRQ-Low-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct WLAN_OffloadConfig_r12__thresholdRSRQ_r12, thresholdRSRQ_High_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"thresholdRSRQ-High-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_thresholdRSRQ_r12_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_thresholdRSRQ_r12_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* thresholdRSRQ-Low-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* thresholdRSRQ-High-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_thresholdRSRQ_r12_specs_5 = {
	sizeof(struct WLAN_OffloadConfig_r12__thresholdRSRQ_r12),
	offsetof(struct WLAN_OffloadConfig_r12__thresholdRSRQ_r12, _asn_ctx),
	asn_MAP_thresholdRSRQ_r12_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_thresholdRSRQ_r12_5 = {
	"thresholdRSRQ-r12",
	"thresholdRSRQ-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_thresholdRSRQ_r12_tags_5,
	sizeof(asn_DEF_thresholdRSRQ_r12_tags_5)
		/sizeof(asn_DEF_thresholdRSRQ_r12_tags_5[0]) - 1, /* 1 */
	asn_DEF_thresholdRSRQ_r12_tags_5,	/* Same as above */
	sizeof(asn_DEF_thresholdRSRQ_r12_tags_5)
		/sizeof(asn_DEF_thresholdRSRQ_r12_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_thresholdRSRQ_r12_5,
	2,	/* Elements count */
	&asn_SPC_thresholdRSRQ_r12_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_thresholdRSRQ_OnAllSymbolsWithWB_r12_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct WLAN_OffloadConfig_r12__thresholdRSRQ_OnAllSymbolsWithWB_r12, thresholdRSRQ_OnAllSymbolsWithWB_Low_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"thresholdRSRQ-OnAllSymbolsWithWB-Low-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct WLAN_OffloadConfig_r12__thresholdRSRQ_OnAllSymbolsWithWB_r12, thresholdRSRQ_OnAllSymbolsWithWB_High_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"thresholdRSRQ-OnAllSymbolsWithWB-High-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_thresholdRSRQ_OnAllSymbolsWithWB_r12_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_thresholdRSRQ_OnAllSymbolsWithWB_r12_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* thresholdRSRQ-OnAllSymbolsWithWB-Low-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* thresholdRSRQ-OnAllSymbolsWithWB-High-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_thresholdRSRQ_OnAllSymbolsWithWB_r12_specs_8 = {
	sizeof(struct WLAN_OffloadConfig_r12__thresholdRSRQ_OnAllSymbolsWithWB_r12),
	offsetof(struct WLAN_OffloadConfig_r12__thresholdRSRQ_OnAllSymbolsWithWB_r12, _asn_ctx),
	asn_MAP_thresholdRSRQ_OnAllSymbolsWithWB_r12_tag2el_8,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_thresholdRSRQ_OnAllSymbolsWithWB_r12_8 = {
	"thresholdRSRQ-OnAllSymbolsWithWB-r12",
	"thresholdRSRQ-OnAllSymbolsWithWB-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_thresholdRSRQ_OnAllSymbolsWithWB_r12_tags_8,
	sizeof(asn_DEF_thresholdRSRQ_OnAllSymbolsWithWB_r12_tags_8)
		/sizeof(asn_DEF_thresholdRSRQ_OnAllSymbolsWithWB_r12_tags_8[0]) - 1, /* 1 */
	asn_DEF_thresholdRSRQ_OnAllSymbolsWithWB_r12_tags_8,	/* Same as above */
	sizeof(asn_DEF_thresholdRSRQ_OnAllSymbolsWithWB_r12_tags_8)
		/sizeof(asn_DEF_thresholdRSRQ_OnAllSymbolsWithWB_r12_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_thresholdRSRQ_OnAllSymbolsWithWB_r12_8,
	2,	/* Elements count */
	&asn_SPC_thresholdRSRQ_OnAllSymbolsWithWB_r12_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_thresholdRSRQ_OnAllSymbols_r12_11[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct WLAN_OffloadConfig_r12__thresholdRSRQ_OnAllSymbols_r12, thresholdRSRQ_OnAllSymbolsLow_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"thresholdRSRQ-OnAllSymbolsLow-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct WLAN_OffloadConfig_r12__thresholdRSRQ_OnAllSymbols_r12, thresholdRSRQ_OnAllSymbolsHigh_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"thresholdRSRQ-OnAllSymbolsHigh-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_thresholdRSRQ_OnAllSymbols_r12_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_thresholdRSRQ_OnAllSymbols_r12_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* thresholdRSRQ-OnAllSymbolsLow-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* thresholdRSRQ-OnAllSymbolsHigh-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_thresholdRSRQ_OnAllSymbols_r12_specs_11 = {
	sizeof(struct WLAN_OffloadConfig_r12__thresholdRSRQ_OnAllSymbols_r12),
	offsetof(struct WLAN_OffloadConfig_r12__thresholdRSRQ_OnAllSymbols_r12, _asn_ctx),
	asn_MAP_thresholdRSRQ_OnAllSymbols_r12_tag2el_11,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_thresholdRSRQ_OnAllSymbols_r12_11 = {
	"thresholdRSRQ-OnAllSymbols-r12",
	"thresholdRSRQ-OnAllSymbols-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_thresholdRSRQ_OnAllSymbols_r12_tags_11,
	sizeof(asn_DEF_thresholdRSRQ_OnAllSymbols_r12_tags_11)
		/sizeof(asn_DEF_thresholdRSRQ_OnAllSymbols_r12_tags_11[0]) - 1, /* 1 */
	asn_DEF_thresholdRSRQ_OnAllSymbols_r12_tags_11,	/* Same as above */
	sizeof(asn_DEF_thresholdRSRQ_OnAllSymbols_r12_tags_11)
		/sizeof(asn_DEF_thresholdRSRQ_OnAllSymbols_r12_tags_11[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_thresholdRSRQ_OnAllSymbols_r12_11,
	2,	/* Elements count */
	&asn_SPC_thresholdRSRQ_OnAllSymbols_r12_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_thresholdRSRQ_WB_r12_14[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct WLAN_OffloadConfig_r12__thresholdRSRQ_WB_r12, thresholdRSRQ_WB_Low_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"thresholdRSRQ-WB-Low-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct WLAN_OffloadConfig_r12__thresholdRSRQ_WB_r12, thresholdRSRQ_WB_High_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"thresholdRSRQ-WB-High-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_thresholdRSRQ_WB_r12_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_thresholdRSRQ_WB_r12_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* thresholdRSRQ-WB-Low-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* thresholdRSRQ-WB-High-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_thresholdRSRQ_WB_r12_specs_14 = {
	sizeof(struct WLAN_OffloadConfig_r12__thresholdRSRQ_WB_r12),
	offsetof(struct WLAN_OffloadConfig_r12__thresholdRSRQ_WB_r12, _asn_ctx),
	asn_MAP_thresholdRSRQ_WB_r12_tag2el_14,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_thresholdRSRQ_WB_r12_14 = {
	"thresholdRSRQ-WB-r12",
	"thresholdRSRQ-WB-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_thresholdRSRQ_WB_r12_tags_14,
	sizeof(asn_DEF_thresholdRSRQ_WB_r12_tags_14)
		/sizeof(asn_DEF_thresholdRSRQ_WB_r12_tags_14[0]) - 1, /* 1 */
	asn_DEF_thresholdRSRQ_WB_r12_tags_14,	/* Same as above */
	sizeof(asn_DEF_thresholdRSRQ_WB_r12_tags_14)
		/sizeof(asn_DEF_thresholdRSRQ_WB_r12_tags_14[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_thresholdRSRQ_WB_r12_14,
	2,	/* Elements count */
	&asn_SPC_thresholdRSRQ_WB_r12_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_thresholdChannelUtilization_r12_17[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct WLAN_OffloadConfig_r12__thresholdChannelUtilization_r12, thresholdChannelUtilizationLow_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_thresholdChannelUtilizationLow_r12_constr_18,  memb_thresholdChannelUtilizationLow_r12_constraint_17 },
		0, 0, /* No default value */
		"thresholdChannelUtilizationLow-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct WLAN_OffloadConfig_r12__thresholdChannelUtilization_r12, thresholdChannelUtilizationHigh_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_thresholdChannelUtilizationHigh_r12_constr_19,  memb_thresholdChannelUtilizationHigh_r12_constraint_17 },
		0, 0, /* No default value */
		"thresholdChannelUtilizationHigh-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_thresholdChannelUtilization_r12_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_thresholdChannelUtilization_r12_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* thresholdChannelUtilizationLow-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* thresholdChannelUtilizationHigh-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_thresholdChannelUtilization_r12_specs_17 = {
	sizeof(struct WLAN_OffloadConfig_r12__thresholdChannelUtilization_r12),
	offsetof(struct WLAN_OffloadConfig_r12__thresholdChannelUtilization_r12, _asn_ctx),
	asn_MAP_thresholdChannelUtilization_r12_tag2el_17,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_thresholdChannelUtilization_r12_17 = {
	"thresholdChannelUtilization-r12",
	"thresholdChannelUtilization-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_thresholdChannelUtilization_r12_tags_17,
	sizeof(asn_DEF_thresholdChannelUtilization_r12_tags_17)
		/sizeof(asn_DEF_thresholdChannelUtilization_r12_tags_17[0]) - 1, /* 1 */
	asn_DEF_thresholdChannelUtilization_r12_tags_17,	/* Same as above */
	sizeof(asn_DEF_thresholdChannelUtilization_r12_tags_17)
		/sizeof(asn_DEF_thresholdChannelUtilization_r12_tags_17[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_thresholdChannelUtilization_r12_17,
	2,	/* Elements count */
	&asn_SPC_thresholdChannelUtilization_r12_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_thresholdBackhaul_Bandwidth_r12_20[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct WLAN_OffloadConfig_r12__thresholdBackhaul_Bandwidth_r12, thresholdBackhaulDL_BandwidthLow_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WLAN_backhaulRate_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"thresholdBackhaulDL-BandwidthLow-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct WLAN_OffloadConfig_r12__thresholdBackhaul_Bandwidth_r12, thresholdBackhaulDL_BandwidthHigh_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WLAN_backhaulRate_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"thresholdBackhaulDL-BandwidthHigh-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct WLAN_OffloadConfig_r12__thresholdBackhaul_Bandwidth_r12, thresholdBackhaulUL_BandwidthLow_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WLAN_backhaulRate_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"thresholdBackhaulUL-BandwidthLow-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct WLAN_OffloadConfig_r12__thresholdBackhaul_Bandwidth_r12, thresholdBackhaulUL_BandwidthHigh_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WLAN_backhaulRate_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"thresholdBackhaulUL-BandwidthHigh-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_thresholdBackhaul_Bandwidth_r12_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_thresholdBackhaul_Bandwidth_r12_tag2el_20[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* thresholdBackhaulDL-BandwidthLow-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* thresholdBackhaulDL-BandwidthHigh-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* thresholdBackhaulUL-BandwidthLow-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* thresholdBackhaulUL-BandwidthHigh-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_thresholdBackhaul_Bandwidth_r12_specs_20 = {
	sizeof(struct WLAN_OffloadConfig_r12__thresholdBackhaul_Bandwidth_r12),
	offsetof(struct WLAN_OffloadConfig_r12__thresholdBackhaul_Bandwidth_r12, _asn_ctx),
	asn_MAP_thresholdBackhaul_Bandwidth_r12_tag2el_20,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_thresholdBackhaul_Bandwidth_r12_20 = {
	"thresholdBackhaul-Bandwidth-r12",
	"thresholdBackhaul-Bandwidth-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_thresholdBackhaul_Bandwidth_r12_tags_20,
	sizeof(asn_DEF_thresholdBackhaul_Bandwidth_r12_tags_20)
		/sizeof(asn_DEF_thresholdBackhaul_Bandwidth_r12_tags_20[0]) - 1, /* 1 */
	asn_DEF_thresholdBackhaul_Bandwidth_r12_tags_20,	/* Same as above */
	sizeof(asn_DEF_thresholdBackhaul_Bandwidth_r12_tags_20)
		/sizeof(asn_DEF_thresholdBackhaul_Bandwidth_r12_tags_20[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_thresholdBackhaul_Bandwidth_r12_20,
	4,	/* Elements count */
	&asn_SPC_thresholdBackhaul_Bandwidth_r12_specs_20	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_thresholdWLAN_RSSI_r12_25[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct WLAN_OffloadConfig_r12__thresholdWLAN_RSSI_r12, thresholdWLAN_RSSI_Low_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_thresholdWLAN_RSSI_Low_r12_constr_26,  memb_thresholdWLAN_RSSI_Low_r12_constraint_25 },
		0, 0, /* No default value */
		"thresholdWLAN-RSSI-Low-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct WLAN_OffloadConfig_r12__thresholdWLAN_RSSI_r12, thresholdWLAN_RSSI_High_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_thresholdWLAN_RSSI_High_r12_constr_27,  memb_thresholdWLAN_RSSI_High_r12_constraint_25 },
		0, 0, /* No default value */
		"thresholdWLAN-RSSI-High-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_thresholdWLAN_RSSI_r12_tags_25[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_thresholdWLAN_RSSI_r12_tag2el_25[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* thresholdWLAN-RSSI-Low-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* thresholdWLAN-RSSI-High-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_thresholdWLAN_RSSI_r12_specs_25 = {
	sizeof(struct WLAN_OffloadConfig_r12__thresholdWLAN_RSSI_r12),
	offsetof(struct WLAN_OffloadConfig_r12__thresholdWLAN_RSSI_r12, _asn_ctx),
	asn_MAP_thresholdWLAN_RSSI_r12_tag2el_25,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_thresholdWLAN_RSSI_r12_25 = {
	"thresholdWLAN-RSSI-r12",
	"thresholdWLAN-RSSI-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_thresholdWLAN_RSSI_r12_tags_25,
	sizeof(asn_DEF_thresholdWLAN_RSSI_r12_tags_25)
		/sizeof(asn_DEF_thresholdWLAN_RSSI_r12_tags_25[0]) - 1, /* 1 */
	asn_DEF_thresholdWLAN_RSSI_r12_tags_25,	/* Same as above */
	sizeof(asn_DEF_thresholdWLAN_RSSI_r12_tags_25)
		/sizeof(asn_DEF_thresholdWLAN_RSSI_r12_tags_25[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_thresholdWLAN_RSSI_r12_25,
	2,	/* Elements count */
	&asn_SPC_thresholdWLAN_RSSI_r12_specs_25	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_WLAN_OffloadConfig_r12_1[] = {
	{ ATF_POINTER, 10, offsetof(struct WLAN_OffloadConfig_r12, thresholdRSRP_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_thresholdRSRP_r12_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"thresholdRSRP-r12"
		},
	{ ATF_POINTER, 9, offsetof(struct WLAN_OffloadConfig_r12, thresholdRSRQ_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_thresholdRSRQ_r12_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"thresholdRSRQ-r12"
		},
	{ ATF_POINTER, 8, offsetof(struct WLAN_OffloadConfig_r12, thresholdRSRQ_OnAllSymbolsWithWB_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_thresholdRSRQ_OnAllSymbolsWithWB_r12_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"thresholdRSRQ-OnAllSymbolsWithWB-r12"
		},
	{ ATF_POINTER, 7, offsetof(struct WLAN_OffloadConfig_r12, thresholdRSRQ_OnAllSymbols_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_thresholdRSRQ_OnAllSymbols_r12_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"thresholdRSRQ-OnAllSymbols-r12"
		},
	{ ATF_POINTER, 6, offsetof(struct WLAN_OffloadConfig_r12, thresholdRSRQ_WB_r12),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_thresholdRSRQ_WB_r12_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"thresholdRSRQ-WB-r12"
		},
	{ ATF_POINTER, 5, offsetof(struct WLAN_OffloadConfig_r12, thresholdChannelUtilization_r12),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_thresholdChannelUtilization_r12_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"thresholdChannelUtilization-r12"
		},
	{ ATF_POINTER, 4, offsetof(struct WLAN_OffloadConfig_r12, thresholdBackhaul_Bandwidth_r12),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_thresholdBackhaul_Bandwidth_r12_20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"thresholdBackhaul-Bandwidth-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct WLAN_OffloadConfig_r12, thresholdWLAN_RSSI_r12),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_thresholdWLAN_RSSI_r12_25,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"thresholdWLAN-RSSI-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct WLAN_OffloadConfig_r12, offloadPreferenceIndicator_r12),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_offloadPreferenceIndicator_r12_constr_28,  memb_offloadPreferenceIndicator_r12_constraint_1 },
		0, 0, /* No default value */
		"offloadPreferenceIndicator-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct WLAN_OffloadConfig_r12, t_SteeringWLAN_r12),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_T_Reselection,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t-SteeringWLAN-r12"
		},
};
static const int asn_MAP_WLAN_OffloadConfig_r12_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
static const ber_tlv_tag_t asn_DEF_WLAN_OffloadConfig_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_WLAN_OffloadConfig_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* thresholdRSRP-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* thresholdRSRQ-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* thresholdRSRQ-OnAllSymbolsWithWB-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* thresholdRSRQ-OnAllSymbols-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* thresholdRSRQ-WB-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* thresholdChannelUtilization-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* thresholdBackhaul-Bandwidth-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* thresholdWLAN-RSSI-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* offloadPreferenceIndicator-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* t-SteeringWLAN-r12 */
};
asn_SEQUENCE_specifics_t asn_SPC_WLAN_OffloadConfig_r12_specs_1 = {
	sizeof(struct WLAN_OffloadConfig_r12),
	offsetof(struct WLAN_OffloadConfig_r12, _asn_ctx),
	asn_MAP_WLAN_OffloadConfig_r12_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_WLAN_OffloadConfig_r12_oms_1,	/* Optional members */
	10, 0,	/* Root/Additions */
	10,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_WLAN_OffloadConfig_r12 = {
	"WLAN-OffloadConfig-r12",
	"WLAN-OffloadConfig-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_WLAN_OffloadConfig_r12_tags_1,
	sizeof(asn_DEF_WLAN_OffloadConfig_r12_tags_1)
		/sizeof(asn_DEF_WLAN_OffloadConfig_r12_tags_1[0]), /* 1 */
	asn_DEF_WLAN_OffloadConfig_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_WLAN_OffloadConfig_r12_tags_1)
		/sizeof(asn_DEF_WLAN_OffloadConfig_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_WLAN_OffloadConfig_r12_1,
	10,	/* Elements count */
	&asn_SPC_WLAN_OffloadConfig_r12_specs_1	/* Additional specs */
};

