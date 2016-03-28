/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ETS-ElectronicSignatureFormats-88syntax"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_SigPolicyQualifierInfo_H_
#define	_SigPolicyQualifierInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SigPolicyQualifierId.h"
#include <ANY.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SigPolicyQualifierInfo */
typedef struct SigPolicyQualifierInfo {
	SigPolicyQualifierId_t	 sigPolicyQualifierId;
	ANY_t	 sigQualifier;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SigPolicyQualifierInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SigPolicyQualifierInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _SigPolicyQualifierInfo_H_ */
