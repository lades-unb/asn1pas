/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ETS-ElectronicSignatureFormats-88syntax"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#include <asn_internal.h>

#include "SPUserNotice.h"

static asn_TYPE_member_t asn_MBR_SPUserNotice_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SPUserNotice, noticeRef),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NoticeReference,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"noticeRef"
		},
	{ ATF_POINTER, 1, offsetof(struct SPUserNotice, explicitText),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_DisplayText,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"explicitText"
		},
};
static ber_tlv_tag_t asn_DEF_SPUserNotice_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SPUserNotice_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (12 << 2)), 1, 0, 0 }, /* utf8String at 1457 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 0 }, /* noticeRef at 179 */
    { (ASN_TAG_CLASS_UNIVERSAL | (22 << 2)), 1, 0, 0 }, /* ia5String at 1454 */
    { (ASN_TAG_CLASS_UNIVERSAL | (26 << 2)), 1, 0, 0 }, /* visibleString at 1455 */
    { (ASN_TAG_CLASS_UNIVERSAL | (30 << 2)), 1, 0, 0 } /* bmpString at 1456 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SPUserNotice_specs_1 = {
	sizeof(struct SPUserNotice),
	offsetof(struct SPUserNotice, _asn_ctx),
	asn_MAP_SPUserNotice_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SPUserNotice = {
	"SPUserNotice",
	"SPUserNotice",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SPUserNotice_tags_1,
	sizeof(asn_DEF_SPUserNotice_tags_1)
		/sizeof(asn_DEF_SPUserNotice_tags_1[0]), /* 1 */
	asn_DEF_SPUserNotice_tags_1,	/* Same as above */
	sizeof(asn_DEF_SPUserNotice_tags_1)
		/sizeof(asn_DEF_SPUserNotice_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SPUserNotice_1,
	2,	/* Elements count */
	&asn_SPC_SPUserNotice_specs_1	/* Additional specs */
};

