/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ListaDePAsAprovadasV2"
 * 	found in "lpa2.asn1"
 * 	`asn1c -S/skeletons`
 */

#include <asn_internal.h>

#include "LPA.h"

static int asn_DFL_2_set_0(int set_value, void **sptr) {
	LpaVersion_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 0 */
		*st = 0;
		return 0;
	} else {
		/* Test default value 0 */
		return (*st == 0);
	}
}
static asn_TYPE_member_t asn_MBR_LPA_1[] = {
	{ ATF_NOFLAGS, 1, offsetof(struct LPA, version),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_LpaVersion,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		asn_DFL_2_set_0,	/* DEFAULT 0 */
		"version"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPA, policyInfos),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_PolicyInfos,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"policyInfos"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPA, nextUpdate),
		(ASN_TAG_CLASS_UNIVERSAL | (24 << 2)),
		0,
		&asn_DEF_GeneralizedTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"nextUpdate"
		},
};
static ber_tlv_tag_t asn_DEF_LPA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_LPA_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 0 }, /* version at 20 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, 0, 0 }, /* policyInfos at 21 */
    { (ASN_TAG_CLASS_UNIVERSAL | (24 << 2)), 2, 0, 0 } /* nextUpdate at 22 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LPA_specs_1 = {
	sizeof(struct LPA),
	offsetof(struct LPA, _asn_ctx),
	asn_MAP_LPA_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_LPA = {
	"LPA",
	"LPA",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_LPA_tags_1,
	sizeof(asn_DEF_LPA_tags_1)
		/sizeof(asn_DEF_LPA_tags_1[0]), /* 1 */
	asn_DEF_LPA_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPA_tags_1)
		/sizeof(asn_DEF_LPA_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_LPA_1,
	3,	/* Elements count */
	&asn_SPC_LPA_specs_1	/* Additional specs */
};

LPA_t *
DecodeLPA(const void *buffer, size_t buf_size) {
	LPA_t *polist = 0; /* Note this 0! */
	asn_dec_rval_t rval;
	rval = asn_DEF_LPA.ber_decoder(0,
		&asn_DEF_LPA,
		(void **)&polist,
		buffer, buf_size,
		0);

	if (rval.code == RC_OK) {
		return polist; /* Decoding succeeded */
	}
	else {
		/* Free partially decoded rect */
		LPA_free(polist);
		return 0;
	}
}

void LPA_free(LPA_t *lpa) {
	if (lpa) {
		asn_DEF_LPA.free_struct(&asn_DEF_LPA, lpa, 0);
	}

	(void *)lpa = NULL;
}
