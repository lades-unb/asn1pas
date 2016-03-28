/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXCMP"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_ProtectedPart_H_
#define	_ProtectedPart_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PKIHeader.h"
#include "PKIBody.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ProtectedPart */
typedef struct ProtectedPart {
	PKIHeader_t	 header;
	PKIBody_t	 body;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtectedPart_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProtectedPart;

#ifdef __cplusplus
}
#endif

#endif	/* _ProtectedPart_H_ */
