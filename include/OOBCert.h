/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXCMP"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_OOBCert_H_
#define	_OOBCert_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Certificate.h"

#ifdef __cplusplus
extern "C" {
#endif

/* OOBCert */
typedef Certificate_t	 OOBCert_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OOBCert;
asn_struct_free_f OOBCert_free;
asn_struct_print_f OOBCert_print;
asn_constr_check_f OOBCert_constraint;
ber_type_decoder_f OOBCert_decode_ber;
der_type_encoder_f OOBCert_encode_der;
xer_type_decoder_f OOBCert_decode_xer;
xer_type_encoder_f OOBCert_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _OOBCert_H_ */
