/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "CryptographicMessageSyntax2004"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_PasswordRecipientInfo_H_
#define	_PasswordRecipientInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CMSVersion.h"
#include "KeyEncryptionAlgorithmIdentifier.h"
#include "EncryptedKey.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AlgorithmIdentifier;

/* PasswordRecipientInfo */
typedef struct PasswordRecipientInfo {
	CMSVersion_t	 version;
	struct AlgorithmIdentifier	*keyDerivationAlgorithm	/* OPTIONAL */;
	KeyEncryptionAlgorithmIdentifier_t	 keyEncryptionAlgorithm;
	EncryptedKey_t	 encryptedKey;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PasswordRecipientInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PasswordRecipientInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "KeyDerivationAlgorithmIdentifier.h"

#endif	/* _PasswordRecipientInfo_H_ */
