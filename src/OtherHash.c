/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ETS-ElectronicSignatureFormats-88syntax"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#include <asn_internal.h>

#include "OtherHash.h"

static asn_TYPE_member_t asn_MBR_OtherHash_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct OtherHash, choice.sha1Hash),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_OtherHashValue,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"sha1Hash"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct OtherHash, choice.otherHash),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_OtherHashAlgAndValue,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"otherHash"
		},
};
static asn_TYPE_tag2member_t asn_MAP_OtherHash_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 0, 0, 0 }, /* sha1Hash at 141 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, 0, 0 } /* otherHash at 143 */
};
static asn_CHOICE_specifics_t asn_SPC_OtherHash_specs_1 = {
	sizeof(struct OtherHash),
	offsetof(struct OtherHash, _asn_ctx),
	offsetof(struct OtherHash, present),
	sizeof(((struct OtherHash *)0)->present),
	asn_MAP_OtherHash_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_OtherHash = {
	"OtherHash",
	"OtherHash",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_OtherHash_1,
	2,	/* Elements count */
	&asn_SPC_OtherHash_specs_1	/* Additional specs */
};

