/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXAttributeCertificate"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_AttCertIssuer_H_
#define	_AttCertIssuer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GeneralNames.h"
#include "V2Form.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AttCertIssuer_PR {
	AttCertIssuer_PR_NOTHING,	/* No components present */
	AttCertIssuer_PR_v1Form,
	AttCertIssuer_PR_v2Form
} AttCertIssuer_PR;

/* AttCertIssuer */
typedef struct AttCertIssuer {
	AttCertIssuer_PR present;
	union AttCertIssuer_u {
		GeneralNames_t	 v1Form;
		V2Form_t	 v2Form;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AttCertIssuer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AttCertIssuer;

#ifdef __cplusplus
}
#endif

#endif	/* _AttCertIssuer_H_ */
