/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXCRMF"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#include <asn_internal.h>

#include "ProofOfPossession.h"

static asn_TYPE_member_t asn_MBR_ProofOfPossession_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ProofOfPossession, choice.raVerified),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"raVerified"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ProofOfPossession, choice.signature),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_POPOSigningKey,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"signature"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ProofOfPossession, choice.keyEncipherment),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_POPOPrivKey,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"keyEncipherment"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ProofOfPossession, choice.keyAgreement),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_POPOPrivKey,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"keyAgreement"
		},
};
static asn_TYPE_tag2member_t asn_MAP_ProofOfPossession_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* raVerified at 2741 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* signature at 2744 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* keyEncipherment at 2745 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* keyAgreement at 2746 */
};
static asn_CHOICE_specifics_t asn_SPC_ProofOfPossession_specs_1 = {
	sizeof(struct ProofOfPossession),
	offsetof(struct ProofOfPossession, _asn_ctx),
	offsetof(struct ProofOfPossession, present),
	sizeof(((struct ProofOfPossession *)0)->present),
	asn_MAP_ProofOfPossession_tag2el_1,
	4,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ProofOfPossession = {
	"ProofOfPossession",
	"ProofOfPossession",
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
	asn_MBR_ProofOfPossession_1,
	4,	/* Elements count */
	&asn_SPC_ProofOfPossession_specs_1	/* Additional specs */
};

