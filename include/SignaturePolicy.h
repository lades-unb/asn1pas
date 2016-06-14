/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ETS-ElectronicSignaturePolicies-88syntax"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_SignaturePolicy_H_
#define	_SignaturePolicy_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AlgorithmIdentifier.h"
#include "SignPolicyInfo.h"
#include "SignPolicyHash.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SignaturePolicy */
typedef struct SignaturePolicy {
	AlgorithmIdentifier_t	 signPolicyHashAlg;
	SignPolicyInfo_t	     signPolicyInfo;
	SignPolicyHash_t	     *signPolicyHash	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SignaturePolicy_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SignaturePolicy;

/* Decoder */
SignaturePolicy_t*
DecodeSignaturePolicy(const void *buffer, size_t buf_size);

/* Freeing the structure */
void SignaturePolicy_free(SignaturePolicy_t *signaturePolicy);

#ifdef __cplusplus
}
#endif

#endif	/* _SignaturePolicy_H_ */
