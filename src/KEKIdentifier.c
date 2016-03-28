/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "CryptographicMessageSyntax2004"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#include <asn_internal.h>

#include "KEKIdentifier.h"

static asn_TYPE_member_t asn_MBR_KEKIdentifier_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct KEKIdentifier, keyIdentifier),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"keyIdentifier"
		},
	{ ATF_POINTER, 2, offsetof(struct KEKIdentifier, date),
		(ASN_TAG_CLASS_UNIVERSAL | (24 << 2)),
		0,
		&asn_DEF_GeneralizedTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"date"
		},
	{ ATF_POINTER, 1, offsetof(struct KEKIdentifier, other),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_OtherKeyAttribute,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"other"
		},
};
static ber_tlv_tag_t asn_DEF_KEKIdentifier_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_KEKIdentifier_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 0, 0, 0 }, /* keyIdentifier at 1834 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, 0, 0 }, /* other at 1836 */
    { (ASN_TAG_CLASS_UNIVERSAL | (24 << 2)), 1, 0, 0 } /* date at 1835 */
};
static asn_SEQUENCE_specifics_t asn_SPC_KEKIdentifier_specs_1 = {
	sizeof(struct KEKIdentifier),
	offsetof(struct KEKIdentifier, _asn_ctx),
	asn_MAP_KEKIdentifier_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_KEKIdentifier = {
	"KEKIdentifier",
	"KEKIdentifier",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_KEKIdentifier_tags_1,
	sizeof(asn_DEF_KEKIdentifier_tags_1)
		/sizeof(asn_DEF_KEKIdentifier_tags_1[0]), /* 1 */
	asn_DEF_KEKIdentifier_tags_1,	/* Same as above */
	sizeof(asn_DEF_KEKIdentifier_tags_1)
		/sizeof(asn_DEF_KEKIdentifier_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_KEKIdentifier_1,
	3,	/* Elements count */
	&asn_SPC_KEKIdentifier_specs_1	/* Additional specs */
};

