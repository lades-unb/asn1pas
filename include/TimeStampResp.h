/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXTSP"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_TimeStampResp_H_
#define	_TimeStampResp_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PKIStatusInfo.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ContentInfo;

/* TimeStampResp */
typedef struct TimeStampResp {
	PKIStatusInfo_t	 status;
	struct ContentInfo	*timeStampToken	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TimeStampResp_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TimeStampResp;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TimeStampToken.h"

#endif	/* _TimeStampResp_H_ */
