/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "OCSP"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_OCSP_Signature_H_
#define	_OCSP_Signature_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AlgorithmIdentifier.h"
#include <BIT_STRING.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Certificate;

/* OCSP-Signature */
typedef struct OCSP_Signature {
	AlgorithmIdentifier_t	 signatureAlgorithm;
	BIT_STRING_t	 signature;
	struct certs {
		A_SEQUENCE_OF(struct Certificate) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *certs;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OCSP_Signature_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OCSP_Signature;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Certificate.h"

#endif	/* _OCSP_Signature_H_ */
