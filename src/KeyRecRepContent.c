/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXCMP"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#include <asn_internal.h>

#include "KeyRecRepContent.h"

static int
memb_caCerts_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_keyPairHist_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_caCerts_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Certificate,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_caCerts_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_caCerts_specs_4 = {
	sizeof(struct caCerts),
	offsetof(struct caCerts, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_caCerts_4 = {
	"caCerts",
	"caCerts",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_caCerts_tags_4,
	sizeof(asn_DEF_caCerts_tags_4)
		/sizeof(asn_DEF_caCerts_tags_4[0]), /* 2 */
	asn_DEF_caCerts_tags_4,	/* Same as above */
	sizeof(asn_DEF_caCerts_tags_4)
		/sizeof(asn_DEF_caCerts_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_caCerts_4,
	1,	/* Single element */
	&asn_SPC_caCerts_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_keyPairHist_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_CertifiedKeyPair,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_keyPairHist_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_keyPairHist_specs_6 = {
	sizeof(struct keyPairHist),
	offsetof(struct keyPairHist, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_keyPairHist_6 = {
	"keyPairHist",
	"keyPairHist",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_keyPairHist_tags_6,
	sizeof(asn_DEF_keyPairHist_tags_6)
		/sizeof(asn_DEF_keyPairHist_tags_6[0]), /* 2 */
	asn_DEF_keyPairHist_tags_6,	/* Same as above */
	sizeof(asn_DEF_keyPairHist_tags_6)
		/sizeof(asn_DEF_keyPairHist_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_keyPairHist_6,
	1,	/* Single element */
	&asn_SPC_keyPairHist_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_KeyRecRepContent_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct KeyRecRepContent, status),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_PKIStatusInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"status"
		},
	{ ATF_POINTER, 3, offsetof(struct KeyRecRepContent, newSigCert),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Certificate,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"newSigCert"
		},
	{ ATF_POINTER, 2, offsetof(struct KeyRecRepContent, caCerts),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_caCerts_4,
		memb_caCerts_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"caCerts"
		},
	{ ATF_POINTER, 1, offsetof(struct KeyRecRepContent, keyPairHist),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_keyPairHist_6,
		memb_keyPairHist_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"keyPairHist"
		},
};
static ber_tlv_tag_t asn_DEF_KeyRecRepContent_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_KeyRecRepContent_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 0 }, /* status at 2544 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, 0, 0 }, /* newSigCert at 2545 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 2, 0, 0 }, /* caCerts at 2547 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 3, 0, 0 } /* keyPairHist at 2549 */
};
static asn_SEQUENCE_specifics_t asn_SPC_KeyRecRepContent_specs_1 = {
	sizeof(struct KeyRecRepContent),
	offsetof(struct KeyRecRepContent, _asn_ctx),
	asn_MAP_KeyRecRepContent_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_KeyRecRepContent = {
	"KeyRecRepContent",
	"KeyRecRepContent",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_KeyRecRepContent_tags_1,
	sizeof(asn_DEF_KeyRecRepContent_tags_1)
		/sizeof(asn_DEF_KeyRecRepContent_tags_1[0]), /* 1 */
	asn_DEF_KeyRecRepContent_tags_1,	/* Same as above */
	sizeof(asn_DEF_KeyRecRepContent_tags_1)
		/sizeof(asn_DEF_KeyRecRepContent_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_KeyRecRepContent_1,
	4,	/* Elements count */
	&asn_SPC_KeyRecRepContent_specs_1	/* Additional specs */
};

