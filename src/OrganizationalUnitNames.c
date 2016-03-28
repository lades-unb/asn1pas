/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#include <asn_internal.h>

#include "OrganizationalUnitNames.h"

static asn_TYPE_member_t asn_MBR_OrganizationalUnitNames_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (19 << 2)),
		0,
		&asn_DEF_OrganizationalUnitName,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_OrganizationalUnitNames_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_OrganizationalUnitNames_specs_1 = {
	sizeof(struct OrganizationalUnitNames),
	offsetof(struct OrganizationalUnitNames, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_OrganizationalUnitNames = {
	"OrganizationalUnitNames",
	"OrganizationalUnitNames",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_OrganizationalUnitNames_tags_1,
	sizeof(asn_DEF_OrganizationalUnitNames_tags_1)
		/sizeof(asn_DEF_OrganizationalUnitNames_tags_1[0]), /* 1 */
	asn_DEF_OrganizationalUnitNames_tags_1,	/* Same as above */
	sizeof(asn_DEF_OrganizationalUnitNames_tags_1)
		/sizeof(asn_DEF_OrganizationalUnitNames_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_OrganizationalUnitNames_1,
	1,	/* Single element */
	&asn_SPC_OrganizationalUnitNames_specs_1	/* Additional specs */
};

