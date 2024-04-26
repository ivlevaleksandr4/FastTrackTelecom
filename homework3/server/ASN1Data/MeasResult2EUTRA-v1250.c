/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "MeasResult2EUTRA-v1250.h"

#include "RSRQ-Type-r12.h"
asn_TYPE_member_t asn_MBR_MeasResult2EUTRA_v1250_1[] = {
	{ ATF_POINTER, 1, offsetof(struct MeasResult2EUTRA_v1250, rsrq_Type_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Type_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrq-Type-r12"
		},
};
static const int asn_MAP_MeasResult2EUTRA_v1250_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_MeasResult2EUTRA_v1250_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasResult2EUTRA_v1250_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* rsrq-Type-r12 */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasResult2EUTRA_v1250_specs_1 = {
	sizeof(struct MeasResult2EUTRA_v1250),
	offsetof(struct MeasResult2EUTRA_v1250, _asn_ctx),
	asn_MAP_MeasResult2EUTRA_v1250_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_MeasResult2EUTRA_v1250_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasResult2EUTRA_v1250 = {
	"MeasResult2EUTRA-v1250",
	"MeasResult2EUTRA-v1250",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasResult2EUTRA_v1250_tags_1,
	sizeof(asn_DEF_MeasResult2EUTRA_v1250_tags_1)
		/sizeof(asn_DEF_MeasResult2EUTRA_v1250_tags_1[0]), /* 1 */
	asn_DEF_MeasResult2EUTRA_v1250_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasResult2EUTRA_v1250_tags_1)
		/sizeof(asn_DEF_MeasResult2EUTRA_v1250_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasResult2EUTRA_v1250_1,
	1,	/* Elements count */
	&asn_SPC_MeasResult2EUTRA_v1250_specs_1	/* Additional specs */
};

