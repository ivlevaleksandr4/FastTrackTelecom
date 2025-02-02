/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "MeasResultSCG-FailureMRDC-r15.h"

static asn_TYPE_member_t asn_MBR_MeasResultSCG_FailureMRDC_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultSCG_FailureMRDC_r15, measResultFreqListEUTRA_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultList3EUTRA_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultFreqListEUTRA-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_MeasResultSCG_FailureMRDC_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasResultSCG_FailureMRDC_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* measResultFreqListEUTRA-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MeasResultSCG_FailureMRDC_r15_specs_1 = {
	sizeof(struct MeasResultSCG_FailureMRDC_r15),
	offsetof(struct MeasResultSCG_FailureMRDC_r15, _asn_ctx),
	asn_MAP_MeasResultSCG_FailureMRDC_r15_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasResultSCG_FailureMRDC_r15 = {
	"MeasResultSCG-FailureMRDC-r15",
	"MeasResultSCG-FailureMRDC-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasResultSCG_FailureMRDC_r15_tags_1,
	sizeof(asn_DEF_MeasResultSCG_FailureMRDC_r15_tags_1)
		/sizeof(asn_DEF_MeasResultSCG_FailureMRDC_r15_tags_1[0]), /* 1 */
	asn_DEF_MeasResultSCG_FailureMRDC_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasResultSCG_FailureMRDC_r15_tags_1)
		/sizeof(asn_DEF_MeasResultSCG_FailureMRDC_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasResultSCG_FailureMRDC_r15_1,
	1,	/* Elements count */
	&asn_SPC_MeasResultSCG_FailureMRDC_r15_specs_1	/* Additional specs */
};

