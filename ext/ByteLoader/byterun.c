/*
 *      Copyright (c) 1996-1999 Malcolm Beattie
 *
 *      You may distribute under the terms of either the GNU General Public
 *      License or the Artistic License, as specified in the README file.
 *
 */
/*
 * This file is autogenerated from bytecode.pl. Changes made here will be lost.
 */

#define PERL_NO_GET_CONTEXT
#include "EXTERN.h"
#include "perl.h"
#define NO_XSLOCKS
#include "XSUB.h"

#ifdef PERL_OBJECT
#undef CALL_FPTR
#define CALL_FPTR(fptr) (pPerl->*fptr)
#undef PL_ppaddr
#define PL_ppaddr (*get_ppaddr())
#endif

#include "byterun.h"
#include "bytecode.h"


static int optype_size[] = {
    sizeof(OP),
    sizeof(UNOP),
    sizeof(BINOP),
    sizeof(LOGOP),
    sizeof(LISTOP),
    sizeof(PMOP),
    sizeof(SVOP),
    sizeof(PADOP),
    sizeof(PVOP),
    sizeof(LOOP),
    sizeof(COP)
};

static SV *specialsv_list[4];

static int bytecode_iv_overflows = 0;
static SV *bytecode_sv;
static XPV bytecode_pv;
static void **bytecode_obj_list;
static I32 bytecode_obj_list_fill = -1;

void *
bset_obj_store(pTHXo_ void *obj, I32 ix)
{
    if (ix > bytecode_obj_list_fill) {
	if (bytecode_obj_list_fill == -1)
	    New(666, bytecode_obj_list, ix + 1, void*);
	else
	    Renew(bytecode_obj_list, ix + 1, void*);
	bytecode_obj_list_fill = ix;
    }
    bytecode_obj_list[ix] = obj;
    return obj;
}

