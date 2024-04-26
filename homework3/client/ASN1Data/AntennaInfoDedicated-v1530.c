/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "AntennaInfoDedicated-v1530.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_setup_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_AntennaInfoDedicated_v1530_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15_value2enum_5[] = {
	{ 0,	3,	"two" },
	{ 1,	5,	"three" }
};
static const unsigned int asn_MAP_ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15_enum2value_5[] = {
	1,	/* three(1) */
	0	/* two(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15_specs_5 = {
	asn_MAP_ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15_enum2value_5,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15_5 = {
	"ue-TxAntennaSelection-SRS-2T4R-NrOfPairs-r15",
	"ue-TxAntennaSelection-SRS-2T4R-NrOfPairs-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15_tags_5,
	sizeof(asn_DEF_ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15_tags_5)
		/sizeof(asn_DEF_ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15_tags_5[0]) - 1, /* 1 */
	asn_DEF_ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15_tags_5,	/* Same as above */
	sizeof(asn_DEF_ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15_tags_5)
		/sizeof(asn_DEF_ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AntennaInfoDedicated_v1530__setup, choice.ue_TxAntennaSelection_SRS_1T4R_Config_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-TxAntennaSelection-SRS-1T4R-Config-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AntennaInfoDedicated_v1530__setup, choice.ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-TxAntennaSelection-SRS-2T4R-NrOfPairs-r15"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-TxAntennaSelection-SRS-1T4R-Config-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ue-TxAntennaSelection-SRS-2T4R-NrOfPairs-r15 */
};
static asn_CHOICE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct AntennaInfoDedicated_v1530__setup),
	offsetof(struct AntennaInfoDedicated_v1530__setup, _asn_ctx),
	offsetof(struct AntennaInfoDedicated_v1530__setup, present),
	sizeof(((struct AntennaInfoDedicated_v1530__setup *)0)->present),
	asn_MAP_setup_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_3 = {
	"setup",
	"setup",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_setup_constr_3, CHOICE_constraint },
	asn_MBR_setup_3,
	2,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_AntennaInfoDedicated_v1530_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AntennaInfoDedicated_v1530, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AntennaInfoDedicated_v1530, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_AntennaInfoDedicated_v1530_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_AntennaInfoDedicated_v1530_specs_1 = {
	sizeof(struct AntennaInfoDedicated_v1530),
	offsetof(struct AntennaInfoDedicated_v1530, _asn_ctx),
	offsetof(struct AntennaInfoDedicated_v1530, present),
	sizeof(((struct AntennaInfoDedicated_v1530 *)0)->present),
	asn_MAP_AntennaInfoDedicated_v1530_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_AntennaInfoDedicated_v1530 = {
	"AntennaInfoDedicated-v1530",
	"AntennaInfoDedicated-v1530",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_AntennaInfoDedicated_v1530_constr_1, CHOICE_constraint },
	asn_MBR_AntennaInfoDedicated_v1530_1,
	2,	/* Elements count */
	&asn_SPC_AntennaInfoDedicated_v1530_specs_1	/* Additional specs */
};

