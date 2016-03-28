/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "CryptographicMessageSyntax2004"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_UnsignedAttributes_H_
#define	_UnsignedAttributes_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SET_OF.h>
#include <constr_SET_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CMSAttribute;

/* UnsignedAttributes */
typedef struct UnsignedAttributes {
	A_SET_OF(struct CMSAttribute) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UnsignedAttributes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UnsignedAttributes;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CMSAttribute.h"

#endif	/* _UnsignedAttributes_H_ */
