/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "OCSP"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_CertStatus_H_
#define	_CertStatus_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "RevokedInfo.h"
#include "UnknownInfo.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CertStatus_PR {
	CertStatus_PR_NOTHING,	/* No components present */
	CertStatus_PR_good,
	CertStatus_PR_revoked,
	CertStatus_PR_unknown
} CertStatus_PR;

/* CertStatus */
typedef struct CertStatus {
	CertStatus_PR present;
	union CertStatus_u {
		NULL_t	 good;
		RevokedInfo_t	 revoked;
		UnknownInfo_t	 unknown;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CertStatus_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CertStatus;

#ifdef __cplusplus
}
#endif

#endif	/* _CertStatus_H_ */
