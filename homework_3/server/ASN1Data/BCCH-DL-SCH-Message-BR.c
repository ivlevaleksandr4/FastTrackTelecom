/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "BCCH-DL-SCH-Message-BR.h"

static asn_TYPE_member_t asn_MBR_BCCH_DL_SCH_Message_BR_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BCCH_DL_SCH_Message_BR, message),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_BCCH_DL_SCH_MessageType_BR_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"message"
		},
};
static const ber_tlv_tag_t asn_DEF_BCCH_DL_SCH_Message_BR_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BCCH_DL_SCH_Message_BR_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* message */
};
static asn_SEQUENCE_specifics_t asn_SPC_BCCH_DL_SCH_Message_BR_specs_1 = {
	sizeof(struct BCCH_DL_SCH_Message_BR),
	offsetof(struct BCCH_DL_SCH_Message_BR, _asn_ctx),
	asn_MAP_BCCH_DL_SCH_Message_BR_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BCCH_DL_SCH_Message_BR = {
	"BCCH-DL-SCH-Message-BR",
	"BCCH-DL-SCH-Message-BR",
	&asn_OP_SEQUENCE,
	asn_DEF_BCCH_DL_SCH_Message_BR_tags_1,
	sizeof(asn_DEF_BCCH_DL_SCH_Message_BR_tags_1)
		/sizeof(asn_DEF_BCCH_DL_SCH_Message_BR_tags_1[0]), /* 1 */
	asn_DEF_BCCH_DL_SCH_Message_BR_tags_1,	/* Same as above */
	sizeof(asn_DEF_BCCH_DL_SCH_Message_BR_tags_1)
		/sizeof(asn_DEF_BCCH_DL_SCH_Message_BR_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_BCCH_DL_SCH_Message_BR_1,
	1,	/* Elements count */
	&asn_SPC_BCCH_DL_SCH_Message_BR_specs_1	/* Additional specs */
};

