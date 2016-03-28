/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "OCSP"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#include <asn_internal.h>

#include "ServiceLocator.h"

static asn_TYPE_member_t asn_MBR_ServiceLocator_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ServiceLocator, issuer),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_Name,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"issuer"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ServiceLocator, locator),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_AuthorityInfoAccessSyntax,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"locator"
		},
};
static ber_tlv_tag_t asn_DEF_ServiceLocator_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ServiceLocator_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 1 }, /* rdnSequence at 543 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, -1, 0 } /* locator at 3205 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ServiceLocator_specs_1 = {
	sizeof(struct ServiceLocator),
	offsetof(struct ServiceLocator, _asn_ctx),
	asn_MAP_ServiceLocator_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ServiceLocator = {
	"ServiceLocator",
	"ServiceLocator",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ServiceLocator_tags_1,
	sizeof(asn_DEF_ServiceLocator_tags_1)
		/sizeof(asn_DEF_ServiceLocator_tags_1[0]), /* 1 */
	asn_DEF_ServiceLocator_tags_1,	/* Same as above */
	sizeof(asn_DEF_ServiceLocator_tags_1)
		/sizeof(asn_DEF_ServiceLocator_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ServiceLocator_1,
	2,	/* Elements count */
	&asn_SPC_ServiceLocator_specs_1	/* Additional specs */
};

