/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "SystemInformationBlockType3.h"

#include "CellReselectionServingFreqInfo-v1310.h"
#include "RedistributionServingInfo-r13.h"
#include "CellSelectionInfoCE-r13.h"
#include "CellSelectionInfoCE1-r13.h"
#include "CellSelectionInfoCE1-v1360.h"
#include "CellReselectionInfoCommon-v1460.h"
#include "CellReselectionInfoHSDN-r15.h"
#include "CellSelectionInfoCE-v1530.h"
#include "SpeedStateScaleFactors.h"
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
memb_lateNonCriticalExtension_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		(void)st; /* Unused variable */
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_per_constraints_t asn_PER_type_q_Hyst_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_sf_Medium_constr_23 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_sf_High_constr_28 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_crs_IntfMitigNeighCellsCE_r15_constr_67 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_lateNonCriticalExtension_constr_47 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_q_Hyst_value2enum_3[] = {
	{ 0,	3,	"dB0" },
	{ 1,	3,	"dB1" },
	{ 2,	3,	"dB2" },
	{ 3,	3,	"dB3" },
	{ 4,	3,	"dB4" },
	{ 5,	3,	"dB5" },
	{ 6,	3,	"dB6" },
	{ 7,	3,	"dB8" },
	{ 8,	4,	"dB10" },
	{ 9,	4,	"dB12" },
	{ 10,	4,	"dB14" },
	{ 11,	4,	"dB16" },
	{ 12,	4,	"dB18" },
	{ 13,	4,	"dB20" },
	{ 14,	4,	"dB22" },
	{ 15,	4,	"dB24" }
};
static const unsigned int asn_MAP_q_Hyst_enum2value_3[] = {
	0,	/* dB0(0) */
	1,	/* dB1(1) */
	8,	/* dB10(8) */
	9,	/* dB12(9) */
	10,	/* dB14(10) */
	11,	/* dB16(11) */
	12,	/* dB18(12) */
	2,	/* dB2(2) */
	13,	/* dB20(13) */
	14,	/* dB22(14) */
	15,	/* dB24(15) */
	3,	/* dB3(3) */
	4,	/* dB4(4) */
	5,	/* dB5(5) */
	6,	/* dB6(6) */
	7	/* dB8(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_q_Hyst_specs_3 = {
	asn_MAP_q_Hyst_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_q_Hyst_enum2value_3,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_q_Hyst_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_q_Hyst_3 = {
	"q-Hyst",
	"q-Hyst",
	&asn_OP_NativeEnumerated,
	asn_DEF_q_Hyst_tags_3,
	sizeof(asn_DEF_q_Hyst_tags_3)
		/sizeof(asn_DEF_q_Hyst_tags_3[0]) - 1, /* 1 */
	asn_DEF_q_Hyst_tags_3,	/* Same as above */
	sizeof(asn_DEF_q_Hyst_tags_3)
		/sizeof(asn_DEF_q_Hyst_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_q_Hyst_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_q_Hyst_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_sf_Medium_value2enum_23[] = {
	{ 0,	4,	"dB-6" },
	{ 1,	4,	"dB-4" },
	{ 2,	4,	"dB-2" },
	{ 3,	3,	"dB0" }
};
static const unsigned int asn_MAP_sf_Medium_enum2value_23[] = {
	2,	/* dB-2(2) */
	1,	/* dB-4(1) */
	0,	/* dB-6(0) */
	3	/* dB0(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_sf_Medium_specs_23 = {
	asn_MAP_sf_Medium_value2enum_23,	/* "tag" => N; sorted by tag */
	asn_MAP_sf_Medium_enum2value_23,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sf_Medium_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sf_Medium_23 = {
	"sf-Medium",
	"sf-Medium",
	&asn_OP_NativeEnumerated,
	asn_DEF_sf_Medium_tags_23,
	sizeof(asn_DEF_sf_Medium_tags_23)
		/sizeof(asn_DEF_sf_Medium_tags_23[0]) - 1, /* 1 */
	asn_DEF_sf_Medium_tags_23,	/* Same as above */
	sizeof(asn_DEF_sf_Medium_tags_23)
		/sizeof(asn_DEF_sf_Medium_tags_23[0]), /* 2 */
	{ 0, &asn_PER_type_sf_Medium_constr_23, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sf_Medium_specs_23	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_sf_High_value2enum_28[] = {
	{ 0,	4,	"dB-6" },
	{ 1,	4,	"dB-4" },
	{ 2,	4,	"dB-2" },
	{ 3,	3,	"dB0" }
};
static const unsigned int asn_MAP_sf_High_enum2value_28[] = {
	2,	/* dB-2(2) */
	1,	/* dB-4(1) */
	0,	/* dB-6(0) */
	3	/* dB0(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_sf_High_specs_28 = {
	asn_MAP_sf_High_value2enum_28,	/* "tag" => N; sorted by tag */
	asn_MAP_sf_High_enum2value_28,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sf_High_tags_28[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sf_High_28 = {
	"sf-High",
	"sf-High",
	&asn_OP_NativeEnumerated,
	asn_DEF_sf_High_tags_28,
	sizeof(asn_DEF_sf_High_tags_28)
		/sizeof(asn_DEF_sf_High_tags_28[0]) - 1, /* 1 */
	asn_DEF_sf_High_tags_28,	/* Same as above */
	sizeof(asn_DEF_sf_High_tags_28)
		/sizeof(asn_DEF_sf_High_tags_28[0]), /* 2 */
	{ 0, &asn_PER_type_sf_High_constr_28, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sf_High_specs_28	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_q_HystSF_22[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType3__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF, sf_Medium),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sf_Medium_23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sf-Medium"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType3__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF, sf_High),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sf_High_28,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sf-High"
		},
};
static const ber_tlv_tag_t asn_DEF_q_HystSF_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_q_HystSF_tag2el_22[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sf-Medium */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* sf-High */
};
static asn_SEQUENCE_specifics_t asn_SPC_q_HystSF_specs_22 = {
	sizeof(struct SystemInformationBlockType3__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF),
	offsetof(struct SystemInformationBlockType3__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF, _asn_ctx),
	asn_MAP_q_HystSF_tag2el_22,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_q_HystSF_22 = {
	"q-HystSF",
	"q-HystSF",
	&asn_OP_SEQUENCE,
	asn_DEF_q_HystSF_tags_22,
	sizeof(asn_DEF_q_HystSF_tags_22)
		/sizeof(asn_DEF_q_HystSF_tags_22[0]) - 1, /* 1 */
	asn_DEF_q_HystSF_tags_22,	/* Same as above */
	sizeof(asn_DEF_q_HystSF_tags_22)
		/sizeof(asn_DEF_q_HystSF_tags_22[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_q_HystSF_22,
	2,	/* Elements count */
	&asn_SPC_q_HystSF_specs_22	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_speedStateReselectionPars_20[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType3__cellReselectionInfoCommon__speedStateReselectionPars, mobilityStateParameters),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MobilityStateParameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mobilityStateParameters"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType3__cellReselectionInfoCommon__speedStateReselectionPars, q_HystSF),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_q_HystSF_22,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-HystSF"
		},
};
static const ber_tlv_tag_t asn_DEF_speedStateReselectionPars_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_speedStateReselectionPars_tag2el_20[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mobilityStateParameters */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* q-HystSF */
};
static asn_SEQUENCE_specifics_t asn_SPC_speedStateReselectionPars_specs_20 = {
	sizeof(struct SystemInformationBlockType3__cellReselectionInfoCommon__speedStateReselectionPars),
	offsetof(struct SystemInformationBlockType3__cellReselectionInfoCommon__speedStateReselectionPars, _asn_ctx),
	asn_MAP_speedStateReselectionPars_tag2el_20,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_speedStateReselectionPars_20 = {
	"speedStateReselectionPars",
	"speedStateReselectionPars",
	&asn_OP_SEQUENCE,
	asn_DEF_speedStateReselectionPars_tags_20,
	sizeof(asn_DEF_speedStateReselectionPars_tags_20)
		/sizeof(asn_DEF_speedStateReselectionPars_tags_20[0]) - 1, /* 1 */
	asn_DEF_speedStateReselectionPars_tags_20,	/* Same as above */
	sizeof(asn_DEF_speedStateReselectionPars_tags_20)
		/sizeof(asn_DEF_speedStateReselectionPars_tags_20[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_speedStateReselectionPars_20,
	2,	/* Elements count */
	&asn_SPC_speedStateReselectionPars_specs_20	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cellReselectionInfoCommon_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType3__cellReselectionInfoCommon, q_Hyst),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_q_Hyst_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-Hyst"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType3__cellReselectionInfoCommon, speedStateReselectionPars),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_speedStateReselectionPars_20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"speedStateReselectionPars"
		},
};
static const int asn_MAP_cellReselectionInfoCommon_oms_2[] = { 1 };
static const ber_tlv_tag_t asn_DEF_cellReselectionInfoCommon_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_cellReselectionInfoCommon_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* q-Hyst */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* speedStateReselectionPars */
};
static asn_SEQUENCE_specifics_t asn_SPC_cellReselectionInfoCommon_specs_2 = {
	sizeof(struct SystemInformationBlockType3__cellReselectionInfoCommon),
	offsetof(struct SystemInformationBlockType3__cellReselectionInfoCommon, _asn_ctx),
	asn_MAP_cellReselectionInfoCommon_tag2el_2,
	2,	/* Count of tags in the map */
	asn_MAP_cellReselectionInfoCommon_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellReselectionInfoCommon_2 = {
	"cellReselectionInfoCommon",
	"cellReselectionInfoCommon",
	&asn_OP_SEQUENCE,
	asn_DEF_cellReselectionInfoCommon_tags_2,
	sizeof(asn_DEF_cellReselectionInfoCommon_tags_2)
		/sizeof(asn_DEF_cellReselectionInfoCommon_tags_2[0]) - 1, /* 1 */
	asn_DEF_cellReselectionInfoCommon_tags_2,	/* Same as above */
	sizeof(asn_DEF_cellReselectionInfoCommon_tags_2)
		/sizeof(asn_DEF_cellReselectionInfoCommon_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_cellReselectionInfoCommon_2,
	2,	/* Elements count */
	&asn_SPC_cellReselectionInfoCommon_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cellReselectionServingFreqInfo_33[] = {
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType3__cellReselectionServingFreqInfo, s_NonIntraSearch),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThreshold,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"s-NonIntraSearch"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType3__cellReselectionServingFreqInfo, threshServingLow),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThreshold,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"threshServingLow"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType3__cellReselectionServingFreqInfo, cellReselectionPriority),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellReselectionPriority,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellReselectionPriority"
		},
};
static const int asn_MAP_cellReselectionServingFreqInfo_oms_33[] = { 0 };
static const ber_tlv_tag_t asn_DEF_cellReselectionServingFreqInfo_tags_33[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_cellReselectionServingFreqInfo_tag2el_33[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* s-NonIntraSearch */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* threshServingLow */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* cellReselectionPriority */
};
static asn_SEQUENCE_specifics_t asn_SPC_cellReselectionServingFreqInfo_specs_33 = {
	sizeof(struct SystemInformationBlockType3__cellReselectionServingFreqInfo),
	offsetof(struct SystemInformationBlockType3__cellReselectionServingFreqInfo, _asn_ctx),
	asn_MAP_cellReselectionServingFreqInfo_tag2el_33,
	3,	/* Count of tags in the map */
	asn_MAP_cellReselectionServingFreqInfo_oms_33,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellReselectionServingFreqInfo_33 = {
	"cellReselectionServingFreqInfo",
	"cellReselectionServingFreqInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_cellReselectionServingFreqInfo_tags_33,
	sizeof(asn_DEF_cellReselectionServingFreqInfo_tags_33)
		/sizeof(asn_DEF_cellReselectionServingFreqInfo_tags_33[0]) - 1, /* 1 */
	asn_DEF_cellReselectionServingFreqInfo_tags_33,	/* Same as above */
	sizeof(asn_DEF_cellReselectionServingFreqInfo_tags_33)
		/sizeof(asn_DEF_cellReselectionServingFreqInfo_tags_33[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_cellReselectionServingFreqInfo_33,
	3,	/* Elements count */
	&asn_SPC_cellReselectionServingFreqInfo_specs_33	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_intraFreqCellReselectionInfo_37[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType3__intraFreqCellReselectionInfo, q_RxLevMin),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_RxLevMin,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-RxLevMin"
		},
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType3__intraFreqCellReselectionInfo, p_Max),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P_Max,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"p-Max"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType3__intraFreqCellReselectionInfo, s_IntraSearch),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThreshold,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"s-IntraSearch"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType3__intraFreqCellReselectionInfo, allowedMeasBandwidth),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AllowedMeasBandwidth,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"allowedMeasBandwidth"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType3__intraFreqCellReselectionInfo, presenceAntennaPort1),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PresenceAntennaPort1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"presenceAntennaPort1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType3__intraFreqCellReselectionInfo, neighCellConfig),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NeighCellConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"neighCellConfig"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType3__intraFreqCellReselectionInfo, t_ReselectionEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_T_Reselection,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t-ReselectionEUTRA"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType3__intraFreqCellReselectionInfo, t_ReselectionEUTRA_SF),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpeedStateScaleFactors,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t-ReselectionEUTRA-SF"
		},
};
static const int asn_MAP_intraFreqCellReselectionInfo_oms_37[] = { 1, 2, 3, 7 };
static const ber_tlv_tag_t asn_DEF_intraFreqCellReselectionInfo_tags_37[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_intraFreqCellReselectionInfo_tag2el_37[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* q-RxLevMin */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* p-Max */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* s-IntraSearch */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* allowedMeasBandwidth */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* presenceAntennaPort1 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* neighCellConfig */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* t-ReselectionEUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* t-ReselectionEUTRA-SF */
};
static asn_SEQUENCE_specifics_t asn_SPC_intraFreqCellReselectionInfo_specs_37 = {
	sizeof(struct SystemInformationBlockType3__intraFreqCellReselectionInfo),
	offsetof(struct SystemInformationBlockType3__intraFreqCellReselectionInfo, _asn_ctx),
	asn_MAP_intraFreqCellReselectionInfo_tag2el_37,
	8,	/* Count of tags in the map */
	asn_MAP_intraFreqCellReselectionInfo_oms_37,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_intraFreqCellReselectionInfo_37 = {
	"intraFreqCellReselectionInfo",
	"intraFreqCellReselectionInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_intraFreqCellReselectionInfo_tags_37,
	sizeof(asn_DEF_intraFreqCellReselectionInfo_tags_37)
		/sizeof(asn_DEF_intraFreqCellReselectionInfo_tags_37[0]) - 1, /* 1 */
	asn_DEF_intraFreqCellReselectionInfo_tags_37,	/* Same as above */
	sizeof(asn_DEF_intraFreqCellReselectionInfo_tags_37)
		/sizeof(asn_DEF_intraFreqCellReselectionInfo_tags_37[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_intraFreqCellReselectionInfo_37,
	8,	/* Elements count */
	&asn_SPC_intraFreqCellReselectionInfo_specs_37	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_s_IntraSearch_v920_48[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType3__s_IntraSearch_v920, s_IntraSearchP_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThreshold,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"s-IntraSearchP-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType3__s_IntraSearch_v920, s_IntraSearchQ_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThresholdQ_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"s-IntraSearchQ-r9"
		},
};
static const ber_tlv_tag_t asn_DEF_s_IntraSearch_v920_tags_48[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_s_IntraSearch_v920_tag2el_48[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* s-IntraSearchP-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* s-IntraSearchQ-r9 */
};
static asn_SEQUENCE_specifics_t asn_SPC_s_IntraSearch_v920_specs_48 = {
	sizeof(struct SystemInformationBlockType3__s_IntraSearch_v920),
	offsetof(struct SystemInformationBlockType3__s_IntraSearch_v920, _asn_ctx),
	asn_MAP_s_IntraSearch_v920_tag2el_48,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_s_IntraSearch_v920_48 = {
	"s-IntraSearch-v920",
	"s-IntraSearch-v920",
	&asn_OP_SEQUENCE,
	asn_DEF_s_IntraSearch_v920_tags_48,
	sizeof(asn_DEF_s_IntraSearch_v920_tags_48)
		/sizeof(asn_DEF_s_IntraSearch_v920_tags_48[0]) - 1, /* 1 */
	asn_DEF_s_IntraSearch_v920_tags_48,	/* Same as above */
	sizeof(asn_DEF_s_IntraSearch_v920_tags_48)
		/sizeof(asn_DEF_s_IntraSearch_v920_tags_48[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_s_IntraSearch_v920_48,
	2,	/* Elements count */
	&asn_SPC_s_IntraSearch_v920_specs_48	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_s_NonIntraSearch_v920_51[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType3__s_NonIntraSearch_v920, s_NonIntraSearchP_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThreshold,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"s-NonIntraSearchP-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType3__s_NonIntraSearch_v920, s_NonIntraSearchQ_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThresholdQ_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"s-NonIntraSearchQ-r9"
		},
};
static const ber_tlv_tag_t asn_DEF_s_NonIntraSearch_v920_tags_51[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_s_NonIntraSearch_v920_tag2el_51[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* s-NonIntraSearchP-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* s-NonIntraSearchQ-r9 */
};
static asn_SEQUENCE_specifics_t asn_SPC_s_NonIntraSearch_v920_specs_51 = {
	sizeof(struct SystemInformationBlockType3__s_NonIntraSearch_v920),
	offsetof(struct SystemInformationBlockType3__s_NonIntraSearch_v920, _asn_ctx),
	asn_MAP_s_NonIntraSearch_v920_tag2el_51,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_s_NonIntraSearch_v920_51 = {
	"s-NonIntraSearch-v920",
	"s-NonIntraSearch-v920",
	&asn_OP_SEQUENCE,
	asn_DEF_s_NonIntraSearch_v920_tags_51,
	sizeof(asn_DEF_s_NonIntraSearch_v920_tags_51)
		/sizeof(asn_DEF_s_NonIntraSearch_v920_tags_51[0]) - 1, /* 1 */
	asn_DEF_s_NonIntraSearch_v920_tags_51,	/* Same as above */
	sizeof(asn_DEF_s_NonIntraSearch_v920_tags_51)
		/sizeof(asn_DEF_s_NonIntraSearch_v920_tags_51[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_s_NonIntraSearch_v920_51,
	2,	/* Elements count */
	&asn_SPC_s_NonIntraSearch_v920_specs_51	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_crs_IntfMitigNeighCellsCE_r15_value2enum_67[] = {
	{ 0,	7,	"enabled" }
};
static const unsigned int asn_MAP_crs_IntfMitigNeighCellsCE_r15_enum2value_67[] = {
	0	/* enabled(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_crs_IntfMitigNeighCellsCE_r15_specs_67 = {
	asn_MAP_crs_IntfMitigNeighCellsCE_r15_value2enum_67,	/* "tag" => N; sorted by tag */
	asn_MAP_crs_IntfMitigNeighCellsCE_r15_enum2value_67,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_crs_IntfMitigNeighCellsCE_r15_tags_67[] = {
	(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_crs_IntfMitigNeighCellsCE_r15_67 = {
	"crs-IntfMitigNeighCellsCE-r15",
	"crs-IntfMitigNeighCellsCE-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_crs_IntfMitigNeighCellsCE_r15_tags_67,
	sizeof(asn_DEF_crs_IntfMitigNeighCellsCE_r15_tags_67)
		/sizeof(asn_DEF_crs_IntfMitigNeighCellsCE_r15_tags_67[0]) - 1, /* 1 */
	asn_DEF_crs_IntfMitigNeighCellsCE_r15_tags_67,	/* Same as above */
	sizeof(asn_DEF_crs_IntfMitigNeighCellsCE_r15_tags_67)
		/sizeof(asn_DEF_crs_IntfMitigNeighCellsCE_r15_tags_67[0]), /* 2 */
	{ 0, &asn_PER_type_crs_IntfMitigNeighCellsCE_r15_constr_67, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_crs_IntfMitigNeighCellsCE_r15_specs_67	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SystemInformationBlockType3_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType3, cellReselectionInfoCommon),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_cellReselectionInfoCommon_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellReselectionInfoCommon"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType3, cellReselectionServingFreqInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_cellReselectionServingFreqInfo_33,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellReselectionServingFreqInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType3, intraFreqCellReselectionInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_intraFreqCellReselectionInfo_37,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqCellReselectionInfo"
		},
	{ ATF_POINTER, 17, offsetof(struct SystemInformationBlockType3, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_lateNonCriticalExtension_constr_47,  memb_lateNonCriticalExtension_constraint_1 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 16, offsetof(struct SystemInformationBlockType3, s_IntraSearch_v920),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_s_IntraSearch_v920_48,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"s-IntraSearch-v920"
		},
	{ ATF_POINTER, 15, offsetof(struct SystemInformationBlockType3, s_NonIntraSearch_v920),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_s_NonIntraSearch_v920_51,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"s-NonIntraSearch-v920"
		},
	{ ATF_POINTER, 14, offsetof(struct SystemInformationBlockType3, q_QualMin_r9),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_QualMin_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-QualMin-r9"
		},
	{ ATF_POINTER, 13, offsetof(struct SystemInformationBlockType3, threshServingLowQ_r9),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThresholdQ_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"threshServingLowQ-r9"
		},
	{ ATF_POINTER, 12, offsetof(struct SystemInformationBlockType3, q_QualMinWB_r11),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_QualMin_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-QualMinWB-r11"
		},
	{ ATF_POINTER, 11, offsetof(struct SystemInformationBlockType3, q_QualMinRSRQ_OnAllSymbols_r12),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_QualMin_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-QualMinRSRQ-OnAllSymbols-r12"
		},
	{ ATF_POINTER, 10, offsetof(struct SystemInformationBlockType3, cellReselectionServingFreqInfo_v1310),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellReselectionServingFreqInfo_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellReselectionServingFreqInfo-v1310"
		},
	{ ATF_POINTER, 9, offsetof(struct SystemInformationBlockType3, redistributionServingInfo_r13),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RedistributionServingInfo_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"redistributionServingInfo-r13"
		},
	{ ATF_POINTER, 8, offsetof(struct SystemInformationBlockType3, cellSelectionInfoCE_r13),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellSelectionInfoCE_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellSelectionInfoCE-r13"
		},
	{ ATF_POINTER, 7, offsetof(struct SystemInformationBlockType3, t_ReselectionEUTRA_CE_r13),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_T_ReselectionEUTRA_CE_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t-ReselectionEUTRA-CE-r13"
		},
	{ ATF_POINTER, 6, offsetof(struct SystemInformationBlockType3, cellSelectionInfoCE1_r13),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellSelectionInfoCE1_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellSelectionInfoCE1-r13"
		},
	{ ATF_POINTER, 5, offsetof(struct SystemInformationBlockType3, cellSelectionInfoCE1_v1360),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellSelectionInfoCE1_v1360,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellSelectionInfoCE1-v1360"
		},
	{ ATF_POINTER, 4, offsetof(struct SystemInformationBlockType3, cellReselectionInfoCommon_v1460),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellReselectionInfoCommon_v1460,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellReselectionInfoCommon-v1460"
		},
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType3, cellReselectionInfoHSDN_r15),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellReselectionInfoHSDN_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellReselectionInfoHSDN-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType3, cellSelectionInfoCE_v1530),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellSelectionInfoCE_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellSelectionInfoCE-v1530"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType3, crs_IntfMitigNeighCellsCE_r15),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_crs_IntfMitigNeighCellsCE_r15_67,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"crs-IntfMitigNeighCellsCE-r15"
		},
};
static const int asn_MAP_SystemInformationBlockType3_oms_1[] = { 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType3_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType3_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellReselectionInfoCommon */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellReselectionServingFreqInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* intraFreqCellReselectionInfo */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* s-IntraSearch-v920 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* s-NonIntraSearch-v920 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* q-QualMin-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* threshServingLowQ-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* q-QualMinWB-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* q-QualMinRSRQ-OnAllSymbols-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* cellReselectionServingFreqInfo-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* redistributionServingInfo-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* cellSelectionInfoCE-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* t-ReselectionEUTRA-CE-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* cellSelectionInfoCE1-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* cellSelectionInfoCE1-v1360 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* cellReselectionInfoCommon-v1460 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* cellReselectionInfoHSDN-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* cellSelectionInfoCE-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 } /* crs-IntfMitigNeighCellsCE-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType3_specs_1 = {
	sizeof(struct SystemInformationBlockType3),
	offsetof(struct SystemInformationBlockType3, _asn_ctx),
	asn_MAP_SystemInformationBlockType3_tag2el_1,
	20,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType3_oms_1,	/* Optional members */
	0, 17,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType3 = {
	"SystemInformationBlockType3",
	"SystemInformationBlockType3",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType3_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType3_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType3_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType3_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType3_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType3_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformationBlockType3_1,
	20,	/* Elements count */
	&asn_SPC_SystemInformationBlockType3_specs_1	/* Additional specs */
};

