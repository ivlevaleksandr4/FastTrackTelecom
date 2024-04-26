/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "BCCH-BCH-MessageType-MBMS-r14.h"

/*
 * This type is implemented using MasterInformationBlock_MBMS_r14,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_BCCH_BCH_MessageType_MBMS_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_BCCH_BCH_MessageType_MBMS_r14 = {
	"BCCH-BCH-MessageType-MBMS-r14",
	"BCCH-BCH-MessageType-MBMS-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_BCCH_BCH_MessageType_MBMS_r14_tags_1,
	sizeof(asn_DEF_BCCH_BCH_MessageType_MBMS_r14_tags_1)
		/sizeof(asn_DEF_BCCH_BCH_MessageType_MBMS_r14_tags_1[0]), /* 1 */
	asn_DEF_BCCH_BCH_MessageType_MBMS_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_BCCH_BCH_MessageType_MBMS_r14_tags_1)
		/sizeof(asn_DEF_BCCH_BCH_MessageType_MBMS_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MasterInformationBlock_MBMS_r14_1,
	4,	/* Elements count */
	&asn_SPC_MasterInformationBlock_MBMS_r14_specs_1	/* Additional specs */
};

