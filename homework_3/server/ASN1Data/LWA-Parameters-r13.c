/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "LWA-Parameters-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_wlan_MAC_Address_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 6)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_lwa_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_lwa_SplitBearer_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_lwa_BufferSize_r13_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_wlan_MAC_Address_r13_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  6,  6 }	/* (SIZE(6..6)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_lwa_r13_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_lwa_r13_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_lwa_r13_specs_2 = {
	asn_MAP_lwa_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_lwa_r13_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_lwa_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_lwa_r13_2 = {
	"lwa-r13",
	"lwa-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_lwa_r13_tags_2,
	sizeof(asn_DEF_lwa_r13_tags_2)
		/sizeof(asn_DEF_lwa_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_lwa_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_lwa_r13_tags_2)
		/sizeof(asn_DEF_lwa_r13_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_lwa_r13_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_lwa_r13_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_lwa_SplitBearer_r13_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_lwa_SplitBearer_r13_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_lwa_SplitBearer_r13_specs_4 = {
	asn_MAP_lwa_SplitBearer_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_lwa_SplitBearer_r13_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_lwa_SplitBearer_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_lwa_SplitBearer_r13_4 = {
	"lwa-SplitBearer-r13",
	"lwa-SplitBearer-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_lwa_SplitBearer_r13_tags_4,
	sizeof(asn_DEF_lwa_SplitBearer_r13_tags_4)
		/sizeof(asn_DEF_lwa_SplitBearer_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_lwa_SplitBearer_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_lwa_SplitBearer_r13_tags_4)
		/sizeof(asn_DEF_lwa_SplitBearer_r13_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_lwa_SplitBearer_r13_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_lwa_SplitBearer_r13_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_lwa_BufferSize_r13_value2enum_7[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_lwa_BufferSize_r13_enum2value_7[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_lwa_BufferSize_r13_specs_7 = {
	asn_MAP_lwa_BufferSize_r13_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_lwa_BufferSize_r13_enum2value_7,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_lwa_BufferSize_r13_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_lwa_BufferSize_r13_7 = {
	"lwa-BufferSize-r13",
	"lwa-BufferSize-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_lwa_BufferSize_r13_tags_7,
	sizeof(asn_DEF_lwa_BufferSize_r13_tags_7)
		/sizeof(asn_DEF_lwa_BufferSize_r13_tags_7[0]) - 1, /* 1 */
	asn_DEF_lwa_BufferSize_r13_tags_7,	/* Same as above */
	sizeof(asn_DEF_lwa_BufferSize_r13_tags_7)
		/sizeof(asn_DEF_lwa_BufferSize_r13_tags_7[0]), /* 2 */
	{ 0, &asn_PER_type_lwa_BufferSize_r13_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_lwa_BufferSize_r13_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LWA_Parameters_r13_1[] = {
	{ ATF_POINTER, 4, offsetof(struct LWA_Parameters_r13, lwa_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_lwa_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lwa-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct LWA_Parameters_r13, lwa_SplitBearer_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_lwa_SplitBearer_r13_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lwa-SplitBearer-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LWA_Parameters_r13, wlan_MAC_Address_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_wlan_MAC_Address_r13_constr_6,  memb_wlan_MAC_Address_r13_constraint_1 },
		0, 0, /* No default value */
		"wlan-MAC-Address-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LWA_Parameters_r13, lwa_BufferSize_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_lwa_BufferSize_r13_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lwa-BufferSize-r13"
		},
};
static const int asn_MAP_LWA_Parameters_r13_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_LWA_Parameters_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LWA_Parameters_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* lwa-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lwa-SplitBearer-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* wlan-MAC-Address-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* lwa-BufferSize-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_LWA_Parameters_r13_specs_1 = {
	sizeof(struct LWA_Parameters_r13),
	offsetof(struct LWA_Parameters_r13, _asn_ctx),
	asn_MAP_LWA_Parameters_r13_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LWA_Parameters_r13_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LWA_Parameters_r13 = {
	"LWA-Parameters-r13",
	"LWA-Parameters-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LWA_Parameters_r13_tags_1,
	sizeof(asn_DEF_LWA_Parameters_r13_tags_1)
		/sizeof(asn_DEF_LWA_Parameters_r13_tags_1[0]), /* 1 */
	asn_DEF_LWA_Parameters_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LWA_Parameters_r13_tags_1)
		/sizeof(asn_DEF_LWA_Parameters_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LWA_Parameters_r13_1,
	4,	/* Elements count */
	&asn_SPC_LWA_Parameters_r13_specs_1	/* Additional specs */
};

