/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXCMP"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_POPODecKeyChallContent_H_
#define	_POPODecKeyChallContent_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Challenge;

/* POPODecKeyChallContent */
typedef struct POPODecKeyChallContent {
	A_SEQUENCE_OF(struct Challenge) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} POPODecKeyChallContent_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_POPODecKeyChallContent;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Challenge.h"

#endif	/* _POPODecKeyChallContent_H_ */
