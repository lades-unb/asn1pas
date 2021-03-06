/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ETS-ElectronicSignaturePolicies-88syntax"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_AlgorithmConstraints_H_
#define	_AlgorithmConstraints_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AlgAndLength;

/* AlgorithmConstraints */
typedef struct AlgorithmConstraints {
	A_SEQUENCE_OF(struct AlgAndLength) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AlgorithmConstraints_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AlgorithmConstraints;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AlgAndLength.h"

#endif	/* _AlgorithmConstraints_H_ */
