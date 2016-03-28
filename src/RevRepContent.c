/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXCMP"
 * 	found in "lpa.asn1"
 * 	`asn1c -S/skeletons`
 */

#include <asn_internal.h>

#include "RevRepContent.h"

static int
memb_status_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_revCerts_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_crls_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_TYPE_member_t asn_MBR_status_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_PKIStatusInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_status_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_status_specs_2 = {
	sizeof(struct status),
	offsetof(struct status, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_status_2 = {
	"status",
	"status",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_status_tags_2,
	sizeof(asn_DEF_status_tags_2)
		/sizeof(asn_DEF_status_tags_2[0]), /* 1 */
	asn_DEF_status_tags_2,	/* Same as above */
	sizeof(asn_DEF_status_tags_2)
		/sizeof(asn_DEF_status_tags_2[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_status_2,
	1,	/* Single element */
	&asn_SPC_status_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_revCerts_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_CertID,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_revCerts_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_revCerts_specs_4 = {
	sizeof(struct revCerts),
	offsetof(struct revCerts, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_revCerts_4 = {
	"revCerts",
	"revCerts",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_revCerts_tags_4,
	sizeof(asn_DEF_revCerts_tags_4)
		/sizeof(asn_DEF_revCerts_tags_4[0]), /* 2 */
	asn_DEF_revCerts_tags_4,	/* Same as above */
	sizeof(asn_DEF_revCerts_tags_4)
		/sizeof(asn_DEF_revCerts_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_revCerts_4,
	1,	/* Single element */
	&asn_SPC_revCerts_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_crls_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_CertificateList,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_crls_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_crls_specs_6 = {
	sizeof(struct crls),
	offsetof(struct crls, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_crls_6 = {
	"crls",
	"crls",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_crls_tags_6,
	sizeof(asn_DEF_crls_tags_6)
		/sizeof(asn_DEF_crls_tags_6[0]), /* 2 */
	asn_DEF_crls_tags_6,	/* Same as above */
	sizeof(asn_DEF_crls_tags_6)
		/sizeof(asn_DEF_crls_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_crls_6,
	1,	/* Single element */
	&asn_SPC_crls_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RevRepContent_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RevRepContent, status),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_status_2,
		memb_status_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"status"
		},
	{ ATF_POINTER, 2, offsetof(struct RevRepContent, revCerts),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_revCerts_4,
		memb_revCerts_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"revCerts"
		},
	{ ATF_POINTER, 1, offsetof(struct RevRepContent, crls),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_crls_6,
		memb_crls_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"crls"
		},
};
static ber_tlv_tag_t asn_DEF_RevRepContent_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RevRepContent_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 0 }, /* status at 2568 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, 0, 0 }, /* revCerts at 2570 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 2, 0, 0 } /* crls at 2572 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RevRepContent_specs_1 = {
	sizeof(struct RevRepContent),
	offsetof(struct RevRepContent, _asn_ctx),
	asn_MAP_RevRepContent_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RevRepContent = {
	"RevRepContent",
	"RevRepContent",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_RevRepContent_tags_1,
	sizeof(asn_DEF_RevRepContent_tags_1)
		/sizeof(asn_DEF_RevRepContent_tags_1[0]), /* 1 */
	asn_DEF_RevRepContent_tags_1,	/* Same as above */
	sizeof(asn_DEF_RevRepContent_tags_1)
		/sizeof(asn_DEF_RevRepContent_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RevRepContent_1,
	3,	/* Elements count */
	&asn_SPC_RevRepContent_specs_1	/* Additional specs */
};

