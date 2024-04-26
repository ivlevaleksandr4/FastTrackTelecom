/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "MasterInformationBlock-NB.h"

static int
memb_systemFrameNumber_MSB_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 4)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_hyperSFN_LSB_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 2)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_schedulingInfoSIB1_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_systemInfoValueTag_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_spare_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 10)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_operationModeInfo_r13_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_systemFrameNumber_MSB_r13_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_hyperSFN_LSB_r13_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_schedulingInfoSIB1_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_systemInfoValueTag_r13_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_spare_constr_13 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_operationModeInfo_r13_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_NB__operationModeInfo_r13, choice.inband_SamePCI_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Inband_SamePCI_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"inband-SamePCI-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_NB__operationModeInfo_r13, choice.inband_DifferentPCI_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Inband_DifferentPCI_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"inband-DifferentPCI-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_NB__operationModeInfo_r13, choice.guardband_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Guardband_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"guardband-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_NB__operationModeInfo_r13, choice.standalone_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Standalone_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"standalone-r13"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_operationModeInfo_r13_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* inband-SamePCI-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* inband-DifferentPCI-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* guardband-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* standalone-r13 */
};
static asn_CHOICE_specifics_t asn_SPC_operationModeInfo_r13_specs_7 = {
	sizeof(struct MasterInformationBlock_NB__operationModeInfo_r13),
	offsetof(struct MasterInformationBlock_NB__operationModeInfo_r13, _asn_ctx),
	offsetof(struct MasterInformationBlock_NB__operationModeInfo_r13, present),
	sizeof(((struct MasterInformationBlock_NB__operationModeInfo_r13 *)0)->present),
	asn_MAP_operationModeInfo_r13_tag2el_7,
	4,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_operationModeInfo_r13_7 = {
	"operationModeInfo-r13",
	"operationModeInfo-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_operationModeInfo_r13_constr_7, CHOICE_constraint },
	asn_MBR_operationModeInfo_r13_7,
	4,	/* Elements count */
	&asn_SPC_operationModeInfo_r13_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MasterInformationBlock_NB_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_NB, systemFrameNumber_MSB_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_systemFrameNumber_MSB_r13_constr_2,  memb_systemFrameNumber_MSB_r13_constraint_1 },
		0, 0, /* No default value */
		"systemFrameNumber-MSB-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_NB, hyperSFN_LSB_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_hyperSFN_LSB_r13_constr_3,  memb_hyperSFN_LSB_r13_constraint_1 },
		0, 0, /* No default value */
		"hyperSFN-LSB-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_NB, schedulingInfoSIB1_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_schedulingInfoSIB1_r13_constr_4,  memb_schedulingInfoSIB1_r13_constraint_1 },
		0, 0, /* No default value */
		"schedulingInfoSIB1-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_NB, systemInfoValueTag_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_systemInfoValueTag_r13_constr_5,  memb_systemInfoValueTag_r13_constraint_1 },
		0, 0, /* No default value */
		"systemInfoValueTag-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_NB, ab_Enabled_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ab-Enabled-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_NB, operationModeInfo_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_operationModeInfo_r13_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"operationModeInfo-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_NB, additionalTransmissionSIB1_r15),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"additionalTransmissionSIB1-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_NB, spare),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_spare_constr_13,  memb_spare_constraint_1 },
		0, 0, /* No default value */
		"spare"
		},
};
static const ber_tlv_tag_t asn_DEF_MasterInformationBlock_NB_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MasterInformationBlock_NB_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* systemFrameNumber-MSB-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* hyperSFN-LSB-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* schedulingInfoSIB1-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* systemInfoValueTag-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ab-Enabled-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* operationModeInfo-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* additionalTransmissionSIB1-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* spare */
};
asn_SEQUENCE_specifics_t asn_SPC_MasterInformationBlock_NB_specs_1 = {
	sizeof(struct MasterInformationBlock_NB),
	offsetof(struct MasterInformationBlock_NB, _asn_ctx),
	asn_MAP_MasterInformationBlock_NB_tag2el_1,
	8,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MasterInformationBlock_NB = {
	"MasterInformationBlock-NB",
	"MasterInformationBlock-NB",
	&asn_OP_SEQUENCE,
	asn_DEF_MasterInformationBlock_NB_tags_1,
	sizeof(asn_DEF_MasterInformationBlock_NB_tags_1)
		/sizeof(asn_DEF_MasterInformationBlock_NB_tags_1[0]), /* 1 */
	asn_DEF_MasterInformationBlock_NB_tags_1,	/* Same as above */
	sizeof(asn_DEF_MasterInformationBlock_NB_tags_1)
		/sizeof(asn_DEF_MasterInformationBlock_NB_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MasterInformationBlock_NB_1,
	8,	/* Elements count */
	&asn_SPC_MasterInformationBlock_NB_specs_1	/* Additional specs */
};

