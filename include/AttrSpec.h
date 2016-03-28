/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXAttributeCertificate"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_AttrSpec_H_
#define	_AttrSpec_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OBJECT_IDENTIFIER.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AttrSpec */
typedef struct AttrSpec {
	A_SEQUENCE_OF(OBJECT_IDENTIFIER_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AttrSpec_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AttrSpec;

#ifdef __cplusplus
}
#endif

#endif	/* _AttrSpec_H_ */
