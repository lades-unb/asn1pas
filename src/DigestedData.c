/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "CryptographicMessageSyntax2004"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#include <asn_internal.h>

#include "DigestedData.h"

static asn_TYPE_member_t asn_MBR_DigestedData_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DigestedData, version),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_CMSVersion,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"version"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DigestedData, digestAlgorithm),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_DigestAlgorithmIdentifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"digestAlgorithm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DigestedData, encapContentInfo),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_EncapsulatedContentInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"encapContentInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DigestedData, digest),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_Digest,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"digest"
		},
};
static ber_tlv_tag_t asn_DEF_DigestedData_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_DigestedData_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 0 }, /* version at 1850 */
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 3, 0, 0 }, /* digest at 1853 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, 0, 1 }, /* digestAlgorithm at 1851 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, -1, 0 } /* encapContentInfo at 1852 */
};
static asn_SEQUENCE_specifics_t asn_SPC_DigestedData_specs_1 = {
	sizeof(struct DigestedData),
	offsetof(struct DigestedData, _asn_ctx),
	asn_MAP_DigestedData_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DigestedData = {
	"DigestedData",
	"DigestedData",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_DigestedData_tags_1,
	sizeof(asn_DEF_DigestedData_tags_1)
		/sizeof(asn_DEF_DigestedData_tags_1[0]), /* 1 */
	asn_DEF_DigestedData_tags_1,	/* Same as above */
	sizeof(asn_DEF_DigestedData_tags_1)
		/sizeof(asn_DEF_DigestedData_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DigestedData_1,
	4,	/* Elements count */
	&asn_SPC_DigestedData_specs_1	/* Additional specs */
};

