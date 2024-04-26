/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "SC-MTCH-SchedulingInfo-NB-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_sf10_constraint_20(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 9)) {
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
memb_sf20_constraint_20(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 19)) {
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
memb_sf32_constraint_20(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_sf40_constraint_20(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 39)) {
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
memb_sf64_constraint_20(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 63)) {
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
memb_sf80_constraint_20(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 79)) {
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
memb_sf128_constraint_20(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 127)) {
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
memb_sf160_constraint_20(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 159)) {
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
memb_sf256_constraint_20(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
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
memb_sf320_constraint_20(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 319)) {
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
memb_sf512_constraint_20(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 511)) {
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
memb_sf640_constraint_20(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 639)) {
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
memb_sf1024_constraint_20(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
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
memb_sf2048_constraint_20(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 2047)) {
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
memb_sf4096_constraint_20(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 4095)) {
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
memb_sf8192_constraint_20(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 8191)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_onDurationTimerSCPTM_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_drx_InactivityTimerSCPTM_r14_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sf10_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  9 }	/* (0..9) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sf20_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  19 }	/* (0..19) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sf32_constr_23 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sf40_constr_24 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  39 }	/* (0..39) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sf64_constr_25 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sf80_constr_26 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  79 }	/* (0..79) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sf128_constr_27 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  127 }	/* (0..127) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sf160_constr_28 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  159 }	/* (0..159) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sf256_constr_29 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sf320_constr_30 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  319 }	/* (0..319) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sf512_constr_31 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  511 }	/* (0..511) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sf640_constr_32 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  639 }	/* (0..639) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sf1024_constr_33 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sf2048_constr_34 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  2047 }	/* (0..2047) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sf4096_constr_35 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 12,  12,  0,  4095 }	/* (0..4095) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sf8192_constr_36 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 13,  13,  0,  8191 }	/* (0..8191) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_schedulingPeriodStartOffsetSCPTM_r14_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_onDurationTimerSCPTM_r14_value2enum_2[] = {
	{ 0,	3,	"pp1" },
	{ 1,	3,	"pp2" },
	{ 2,	3,	"pp3" },
	{ 3,	3,	"pp4" },
	{ 4,	3,	"pp8" },
	{ 5,	4,	"pp16" },
	{ 6,	4,	"pp32" },
	{ 7,	5,	"spare" }
};
static const unsigned int asn_MAP_onDurationTimerSCPTM_r14_enum2value_2[] = {
	0,	/* pp1(0) */
	5,	/* pp16(5) */
	1,	/* pp2(1) */
	2,	/* pp3(2) */
	6,	/* pp32(6) */
	3,	/* pp4(3) */
	4,	/* pp8(4) */
	7	/* spare(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_onDurationTimerSCPTM_r14_specs_2 = {
	asn_MAP_onDurationTimerSCPTM_r14_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_onDurationTimerSCPTM_r14_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_onDurationTimerSCPTM_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_onDurationTimerSCPTM_r14_2 = {
	"onDurationTimerSCPTM-r14",
	"onDurationTimerSCPTM-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_onDurationTimerSCPTM_r14_tags_2,
	sizeof(asn_DEF_onDurationTimerSCPTM_r14_tags_2)
		/sizeof(asn_DEF_onDurationTimerSCPTM_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_onDurationTimerSCPTM_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_onDurationTimerSCPTM_r14_tags_2)
		/sizeof(asn_DEF_onDurationTimerSCPTM_r14_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_onDurationTimerSCPTM_r14_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_onDurationTimerSCPTM_r14_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_drx_InactivityTimerSCPTM_r14_value2enum_11[] = {
	{ 0,	3,	"pp0" },
	{ 1,	3,	"pp1" },
	{ 2,	3,	"pp2" },
	{ 3,	3,	"pp3" },
	{ 4,	3,	"pp4" },
	{ 5,	3,	"pp8" },
	{ 6,	4,	"pp16" },
	{ 7,	4,	"pp32" }
};
static const unsigned int asn_MAP_drx_InactivityTimerSCPTM_r14_enum2value_11[] = {
	0,	/* pp0(0) */
	1,	/* pp1(1) */
	6,	/* pp16(6) */
	2,	/* pp2(2) */
	3,	/* pp3(3) */
	7,	/* pp32(7) */
	4,	/* pp4(4) */
	5	/* pp8(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_drx_InactivityTimerSCPTM_r14_specs_11 = {
	asn_MAP_drx_InactivityTimerSCPTM_r14_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_drx_InactivityTimerSCPTM_r14_enum2value_11,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_drx_InactivityTimerSCPTM_r14_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_drx_InactivityTimerSCPTM_r14_11 = {
	"drx-InactivityTimerSCPTM-r14",
	"drx-InactivityTimerSCPTM-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_drx_InactivityTimerSCPTM_r14_tags_11,
	sizeof(asn_DEF_drx_InactivityTimerSCPTM_r14_tags_11)
		/sizeof(asn_DEF_drx_InactivityTimerSCPTM_r14_tags_11[0]) - 1, /* 1 */
	asn_DEF_drx_InactivityTimerSCPTM_r14_tags_11,	/* Same as above */
	sizeof(asn_DEF_drx_InactivityTimerSCPTM_r14_tags_11)
		/sizeof(asn_DEF_drx_InactivityTimerSCPTM_r14_tags_11[0]), /* 2 */
	{ 0, &asn_PER_type_drx_InactivityTimerSCPTM_r14_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_drx_InactivityTimerSCPTM_r14_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_schedulingPeriodStartOffsetSCPTM_r14_20[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sf10_constr_21,  memb_sf10_constraint_20 },
		0, 0, /* No default value */
		"sf10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf20),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sf20_constr_22,  memb_sf20_constraint_20 },
		0, 0, /* No default value */
		"sf20"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf32),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sf32_constr_23,  memb_sf32_constraint_20 },
		0, 0, /* No default value */
		"sf32"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf40),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sf40_constr_24,  memb_sf40_constraint_20 },
		0, 0, /* No default value */
		"sf40"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf64),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sf64_constr_25,  memb_sf64_constraint_20 },
		0, 0, /* No default value */
		"sf64"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf80),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sf80_constr_26,  memb_sf80_constraint_20 },
		0, 0, /* No default value */
		"sf80"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf128),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sf128_constr_27,  memb_sf128_constraint_20 },
		0, 0, /* No default value */
		"sf128"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf160),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sf160_constr_28,  memb_sf160_constraint_20 },
		0, 0, /* No default value */
		"sf160"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf256),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sf256_constr_29,  memb_sf256_constraint_20 },
		0, 0, /* No default value */
		"sf256"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf320),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sf320_constr_30,  memb_sf320_constraint_20 },
		0, 0, /* No default value */
		"sf320"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf512),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sf512_constr_31,  memb_sf512_constraint_20 },
		0, 0, /* No default value */
		"sf512"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf640),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sf640_constr_32,  memb_sf640_constraint_20 },
		0, 0, /* No default value */
		"sf640"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf1024),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sf1024_constr_33,  memb_sf1024_constraint_20 },
		0, 0, /* No default value */
		"sf1024"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf2048),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sf2048_constr_34,  memb_sf2048_constraint_20 },
		0, 0, /* No default value */
		"sf2048"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf4096),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sf4096_constr_35,  memb_sf4096_constraint_20 },
		0, 0, /* No default value */
		"sf4096"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf8192),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sf8192_constr_36,  memb_sf8192_constraint_20 },
		0, 0, /* No default value */
		"sf8192"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_schedulingPeriodStartOffsetSCPTM_r14_tag2el_20[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sf10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sf20 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sf32 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sf40 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sf64 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* sf80 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* sf128 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* sf160 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* sf256 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* sf320 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* sf512 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* sf640 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* sf1024 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* sf2048 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* sf4096 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 } /* sf8192 */
};
static asn_CHOICE_specifics_t asn_SPC_schedulingPeriodStartOffsetSCPTM_r14_specs_20 = {
	sizeof(struct SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14),
	offsetof(struct SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14, _asn_ctx),
	offsetof(struct SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14, present),
	sizeof(((struct SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14 *)0)->present),
	asn_MAP_schedulingPeriodStartOffsetSCPTM_r14_tag2el_20,
	16,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_schedulingPeriodStartOffsetSCPTM_r14_20 = {
	"schedulingPeriodStartOffsetSCPTM-r14",
	"schedulingPeriodStartOffsetSCPTM-r14",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_schedulingPeriodStartOffsetSCPTM_r14_constr_20, CHOICE_constraint },
	asn_MBR_schedulingPeriodStartOffsetSCPTM_r14_20,
	16,	/* Elements count */
	&asn_SPC_schedulingPeriodStartOffsetSCPTM_r14_specs_20	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SC_MTCH_SchedulingInfo_NB_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SC_MTCH_SchedulingInfo_NB_r14, onDurationTimerSCPTM_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_onDurationTimerSCPTM_r14_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"onDurationTimerSCPTM-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SC_MTCH_SchedulingInfo_NB_r14, drx_InactivityTimerSCPTM_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_drx_InactivityTimerSCPTM_r14_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drx-InactivityTimerSCPTM-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SC_MTCH_SchedulingInfo_NB_r14, schedulingPeriodStartOffsetSCPTM_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_schedulingPeriodStartOffsetSCPTM_r14_20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"schedulingPeriodStartOffsetSCPTM-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_SC_MTCH_SchedulingInfo_NB_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SC_MTCH_SchedulingInfo_NB_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* onDurationTimerSCPTM-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* drx-InactivityTimerSCPTM-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* schedulingPeriodStartOffsetSCPTM-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_SC_MTCH_SchedulingInfo_NB_r14_specs_1 = {
	sizeof(struct SC_MTCH_SchedulingInfo_NB_r14),
	offsetof(struct SC_MTCH_SchedulingInfo_NB_r14, _asn_ctx),
	asn_MAP_SC_MTCH_SchedulingInfo_NB_r14_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SC_MTCH_SchedulingInfo_NB_r14 = {
	"SC-MTCH-SchedulingInfo-NB-r14",
	"SC-MTCH-SchedulingInfo-NB-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_SC_MTCH_SchedulingInfo_NB_r14_tags_1,
	sizeof(asn_DEF_SC_MTCH_SchedulingInfo_NB_r14_tags_1)
		/sizeof(asn_DEF_SC_MTCH_SchedulingInfo_NB_r14_tags_1[0]), /* 1 */
	asn_DEF_SC_MTCH_SchedulingInfo_NB_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_SC_MTCH_SchedulingInfo_NB_r14_tags_1)
		/sizeof(asn_DEF_SC_MTCH_SchedulingInfo_NB_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SC_MTCH_SchedulingInfo_NB_r14_1,
	3,	/* Elements count */
	&asn_SPC_SC_MTCH_SchedulingInfo_NB_r14_specs_1	/* Additional specs */
};

