/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ETS-ElectronicSignatureFormats-88syntax"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_CompleteRevocationRefs_H_
#define	_CompleteRevocationRefs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CrlOcspRef;

/* CompleteRevocationRefs */
typedef struct CompleteRevocationRefs {
	A_SEQUENCE_OF(struct CrlOcspRef) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CompleteRevocationRefs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CompleteRevocationRefs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CrlOcspRef.h"

#endif	/* _CompleteRevocationRefs_H_ */
