/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "RAN-NotificationAreaInfo-r15.h"

asn_per_constraints_t asn_PER_type_RAN_NotificationAreaInfo_r15_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_RAN_NotificationAreaInfo_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RAN_NotificationAreaInfo_r15, choice.cellList_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_RAN_AreaCellList_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellList-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RAN_NotificationAreaInfo_r15, choice.ran_AreaConfigList_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_RAN_AreaConfigList_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ran-AreaConfigList-r15"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_RAN_NotificationAreaInfo_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellList-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ran-AreaConfigList-r15 */
};
asn_CHOICE_specifics_t asn_SPC_RAN_NotificationAreaInfo_r15_specs_1 = {
	sizeof(struct RAN_NotificationAreaInfo_r15),
	offsetof(struct RAN_NotificationAreaInfo_r15, _asn_ctx),
	offsetof(struct RAN_NotificationAreaInfo_r15, present),
	sizeof(((struct RAN_NotificationAreaInfo_r15 *)0)->present),
	asn_MAP_RAN_NotificationAreaInfo_r15_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_RAN_NotificationAreaInfo_r15 = {
	"RAN-NotificationAreaInfo-r15",
	"RAN-NotificationAreaInfo-r15",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_RAN_NotificationAreaInfo_r15_constr_1, CHOICE_constraint },
	asn_MBR_RAN_NotificationAreaInfo_r15_1,
	2,	/* Elements count */
	&asn_SPC_RAN_NotificationAreaInfo_r15_specs_1	/* Additional specs */
};