void
byterun(pTHXo_ struct bytestream bs)
{
    dTHR;
    int insn;

    specialsv_list[0] = Nullsv;
    specialsv_list[1] = &PL_sv_undef;
    specialsv_list[2] = &PL_sv_yes;
    specialsv_list[3] = &PL_sv_no;

    while ((insn = BGET_FGETC()) != EOF) {
	switch (insn) {
	  case INSN_COMMENT:		/* 35 */
	    {
		comment_t arg;
		BGET_comment_t(arg);
		arg = arg;
		break;
	    }
	  case INSN_NOP:		/* 10 */
	    {
		break;
	    }
	  case INSN_RET:		/* 0 */
	    {
		BSET_ret(none);
		break;
	    }
	  case INSN_LDSV:		/* 1 */
	    {
		svindex arg;
		BGET_svindex(arg);
		bytecode_sv = arg;
		break;
	    }
	  case INSN_LDOP:		/* 2 */
	    {
		opindex arg;
		BGET_opindex(arg);
		PL_op = arg;
		break;
	    }
	  case INSN_STSV:		/* 3 */
	    {
		U32 arg;
		BGET_U32(arg);
		BSET_OBJ_STORE(bytecode_sv, arg);
		break;
	    }
	  case INSN_STOP:		/* 4 */
	    {
		U32 arg;
		BGET_U32(arg);
		BSET_OBJ_STORE(PL_op, arg);
		break;
	    }
	  case INSN_LDSPECSV:		/* 5 */
	    {
		U8 arg;
		BGET_U8(arg);
		BSET_ldspecsv(bytecode_sv, arg);
		break;
	    }
	  case INSN_NEWSV:		/* 6 */
	    {
		U8 arg;
		BGET_U8(arg);
		BSET_newsv(bytecode_sv, arg);
		break;
	    }
	  case INSN_NEWOP:		/* 7 */
	    {
		U8 arg;
		BGET_U8(arg);
		BSET_newop(PL_op, arg);
		break;
	    }
	  case INSN_NEWOPN:		/* 8 */
	    {
		U8 arg;
		BGET_U8(arg);
		BSET_newopn(PL_op, arg);
		break;
	    }
	  case INSN_NEWPV:		/* 9 */
	    {
		PV arg;
		BGET_PV(arg);
		break;
	    }
	  case INSN_PV_CUR:		/* 11 */
	    {
		STRLEN arg;
		BGET_U32(arg);
		bytecode_pv.xpv_cur = arg;
		break;
	    }
	  case INSN_PV_FREE:		/* 12 */
	    {
		BSET_pv_free(bytecode_pv);
		break;
	    }
	  case INSN_SV_UPGRADE:		/* 13 */
	    {
		char arg;
		BGET_U8(arg);
		BSET_sv_upgrade(bytecode_sv, arg);
		break;
	    }
	  case INSN_SV_REFCNT:		/* 14 */
	    {
		U32 arg;
		BGET_U32(arg);
		SvREFCNT(bytecode_sv) = arg;
		break;
	    }
	  case INSN_SV_REFCNT_ADD:		/* 15 */
	    {
		I32 arg;
		BGET_I32(arg);
		BSET_sv_refcnt_add(SvREFCNT(bytecode_sv), arg);
		break;
	    }
	  case INSN_SV_FLAGS:		/* 16 */
	    {
		U32 arg;
		BGET_U32(arg);
		SvFLAGS(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XRV:		/* 17 */
	    {
		svindex arg;
		BGET_svindex(arg);
		SvRV(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XPV:		/* 18 */
	    {
		BSET_xpv(bytecode_sv);
		break;
	    }
	  case INSN_XIV32:		/* 19 */
	    {
		I32 arg;
		BGET_I32(arg);
		SvIVX(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XIV64:		/* 20 */
	    {
		IV64 arg;
		BGET_IV64(arg);
		SvIVX(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XNV:		/* 21 */
	    {
		NV arg;
		BGET_NV(arg);
		SvNVX(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XLV_TARGOFF:		/* 22 */
	    {
		STRLEN arg;
		BGET_U32(arg);
		LvTARGOFF(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XLV_TARGLEN:		/* 23 */
	    {
		STRLEN arg;
		BGET_U32(arg);
		LvTARGLEN(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XLV_TARG:		/* 24 */
	    {
		svindex arg;
		BGET_svindex(arg);
		LvTARG(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XLV_TYPE:		/* 25 */
	    {
		char arg;
		BGET_U8(arg);
		LvTYPE(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XBM_USEFUL:		/* 26 */
	    {
		I32 arg;
		BGET_I32(arg);
		BmUSEFUL(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XBM_PREVIOUS:		/* 27 */
	    {
		U16 arg;
		BGET_U16(arg);
		BmPREVIOUS(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XBM_RARE:		/* 28 */
	    {
		U8 arg;
		BGET_U8(arg);
		BmRARE(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XFM_LINES:		/* 29 */
	    {
		I32 arg;
		BGET_I32(arg);
		FmLINES(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XIO_LINES:		/* 30 */
	    {
		long arg;
		BGET_I32(arg);
		IoLINES(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XIO_PAGE:		/* 31 */
	    {
		long arg;
		BGET_I32(arg);
		IoPAGE(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XIO_PAGE_LEN:		/* 32 */
	    {
		long arg;
		BGET_I32(arg);
		IoPAGE_LEN(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XIO_LINES_LEFT:		/* 33 */
	    {
		long arg;
		BGET_I32(arg);
		IoLINES_LEFT(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XIO_TOP_NAME:		/* 34 */
	    {
		pvcontents arg;
		BGET_pvcontents(arg);
		IoTOP_NAME(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XIO_TOP_GV:		/* 36 */
	    {
		svindex arg;
		BGET_svindex(arg);
		*(SV**)&IoTOP_GV(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XIO_FMT_NAME:		/* 37 */
	    {
		pvcontents arg;
		BGET_pvcontents(arg);
		IoFMT_NAME(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XIO_FMT_GV:		/* 38 */
	    {
		svindex arg;
		BGET_svindex(arg);
		*(SV**)&IoFMT_GV(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XIO_BOTTOM_NAME:		/* 39 */
	    {
		pvcontents arg;
		BGET_pvcontents(arg);
		IoBOTTOM_NAME(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XIO_BOTTOM_GV:		/* 40 */
	    {
		svindex arg;
		BGET_svindex(arg);
		*(SV**)&IoBOTTOM_GV(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XIO_SUBPROCESS:		/* 41 */
	    {
		short arg;
		BGET_U16(arg);
		IoSUBPROCESS(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XIO_TYPE:		/* 42 */
	    {
		char arg;
		BGET_U8(arg);
		IoTYPE(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XIO_FLAGS:		/* 43 */
	    {
		char arg;
		BGET_U8(arg);
		IoFLAGS(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XCV_STASH:		/* 44 */
	    {
		svindex arg;
		BGET_svindex(arg);
		*(SV**)&CvSTASH(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XCV_START:		/* 45 */
	    {
		opindex arg;
		BGET_opindex(arg);
		CvSTART(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XCV_ROOT:		/* 46 */
	    {
		opindex arg;
		BGET_opindex(arg);
		CvROOT(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XCV_GV:		/* 47 */
	    {
		svindex arg;
		BGET_svindex(arg);
		*(SV**)&CvGV(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XCV_DEPTH:		/* 48 */
	    {
		long arg;
		BGET_I32(arg);
		CvDEPTH(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XCV_PADLIST:		/* 49 */
	    {
		svindex arg;
		BGET_svindex(arg);
		*(SV**)&CvPADLIST(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XCV_OUTSIDE:		/* 50 */
	    {
		svindex arg;
		BGET_svindex(arg);
		*(SV**)&CvOUTSIDE(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XCV_FLAGS:		/* 51 */
	    {
		U8 arg;
		BGET_U8(arg);
		CvFLAGS(bytecode_sv) = arg;
		break;
	    }
	  case INSN_AV_EXTEND:		/* 52 */
	    {
		SSize_t arg;
		BGET_I32(arg);
		BSET_av_extend(bytecode_sv, arg);
		break;
	    }
	  case INSN_AV_PUSH:		/* 53 */
	    {
		svindex arg;
		BGET_svindex(arg);
		BSET_av_push(bytecode_sv, arg);
		break;
	    }
	  case INSN_XAV_FILL:		/* 54 */
	    {
		SSize_t arg;
		BGET_I32(arg);
		AvFILLp(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XAV_MAX:		/* 55 */
	    {
		SSize_t arg;
		BGET_I32(arg);
		AvMAX(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XAV_FLAGS:		/* 56 */
	    {
		U8 arg;
		BGET_U8(arg);
		AvFLAGS(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XHV_RITER:		/* 57 */
	    {
		I32 arg;
		BGET_I32(arg);
		HvRITER(bytecode_sv) = arg;
		break;
	    }
	  case INSN_XHV_NAME:		/* 58 */
	    {
		pvcontents arg;
		BGET_pvcontents(arg);
		HvNAME(bytecode_sv) = arg;
		break;
	    }
	  case INSN_HV_STORE:		/* 59 */
	    {
		svindex arg;
		BGET_svindex(arg);
		BSET_hv_store(bytecode_sv, arg);
		break;
	    }
	  case INSN_SV_MAGIC:		/* 60 */
	    {
		char arg;
		BGET_U8(arg);
		BSET_sv_magic(bytecode_sv, arg);
		break;
	    }
	  case INSN_MG_OBJ:		/* 61 */
	    {
		svindex arg;
		BGET_svindex(arg);
		SvMAGIC(bytecode_sv)->mg_obj = arg;
		break;
	    }
	  case INSN_MG_PRIVATE:		/* 62 */
	    {
		U16 arg;
		BGET_U16(arg);
		SvMAGIC(bytecode_sv)->mg_private = arg;
		break;
	    }
	  case INSN_MG_FLAGS:		/* 63 */
	    {
		U8 arg;
		BGET_U8(arg);
		SvMAGIC(bytecode_sv)->mg_flags = arg;
		break;
	    }
	  case INSN_MG_PV:		/* 64 */
	    {
		pvcontents arg;
		BGET_pvcontents(arg);
		BSET_mg_pv(SvMAGIC(bytecode_sv), arg);
		break;
	    }
	  case INSN_XMG_STASH:		/* 65 */
	    {
		svindex arg;
		BGET_svindex(arg);
		*(SV**)&SvSTASH(bytecode_sv) = arg;
		break;
	    }
	  case INSN_GV_FETCHPV:		/* 66 */
	    {
		strconst arg;
		BGET_strconst(arg);
		BSET_gv_fetchpv(bytecode_sv, arg);
		break;
	    }
	  case INSN_GV_STASHPV:		/* 67 */
	    {
		strconst arg;
		BGET_strconst(arg);
		BSET_gv_stashpv(bytecode_sv, arg);
		break;
	    }
	  case INSN_GP_SV:		/* 68 */
	    {
		svindex arg;
		BGET_svindex(arg);
		GvSV(bytecode_sv) = arg;
		break;
	    }
	  case INSN_GP_REFCNT:		/* 69 */
	    {
		U32 arg;
		BGET_U32(arg);
		GvREFCNT(bytecode_sv) = arg;
		break;
	    }
	  case INSN_GP_REFCNT_ADD:		/* 70 */
	    {
		I32 arg;
		BGET_I32(arg);
		BSET_gp_refcnt_add(GvREFCNT(bytecode_sv), arg);
		break;
	    }
	  case INSN_GP_AV:		/* 71 */
	    {
		svindex arg;
		BGET_svindex(arg);
		*(SV**)&GvAV(bytecode_sv) = arg;
		break;
	    }
	  case INSN_GP_HV:		/* 72 */
	    {
		svindex arg;
		BGET_svindex(arg);
		*(SV**)&GvHV(bytecode_sv) = arg;
		break;
	    }
	  case INSN_GP_CV:		/* 73 */
	    {
		svindex arg;
		BGET_svindex(arg);
		*(SV**)&GvCV(bytecode_sv) = arg;
		break;
	    }
	  case INSN_GP_FILE:		/* 74 */
	    {
		pvcontents arg;
		BGET_pvcontents(arg);
		GvFILE(bytecode_sv) = arg;
		break;
	    }
	  case INSN_GP_IO:		/* 75 */
	    {
		svindex arg;
		BGET_svindex(arg);
		*(SV**)&GvIOp(bytecode_sv) = arg;
		break;
	    }
	  case INSN_GP_FORM:		/* 76 */
	    {
		svindex arg;
		BGET_svindex(arg);
		*(SV**)&GvFORM(bytecode_sv) = arg;
		break;
	    }
	  case INSN_GP_CVGEN:		/* 77 */
	    {
		U32 arg;
		BGET_U32(arg);
		GvCVGEN(bytecode_sv) = arg;
		break;
	    }
	  case INSN_GP_LINE:		/* 78 */
	    {
		line_t arg;
		BGET_U16(arg);
		GvLINE(bytecode_sv) = arg;
		break;
	    }
	  case INSN_GP_SHARE:		/* 79 */
	    {
		svindex arg;
		BGET_svindex(arg);
		BSET_gp_share(bytecode_sv, arg);
		break;
	    }
	  case INSN_XGV_FLAGS:		/* 80 */
	    {
		U8 arg;
		BGET_U8(arg);
		GvFLAGS(bytecode_sv) = arg;
		break;
	    }
	  case INSN_OP_NEXT:		/* 81 */
	    {
		opindex arg;
		BGET_opindex(arg);
		PL_op->op_next = arg;
		break;
	    }
	  case INSN_OP_SIBLING:		/* 82 */
	    {
		opindex arg;
		BGET_opindex(arg);
		PL_op->op_sibling = arg;
		break;
	    }
	  case INSN_OP_PPADDR:		/* 83 */
	    {
		strconst arg;
		BGET_strconst(arg);
		BSET_op_ppaddr(PL_op->op_ppaddr, arg);
		break;
	    }
	  case INSN_OP_TARG:		/* 84 */
	    {
		PADOFFSET arg;
		BGET_U32(arg);
		PL_op->op_targ = arg;
		break;
	    }
	  case INSN_OP_TYPE:		/* 85 */
	    {
		OPCODE arg;
		BGET_U16(arg);
		BSET_op_type(PL_op, arg);
		break;
	    }
	  case INSN_OP_SEQ:		/* 86 */
	    {
		U16 arg;
		BGET_U16(arg);
		PL_op->op_seq = arg;
		break;
	    }
	  case INSN_OP_FLAGS:		/* 87 */
	    {
		U8 arg;
		BGET_U8(arg);
		PL_op->op_flags = arg;
		break;
	    }
	  case INSN_OP_PRIVATE:		/* 88 */
	    {
		U8 arg;
		BGET_U8(arg);
		PL_op->op_private = arg;
		break;
	    }
	  case INSN_OP_FIRST:		/* 89 */
	    {
		opindex arg;
		BGET_opindex(arg);
		cUNOP->op_first = arg;
		break;
	    }
	  case INSN_OP_LAST:		/* 90 */
	    {
		opindex arg;
		BGET_opindex(arg);
		cBINOP->op_last = arg;
		break;
	    }
	  case INSN_OP_OTHER:		/* 91 */
	    {
		opindex arg;
		BGET_opindex(arg);
		cLOGOP->op_other = arg;
		break;
	    }
	  case INSN_OP_CHILDREN:		/* 92 */
	    {
		U32 arg;
		BGET_U32(arg);
		cLISTOP->op_children = arg;
		break;
	    }
	  case INSN_OP_PMREPLROOT:		/* 93 */
	    {
		opindex arg;
		BGET_opindex(arg);
		cPMOP->op_pmreplroot = arg;
		break;
	    }
	  case INSN_OP_PMREPLROOTGV:		/* 94 */
	    {
		svindex arg;
		BGET_svindex(arg);
		*(SV**)&cPMOP->op_pmreplroot = arg;
		break;
	    }
	  case INSN_OP_PMREPLSTART:		/* 95 */
	    {
		opindex arg;
		BGET_opindex(arg);
		cPMOP->op_pmreplstart = arg;
		break;
	    }
	  case INSN_OP_PMNEXT:		/* 96 */
	    {
		opindex arg;
		BGET_opindex(arg);
		*(OP**)&cPMOP->op_pmnext = arg;
		break;
	    }
	  case INSN_PREGCOMP:		/* 97 */
	    {
		pvcontents arg;
		BGET_pvcontents(arg);
		BSET_pregcomp(PL_op, arg);
		break;
	    }
	  case INSN_OP_PMFLAGS:		/* 98 */
	    {
		U16 arg;
		BGET_U16(arg);
		cPMOP->op_pmflags = arg;
		break;
	    }
	  case INSN_OP_PMPERMFLAGS:		/* 99 */
	    {
		U16 arg;
		BGET_U16(arg);
		cPMOP->op_pmpermflags = arg;
		break;
	    }
	  case INSN_OP_SV:		/* 100 */
	    {
		svindex arg;
		BGET_svindex(arg);
		cSVOP->op_sv = arg;
		break;
	    }
	  case INSN_OP_PADIX:		/* 101 */
	    {
		PADOFFSET arg;
		BGET_U32(arg);
		cPADOP->op_padix = arg;
		break;
	    }
	  case INSN_OP_PV:		/* 102 */
	    {
		pvcontents arg;
		BGET_pvcontents(arg);
		cPVOP->op_pv = arg;
		break;
	    }
	  case INSN_OP_PV_TR:		/* 103 */
	    {
		op_tr_array arg;
		BGET_op_tr_array(arg);
		cPVOP->op_pv = arg;
		break;
	    }
	  case INSN_OP_REDOOP:		/* 104 */
	    {
		opindex arg;
		BGET_opindex(arg);
		cLOOP->op_redoop = arg;
		break;
	    }
	  case INSN_OP_NEXTOP:		/* 105 */
	    {
		opindex arg;
		BGET_opindex(arg);
		cLOOP->op_nextop = arg;
		break;
	    }
	  case INSN_OP_LASTOP:		/* 106 */
	    {
		opindex arg;
		BGET_opindex(arg);
		cLOOP->op_lastop = arg;
		break;
	    }
	  case INSN_COP_LABEL:		/* 107 */
	    {
		pvcontents arg;
		BGET_pvcontents(arg);
		cCOP->cop_label = arg;
		break;
	    }
	  case INSN_COP_STASH:		/* 108 */
	    {
		svindex arg;
		BGET_svindex(arg);
		*(SV**)&cCOP->cop_stash = arg;
		break;
	    }
	  case INSN_COP_FILEGV:		/* 109 */
	    {
		svindex arg;
		BGET_svindex(arg);
		*(SV**)&cCOP->cop_filegv = arg;
		break;
	    }
	  case INSN_COP_SEQ:		/* 110 */
	    {
		U32 arg;
		BGET_U32(arg);
		cCOP->cop_seq = arg;
		break;
	    }
	  case INSN_COP_ARYBASE:		/* 111 */
	    {
		I32 arg;
		BGET_I32(arg);
		cCOP->cop_arybase = arg;
		break;
	    }
	  case INSN_COP_LINE:		/* 112 */
	    {
		line_t arg;
		BGET_U16(arg);
		cCOP->cop_line = arg;
		break;
	    }
	  case INSN_COP_WARNINGS:		/* 113 */
	    {
		svindex arg;
		BGET_svindex(arg);
		cCOP->cop_warnings = arg;
		break;
	    }
	  case INSN_MAIN_START:		/* 114 */
	    {
		opindex arg;
		BGET_opindex(arg);
		PL_main_start = arg;
		break;
	    }
	  case INSN_MAIN_ROOT:		/* 115 */
	    {
		opindex arg;
		BGET_opindex(arg);
		PL_main_root = arg;
		break;
	    }
	  case INSN_CURPAD:		/* 116 */
	    {
		svindex arg;
		BGET_svindex(arg);
		BSET_curpad(PL_curpad, arg);
		break;
	    }
	  default:
	    Perl_croak(aTHX_ "Illegal bytecode instruction %d\n", insn);
	    /* NOTREACHED */
	}
    }
}
