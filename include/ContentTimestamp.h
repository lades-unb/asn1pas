/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ETS-ElectronicSignatureFormats-88syntax"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_ContentTimestamp_H_
#define	_ContentTimestamp_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TimeStampToken.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ContentTimestamp */
typedef TimeStampToken_t	 ContentTimestamp_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ContentTimestamp;
asn_struct_free_f ContentTimestamp_free;
asn_struct_print_f ContentTimestamp_print;
asn_constr_check_f ContentTimestamp_constraint;
ber_type_decoder_f ContentTimestamp_decode_ber;
der_type_encoder_f ContentTimestamp_encode_der;
xer_type_decoder_f ContentTimestamp_decode_xer;
xer_type_encoder_f ContentTimestamp_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _ContentTimestamp_H_ */
