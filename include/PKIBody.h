/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXCMP"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_PKIBody_H_
#define	_PKIBody_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CertReqMessages.h"
#include "CertRepMessage.h"
#include "CertificationRequest.h"
#include "POPODecKeyChallContent.h"
#include "POPODecKeyRespContent.h"
#include "KeyRecRepContent.h"
#include "RevReqContent.h"
#include "RevRepContent.h"
#include "CAKeyUpdAnnContent.h"
#include "CertAnnContent.h"
#include "RevAnnContent.h"
#include "CRLAnnContent.h"
#include "PKIConfirmContent.h"
#include "GenMsgContent.h"
#include "GenRepContent.h"
#include "ErrorMsgContent.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PKIBody_PR {
	PKIBody_PR_NOTHING,	/* No components present */
	PKIBody_PR_ir,
	PKIBody_PR_ip,
	PKIBody_PR_cr,
	PKIBody_PR_cp,
	PKIBody_PR_p10cr,
	PKIBody_PR_popdecc,
	PKIBody_PR_popdecr,
	PKIBody_PR_kur,
	PKIBody_PR_kup,
	PKIBody_PR_krr,
	PKIBody_PR_krp,
	PKIBody_PR_rr,
	PKIBody_PR_rp,
	PKIBody_PR_ccr,
	PKIBody_PR_ccp,
	PKIBody_PR_ckuann,
	PKIBody_PR_cann,
	PKIBody_PR_rann,
	PKIBody_PR_crlann,
	PKIBody_PR_conf,
	PKIBody_PR_nested,
	PKIBody_PR_genm,
	PKIBody_PR_genp,
	PKIBody_PR_error
} PKIBody_PR;

/* Forward declarations */
struct PKIMessage;

/* PKIBody */
typedef struct PKIBody {
	PKIBody_PR present;
	union PKIBody_u {
		CertReqMessages_t	 ir;
		CertRepMessage_t	 ip;
		CertReqMessages_t	 cr;
		CertRepMessage_t	 cp;
		CertificationRequest_t	 p10cr;
		POPODecKeyChallContent_t	 popdecc;
		POPODecKeyRespContent_t	 popdecr;
		CertReqMessages_t	 kur;
		CertRepMessage_t	 kup;
		CertReqMessages_t	 krr;
		KeyRecRepContent_t	 krp;
		RevReqContent_t	 rr;
		RevRepContent_t	 rp;
		CertReqMessages_t	 ccr;
		CertRepMessage_t	 ccp;
		CAKeyUpdAnnContent_t	 ckuann;
		CertAnnContent_t	 cann;
		RevAnnContent_t	 rann;
		CRLAnnContent_t	 crlann;
		PKIConfirmContent_t	 conf;
		struct PKIMessage	*nested;
		GenMsgContent_t	 genm;
		GenRepContent_t	 genp;
		ErrorMsgContent_t	 error;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PKIBody_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PKIBody;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NestedMessageContent.h"

#endif	/* _PKIBody_H_ */
