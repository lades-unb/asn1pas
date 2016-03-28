/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#include <asn_internal.h>

#include "IssuingDistributionPoint.h"

static asn_TYPE_member_t asn_MBR_IssuingDistributionPoint_1[] = {
	{ ATF_POINTER, 6, offsetof(struct IssuingDistributionPoint, distributionPoint),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_DistributionPointName,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"distributionPoint"
		},
	{ ATF_POINTER, 5, offsetof(struct IssuingDistributionPoint, onlyContainsUserCerts),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"onlyContainsUserCerts"
		},
	{ ATF_POINTER, 4, offsetof(struct IssuingDistributionPoint, onlyContainsCACerts),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"onlyContainsCACerts"
		},
	{ ATF_POINTER, 3, offsetof(struct IssuingDistributionPoint, onlySomeReasons),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReasonFlags,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"onlySomeReasons"
		},
	{ ATF_POINTER, 2, offsetof(struct IssuingDistributionPoint, indirectCRL),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"indirectCRL"
		},
	{ ATF_POINTER, 1, offsetof(struct IssuingDistributionPoint, onlyContainsAttributeCerts),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"onlyContainsAttributeCerts"
		},
};
static ber_tlv_tag_t asn_DEF_IssuingDistributionPoint_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_IssuingDistributionPoint_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* distributionPoint at 1598 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* onlyContainsUserCerts at 1599 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* onlyContainsCACerts at 1600 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* onlySomeReasons at 1601 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* indirectCRL at 1602 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* onlyContainsAttributeCerts at 1603 */
};
static asn_SEQUENCE_specifics_t asn_SPC_IssuingDistributionPoint_specs_1 = {
	sizeof(struct IssuingDistributionPoint),
	offsetof(struct IssuingDistributionPoint, _asn_ctx),
	asn_MAP_IssuingDistributionPoint_tag2el_1,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_IssuingDistributionPoint = {
	"IssuingDistributionPoint",
	"IssuingDistributionPoint",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_IssuingDistributionPoint_tags_1,
	sizeof(asn_DEF_IssuingDistributionPoint_tags_1)
		/sizeof(asn_DEF_IssuingDistributionPoint_tags_1[0]), /* 1 */
	asn_DEF_IssuingDistributionPoint_tags_1,	/* Same as above */
	sizeof(asn_DEF_IssuingDistributionPoint_tags_1)
		/sizeof(asn_DEF_IssuingDistributionPoint_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_IssuingDistributionPoint_1,
	6,	/* Elements count */
	&asn_SPC_IssuingDistributionPoint_specs_1	/* Additional specs */
};

