/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ETS-ElectronicSignatureFormats-88syntax"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_CommitmentTypeIndication_H_
#define	_CommitmentTypeIndication_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CommitmentTypeIdentifier.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CommitmentTypeQualifier;

/* CommitmentTypeIndication */
typedef struct CommitmentTypeIndication {
	CommitmentTypeIdentifier_t	 commitmentTypeId;
	struct commitmentTypeQualifier {
		A_SEQUENCE_OF(struct CommitmentTypeQualifier) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *commitmentTypeQualifier;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CommitmentTypeIndication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CommitmentTypeIndication;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CommitmentTypeQualifier.h"

#endif	/* _CommitmentTypeIndication_H_ */
