/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXCRMF"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_OptionalValidity_H_
#define	_OptionalValidity_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Time;

/* OptionalValidity */
typedef struct OptionalValidity {
	struct Time	*notBefore	/* OPTIONAL */;
	struct Time	*notAfter	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OptionalValidity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OptionalValidity;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MyTime.h"

#endif	/* _OptionalValidity_H_ */
