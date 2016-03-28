/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "CryptographicMessageSyntax2004"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_KeyDerivationAlgorithmIdentifier_H_
#define	_KeyDerivationAlgorithmIdentifier_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AlgorithmIdentifier.h"

#ifdef __cplusplus
extern "C" {
#endif

/* KeyDerivationAlgorithmIdentifier */
typedef AlgorithmIdentifier_t	 KeyDerivationAlgorithmIdentifier_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_KeyDerivationAlgorithmIdentifier;
asn_struct_free_f KeyDerivationAlgorithmIdentifier_free;
asn_struct_print_f KeyDerivationAlgorithmIdentifier_print;
asn_constr_check_f KeyDerivationAlgorithmIdentifier_constraint;
ber_type_decoder_f KeyDerivationAlgorithmIdentifier_decode_ber;
der_type_encoder_f KeyDerivationAlgorithmIdentifier_encode_der;
xer_type_decoder_f KeyDerivationAlgorithmIdentifier_decode_xer;
xer_type_encoder_f KeyDerivationAlgorithmIdentifier_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _KeyDerivationAlgorithmIdentifier_H_ */
