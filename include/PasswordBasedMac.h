/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXCMP"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_PasswordBasedMac_H_
#define	_PasswordBasedMac_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OBJECT_IDENTIFIER.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PasswordBasedMac */
typedef OBJECT_IDENTIFIER_t	 PasswordBasedMac_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PasswordBasedMac;
asn_struct_free_f PasswordBasedMac_free;
asn_struct_print_f PasswordBasedMac_print;
asn_constr_check_f PasswordBasedMac_constraint;
ber_type_decoder_f PasswordBasedMac_decode_ber;
der_type_encoder_f PasswordBasedMac_encode_der;
xer_type_decoder_f PasswordBasedMac_decode_xer;
xer_type_encoder_f PasswordBasedMac_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _PasswordBasedMac_H_ */
