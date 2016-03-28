/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXAttributeCertificate"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_ClassList_H_
#define	_ClassList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ClassList {
	ClassList_unmarked	= 0,
	ClassList_unclassified	= 1,
	ClassList_restricted	= 2,
	ClassList_confidential	= 3,
	ClassList_secret	= 4,
	ClassList_topSecret	= 5
} e_ClassList;

/* ClassList */
typedef BIT_STRING_t	 ClassList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ClassList;
asn_struct_free_f ClassList_free;
asn_struct_print_f ClassList_print;
asn_constr_check_f ClassList_constraint;
ber_type_decoder_f ClassList_decode_ber;
der_type_encoder_f ClassList_encode_der;
xer_type_decoder_f ClassList_decode_xer;
xer_type_encoder_f ClassList_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _ClassList_H_ */
