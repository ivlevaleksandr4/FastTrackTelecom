/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "SL-DiscConfig-r12.h"

#include "SL-DiscResourcePool-r12.h"
#include "SL-TF-IndexPairList-r12.h"
#include "SL-HoppingConfigDisc-r12.h"
#include "SL-TxPoolToReleaseList-r12.h"
#include "SL-DiscTxPoolToAddModList-r12.h"
#include "SL-DiscTxRefCarrierDedicated-r13.h"
#include "SL-DiscTxInfoInterFreqListAdd-r13.h"
static asn_per_constraints_t asn_PER_type_setup_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_discTxResources_r12_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_discTF_IndexList_v1260_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_setup_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_discTxResourcesPS_r13_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_discTxInterFreqInfo_r13_constr_24 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_discRxGapConfig_r13_constr_31 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_discTxGapConfig_r13_constr_34 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_discSysInfoToReportConfig_r13_constr_37 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_scheduled_r12_5[] = {
	{ ATF_POINTER, 3, offsetof(struct SL_DiscConfig_r12__discTxResources_r12__setup__scheduled_r12, discTxConfig_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_DiscResourcePool_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discTxConfig-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_DiscConfig_r12__discTxResources_r12__setup__scheduled_r12, discTF_IndexList_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_TF_IndexPairList_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discTF-IndexList-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_DiscConfig_r12__discTxResources_r12__setup__scheduled_r12, discHoppingConfig_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_HoppingConfigDisc_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discHoppingConfig-r12"
		},
};
static const int asn_MAP_scheduled_r12_oms_5[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_scheduled_r12_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_scheduled_r12_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* discTxConfig-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* discTF-IndexList-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* discHoppingConfig-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_scheduled_r12_specs_5 = {
	sizeof(struct SL_DiscConfig_r12__discTxResources_r12__setup__scheduled_r12),
	offsetof(struct SL_DiscConfig_r12__discTxResources_r12__setup__scheduled_r12, _asn_ctx),
	asn_MAP_scheduled_r12_tag2el_5,
	3,	/* Count of tags in the map */
	asn_MAP_scheduled_r12_oms_5,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_scheduled_r12_5 = {
	"scheduled-r12",
	"scheduled-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_scheduled_r12_tags_5,
	sizeof(asn_DEF_scheduled_r12_tags_5)
		/sizeof(asn_DEF_scheduled_r12_tags_5[0]) - 1, /* 1 */
	asn_DEF_scheduled_r12_tags_5,	/* Same as above */
	sizeof(asn_DEF_scheduled_r12_tags_5)
		/sizeof(asn_DEF_scheduled_r12_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_scheduled_r12_5,
	3,	/* Elements count */
	&asn_SPC_scheduled_r12_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_discTxPoolDedicated_r12_10[] = {
	{ ATF_POINTER, 2, offsetof(struct SL_DiscConfig_r12__discTxResources_r12__setup__ue_Selected_r12__discTxPoolDedicated_r12, poolToReleaseList_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_TxPoolToReleaseList_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"poolToReleaseList-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_DiscConfig_r12__discTxResources_r12__setup__ue_Selected_r12__discTxPoolDedicated_r12, poolToAddModList_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_DiscTxPoolToAddModList_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"poolToAddModList-r12"
		},
};
static const int asn_MAP_discTxPoolDedicated_r12_oms_10[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_discTxPoolDedicated_r12_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_discTxPoolDedicated_r12_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* poolToReleaseList-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* poolToAddModList-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_discTxPoolDedicated_r12_specs_10 = {
	sizeof(struct SL_DiscConfig_r12__discTxResources_r12__setup__ue_Selected_r12__discTxPoolDedicated_r12),
	offsetof(struct SL_DiscConfig_r12__discTxResources_r12__setup__ue_Selected_r12__discTxPoolDedicated_r12, _asn_ctx),
	asn_MAP_discTxPoolDedicated_r12_tag2el_10,
	2,	/* Count of tags in the map */
	asn_MAP_discTxPoolDedicated_r12_oms_10,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_discTxPoolDedicated_r12_10 = {
	"discTxPoolDedicated-r12",
	"discTxPoolDedicated-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_discTxPoolDedicated_r12_tags_10,
	sizeof(asn_DEF_discTxPoolDedicated_r12_tags_10)
		/sizeof(asn_DEF_discTxPoolDedicated_r12_tags_10[0]) - 1, /* 1 */
	asn_DEF_discTxPoolDedicated_r12_tags_10,	/* Same as above */
	sizeof(asn_DEF_discTxPoolDedicated_r12_tags_10)
		/sizeof(asn_DEF_discTxPoolDedicated_r12_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_discTxPoolDedicated_r12_10,
	2,	/* Elements count */
	&asn_SPC_discTxPoolDedicated_r12_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ue_Selected_r12_9[] = {
	{ ATF_POINTER, 1, offsetof(struct SL_DiscConfig_r12__discTxResources_r12__setup__ue_Selected_r12, discTxPoolDedicated_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_discTxPoolDedicated_r12_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discTxPoolDedicated-r12"
		},
};
static const int asn_MAP_ue_Selected_r12_oms_9[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ue_Selected_r12_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ue_Selected_r12_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* discTxPoolDedicated-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ue_Selected_r12_specs_9 = {
	sizeof(struct SL_DiscConfig_r12__discTxResources_r12__setup__ue_Selected_r12),
	offsetof(struct SL_DiscConfig_r12__discTxResources_r12__setup__ue_Selected_r12, _asn_ctx),
	asn_MAP_ue_Selected_r12_tag2el_9,
	1,	/* Count of tags in the map */
	asn_MAP_ue_Selected_r12_oms_9,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ue_Selected_r12_9 = {
	"ue-Selected-r12",
	"ue-Selected-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_ue_Selected_r12_tags_9,
	sizeof(asn_DEF_ue_Selected_r12_tags_9)
		/sizeof(asn_DEF_ue_Selected_r12_tags_9[0]) - 1, /* 1 */
	asn_DEF_ue_Selected_r12_tags_9,	/* Same as above */
	sizeof(asn_DEF_ue_Selected_r12_tags_9)
		/sizeof(asn_DEF_ue_Selected_r12_tags_9[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ue_Selected_r12_9,
	1,	/* Elements count */
	&asn_SPC_ue_Selected_r12_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_DiscConfig_r12__discTxResources_r12__setup, choice.scheduled_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_scheduled_r12_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scheduled-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_DiscConfig_r12__discTxResources_r12__setup, choice.ue_Selected_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ue_Selected_r12_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-Selected-r12"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* scheduled-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ue-Selected-r12 */
};
static asn_CHOICE_specifics_t asn_SPC_setup_specs_4 = {
	sizeof(struct SL_DiscConfig_r12__discTxResources_r12__setup),
	offsetof(struct SL_DiscConfig_r12__discTxResources_r12__setup, _asn_ctx),
	offsetof(struct SL_DiscConfig_r12__discTxResources_r12__setup, present),
	sizeof(((struct SL_DiscConfig_r12__discTxResources_r12__setup *)0)->present),
	asn_MAP_setup_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_4 = {
	"setup",
	"setup",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_setup_constr_4, CHOICE_constraint },
	asn_MBR_setup_4,
	2,	/* Elements count */
	&asn_SPC_setup_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_discTxResources_r12_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_DiscConfig_r12__discTxResources_r12, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_DiscConfig_r12__discTxResources_r12, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_setup_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_discTxResources_r12_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_discTxResources_r12_specs_2 = {
	sizeof(struct SL_DiscConfig_r12__discTxResources_r12),
	offsetof(struct SL_DiscConfig_r12__discTxResources_r12, _asn_ctx),
	offsetof(struct SL_DiscConfig_r12__discTxResources_r12, present),
	sizeof(((struct SL_DiscConfig_r12__discTxResources_r12 *)0)->present),
	asn_MAP_discTxResources_r12_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_discTxResources_r12_2 = {
	"discTxResources-r12",
	"discTxResources-r12",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_discTxResources_r12_constr_2, CHOICE_constraint },
	asn_MBR_discTxResources_r12_2,
	2,	/* Elements count */
	&asn_SPC_discTxResources_r12_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_16[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_DiscConfig_r12__discTF_IndexList_v1260__setup, discTF_IndexList_r12b),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_TF_IndexPairList_r12b,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discTF-IndexList-r12b"
		},
};
static const ber_tlv_tag_t asn_DEF_setup_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* discTF-IndexList-r12b */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_16 = {
	sizeof(struct SL_DiscConfig_r12__discTF_IndexList_v1260__setup),
	offsetof(struct SL_DiscConfig_r12__discTF_IndexList_v1260__setup, _asn_ctx),
	asn_MAP_setup_tag2el_16,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_16 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_16,
	sizeof(asn_DEF_setup_tags_16)
		/sizeof(asn_DEF_setup_tags_16[0]) - 1, /* 1 */
	asn_DEF_setup_tags_16,	/* Same as above */
	sizeof(asn_DEF_setup_tags_16)
		/sizeof(asn_DEF_setup_tags_16[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_16,
	1,	/* Elements count */
	&asn_SPC_setup_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_discTF_IndexList_v1260_14[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_DiscConfig_r12__discTF_IndexList_v1260, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_DiscConfig_r12__discTF_IndexList_v1260, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_discTF_IndexList_v1260_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_discTF_IndexList_v1260_specs_14 = {
	sizeof(struct SL_DiscConfig_r12__discTF_IndexList_v1260),
	offsetof(struct SL_DiscConfig_r12__discTF_IndexList_v1260, _asn_ctx),
	offsetof(struct SL_DiscConfig_r12__discTF_IndexList_v1260, present),
	sizeof(((struct SL_DiscConfig_r12__discTF_IndexList_v1260 *)0)->present),
	asn_MAP_discTF_IndexList_v1260_tag2el_14,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_discTF_IndexList_v1260_14 = {
	"discTF-IndexList-v1260",
	"discTF-IndexList-v1260",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_discTF_IndexList_v1260_constr_14, CHOICE_constraint },
	asn_MBR_discTF_IndexList_v1260_14,
	2,	/* Elements count */
	&asn_SPC_discTF_IndexList_v1260_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ue_Selected_r13_22[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_DiscConfig_r12__discTxResourcesPS_r13__setup__ue_Selected_r13, discTxPoolPS_Dedicated_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_DiscTxPoolDedicated_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discTxPoolPS-Dedicated-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_ue_Selected_r13_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ue_Selected_r13_tag2el_22[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* discTxPoolPS-Dedicated-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ue_Selected_r13_specs_22 = {
	sizeof(struct SL_DiscConfig_r12__discTxResourcesPS_r13__setup__ue_Selected_r13),
	offsetof(struct SL_DiscConfig_r12__discTxResourcesPS_r13__setup__ue_Selected_r13, _asn_ctx),
	asn_MAP_ue_Selected_r13_tag2el_22,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ue_Selected_r13_22 = {
	"ue-Selected-r13",
	"ue-Selected-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_ue_Selected_r13_tags_22,
	sizeof(asn_DEF_ue_Selected_r13_tags_22)
		/sizeof(asn_DEF_ue_Selected_r13_tags_22[0]) - 1, /* 1 */
	asn_DEF_ue_Selected_r13_tags_22,	/* Same as above */
	sizeof(asn_DEF_ue_Selected_r13_tags_22)
		/sizeof(asn_DEF_ue_Selected_r13_tags_22[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ue_Selected_r13_22,
	1,	/* Elements count */
	&asn_SPC_ue_Selected_r13_specs_22	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_20[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_DiscConfig_r12__discTxResourcesPS_r13__setup, choice.scheduled_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_DiscTxConfigScheduled_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scheduled-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_DiscConfig_r12__discTxResourcesPS_r13__setup, choice.ue_Selected_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ue_Selected_r13_22,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-Selected-r13"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_20[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* scheduled-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ue-Selected-r13 */
};
static asn_CHOICE_specifics_t asn_SPC_setup_specs_20 = {
	sizeof(struct SL_DiscConfig_r12__discTxResourcesPS_r13__setup),
	offsetof(struct SL_DiscConfig_r12__discTxResourcesPS_r13__setup, _asn_ctx),
	offsetof(struct SL_DiscConfig_r12__discTxResourcesPS_r13__setup, present),
	sizeof(((struct SL_DiscConfig_r12__discTxResourcesPS_r13__setup *)0)->present),
	asn_MAP_setup_tag2el_20,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_20 = {
	"setup",
	"setup",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_setup_constr_20, CHOICE_constraint },
	asn_MBR_setup_20,
	2,	/* Elements count */
	&asn_SPC_setup_specs_20	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_discTxResourcesPS_r13_18[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_DiscConfig_r12__discTxResourcesPS_r13, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_DiscConfig_r12__discTxResourcesPS_r13, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_setup_20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_discTxResourcesPS_r13_tag2el_18[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_discTxResourcesPS_r13_specs_18 = {
	sizeof(struct SL_DiscConfig_r12__discTxResourcesPS_r13),
	offsetof(struct SL_DiscConfig_r12__discTxResourcesPS_r13, _asn_ctx),
	offsetof(struct SL_DiscConfig_r12__discTxResourcesPS_r13, present),
	sizeof(((struct SL_DiscConfig_r12__discTxResourcesPS_r13 *)0)->present),
	asn_MAP_discTxResourcesPS_r13_tag2el_18,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_discTxResourcesPS_r13_18 = {
	"discTxResourcesPS-r13",
	"discTxResourcesPS-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_discTxResourcesPS_r13_constr_18, CHOICE_constraint },
	asn_MBR_discTxResourcesPS_r13_18,
	2,	/* Elements count */
	&asn_SPC_discTxResourcesPS_r13_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_26[] = {
	{ ATF_POINTER, 3, offsetof(struct SL_DiscConfig_r12__discTxInterFreqInfo_r13__setup, discTxCarrierFreq_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discTxCarrierFreq-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_DiscConfig_r12__discTxInterFreqInfo_r13__setup, discTxRefCarrierDedicated_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SL_DiscTxRefCarrierDedicated_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discTxRefCarrierDedicated-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_DiscConfig_r12__discTxInterFreqInfo_r13__setup, discTxInfoInterFreqListAdd_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_DiscTxInfoInterFreqListAdd_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discTxInfoInterFreqListAdd-r13"
		},
};
static const int asn_MAP_setup_oms_26[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_setup_tags_26[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_26[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* discTxCarrierFreq-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* discTxRefCarrierDedicated-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* discTxInfoInterFreqListAdd-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_26 = {
	sizeof(struct SL_DiscConfig_r12__discTxInterFreqInfo_r13__setup),
	offsetof(struct SL_DiscConfig_r12__discTxInterFreqInfo_r13__setup, _asn_ctx),
	asn_MAP_setup_tag2el_26,
	3,	/* Count of tags in the map */
	asn_MAP_setup_oms_26,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_26 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_26,
	sizeof(asn_DEF_setup_tags_26)
		/sizeof(asn_DEF_setup_tags_26[0]) - 1, /* 1 */
	asn_DEF_setup_tags_26,	/* Same as above */
	sizeof(asn_DEF_setup_tags_26)
		/sizeof(asn_DEF_setup_tags_26[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_26,
	3,	/* Elements count */
	&asn_SPC_setup_specs_26	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_discTxInterFreqInfo_r13_24[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_DiscConfig_r12__discTxInterFreqInfo_r13, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_DiscConfig_r12__discTxInterFreqInfo_r13, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_26,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_discTxInterFreqInfo_r13_tag2el_24[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_discTxInterFreqInfo_r13_specs_24 = {
	sizeof(struct SL_DiscConfig_r12__discTxInterFreqInfo_r13),
	offsetof(struct SL_DiscConfig_r12__discTxInterFreqInfo_r13, _asn_ctx),
	offsetof(struct SL_DiscConfig_r12__discTxInterFreqInfo_r13, present),
	sizeof(((struct SL_DiscConfig_r12__discTxInterFreqInfo_r13 *)0)->present),
	asn_MAP_discTxInterFreqInfo_r13_tag2el_24,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_discTxInterFreqInfo_r13_24 = {
	"discTxInterFreqInfo-r13",
	"discTxInterFreqInfo-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_discTxInterFreqInfo_r13_constr_24, CHOICE_constraint },
	asn_MBR_discTxInterFreqInfo_r13_24,
	2,	/* Elements count */
	&asn_SPC_discTxInterFreqInfo_r13_specs_24	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_discRxGapConfig_r13_31[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_DiscConfig_r12__discRxGapConfig_r13, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_DiscConfig_r12__discRxGapConfig_r13, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_GapConfig_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_discRxGapConfig_r13_tag2el_31[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_discRxGapConfig_r13_specs_31 = {
	sizeof(struct SL_DiscConfig_r12__discRxGapConfig_r13),
	offsetof(struct SL_DiscConfig_r12__discRxGapConfig_r13, _asn_ctx),
	offsetof(struct SL_DiscConfig_r12__discRxGapConfig_r13, present),
	sizeof(((struct SL_DiscConfig_r12__discRxGapConfig_r13 *)0)->present),
	asn_MAP_discRxGapConfig_r13_tag2el_31,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_discRxGapConfig_r13_31 = {
	"discRxGapConfig-r13",
	"discRxGapConfig-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_discRxGapConfig_r13_constr_31, CHOICE_constraint },
	asn_MBR_discRxGapConfig_r13_31,
	2,	/* Elements count */
	&asn_SPC_discRxGapConfig_r13_specs_31	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_discTxGapConfig_r13_34[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_DiscConfig_r12__discTxGapConfig_r13, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_DiscConfig_r12__discTxGapConfig_r13, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_GapConfig_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_discTxGapConfig_r13_tag2el_34[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_discTxGapConfig_r13_specs_34 = {
	sizeof(struct SL_DiscConfig_r12__discTxGapConfig_r13),
	offsetof(struct SL_DiscConfig_r12__discTxGapConfig_r13, _asn_ctx),
	offsetof(struct SL_DiscConfig_r12__discTxGapConfig_r13, present),
	sizeof(((struct SL_DiscConfig_r12__discTxGapConfig_r13 *)0)->present),
	asn_MAP_discTxGapConfig_r13_tag2el_34,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_discTxGapConfig_r13_34 = {
	"discTxGapConfig-r13",
	"discTxGapConfig-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_discTxGapConfig_r13_constr_34, CHOICE_constraint },
	asn_MBR_discTxGapConfig_r13_34,
	2,	/* Elements count */
	&asn_SPC_discTxGapConfig_r13_specs_34	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_discSysInfoToReportConfig_r13_37[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_DiscConfig_r12__discSysInfoToReportConfig_r13, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_DiscConfig_r12__discSysInfoToReportConfig_r13, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_DiscSysInfoToReportFreqList_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_discSysInfoToReportConfig_r13_tag2el_37[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_discSysInfoToReportConfig_r13_specs_37 = {
	sizeof(struct SL_DiscConfig_r12__discSysInfoToReportConfig_r13),
	offsetof(struct SL_DiscConfig_r12__discSysInfoToReportConfig_r13, _asn_ctx),
	offsetof(struct SL_DiscConfig_r12__discSysInfoToReportConfig_r13, present),
	sizeof(((struct SL_DiscConfig_r12__discSysInfoToReportConfig_r13 *)0)->present),
	asn_MAP_discSysInfoToReportConfig_r13_tag2el_37,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_discSysInfoToReportConfig_r13_37 = {
	"discSysInfoToReportConfig-r13",
	"discSysInfoToReportConfig-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_discSysInfoToReportConfig_r13_constr_37, CHOICE_constraint },
	asn_MBR_discSysInfoToReportConfig_r13_37,
	2,	/* Elements count */
	&asn_SPC_discSysInfoToReportConfig_r13_specs_37	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_DiscConfig_r12_1[] = {
	{ ATF_POINTER, 8, offsetof(struct SL_DiscConfig_r12, discTxResources_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_discTxResources_r12_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discTxResources-r12"
		},
	{ ATF_POINTER, 7, offsetof(struct SL_DiscConfig_r12, discTF_IndexList_v1260),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_discTF_IndexList_v1260_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discTF-IndexList-v1260"
		},
	{ ATF_POINTER, 6, offsetof(struct SL_DiscConfig_r12, discTxResourcesPS_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_discTxResourcesPS_r13_18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discTxResourcesPS-r13"
		},
	{ ATF_POINTER, 5, offsetof(struct SL_DiscConfig_r12, discTxInterFreqInfo_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_discTxInterFreqInfo_r13_24,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discTxInterFreqInfo-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct SL_DiscConfig_r12, gapRequestsAllowedDedicated_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gapRequestsAllowedDedicated-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct SL_DiscConfig_r12, discRxGapConfig_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_discRxGapConfig_r13_31,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discRxGapConfig-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_DiscConfig_r12, discTxGapConfig_r13),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_discTxGapConfig_r13_34,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discTxGapConfig-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_DiscConfig_r12, discSysInfoToReportConfig_r13),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_discSysInfoToReportConfig_r13_37,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discSysInfoToReportConfig-r13"
		},
};
static const int asn_MAP_SL_DiscConfig_r12_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_SL_DiscConfig_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_DiscConfig_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* discTxResources-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* discTF-IndexList-v1260 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* discTxResourcesPS-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* discTxInterFreqInfo-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* gapRequestsAllowedDedicated-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* discRxGapConfig-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* discTxGapConfig-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* discSysInfoToReportConfig-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_DiscConfig_r12_specs_1 = {
	sizeof(struct SL_DiscConfig_r12),
	offsetof(struct SL_DiscConfig_r12, _asn_ctx),
	asn_MAP_SL_DiscConfig_r12_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_SL_DiscConfig_r12_oms_1,	/* Optional members */
	1, 7,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_DiscConfig_r12 = {
	"SL-DiscConfig-r12",
	"SL-DiscConfig-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_DiscConfig_r12_tags_1,
	sizeof(asn_DEF_SL_DiscConfig_r12_tags_1)
		/sizeof(asn_DEF_SL_DiscConfig_r12_tags_1[0]), /* 1 */
	asn_DEF_SL_DiscConfig_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_DiscConfig_r12_tags_1)
		/sizeof(asn_DEF_SL_DiscConfig_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_DiscConfig_r12_1,
	8,	/* Elements count */
	&asn_SPC_SL_DiscConfig_r12_specs_1	/* Additional specs */
};

