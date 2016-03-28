/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "AttributeCertificateVersion1"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_AttributeCertificateInfoV1_H_
#define	_AttributeCertificateInfoV1_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AttCertVersionV1.h"
#include "GeneralNames.h"
#include "AlgorithmIdentifier.h"
#include "CertificateSerialNumber.h"
#include "AttCertValidityPeriod.h"
#include "UniqueIdentifier.h"
#include "IssuerSerial.h"
#include <constr_CHOICE.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum subject_PR {
	subject_PR_NOTHING,	/* No components present */
	subject_PR_baseCertificateID,
	subject_PR_subjectName
} subject_PR;

/* Forward declarations */
struct Extensions;
struct Attribute;

/* AttributeCertificateInfoV1 */
typedef struct AttributeCertificateInfoV1 {
	AttCertVersionV1_t	 version	/* DEFAULT 0 */;
	struct subject {
		subject_PR present;
		union AttributeCertificateInfoV1__subject_u {
			IssuerSerial_t	 baseCertificateID;
			GeneralNames_t	 subjectName;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} subject;
	GeneralNames_t	 issuer;
	AlgorithmIdentifier_t	 signature;
	CertificateSerialNumber_t	 serialNumber;
	AttCertValidityPeriod_t	 attCertValidityPeriod;
	struct attributes_v2 {
		A_SEQUENCE_OF(struct Attribute) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} attributes;
	UniqueIdentifier_t	*issuerUniqueID	/* OPTIONAL */;
	struct Extensions	*extensions	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AttributeCertificateInfoV1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AttributeCertificateInfoV1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Extensions.h"
#include "Attribute.h"

#endif	/* _AttributeCertificateInfoV1_H_ */
