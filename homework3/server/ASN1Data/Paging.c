/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "Paging.h"

#include "PagingRecordList.h"
#include "Paging-v890-IEs.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_systemInfoModification_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_etws_Indication_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_systemInfoModification_value2enum_3[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_systemInfoModification_enum2value_3[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_systemInfoModification_specs_3 = {
	asn_MAP_systemInfoModification_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_systemInfoModification_enum2value_3,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_systemInfoModification_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_systemInfoModification_3 = {
	"systemInfoModification",
	"systemInfoModification",
	&asn_OP_NativeEnumerated,
	asn_DEF_systemInfoModification_tags_3,
	sizeof(asn_DEF_systemInfoModification_tags_3)
		/sizeof(asn_DEF_systemInfoModification_tags_3[0]) - 1, /* 1 */
	asn_DEF_systemInfoModification_tags_3,	/* Same as above */
	sizeof(asn_DEF_systemInfoModification_tags_3)
		/sizeof(asn_DEF_systemInfoModification_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_systemInfoModification_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_systemInfoModification_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_etws_Indication_value2enum_5[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_etws_Indication_enum2value_5[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_etws_Indication_specs_5 = {
	asn_MAP_etws_Indication_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_etws_Indication_enum2value_5,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_etws_Indication_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_etws_Indication_5 = {
	"etws-Indication",
	"etws-Indication",
	&asn_OP_NativeEnumerated,
	asn_DEF_etws_Indication_tags_5,
	sizeof(asn_DEF_etws_Indication_tags_5)
		/sizeof(asn_DEF_etws_Indication_tags_5[0]) - 1, /* 1 */
	asn_DEF_etws_Indication_tags_5,	/* Same as above */
	sizeof(asn_DEF_etws_Indication_tags_5)
		/sizeof(asn_DEF_etws_Indication_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_etws_Indication_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_etws_Indication_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_Paging_1[] = {
	{ ATF_POINTER, 4, offsetof(struct Paging, pagingRecordList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PagingRecordList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pagingRecordList"
		},
	{ ATF_POINTER, 3, offsetof(struct Paging, systemInfoModification),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_systemInfoModification_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"systemInfoModification"
		},
	{ ATF_POINTER, 2, offsetof(struct Paging, etws_Indication),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_etws_Indication_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"etws-Indication"
		},
	{ ATF_POINTER, 1, offsetof(struct Paging, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Paging_v890_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_Paging_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_Paging_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Paging_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pagingRecordList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* systemInfoModification */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* etws-Indication */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_Paging_specs_1 = {
	sizeof(struct Paging),
	offsetof(struct Paging, _asn_ctx),
	asn_MAP_Paging_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_Paging_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Paging = {
	"Paging",
	"Paging",
	&asn_OP_SEQUENCE,
	asn_DEF_Paging_tags_1,
	sizeof(asn_DEF_Paging_tags_1)
		/sizeof(asn_DEF_Paging_tags_1[0]), /* 1 */
	asn_DEF_Paging_tags_1,	/* Same as above */
	sizeof(asn_DEF_Paging_tags_1)
		/sizeof(asn_DEF_Paging_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Paging_1,
	4,	/* Elements count */
	&asn_SPC_Paging_specs_1	/* Additional specs */
};

