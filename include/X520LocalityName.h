/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_X520LocalityName_H_
#define	_X520LocalityName_H_


#include <asn_application.h>

/* Including external dependencies */
#include <TeletexString.h>
#include <PrintableString.h>
#include <UniversalString.h>
#include <UTF8String.h>
#include <BMPString.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X520LocalityName_PR {
	X520LocalityName_PR_NOTHING,	/* No components present */
	X520LocalityName_PR_teletexString,
	X520LocalityName_PR_printableString,
	X520LocalityName_PR_universalString,
	X520LocalityName_PR_utf8String,
	X520LocalityName_PR_bmpString
} X520LocalityName_PR;

/* X520LocalityName */
typedef struct X520LocalityName {
	X520LocalityName_PR present;
	union X520LocalityName_u {
		TeletexString_t	 teletexString;
		PrintableString_t	 printableString;
		UniversalString_t	 universalString;
		UTF8String_t	 utf8String;
		BMPString_t	 bmpString;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X520LocalityName_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X520LocalityName;

#ifdef __cplusplus
}
#endif

#endif	/* _X520LocalityName_H_ */
