/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_TerminalType_H_
#define	_TerminalType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TerminalType {
	TerminalType_telex	= 3,
	TerminalType_teletex	= 4,
	TerminalType_g3_facsimile	= 5,
	TerminalType_g4_facsimile	= 6,
	TerminalType_ia5_terminal	= 7,
	TerminalType_videotex	= 8
} e_TerminalType;

/* TerminalType */
typedef long	 TerminalType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TerminalType;
asn_struct_free_f TerminalType_free;
asn_struct_print_f TerminalType_print;
asn_constr_check_f TerminalType_constraint;
ber_type_decoder_f TerminalType_decode_ber;
der_type_encoder_f TerminalType_encode_der;
xer_type_decoder_f TerminalType_decode_xer;
xer_type_encoder_f TerminalType_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _TerminalType_H_ */
