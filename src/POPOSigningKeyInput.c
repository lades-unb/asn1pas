/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXCRMF"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#include <asn_internal.h>

#include "POPOSigningKeyInput.h"

static asn_TYPE_member_t asn_MBR_authInfo_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct authInfo, choice.sender),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_GeneralName,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"sender"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct authInfo, choice.publicKeyMAC),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_PKMACValue,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"publicKeyMAC"
		},
};
static asn_TYPE_tag2member_t asn_MAP_authInfo_tag2el_2[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, 0, 0 }, /* publicKeyMAC at 2769 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* sender at 2765 */
};
static asn_CHOICE_specifics_t asn_SPC_authInfo_specs_2 = {
	sizeof(struct authInfo),
	offsetof(struct authInfo, _asn_ctx),
	offsetof(struct authInfo, present),
	sizeof(((struct authInfo *)0)->present),
	asn_MAP_authInfo_tag2el_2,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_authInfo_2 = {
	"authInfo",
	"authInfo",
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
	asn_MBR_authInfo_2,
	2,	/* Elements count */
	&asn_SPC_authInfo_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_POPOSigningKeyInput_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct POPOSigningKeyInput, authInfo),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_authInfo_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"authInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct POPOSigningKeyInput, publicKey),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SubjectPublicKeyInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"publicKey"
		},
};
static ber_tlv_tag_t asn_DEF_POPOSigningKeyInput_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_POPOSigningKeyInput_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 1 }, /* publicKeyMAC at 2769 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, -1, 0 }, /* publicKey at 2773 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* sender at 2765 */
};
static asn_SEQUENCE_specifics_t asn_SPC_POPOSigningKeyInput_specs_1 = {
	sizeof(struct POPOSigningKeyInput),
	offsetof(struct POPOSigningKeyInput, _asn_ctx),
	asn_MAP_POPOSigningKeyInput_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_POPOSigningKeyInput = {
	"POPOSigningKeyInput",
	"POPOSigningKeyInput",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_POPOSigningKeyInput_tags_1,
	sizeof(asn_DEF_POPOSigningKeyInput_tags_1)
		/sizeof(asn_DEF_POPOSigningKeyInput_tags_1[0]), /* 1 */
	asn_DEF_POPOSigningKeyInput_tags_1,	/* Same as above */
	sizeof(asn_DEF_POPOSigningKeyInput_tags_1)
		/sizeof(asn_DEF_POPOSigningKeyInput_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_POPOSigningKeyInput_1,
	2,	/* Elements count */
	&asn_SPC_POPOSigningKeyInput_specs_1	/* Additional specs */
};

