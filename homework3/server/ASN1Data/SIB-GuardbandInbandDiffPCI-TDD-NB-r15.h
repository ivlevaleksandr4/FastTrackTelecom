/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "RRC.asn1"
 * 	`asn1c -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps`
 */

#ifndef	_SIB_GuardbandInbandDiffPCI_TDD_NB_r15_H_
#define	_SIB_GuardbandInbandDiffPCI_TDD_NB_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SIB_GuardbandInbandDiffPCI_TDD_NB_r15__sib_EUTRA_NumCRS_Ports_r15 {
	SIB_GuardbandInbandDiffPCI_TDD_NB_r15__sib_EUTRA_NumCRS_Ports_r15_same	= 0,
	SIB_GuardbandInbandDiffPCI_TDD_NB_r15__sib_EUTRA_NumCRS_Ports_r15_four	= 1
} e_SIB_GuardbandInbandDiffPCI_TDD_NB_r15__sib_EUTRA_NumCRS_Ports_r15;

/* SIB-GuardbandInbandDiffPCI-TDD-NB-r15 */
typedef struct SIB_GuardbandInbandDiffPCI_TDD_NB_r15 {
	long	 sib_EUTRA_NumCRS_Ports_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SIB_GuardbandInbandDiffPCI_TDD_NB_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_sib_EUTRA_NumCRS_Ports_r15_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SIB_GuardbandInbandDiffPCI_TDD_NB_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_SIB_GuardbandInbandDiffPCI_TDD_NB_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_SIB_GuardbandInbandDiffPCI_TDD_NB_r15_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _SIB_GuardbandInbandDiffPCI_TDD_NB_r15_H_ */
#include <asn_internal.h>
