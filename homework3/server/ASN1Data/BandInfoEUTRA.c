/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "BandInfoEUTRA.h"

#include "InterRAT-BandList.h"
asn_TYPE_member_t asn_MBR_BandInfoEUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BandInfoEUTRA, interFreqBandList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqBandList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqBandList"
		},
	{ ATF_POINTER, 1, offsetof(struct BandInfoEUTRA, interRAT_BandList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterRAT_BandList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interRAT-BandList"
		},
};
static const int asn_MAP_BandInfoEUTRA_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_BandInfoEUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BandInfoEUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* interFreqBandList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* interRAT-BandList */
};
asn_SEQUENCE_specifics_t asn_SPC_BandInfoEUTRA_specs_1 = {
	sizeof(struct BandInfoEUTRA),
	offsetof(struct BandInfoEUTRA, _asn_ctx),
	asn_MAP_BandInfoEUTRA_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_BandInfoEUTRA_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BandInfoEUTRA = {
	"BandInfoEUTRA",
	"BandInfoEUTRA",
	&asn_OP_SEQUENCE,
	asn_DEF_BandInfoEUTRA_tags_1,
	sizeof(asn_DEF_BandInfoEUTRA_tags_1)
		/sizeof(asn_DEF_BandInfoEUTRA_tags_1[0]), /* 1 */
	asn_DEF_BandInfoEUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_BandInfoEUTRA_tags_1)
		/sizeof(asn_DEF_BandInfoEUTRA_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_BandInfoEUTRA_1,
	2,	/* Elements count */
	&asn_SPC_BandInfoEUTRA_specs_1	/* Additional specs */
};

