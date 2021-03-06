/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ETS-ElectronicSignaturePolicies-88syntax"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_VerifierRules_H_
#define	_VerifierRules_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MandatedUnsignedAttr.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SignPolExtensions;

/* VerifierRules */
typedef struct VerifierRules {
	MandatedUnsignedAttr_t	 mandatedUnsignedAttr;
	struct SignPolExtensions	*signPolExtensions	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VerifierRules_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VerifierRules;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SignPolExtensions.h"

#endif	/* _VerifierRules_H_ */
