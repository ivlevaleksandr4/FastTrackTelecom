/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "PhysCellIdRangeUTRA-FDD-r9.h"

static int
memb_range_r9_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2 && value <= 512)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_range_r9_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  2,  512 }	/* (2..512) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_PhysCellIdRangeUTRA_FDD_r9_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PhysCellIdRangeUTRA_FDD_r9, start_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellIdUTRA_FDD,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"start-r9"
		},
	{ ATF_POINTER, 1, offsetof(struct PhysCellIdRangeUTRA_FDD_r9, range_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_range_r9_constr_3,  memb_range_r9_constraint_1 },
		0, 0, /* No default value */
		"range-r9"
		},
};
static const int asn_MAP_PhysCellIdRangeUTRA_FDD_r9_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_PhysCellIdRangeUTRA_FDD_r9_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PhysCellIdRangeUTRA_FDD_r9_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* start-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* range-r9 */
};
asn_SEQUENCE_specifics_t asn_SPC_PhysCellIdRangeUTRA_FDD_r9_specs_1 = {
	sizeof(struct PhysCellIdRangeUTRA_FDD_r9),
	offsetof(struct PhysCellIdRangeUTRA_FDD_r9, _asn_ctx),
	asn_MAP_PhysCellIdRangeUTRA_FDD_r9_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_PhysCellIdRangeUTRA_FDD_r9_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PhysCellIdRangeUTRA_FDD_r9 = {
	"PhysCellIdRangeUTRA-FDD-r9",
	"PhysCellIdRangeUTRA-FDD-r9",
	&asn_OP_SEQUENCE,
	asn_DEF_PhysCellIdRangeUTRA_FDD_r9_tags_1,
	sizeof(asn_DEF_PhysCellIdRangeUTRA_FDD_r9_tags_1)
		/sizeof(asn_DEF_PhysCellIdRangeUTRA_FDD_r9_tags_1[0]), /* 1 */
	asn_DEF_PhysCellIdRangeUTRA_FDD_r9_tags_1,	/* Same as above */
	sizeof(asn_DEF_PhysCellIdRangeUTRA_FDD_r9_tags_1)
		/sizeof(asn_DEF_PhysCellIdRangeUTRA_FDD_r9_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PhysCellIdRangeUTRA_FDD_r9_1,
	2,	/* Elements count */
	&asn_SPC_PhysCellIdRangeUTRA_FDD_r9_specs_1	/* Additional specs */
};

