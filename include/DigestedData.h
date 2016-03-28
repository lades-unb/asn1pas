/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "CryptographicMessageSyntax2004"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_DigestedData_H_
#define	_DigestedData_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CMSVersion.h"
#include "DigestAlgorithmIdentifier.h"
#include "EncapsulatedContentInfo.h"
#include "Digest.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DigestedData */
typedef struct DigestedData {
	CMSVersion_t	 version;
	DigestAlgorithmIdentifier_t	 digestAlgorithm;
	EncapsulatedContentInfo_t	 encapContentInfo;
	Digest_t	 digest;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DigestedData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DigestedData;

#ifdef __cplusplus
}
#endif

#endif	/* _DigestedData_H_ */
