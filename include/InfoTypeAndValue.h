/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXCMP"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_InfoTypeAndValue_H_
#define	_InfoTypeAndValue_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OBJECT_IDENTIFIER.h>
#include <ANY.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* InfoTypeAndValue */
typedef struct InfoTypeAndValue {
	OBJECT_IDENTIFIER_t	 infoType;
	ANY_t	*infoValue	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InfoTypeAndValue_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InfoTypeAndValue;

#ifdef __cplusplus
}
#endif

#endif	/* _InfoTypeAndValue_H_ */
