/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "CandidateCellInfo-r10.h"

asn_TYPE_member_t asn_MBR_CandidateCellInfo_r10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CandidateCellInfo_r10, physCellId_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CandidateCellInfo_r10, dl_CarrierFreq_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-CarrierFreq-r10"
		},
	{ ATF_POINTER, 5, offsetof(struct CandidateCellInfo_r10, rsrpResult_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrpResult-r10"
		},
	{ ATF_POINTER, 4, offsetof(struct CandidateCellInfo_r10, rsrqResult_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrqResult-r10"
		},
	{ ATF_POINTER, 3, offsetof(struct CandidateCellInfo_r10, dl_CarrierFreq_v1090),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_v9e0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-CarrierFreq-v1090"
		},
	{ ATF_POINTER, 2, offsetof(struct CandidateCellInfo_r10, rsrqResult_v1250),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Range_v1250,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrqResult-v1250"
		},
	{ ATF_POINTER, 1, offsetof(struct CandidateCellInfo_r10, rs_sinr_Result_r13),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RS_SINR_Range_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rs-sinr-Result-r13"
		},
};
static const int asn_MAP_CandidateCellInfo_r10_oms_1[] = { 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_CandidateCellInfo_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CandidateCellInfo_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dl-CarrierFreq-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rsrpResult-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rsrqResult-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* dl-CarrierFreq-v1090 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* rsrqResult-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* rs-sinr-Result-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_CandidateCellInfo_r10_specs_1 = {
	sizeof(struct CandidateCellInfo_r10),
	offsetof(struct CandidateCellInfo_r10, _asn_ctx),
	asn_MAP_CandidateCellInfo_r10_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_CandidateCellInfo_r10_oms_1,	/* Optional members */
	2, 3,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CandidateCellInfo_r10 = {
	"CandidateCellInfo-r10",
	"CandidateCellInfo-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_CandidateCellInfo_r10_tags_1,
	sizeof(asn_DEF_CandidateCellInfo_r10_tags_1)
		/sizeof(asn_DEF_CandidateCellInfo_r10_tags_1[0]), /* 1 */
	asn_DEF_CandidateCellInfo_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_CandidateCellInfo_r10_tags_1)
		/sizeof(asn_DEF_CandidateCellInfo_r10_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CandidateCellInfo_r10_1,
	7,	/* Elements count */
	&asn_SPC_CandidateCellInfo_r10_specs_1	/* Additional specs */
};

