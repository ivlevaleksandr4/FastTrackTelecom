/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "ThresholdEUTRA.h"

asn_per_constraints_t asn_PER_type_ThresholdEUTRA_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ThresholdEUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ThresholdEUTRA, choice.threshold_RSRP),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"threshold-RSRP"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ThresholdEUTRA, choice.threshold_RSRQ),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"threshold-RSRQ"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ThresholdEUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* threshold-RSRP */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* threshold-RSRQ */
};
asn_CHOICE_specifics_t asn_SPC_ThresholdEUTRA_specs_1 = {
	sizeof(struct ThresholdEUTRA),
	offsetof(struct ThresholdEUTRA, _asn_ctx),
	offsetof(struct ThresholdEUTRA, present),
	sizeof(((struct ThresholdEUTRA *)0)->present),
	asn_MAP_ThresholdEUTRA_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ThresholdEUTRA = {
	"ThresholdEUTRA",
	"ThresholdEUTRA",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_ThresholdEUTRA_constr_1, CHOICE_constraint },
	asn_MBR_ThresholdEUTRA_1,
	2,	/* Elements count */
	&asn_SPC_ThresholdEUTRA_specs_1	/* Additional specs */
};

