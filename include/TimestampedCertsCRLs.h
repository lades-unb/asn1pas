/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ETS-ElectronicSignatureFormats-88syntax"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_TimestampedCertsCRLs_H_
#define	_TimestampedCertsCRLs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TimeStampToken.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TimestampedCertsCRLs */
typedef TimeStampToken_t	 TimestampedCertsCRLs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TimestampedCertsCRLs;
asn_struct_free_f TimestampedCertsCRLs_free;
asn_struct_print_f TimestampedCertsCRLs_print;
asn_constr_check_f TimestampedCertsCRLs_constraint;
ber_type_decoder_f TimestampedCertsCRLs_decode_ber;
der_type_encoder_f TimestampedCertsCRLs_encode_der;
xer_type_decoder_f TimestampedCertsCRLs_decode_xer;
xer_type_encoder_f TimestampedCertsCRLs_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _TimestampedCertsCRLs_H_ */
