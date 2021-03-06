/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ETS-ElectronicSignaturePolicies-88syntax"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#include <asn_internal.h>

#include "VerifierRules.h"

static asn_TYPE_member_t asn_MBR_VerifierRules_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct VerifierRules, mandatedUnsignedAttr),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_MandatedUnsignedAttr,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"mandatedUnsignedAttr"
		},
	{ ATF_POINTER, 1, offsetof(struct VerifierRules, signPolExtensions),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SignPolExtensions,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"signPolExtensions"
		},
};
static ber_tlv_tag_t asn_DEF_VerifierRules_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_VerifierRules_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 1 }, /* mandatedUnsignedAttr at 1094 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, -1, 0 } /* signPolExtensions at 1095 */
};
static asn_SEQUENCE_specifics_t asn_SPC_VerifierRules_specs_1 = {
	sizeof(struct VerifierRules),
	offsetof(struct VerifierRules, _asn_ctx),
	asn_MAP_VerifierRules_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_VerifierRules = {
	"VerifierRules",
	"VerifierRules",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_VerifierRules_tags_1,
	sizeof(asn_DEF_VerifierRules_tags_1)
		/sizeof(asn_DEF_VerifierRules_tags_1[0]), /* 1 */
	asn_DEF_VerifierRules_tags_1,	/* Same as above */
	sizeof(asn_DEF_VerifierRules_tags_1)
		/sizeof(asn_DEF_VerifierRules_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_VerifierRules_1,
	2,	/* Elements count */
	&asn_SPC_VerifierRules_specs_1	/* Additional specs */
};

