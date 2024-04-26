/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "RadioResourceConfigDedicatedPSCell-r12.h"

#include "PhysicalConfigDedicated.h"
#include "SPS-Config.h"
#include "NAICS-AssistanceInfo-r12.h"
#include "NeighCellsCRS-Info-r13.h"
#include "SPS-Config-v1430.h"
#include "SPS-Config-v1530.h"
#include "NeighCellsCRS-Info-r15.h"
#include "SPS-Config-v1540.h"
asn_TYPE_member_t asn_MBR_RadioResourceConfigDedicatedPSCell_r12_1[] = {
	{ ATF_POINTER, 9, offsetof(struct RadioResourceConfigDedicatedPSCell_r12, physicalConfigDedicatedPSCell_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysicalConfigDedicated,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physicalConfigDedicatedPSCell-r12"
		},
	{ ATF_POINTER, 8, offsetof(struct RadioResourceConfigDedicatedPSCell_r12, sps_Config_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SPS_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sps-Config-r12"
		},
	{ ATF_POINTER, 7, offsetof(struct RadioResourceConfigDedicatedPSCell_r12, naics_Info_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NAICS_AssistanceInfo_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"naics-Info-r12"
		},
	{ ATF_POINTER, 6, offsetof(struct RadioResourceConfigDedicatedPSCell_r12, neighCellsCRS_InfoPSCell_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NeighCellsCRS_Info_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"neighCellsCRS-InfoPSCell-r13"
		},
	{ ATF_POINTER, 5, offsetof(struct RadioResourceConfigDedicatedPSCell_r12, sps_Config_v1430),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SPS_Config_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sps-Config-v1430"
		},
	{ ATF_POINTER, 4, offsetof(struct RadioResourceConfigDedicatedPSCell_r12, sps_Config_v1530),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SPS_Config_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sps-Config-v1530"
		},
	{ ATF_POINTER, 3, offsetof(struct RadioResourceConfigDedicatedPSCell_r12, crs_IntfMitigEnabled_r15),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"crs-IntfMitigEnabled-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct RadioResourceConfigDedicatedPSCell_r12, neighCellsCRS_Info_r15),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NeighCellsCRS_Info_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"neighCellsCRS-Info-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigDedicatedPSCell_r12, sps_Config_v1540),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SPS_Config_v1540,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sps-Config-v1540"
		},
};
static const int asn_MAP_RadioResourceConfigDedicatedPSCell_r12_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
static const ber_tlv_tag_t asn_DEF_RadioResourceConfigDedicatedPSCell_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RadioResourceConfigDedicatedPSCell_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physicalConfigDedicatedPSCell-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sps-Config-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* naics-Info-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* neighCellsCRS-InfoPSCell-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sps-Config-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* sps-Config-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* crs-IntfMitigEnabled-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* neighCellsCRS-Info-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* sps-Config-v1540 */
};
asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigDedicatedPSCell_r12_specs_1 = {
	sizeof(struct RadioResourceConfigDedicatedPSCell_r12),
	offsetof(struct RadioResourceConfigDedicatedPSCell_r12, _asn_ctx),
	asn_MAP_RadioResourceConfigDedicatedPSCell_r12_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_RadioResourceConfigDedicatedPSCell_r12_oms_1,	/* Optional members */
	3, 6,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigDedicatedPSCell_r12 = {
	"RadioResourceConfigDedicatedPSCell-r12",
	"RadioResourceConfigDedicatedPSCell-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_RadioResourceConfigDedicatedPSCell_r12_tags_1,
	sizeof(asn_DEF_RadioResourceConfigDedicatedPSCell_r12_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigDedicatedPSCell_r12_tags_1[0]), /* 1 */
	asn_DEF_RadioResourceConfigDedicatedPSCell_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_RadioResourceConfigDedicatedPSCell_r12_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigDedicatedPSCell_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RadioResourceConfigDedicatedPSCell_r12_1,
	9,	/* Elements count */
	&asn_SPC_RadioResourceConfigDedicatedPSCell_r12_specs_1	/* Additional specs */
};

