/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ETS-ElectronicSignatureFormats-88syntax"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_CertificateValues_H_
#define	_CertificateValues_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Certificate;

/* CertificateValues */
typedef struct CertificateValues {
	A_SEQUENCE_OF(struct Certificate) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CertificateValues_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CertificateValues;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Certificate.h"

#endif	/* _CertificateValues_H_ */
