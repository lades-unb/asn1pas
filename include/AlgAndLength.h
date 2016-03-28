/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ETS-ElectronicSignaturePolicies-88syntax"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_AlgAndLength_H_
#define	_AlgAndLength_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OBJECT_IDENTIFIER.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SignPolExtensions;

/* AlgAndLength */
typedef struct AlgAndLength {
	OBJECT_IDENTIFIER_t	 algID;
	long	*minKeyLength	/* OPTIONAL */;
	struct SignPolExtensions	*signPolExtensions	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AlgAndLength_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AlgAndLength;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SignPolExtensions.h"

#endif	/* _AlgAndLength_H_ */
