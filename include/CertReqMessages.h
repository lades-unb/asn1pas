/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXCRMF"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_CertReqMessages_H_
#define	_CertReqMessages_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CertReqMsg;

/* CertReqMessages */
typedef struct CertReqMessages {
	A_SEQUENCE_OF(struct CertReqMsg) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CertReqMessages_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CertReqMessages;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CertReqMsg.h"

#endif	/* _CertReqMessages_H_ */
