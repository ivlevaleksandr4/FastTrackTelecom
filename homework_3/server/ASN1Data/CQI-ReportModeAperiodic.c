/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "CQI-ReportModeAperiodic.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_CQI_ReportModeAperiodic_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_CQI_ReportModeAperiodic_value2enum_1[] = {
	{ 0,	4,	"rm12" },
	{ 1,	4,	"rm20" },
	{ 2,	4,	"rm22" },
	{ 3,	4,	"rm30" },
	{ 4,	4,	"rm31" },
	{ 5,	10,	"rm32-v1250" },
	{ 6,	10,	"rm10-v1310" },
	{ 7,	10,	"rm11-v1310" }
};
static const unsigned int asn_MAP_CQI_ReportModeAperiodic_enum2value_1[] = {
	6,	/* rm10-v1310(6) */
	7,	/* rm11-v1310(7) */
	0,	/* rm12(0) */
	1,	/* rm20(1) */
	2,	/* rm22(2) */
	3,	/* rm30(3) */
	4,	/* rm31(4) */
	5	/* rm32-v1250(5) */
};
const asn_INTEGER_specifics_t asn_SPC_CQI_ReportModeAperiodic_specs_1 = {
	asn_MAP_CQI_ReportModeAperiodic_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_CQI_ReportModeAperiodic_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_CQI_ReportModeAperiodic_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_CQI_ReportModeAperiodic = {
	"CQI-ReportModeAperiodic",
	"CQI-ReportModeAperiodic",
	&asn_OP_NativeEnumerated,
	asn_DEF_CQI_ReportModeAperiodic_tags_1,
	sizeof(asn_DEF_CQI_ReportModeAperiodic_tags_1)
		/sizeof(asn_DEF_CQI_ReportModeAperiodic_tags_1[0]), /* 1 */
	asn_DEF_CQI_ReportModeAperiodic_tags_1,	/* Same as above */
	sizeof(asn_DEF_CQI_ReportModeAperiodic_tags_1)
		/sizeof(asn_DEF_CQI_ReportModeAperiodic_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_CQI_ReportModeAperiodic_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_CQI_ReportModeAperiodic_specs_1	/* Additional specs */
};

