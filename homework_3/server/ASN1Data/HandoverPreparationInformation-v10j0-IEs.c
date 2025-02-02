/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "HandoverPreparationInformation-v10j0-IEs.h"

#include "AS-Config-v10j0.h"
#include "HandoverPreparationInformation-v10x0-IEs.h"
asn_TYPE_member_t asn_MBR_HandoverPreparationInformation_v10j0_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct HandoverPreparationInformation_v10j0_IEs, as_Config_v10j0),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AS_Config_v10j0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"as-Config-v10j0"
		},
	{ ATF_POINTER, 1, offsetof(struct HandoverPreparationInformation_v10j0_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HandoverPreparationInformation_v10x0_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_HandoverPreparationInformation_v10j0_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_HandoverPreparationInformation_v10j0_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_HandoverPreparationInformation_v10j0_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* as-Config-v10j0 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_HandoverPreparationInformation_v10j0_IEs_specs_1 = {
	sizeof(struct HandoverPreparationInformation_v10j0_IEs),
	offsetof(struct HandoverPreparationInformation_v10j0_IEs, _asn_ctx),
	asn_MAP_HandoverPreparationInformation_v10j0_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_HandoverPreparationInformation_v10j0_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_HandoverPreparationInformation_v10j0_IEs = {
	"HandoverPreparationInformation-v10j0-IEs",
	"HandoverPreparationInformation-v10j0-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_HandoverPreparationInformation_v10j0_IEs_tags_1,
	sizeof(asn_DEF_HandoverPreparationInformation_v10j0_IEs_tags_1)
		/sizeof(asn_DEF_HandoverPreparationInformation_v10j0_IEs_tags_1[0]), /* 1 */
	asn_DEF_HandoverPreparationInformation_v10j0_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_HandoverPreparationInformation_v10j0_IEs_tags_1)
		/sizeof(asn_DEF_HandoverPreparationInformation_v10j0_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_HandoverPreparationInformation_v10j0_IEs_1,
	2,	/* Elements count */
	&asn_SPC_HandoverPreparationInformation_v10j0_IEs_specs_1	/* Additional specs */
};

