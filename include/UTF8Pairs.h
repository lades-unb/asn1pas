/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXCRMF"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_UTF8Pairs_H_
#define	_UTF8Pairs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <UTF8String.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UTF8Pairs */
typedef UTF8String_t	 UTF8Pairs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UTF8Pairs;
asn_struct_free_f UTF8Pairs_free;
asn_struct_print_f UTF8Pairs_print;
asn_constr_check_f UTF8Pairs_constraint;
ber_type_decoder_f UTF8Pairs_decode_ber;
der_type_encoder_f UTF8Pairs_encode_der;
xer_type_decoder_f UTF8Pairs_decode_xer;
xer_type_encoder_f UTF8Pairs_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _UTF8Pairs_H_ */
