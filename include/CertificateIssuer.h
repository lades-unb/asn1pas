/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_CertificateIssuer_H_
#define	_CertificateIssuer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GeneralNames.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CertificateIssuer */
typedef GeneralNames_t	 CertificateIssuer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CertificateIssuer;
asn_struct_free_f CertificateIssuer_free;
asn_struct_print_f CertificateIssuer_print;
asn_constr_check_f CertificateIssuer_constraint;
ber_type_decoder_f CertificateIssuer_decode_ber;
der_type_encoder_f CertificateIssuer_encode_der;
xer_type_decoder_f CertificateIssuer_decode_xer;
xer_type_encoder_f CertificateIssuer_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _CertificateIssuer_H_ */
