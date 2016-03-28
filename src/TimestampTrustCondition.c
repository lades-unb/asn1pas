/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ETS-ElectronicSignaturePolicies-88syntax"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#include <asn_internal.h>

#include "TimestampTrustCondition.h"

static asn_TYPE_member_t asn_MBR_TimestampTrustCondition_1[] = {
	{ ATF_POINTER, 5, offsetof(struct TimestampTrustCondition, ttsCertificateTrustTrees),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CertificateTrustTrees,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"ttsCertificateTrustTrees"
		},
	{ ATF_POINTER, 4, offsetof(struct TimestampTrustCondition, ttsRevReq),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CertRevReq,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"ttsRevReq"
		},
	{ ATF_POINTER, 3, offsetof(struct TimestampTrustCondition, ttsNameConstraints),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NameConstraints,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"ttsNameConstraints"
		},
	{ ATF_POINTER, 2, offsetof(struct TimestampTrustCondition, cautionPeriod),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_DeltaTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"cautionPeriod"
		},
	{ ATF_POINTER, 1, offsetof(struct TimestampTrustCondition, signatureTimestampDelay),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_DeltaTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"signatureTimestampDelay"
		},
};
static ber_tlv_tag_t asn_DEF_TimestampTrustCondition_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_TimestampTrustCondition_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ttsCertificateTrustTrees at 1136 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ttsRevReq at 1138 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ttsNameConstraints at 1140 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* cautionPeriod at 1142 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* signatureTimestampDelay at 1144 */
};
static asn_SEQUENCE_specifics_t asn_SPC_TimestampTrustCondition_specs_1 = {
	sizeof(struct TimestampTrustCondition),
	offsetof(struct TimestampTrustCondition, _asn_ctx),
	asn_MAP_TimestampTrustCondition_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_TimestampTrustCondition = {
	"TimestampTrustCondition",
	"TimestampTrustCondition",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_TimestampTrustCondition_tags_1,
	sizeof(asn_DEF_TimestampTrustCondition_tags_1)
		/sizeof(asn_DEF_TimestampTrustCondition_tags_1[0]), /* 1 */
	asn_DEF_TimestampTrustCondition_tags_1,	/* Same as above */
	sizeof(asn_DEF_TimestampTrustCondition_tags_1)
		/sizeof(asn_DEF_TimestampTrustCondition_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_TimestampTrustCondition_1,
	5,	/* Elements count */
	&asn_SPC_TimestampTrustCondition_specs_1	/* Additional specs */
};

