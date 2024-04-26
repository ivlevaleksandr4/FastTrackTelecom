/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "CipheringAlgorithm-r12.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_CipheringAlgorithm_r12_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  7 }	/* (0..7,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_CipheringAlgorithm_r12_value2enum_1[] = {
	{ 0,	4,	"eea0" },
	{ 1,	4,	"eea1" },
	{ 2,	4,	"eea2" },
	{ 3,	10,	"eea3-v1130" },
	{ 4,	6,	"spare4" },
	{ 5,	6,	"spare3" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_CipheringAlgorithm_r12_enum2value_1[] = {
	0,	/* eea0(0) */
	1,	/* eea1(1) */
	2,	/* eea2(2) */
	3,	/* eea3-v1130(3) */
	7,	/* spare1(7) */
	6,	/* spare2(6) */
	5,	/* spare3(5) */
	4	/* spare4(4) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_CipheringAlgorithm_r12_specs_1 = {
	asn_MAP_CipheringAlgorithm_r12_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_CipheringAlgorithm_r12_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	9,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_CipheringAlgorithm_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_CipheringAlgorithm_r12 = {
	"CipheringAlgorithm-r12",
	"CipheringAlgorithm-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_CipheringAlgorithm_r12_tags_1,
	sizeof(asn_DEF_CipheringAlgorithm_r12_tags_1)
		/sizeof(asn_DEF_CipheringAlgorithm_r12_tags_1[0]), /* 1 */
	asn_DEF_CipheringAlgorithm_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_CipheringAlgorithm_r12_tags_1)
		/sizeof(asn_DEF_CipheringAlgorithm_r12_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_CipheringAlgorithm_r12_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_CipheringAlgorithm_r12_specs_1	/* Additional specs */
};

