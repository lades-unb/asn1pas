/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "CryptographicMessageSyntax2004"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_SigningTime_H_
#define	_SigningTime_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CMSTime.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SigningTime */
typedef CMSTime_t	 SigningTime_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SigningTime;
asn_struct_free_f SigningTime_free;
asn_struct_print_f SigningTime_print;
asn_constr_check_f SigningTime_constraint;
ber_type_decoder_f SigningTime_decode_ber;
der_type_encoder_f SigningTime_encode_der;
xer_type_decoder_f SigningTime_decode_xer;
xer_type_encoder_f SigningTime_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _SigningTime_H_ */
