/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "CSFBParametersResponseCDMA2000.h"

static asn_per_constraints_t asn_PER_type_criticalExtensions_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_criticalExtensionsFuture_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_criticalExtensionsFuture_specs_5 = {
	sizeof(struct CSFBParametersResponseCDMA2000__criticalExtensions__criticalExtensionsFuture),
	offsetof(struct CSFBParametersResponseCDMA2000__criticalExtensions__criticalExtensionsFuture, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_criticalExtensionsFuture_5 = {
	"criticalExtensionsFuture",
	"criticalExtensionsFuture",
	&asn_OP_SEQUENCE,
	asn_DEF_criticalExtensionsFuture_tags_5,
	sizeof(asn_DEF_criticalExtensionsFuture_tags_5)
		/sizeof(asn_DEF_criticalExtensionsFuture_tags_5[0]) - 1, /* 1 */
	asn_DEF_criticalExtensionsFuture_tags_5,	/* Same as above */
	sizeof(asn_DEF_criticalExtensionsFuture_tags_5)
		/sizeof(asn_DEF_criticalExtensionsFuture_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_criticalExtensionsFuture_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_criticalExtensions_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSFBParametersResponseCDMA2000__criticalExtensions, choice.csfbParametersResponseCDMA2000_r8),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSFBParametersResponseCDMA2000_r8_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csfbParametersResponseCDMA2000-r8"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSFBParametersResponseCDMA2000__criticalExtensions, choice.criticalExtensionsFuture),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_criticalExtensionsFuture_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"criticalExtensionsFuture"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_criticalExtensions_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* csfbParametersResponseCDMA2000-r8 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* criticalExtensionsFuture */
};
static asn_CHOICE_specifics_t asn_SPC_criticalExtensions_specs_3 = {
	sizeof(struct CSFBParametersResponseCDMA2000__criticalExtensions),
	offsetof(struct CSFBParametersResponseCDMA2000__criticalExtensions, _asn_ctx),
	offsetof(struct CSFBParametersResponseCDMA2000__criticalExtensions, present),
	sizeof(((struct CSFBParametersResponseCDMA2000__criticalExtensions *)0)->present),
	asn_MAP_criticalExtensions_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_criticalExtensions_3 = {
	"criticalExtensions",
	"criticalExtensions",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_criticalExtensions_constr_3, CHOICE_constraint },
	asn_MBR_criticalExtensions_3,
	2,	/* Elements count */
	&asn_SPC_criticalExtensions_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CSFBParametersResponseCDMA2000_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSFBParametersResponseCDMA2000, rrc_TransactionIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_TransactionIdentifier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrc-TransactionIdentifier"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSFBParametersResponseCDMA2000, criticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_criticalExtensions_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"criticalExtensions"
		},
};
static const ber_tlv_tag_t asn_DEF_CSFBParametersResponseCDMA2000_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CSFBParametersResponseCDMA2000_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrc-TransactionIdentifier */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* criticalExtensions */
};
asn_SEQUENCE_specifics_t asn_SPC_CSFBParametersResponseCDMA2000_specs_1 = {
	sizeof(struct CSFBParametersResponseCDMA2000),
	offsetof(struct CSFBParametersResponseCDMA2000, _asn_ctx),
	asn_MAP_CSFBParametersResponseCDMA2000_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CSFBParametersResponseCDMA2000 = {
	"CSFBParametersResponseCDMA2000",
	"CSFBParametersResponseCDMA2000",
	&asn_OP_SEQUENCE,
	asn_DEF_CSFBParametersResponseCDMA2000_tags_1,
	sizeof(asn_DEF_CSFBParametersResponseCDMA2000_tags_1)
		/sizeof(asn_DEF_CSFBParametersResponseCDMA2000_tags_1[0]), /* 1 */
	asn_DEF_CSFBParametersResponseCDMA2000_tags_1,	/* Same as above */
	sizeof(asn_DEF_CSFBParametersResponseCDMA2000_tags_1)
		/sizeof(asn_DEF_CSFBParametersResponseCDMA2000_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CSFBParametersResponseCDMA2000_1,
	2,	/* Elements count */
	&asn_SPC_CSFBParametersResponseCDMA2000_specs_1	/* Additional specs */
};

