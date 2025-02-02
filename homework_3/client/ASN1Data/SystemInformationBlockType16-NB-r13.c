/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "SystemInformationBlockType16-NB-r13.h"

/*
 * This type is implemented using SystemInformationBlockType16_r11,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType16_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType16_NB_r13 = {
	"SystemInformationBlockType16-NB-r13",
	"SystemInformationBlockType16-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType16_NB_r13_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType16_NB_r13_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType16_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType16_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType16_NB_r13_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType16_NB_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformationBlockType16_r11_1,
	3,	/* Elements count */
	&asn_SPC_SystemInformationBlockType16_r11_specs_1	/* Additional specs */
};

