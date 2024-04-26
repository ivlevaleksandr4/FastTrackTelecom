/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "SystemInformationBlockType1-NB.h"

#include "NS-PmaxList-NB-r13.h"
#include "MultiBandInfoList-NB-r13.h"
#include "DL-Bitmap-NB-r13.h"
#include "SystemInfoValueTagList-NB-r13.h"
#include "SystemInformationBlockType1-NB-v1350.h"
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
memb_hyperSFN_MSB_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 8)) {
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
memb_si_RadioFrameOffset_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_cellBarred_r13_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_intraFreqReselection_r13_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_eutraControlRegionSize_r13_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_nrs_CRS_PowerOffset_r13_constr_25 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_si_WindowLength_r13_constr_43 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_hyperSFN_MSB_r13_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_si_RadioFrameOffset_r13_constr_52 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  15 }	/* (1..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_cellBarred_r13_value2enum_7[] = {
	{ 0,	6,	"barred" },
	{ 1,	9,	"notBarred" }
};
static const unsigned int asn_MAP_cellBarred_r13_enum2value_7[] = {
	0,	/* barred(0) */
	1	/* notBarred(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_cellBarred_r13_specs_7 = {
	asn_MAP_cellBarred_r13_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_cellBarred_r13_enum2value_7,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_cellBarred_r13_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellBarred_r13_7 = {
	"cellBarred-r13",
	"cellBarred-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_cellBarred_r13_tags_7,
	sizeof(asn_DEF_cellBarred_r13_tags_7)
		/sizeof(asn_DEF_cellBarred_r13_tags_7[0]) - 1, /* 1 */
	asn_DEF_cellBarred_r13_tags_7,	/* Same as above */
	sizeof(asn_DEF_cellBarred_r13_tags_7)
		/sizeof(asn_DEF_cellBarred_r13_tags_7[0]), /* 2 */
	{ 0, &asn_PER_type_cellBarred_r13_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cellBarred_r13_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_intraFreqReselection_r13_value2enum_10[] = {
	{ 0,	7,	"allowed" },
	{ 1,	10,	"notAllowed" }
};
static const unsigned int asn_MAP_intraFreqReselection_r13_enum2value_10[] = {
	0,	/* allowed(0) */
	1	/* notAllowed(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_intraFreqReselection_r13_specs_10 = {
	asn_MAP_intraFreqReselection_r13_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_intraFreqReselection_r13_enum2value_10,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_intraFreqReselection_r13_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_intraFreqReselection_r13_10 = {
	"intraFreqReselection-r13",
	"intraFreqReselection-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_intraFreqReselection_r13_tags_10,
	sizeof(asn_DEF_intraFreqReselection_r13_tags_10)
		/sizeof(asn_DEF_intraFreqReselection_r13_tags_10[0]) - 1, /* 1 */
	asn_DEF_intraFreqReselection_r13_tags_10,	/* Same as above */
	sizeof(asn_DEF_intraFreqReselection_r13_tags_10)
		/sizeof(asn_DEF_intraFreqReselection_r13_tags_10[0]), /* 2 */
	{ 0, &asn_PER_type_intraFreqReselection_r13_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_intraFreqReselection_r13_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cellAccessRelatedInfo_r13_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1_NB__cellAccessRelatedInfo_r13, plmn_IdentityList_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_IdentityList_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-IdentityList-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1_NB__cellAccessRelatedInfo_r13, trackingAreaCode_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TrackingAreaCode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trackingAreaCode-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1_NB__cellAccessRelatedInfo_r13, cellIdentity_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellIdentity-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1_NB__cellAccessRelatedInfo_r13, cellBarred_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cellBarred_r13_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellBarred-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1_NB__cellAccessRelatedInfo_r13, intraFreqReselection_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_intraFreqReselection_r13_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqReselection-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_cellAccessRelatedInfo_r13_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_cellAccessRelatedInfo_r13_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-IdentityList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* trackingAreaCode-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cellIdentity-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* cellBarred-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* intraFreqReselection-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_cellAccessRelatedInfo_r13_specs_3 = {
	sizeof(struct SystemInformationBlockType1_NB__cellAccessRelatedInfo_r13),
	offsetof(struct SystemInformationBlockType1_NB__cellAccessRelatedInfo_r13, _asn_ctx),
	asn_MAP_cellAccessRelatedInfo_r13_tag2el_3,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellAccessRelatedInfo_r13_3 = {
	"cellAccessRelatedInfo-r13",
	"cellAccessRelatedInfo-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_cellAccessRelatedInfo_r13_tags_3,
	sizeof(asn_DEF_cellAccessRelatedInfo_r13_tags_3)
		/sizeof(asn_DEF_cellAccessRelatedInfo_r13_tags_3[0]) - 1, /* 1 */
	asn_DEF_cellAccessRelatedInfo_r13_tags_3,	/* Same as above */
	sizeof(asn_DEF_cellAccessRelatedInfo_r13_tags_3)
		/sizeof(asn_DEF_cellAccessRelatedInfo_r13_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_cellAccessRelatedInfo_r13_3,
	5,	/* Elements count */
	&asn_SPC_cellAccessRelatedInfo_r13_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cellSelectionInfo_r13_13[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1_NB__cellSelectionInfo_r13, q_RxLevMin_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_RxLevMin,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-RxLevMin-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1_NB__cellSelectionInfo_r13, q_QualMin_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_QualMin_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-QualMin-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_cellSelectionInfo_r13_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_cellSelectionInfo_r13_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* q-RxLevMin-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* q-QualMin-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_cellSelectionInfo_r13_specs_13 = {
	sizeof(struct SystemInformationBlockType1_NB__cellSelectionInfo_r13),
	offsetof(struct SystemInformationBlockType1_NB__cellSelectionInfo_r13, _asn_ctx),
	asn_MAP_cellSelectionInfo_r13_tag2el_13,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellSelectionInfo_r13_13 = {
	"cellSelectionInfo-r13",
	"cellSelectionInfo-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_cellSelectionInfo_r13_tags_13,
	sizeof(asn_DEF_cellSelectionInfo_r13_tags_13)
		/sizeof(asn_DEF_cellSelectionInfo_r13_tags_13[0]) - 1, /* 1 */
	asn_DEF_cellSelectionInfo_r13_tags_13,	/* Same as above */
	sizeof(asn_DEF_cellSelectionInfo_r13_tags_13)
		/sizeof(asn_DEF_cellSelectionInfo_r13_tags_13[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_cellSelectionInfo_r13_13,
	2,	/* Elements count */
	&asn_SPC_cellSelectionInfo_r13_specs_13	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_eutraControlRegionSize_r13_value2enum_21[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" }
};
static const unsigned int asn_MAP_eutraControlRegionSize_r13_enum2value_21[] = {
	0,	/* n1(0) */
	1,	/* n2(1) */
	2	/* n3(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_eutraControlRegionSize_r13_specs_21 = {
	asn_MAP_eutraControlRegionSize_r13_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_eutraControlRegionSize_r13_enum2value_21,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_eutraControlRegionSize_r13_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eutraControlRegionSize_r13_21 = {
	"eutraControlRegionSize-r13",
	"eutraControlRegionSize-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_eutraControlRegionSize_r13_tags_21,
	sizeof(asn_DEF_eutraControlRegionSize_r13_tags_21)
		/sizeof(asn_DEF_eutraControlRegionSize_r13_tags_21[0]) - 1, /* 1 */
	asn_DEF_eutraControlRegionSize_r13_tags_21,	/* Same as above */
	sizeof(asn_DEF_eutraControlRegionSize_r13_tags_21)
		/sizeof(asn_DEF_eutraControlRegionSize_r13_tags_21[0]), /* 2 */
	{ 0, &asn_PER_type_eutraControlRegionSize_r13_constr_21, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_eutraControlRegionSize_r13_specs_21	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_nrs_CRS_PowerOffset_r13_value2enum_25[] = {
	{ 0,	4,	"dB-6" },
	{ 1,	9,	"dB-4dot77" },
	{ 2,	4,	"dB-3" },
	{ 3,	9,	"dB-1dot77" },
	{ 4,	3,	"dB0" },
	{ 5,	3,	"dB1" },
	{ 6,	8,	"dB1dot23" },
	{ 7,	3,	"dB2" },
	{ 8,	3,	"dB3" },
	{ 9,	3,	"dB4" },
	{ 10,	8,	"dB4dot23" },
	{ 11,	3,	"dB5" },
	{ 12,	3,	"dB6" },
	{ 13,	3,	"dB7" },
	{ 14,	3,	"dB8" },
	{ 15,	3,	"dB9" }
};
static const unsigned int asn_MAP_nrs_CRS_PowerOffset_r13_enum2value_25[] = {
	3,	/* dB-1dot77(3) */
	2,	/* dB-3(2) */
	1,	/* dB-4dot77(1) */
	0,	/* dB-6(0) */
	4,	/* dB0(4) */
	5,	/* dB1(5) */
	6,	/* dB1dot23(6) */
	7,	/* dB2(7) */
	8,	/* dB3(8) */
	9,	/* dB4(9) */
	10,	/* dB4dot23(10) */
	11,	/* dB5(11) */
	12,	/* dB6(12) */
	13,	/* dB7(13) */
	14,	/* dB8(14) */
	15	/* dB9(15) */
};
static const asn_INTEGER_specifics_t asn_SPC_nrs_CRS_PowerOffset_r13_specs_25 = {
	asn_MAP_nrs_CRS_PowerOffset_r13_value2enum_25,	/* "tag" => N; sorted by tag */
	asn_MAP_nrs_CRS_PowerOffset_r13_enum2value_25,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_nrs_CRS_PowerOffset_r13_tags_25[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nrs_CRS_PowerOffset_r13_25 = {
	"nrs-CRS-PowerOffset-r13",
	"nrs-CRS-PowerOffset-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_nrs_CRS_PowerOffset_r13_tags_25,
	sizeof(asn_DEF_nrs_CRS_PowerOffset_r13_tags_25)
		/sizeof(asn_DEF_nrs_CRS_PowerOffset_r13_tags_25[0]) - 1, /* 1 */
	asn_DEF_nrs_CRS_PowerOffset_r13_tags_25,	/* Same as above */
	sizeof(asn_DEF_nrs_CRS_PowerOffset_r13_tags_25)
		/sizeof(asn_DEF_nrs_CRS_PowerOffset_r13_tags_25[0]), /* 2 */
	{ 0, &asn_PER_type_nrs_CRS_PowerOffset_r13_constr_25, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_nrs_CRS_PowerOffset_r13_specs_25	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_si_WindowLength_r13_value2enum_43[] = {
	{ 0,	5,	"ms160" },
	{ 1,	5,	"ms320" },
	{ 2,	5,	"ms480" },
	{ 3,	5,	"ms640" },
	{ 4,	5,	"ms960" },
	{ 5,	6,	"ms1280" },
	{ 6,	6,	"ms1600" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_si_WindowLength_r13_enum2value_43[] = {
	5,	/* ms1280(5) */
	0,	/* ms160(0) */
	6,	/* ms1600(6) */
	1,	/* ms320(1) */
	2,	/* ms480(2) */
	3,	/* ms640(3) */
	4,	/* ms960(4) */
	7	/* spare1(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_si_WindowLength_r13_specs_43 = {
	asn_MAP_si_WindowLength_r13_value2enum_43,	/* "tag" => N; sorted by tag */
	asn_MAP_si_WindowLength_r13_enum2value_43,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_si_WindowLength_r13_tags_43[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_si_WindowLength_r13_43 = {
	"si-WindowLength-r13",
	"si-WindowLength-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_si_WindowLength_r13_tags_43,
	sizeof(asn_DEF_si_WindowLength_r13_tags_43)
		/sizeof(asn_DEF_si_WindowLength_r13_tags_43[0]) - 1, /* 1 */
	asn_DEF_si_WindowLength_r13_tags_43,	/* Same as above */
	sizeof(asn_DEF_si_WindowLength_r13_tags_43)
		/sizeof(asn_DEF_si_WindowLength_r13_tags_43[0]), /* 2 */
	{ 0, &asn_PER_type_si_WindowLength_r13_constr_43, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_si_WindowLength_r13_specs_43	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SystemInformationBlockType1_NB_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1_NB, hyperSFN_MSB_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_hyperSFN_MSB_r13_constr_2,  memb_hyperSFN_MSB_r13_constraint_1 },
		0, 0, /* No default value */
		"hyperSFN-MSB-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1_NB, cellAccessRelatedInfo_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_cellAccessRelatedInfo_r13_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellAccessRelatedInfo-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1_NB, cellSelectionInfo_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_cellSelectionInfo_r13_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellSelectionInfo-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType1_NB, p_Max_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P_Max,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"p-Max-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1_NB, freqBandIndicator_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreqBandIndicator_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"freqBandIndicator-r13"
		},
	{ ATF_POINTER, 5, offsetof(struct SystemInformationBlockType1_NB, freqBandInfo_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NS_PmaxList_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"freqBandInfo-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct SystemInformationBlockType1_NB, multiBandInfoList_r13),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MultiBandInfoList_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"multiBandInfoList-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType1_NB, downlinkBitmap_r13),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_DL_Bitmap_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"downlinkBitmap-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType1_NB, eutraControlRegionSize_r13),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_eutraControlRegionSize_r13_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutraControlRegionSize-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType1_NB, nrs_CRS_PowerOffset_r13),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_nrs_CRS_PowerOffset_r13_25,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nrs-CRS-PowerOffset-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1_NB, schedulingInfoList_r13),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SchedulingInfoList_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"schedulingInfoList-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1_NB, si_WindowLength_r13),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_si_WindowLength_r13_43,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"si-WindowLength-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct SystemInformationBlockType1_NB, si_RadioFrameOffset_r13),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_si_RadioFrameOffset_r13_constr_52,  memb_si_RadioFrameOffset_r13_constraint_1 },
		0, 0, /* No default value */
		"si-RadioFrameOffset-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType1_NB, systemInfoValueTagList_r13),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInfoValueTagList_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"systemInfoValueTagList-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType1_NB, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType1_NB, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType1_NB_v1350,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_SystemInformationBlockType1_NB_oms_1[] = { 3, 5, 6, 7, 8, 9, 12, 13, 14, 15 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType1_NB_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType1_NB_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* hyperSFN-MSB-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellAccessRelatedInfo-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cellSelectionInfo-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* p-Max-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* freqBandIndicator-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* freqBandInfo-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* multiBandInfoList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* downlinkBitmap-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* eutraControlRegionSize-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* nrs-CRS-PowerOffset-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* schedulingInfoList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* si-WindowLength-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* si-RadioFrameOffset-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* systemInfoValueTagList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType1_NB_specs_1 = {
	sizeof(struct SystemInformationBlockType1_NB),
	offsetof(struct SystemInformationBlockType1_NB, _asn_ctx),
	asn_MAP_SystemInformationBlockType1_NB_tag2el_1,
	16,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType1_NB_oms_1,	/* Optional members */
	10, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType1_NB = {
	"SystemInformationBlockType1-NB",
	"SystemInformationBlockType1-NB",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType1_NB_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType1_NB_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType1_NB_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType1_NB_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType1_NB_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType1_NB_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformationBlockType1_NB_1,
	16,	/* Elements count */
	&asn_SPC_SystemInformationBlockType1_NB_specs_1	/* Additional specs */
};

