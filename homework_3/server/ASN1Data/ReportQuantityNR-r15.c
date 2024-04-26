/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "ReportQuantityNR-r15.h"

asn_TYPE_member_t asn_MBR_ReportQuantityNR_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReportQuantityNR_r15, ss_rsrp),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ss-rsrp"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportQuantityNR_r15, ss_rsrq),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ss-rsrq"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportQuantityNR_r15, ss_sinr),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ss-sinr"
		},
};
static const ber_tlv_tag_t asn_DEF_ReportQuantityNR_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ReportQuantityNR_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ss-rsrp */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ss-rsrq */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ss-sinr */
};
asn_SEQUENCE_specifics_t asn_SPC_ReportQuantityNR_r15_specs_1 = {
	sizeof(struct ReportQuantityNR_r15),
	offsetof(struct ReportQuantityNR_r15, _asn_ctx),
	asn_MAP_ReportQuantityNR_r15_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ReportQuantityNR_r15 = {
	"ReportQuantityNR-r15",
	"ReportQuantityNR-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_ReportQuantityNR_r15_tags_1,
	sizeof(asn_DEF_ReportQuantityNR_r15_tags_1)
		/sizeof(asn_DEF_ReportQuantityNR_r15_tags_1[0]), /* 1 */
	asn_DEF_ReportQuantityNR_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReportQuantityNR_r15_tags_1)
		/sizeof(asn_DEF_ReportQuantityNR_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ReportQuantityNR_r15_1,
	3,	/* Elements count */
	&asn_SPC_ReportQuantityNR_r15_specs_1	/* Additional specs */
};

