/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXCMP"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#include <asn_internal.h>

#include "PBMParameter.h"

static asn_TYPE_member_t asn_MBR_PBMParameter_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PBMParameter, salt),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"salt"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PBMParameter, owf),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_AlgorithmIdentifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"owf"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PBMParameter, iterationCount),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"iterationCount"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PBMParameter, mac),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_AlgorithmIdentifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"mac"
		},
};
static ber_tlv_tag_t asn_DEF_PBMParameter_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PBMParameter_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 2, 0, 0 }, /* iterationCount at 2385 */
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 0, 0, 0 }, /* salt at 2382 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, 0, 1 }, /* owf at 2383 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 3, -1, 0 } /* mac at 2389 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PBMParameter_specs_1 = {
	sizeof(struct PBMParameter),
	offsetof(struct PBMParameter, _asn_ctx),
	asn_MAP_PBMParameter_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PBMParameter = {
	"PBMParameter",
	"PBMParameter",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_PBMParameter_tags_1,
	sizeof(asn_DEF_PBMParameter_tags_1)
		/sizeof(asn_DEF_PBMParameter_tags_1[0]), /* 1 */
	asn_DEF_PBMParameter_tags_1,	/* Same as above */
	sizeof(asn_DEF_PBMParameter_tags_1)
		/sizeof(asn_DEF_PBMParameter_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PBMParameter_1,
	4,	/* Elements count */
	&asn_SPC_PBMParameter_specs_1	/* Additional specs */
};

