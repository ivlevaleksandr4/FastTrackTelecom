/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "GNSS-ID-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_gnss_id_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  5 }	/* (0..5,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_gnss_id_r15_value2enum_2[] = {
	{ 0,	3,	"gps" },
	{ 1,	4,	"sbas" },
	{ 2,	4,	"qzss" },
	{ 3,	7,	"galileo" },
	{ 4,	7,	"glonass" },
	{ 5,	3,	"bds" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_gnss_id_r15_enum2value_2[] = {
	5,	/* bds(5) */
	3,	/* galileo(3) */
	4,	/* glonass(4) */
	0,	/* gps(0) */
	2,	/* qzss(2) */
	1	/* sbas(1) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_gnss_id_r15_specs_2 = {
	asn_MAP_gnss_id_r15_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_gnss_id_r15_enum2value_2,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	7,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_gnss_id_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_gnss_id_r15_2 = {
	"gnss-id-r15",
	"gnss-id-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_gnss_id_r15_tags_2,
	sizeof(asn_DEF_gnss_id_r15_tags_2)
		/sizeof(asn_DEF_gnss_id_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_gnss_id_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_gnss_id_r15_tags_2)
		/sizeof(asn_DEF_gnss_id_r15_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_gnss_id_r15_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_gnss_id_r15_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_GNSS_ID_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GNSS_ID_r15, gnss_id_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_gnss_id_r15_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gnss-id-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_GNSS_ID_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GNSS_ID_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* gnss-id-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_GNSS_ID_r15_specs_1 = {
	sizeof(struct GNSS_ID_r15),
	offsetof(struct GNSS_ID_r15, _asn_ctx),
	asn_MAP_GNSS_ID_r15_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GNSS_ID_r15 = {
	"GNSS-ID-r15",
	"GNSS-ID-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_GNSS_ID_r15_tags_1,
	sizeof(asn_DEF_GNSS_ID_r15_tags_1)
		/sizeof(asn_DEF_GNSS_ID_r15_tags_1[0]), /* 1 */
	asn_DEF_GNSS_ID_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_GNSS_ID_r15_tags_1)
		/sizeof(asn_DEF_GNSS_ID_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_GNSS_ID_r15_1,
	1,	/* Elements count */
	&asn_SPC_GNSS_ID_r15_specs_1	/* Additional specs */
};

