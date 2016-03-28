/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "OCSP"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#include <asn_internal.h>

#include "SingleResponse.h"

static asn_TYPE_member_t asn_MBR_SingleResponse_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SingleResponse, certID),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_CertID,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"certID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SingleResponse, certStatus),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_CertStatus,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"certStatus"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SingleResponse, thisUpdate),
		(ASN_TAG_CLASS_UNIVERSAL | (24 << 2)),
		0,
		&asn_DEF_GeneralizedTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"thisUpdate"
		},
	{ ATF_POINTER, 2, offsetof(struct SingleResponse, nextUpdate),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_GeneralizedTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"nextUpdate"
		},
	{ ATF_POINTER, 1, offsetof(struct SingleResponse, singleExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Extensions,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"singleExtensions"
		},
};
static ber_tlv_tag_t asn_DEF_SingleResponse_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SingleResponse_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 0 }, /* certID at 3182 */
    { (ASN_TAG_CLASS_UNIVERSAL | (24 << 2)), 2, 0, 0 }, /* thisUpdate at 3184 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, 0, 1 }, /* good at 3189 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 3, -1, 0 }, /* nextUpdate at 3185 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 1 }, /* revoked at 3190 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 4, -1, 0 }, /* singleExtensions at 3186 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 } /* unknown at 3191 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SingleResponse_specs_1 = {
	sizeof(struct SingleResponse),
	offsetof(struct SingleResponse, _asn_ctx),
	asn_MAP_SingleResponse_tag2el_1,
	7,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SingleResponse = {
	"SingleResponse",
	"SingleResponse",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SingleResponse_tags_1,
	sizeof(asn_DEF_SingleResponse_tags_1)
		/sizeof(asn_DEF_SingleResponse_tags_1[0]), /* 1 */
	asn_DEF_SingleResponse_tags_1,	/* Same as above */
	sizeof(asn_DEF_SingleResponse_tags_1)
		/sizeof(asn_DEF_SingleResponse_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SingleResponse_1,
	5,	/* Elements count */
	&asn_SPC_SingleResponse_specs_1	/* Additional specs */
};

