/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#include "PhysCellIdNR-r15.h"

int
PhysCellIdNR_r15_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1007)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_PhysCellIdNR_r15_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1007 }	/* (0..1007) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_PhysCellIdNR_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_PhysCellIdNR_r15 = {
	"PhysCellIdNR-r15",
	"PhysCellIdNR-r15",
	&asn_OP_NativeInteger,
	asn_DEF_PhysCellIdNR_r15_tags_1,
	sizeof(asn_DEF_PhysCellIdNR_r15_tags_1)
		/sizeof(asn_DEF_PhysCellIdNR_r15_tags_1[0]), /* 1 */
	asn_DEF_PhysCellIdNR_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_PhysCellIdNR_r15_tags_1)
		/sizeof(asn_DEF_PhysCellIdNR_r15_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_PhysCellIdNR_r15_constr_1, PhysCellIdNR_r15_constraint },
	0, 0,	/* No members */
	0	/* No specifics */
};

