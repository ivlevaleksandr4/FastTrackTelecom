/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "SystemInformationBlockType14-NB-r13.h"

#include "AB-ConfigPLMN-NB-r13.h"
static int
memb_ab_PerPLMN_List_r13_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 6)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_ab_PerPLMN_List_r13_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  6 }	/* (SIZE(1..6)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ab_PerPLMN_List_r13_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  6 }	/* (SIZE(1..6)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ab_Param_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ab_PerNRSRP_r15_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ab_PerPLMN_List_r13_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_AB_ConfigPLMN_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ab_PerPLMN_List_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ab_PerPLMN_List_r13_specs_4 = {
	sizeof(struct SystemInformationBlockType14_NB_r13__ab_Param_r13__ab_PerPLMN_List_r13),
	offsetof(struct SystemInformationBlockType14_NB_r13__ab_Param_r13__ab_PerPLMN_List_r13, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ab_PerPLMN_List_r13_4 = {
	"ab-PerPLMN-List-r13",
	"ab-PerPLMN-List-r13",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ab_PerPLMN_List_r13_tags_4,
	sizeof(asn_DEF_ab_PerPLMN_List_r13_tags_4)
		/sizeof(asn_DEF_ab_PerPLMN_List_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_ab_PerPLMN_List_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_ab_PerPLMN_List_r13_tags_4)
		/sizeof(asn_DEF_ab_PerPLMN_List_r13_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_ab_PerPLMN_List_r13_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_ab_PerPLMN_List_r13_4,
	1,	/* Single element */
	&asn_SPC_ab_PerPLMN_List_r13_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ab_Param_r13_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType14_NB_r13__ab_Param_r13, choice.ab_Common_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AB_Config_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ab-Common-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType14_NB_r13__ab_Param_r13, choice.ab_PerPLMN_List_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ab_PerPLMN_List_r13_4,
		0,
		{ 0, &asn_PER_memb_ab_PerPLMN_List_r13_constr_4,  memb_ab_PerPLMN_List_r13_constraint_2 },
		0, 0, /* No default value */
		"ab-PerPLMN-List-r13"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ab_Param_r13_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ab-Common-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ab-PerPLMN-List-r13 */
};
static asn_CHOICE_specifics_t asn_SPC_ab_Param_r13_specs_2 = {
	sizeof(struct SystemInformationBlockType14_NB_r13__ab_Param_r13),
	offsetof(struct SystemInformationBlockType14_NB_r13__ab_Param_r13, _asn_ctx),
	offsetof(struct SystemInformationBlockType14_NB_r13__ab_Param_r13, present),
	sizeof(((struct SystemInformationBlockType14_NB_r13__ab_Param_r13 *)0)->present),
	asn_MAP_ab_Param_r13_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ab_Param_r13_2 = {
	"ab-Param-r13",
	"ab-Param-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_ab_Param_r13_constr_2, CHOICE_constraint },
	asn_MBR_ab_Param_r13_2,
	2,	/* Elements count */
	&asn_SPC_ab_Param_r13_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ab_PerNRSRP_r15_value2enum_8[] = {
	{ 0,	7,	"thresh1" },
	{ 1,	7,	"thresh2" }
};
static const unsigned int asn_MAP_ab_PerNRSRP_r15_enum2value_8[] = {
	0,	/* thresh1(0) */
	1	/* thresh2(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_ab_PerNRSRP_r15_specs_8 = {
	asn_MAP_ab_PerNRSRP_r15_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_ab_PerNRSRP_r15_enum2value_8,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ab_PerNRSRP_r15_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ab_PerNRSRP_r15_8 = {
	"ab-PerNRSRP-r15",
	"ab-PerNRSRP-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_ab_PerNRSRP_r15_tags_8,
	sizeof(asn_DEF_ab_PerNRSRP_r15_tags_8)
		/sizeof(asn_DEF_ab_PerNRSRP_r15_tags_8[0]) - 1, /* 1 */
	asn_DEF_ab_PerNRSRP_r15_tags_8,	/* Same as above */
	sizeof(asn_DEF_ab_PerNRSRP_r15_tags_8)
		/sizeof(asn_DEF_ab_PerNRSRP_r15_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_ab_PerNRSRP_r15_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ab_PerNRSRP_r15_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SystemInformationBlockType14_NB_r13_1[] = {
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType14_NB_r13, ab_Param_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ab_Param_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ab-Param-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType14_NB_r13, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType14_NB_r13, ab_PerNRSRP_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ab_PerNRSRP_r15_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ab-PerNRSRP-r15"
		},
};
static const int asn_MAP_SystemInformationBlockType14_NB_r13_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType14_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType14_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ab-Param-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ab-PerNRSRP-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType14_NB_r13_specs_1 = {
	sizeof(struct SystemInformationBlockType14_NB_r13),
	offsetof(struct SystemInformationBlockType14_NB_r13, _asn_ctx),
	asn_MAP_SystemInformationBlockType14_NB_r13_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType14_NB_r13_oms_1,	/* Optional members */
	2, 1,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType14_NB_r13 = {
	"SystemInformationBlockType14-NB-r13",
	"SystemInformationBlockType14-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType14_NB_r13_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType14_NB_r13_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType14_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType14_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType14_NB_r13_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType14_NB_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformationBlockType14_NB_r13_1,
	3,	/* Elements count */
	&asn_SPC_SystemInformationBlockType14_NB_r13_specs_1	/* Additional specs */
};

