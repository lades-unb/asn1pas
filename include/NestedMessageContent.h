/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXCMP"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_NestedMessageContent_H_
#define	_NestedMessageContent_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PKIMessage.h"

#ifdef __cplusplus
extern "C" {
#endif

/* NestedMessageContent */
typedef PKIMessage_t	 NestedMessageContent_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NestedMessageContent;
asn_struct_free_f NestedMessageContent_free;
asn_struct_print_f NestedMessageContent_print;
asn_constr_check_f NestedMessageContent_constraint;
ber_type_decoder_f NestedMessageContent_decode_ber;
der_type_encoder_f NestedMessageContent_encode_der;
xer_type_decoder_f NestedMessageContent_decode_xer;
xer_type_encoder_f NestedMessageContent_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _NestedMessageContent_H_ */
