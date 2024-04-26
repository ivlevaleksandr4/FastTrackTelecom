/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "RRCConnectionResume-v1430-IEs.h"

#include "OtherConfig-r9.h"
#include "RRCConnectionResume-v1510-IEs.h"
asn_TYPE_member_t asn_MBR_RRCConnectionResume_v1430_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct RRCConnectionResume_v1430_IEs, otherConfig_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OtherConfig_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"otherConfig-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionResume_v1430_IEs, rrcConnectionResume_v1510_IEs),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionResume_v1510_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrcConnectionResume-v1510-IEs"
		},
};
static const int asn_MAP_RRCConnectionResume_v1430_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_RRCConnectionResume_v1430_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCConnectionResume_v1430_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* otherConfig-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* rrcConnectionResume-v1510-IEs */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionResume_v1430_IEs_specs_1 = {
	sizeof(struct RRCConnectionResume_v1430_IEs),
	offsetof(struct RRCConnectionResume_v1430_IEs, _asn_ctx),
	asn_MAP_RRCConnectionResume_v1430_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_RRCConnectionResume_v1430_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionResume_v1430_IEs = {
	"RRCConnectionResume-v1430-IEs",
	"RRCConnectionResume-v1430-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCConnectionResume_v1430_IEs_tags_1,
	sizeof(asn_DEF_RRCConnectionResume_v1430_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionResume_v1430_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionResume_v1430_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionResume_v1430_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionResume_v1430_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRCConnectionResume_v1430_IEs_1,
	2,	/* Elements count */
	&asn_SPC_RRCConnectionResume_v1430_IEs_specs_1	/* Additional specs */
};

