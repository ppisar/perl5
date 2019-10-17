/* -*- buffer-read-only: t -*-
 *
 *    perlapi.h
 *
 *    Copyright (C) 1993, 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001,
 *    2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009 by Larry Wall and others
 *
 *    You may distribute under the terms of either the GNU General Public
 *    License or the Artistic License, as specified in the README file.
 *
 * !!!!!!!   DO NOT EDIT THIS FILE   !!!!!!!
 * This file is built by regen/embed.pl from data in embed.fnc,
 * regen/embed.pl, regen/opcodes, intrpvar.h and perlvars.h.
 * Any changes made here will be lost!
 *
 * Edit those files and run 'make regen_headers' to effect changes.
 */

/* declare accessor functions for Perl variables */
#ifndef __perlapi_h__
#define __perlapi_h__

#if defined (MULTIPLICITY) && defined (PERL_GLOBAL_STRUCT)

START_EXTERN_C

#undef PERLVAR
#undef PERLVARA
#undef PERLVARI
#undef PERLVARIC
#define PERLVAR(p,v,t)	EXTERN_C t* Perl_##p##v##_ptr(pTHX);
#define PERLVARA(p,v,n,t)	typedef t PL_##v##_t[n];		\
			EXTERN_C PL_##v##_t* Perl_##p##v##_ptr(pTHX);
#define PERLVARI(p,v,t,i)	PERLVAR(p,v,t)
#define PERLVARIC(p,v,t,i) PERLVAR(p,v, const t)

#include "perlvars.h"

#undef PERLVAR
#undef PERLVARA
#undef PERLVARI
#undef PERLVARIC

END_EXTERN_C

#if defined(PERL_CORE)

/* accessor functions for Perl "global" variables */

/* these need to be mentioned here, or most linkers won't put them in
   the perl executable */

#ifndef PERL_NO_FORCE_LINK

START_EXTERN_C

#ifndef DOINIT
EXTCONST void * const PL_force_link_funcs[];
#else
EXTCONST void * const PL_force_link_funcs[] = {
#undef PERLVAR
#undef PERLVARA
#undef PERLVARI
#undef PERLVARIC
#define PERLVAR(p,v,t)		(void*)Perl_##p##v##_ptr,
#define PERLVARA(p,v,n,t)	PERLVAR(p,v,t)
#define PERLVARI(p,v,t,i)	PERLVAR(p,v,t)
#define PERLVARIC(p,v,t,i)	PERLVAR(p,v,t)

/* In Tru64 (__DEC && __osf__) the cc option -std1 causes that one
 * cannot cast between void pointers and function pointers without
 * info level warnings.  The PL_force_link_funcs[] would cause a few
 * hundred of those warnings.  In code one can circumnavigate this by using
 * unions that overlay the different pointers, but in declarations one
 * cannot use this trick.  Therefore we just disable the warning here
 * for the duration of the PL_force_link_funcs[] declaration. */

#if defined(__DECC) && defined(__osf__)
#pragma message save
#pragma message disable (nonstandcast)
#endif

#include "perlvars.h"

#if defined(__DECC) && defined(__osf__)
#pragma message restore
#endif

#undef PERLVAR
#undef PERLVARA
#undef PERLVARI
#undef PERLVARIC
};
#endif	/* DOINIT */

END_EXTERN_C

#endif	/* PERL_NO_FORCE_LINK */

#else	/* !PERL_CORE */

#undef  PL_AboveLatin1
#define PL_AboveLatin1		(*Perl_GAboveLatin1_ptr(NULL))
#undef  PL_Assigned_invlist
#define PL_Assigned_invlist	(*Perl_GAssigned_invlist_ptr(NULL))
#undef  PL_CCC_non0_non230
#define PL_CCC_non0_non230	(*Perl_GCCC_non0_non230_ptr(NULL))
#undef  PL_C_locale_obj
#define PL_C_locale_obj		(*Perl_GC_locale_obj_ptr(NULL))
#undef  PL_GCB_invlist
#define PL_GCB_invlist		(*Perl_GGCB_invlist_ptr(NULL))
#undef  PL_HasMultiCharFold
#define PL_HasMultiCharFold	(*Perl_GHasMultiCharFold_ptr(NULL))
#undef  PL_InBitmap
#define PL_InBitmap		(*Perl_GInBitmap_ptr(NULL))
#undef  PL_InMultiCharFold
#define PL_InMultiCharFold	(*Perl_GInMultiCharFold_ptr(NULL))
#undef  PL_LB_invlist
#define PL_LB_invlist		(*Perl_GLB_invlist_ptr(NULL))
#undef  PL_Latin1
#define PL_Latin1		(*Perl_GLatin1_ptr(NULL))
#undef  PL_NonFinalFold
#define PL_NonFinalFold		(*Perl_GNonFinalFold_ptr(NULL))
#undef  PL_Posix_ptrs
#define PL_Posix_ptrs		(*Perl_GPosix_ptrs_ptr(NULL))
#undef  PL_Private_Use
#define PL_Private_Use		(*Perl_GPrivate_Use_ptr(NULL))
#undef  PL_SB_invlist
#define PL_SB_invlist		(*Perl_GSB_invlist_ptr(NULL))
#undef  PL_SCX_invlist
#define PL_SCX_invlist		(*Perl_GSCX_invlist_ptr(NULL))
#undef  PL_UpperLatin1
#define PL_UpperLatin1		(*Perl_GUpperLatin1_ptr(NULL))
#undef  PL_WB_invlist
#define PL_WB_invlist		(*Perl_GWB_invlist_ptr(NULL))
#undef  PL_XPosix_ptrs
#define PL_XPosix_ptrs		(*Perl_GXPosix_ptrs_ptr(NULL))
#undef  PL_appctx
#define PL_appctx		(*Perl_Gappctx_ptr(NULL))
#undef  PL_check
#define PL_check		(*Perl_Gcheck_ptr(NULL))
#undef  PL_check_mutex
#define PL_check_mutex		(*Perl_Gcheck_mutex_ptr(NULL))
#undef  PL_csighandler1p
#define PL_csighandler1p	(*Perl_Gcsighandler1p_ptr(NULL))
#undef  PL_csighandler3p
#define PL_csighandler3p	(*Perl_Gcsighandler3p_ptr(NULL))
#undef  PL_csighandlerp
#define PL_csighandlerp		(*Perl_Gcsighandlerp_ptr(NULL))
#undef  PL_curinterp
#define PL_curinterp		(*Perl_Gcurinterp_ptr(NULL))
#undef  PL_do_undump
#define PL_do_undump		(*Perl_Gdo_undump_ptr(NULL))
#undef  PL_dollarzero_mutex
#define PL_dollarzero_mutex	(*Perl_Gdollarzero_mutex_ptr(NULL))
#undef  PL_fold_locale
#define PL_fold_locale		(*Perl_Gfold_locale_ptr(NULL))
#undef  PL_hash_chars
#define PL_hash_chars		(*Perl_Ghash_chars_ptr(NULL))
#undef  PL_hash_seed
#define PL_hash_seed		(*Perl_Ghash_seed_ptr(NULL))
#undef  PL_hash_seed_set
#define PL_hash_seed_set	(*Perl_Ghash_seed_set_ptr(NULL))
#undef  PL_hash_state
#define PL_hash_state		(*Perl_Ghash_state_ptr(NULL))
#undef  PL_hints_mutex
#define PL_hints_mutex		(*Perl_Ghints_mutex_ptr(NULL))
#undef  PL_in_some_fold
#define PL_in_some_fold		(*Perl_Gin_some_fold_ptr(NULL))
#undef  PL_keyword_plugin
#define PL_keyword_plugin	(*Perl_Gkeyword_plugin_ptr(NULL))
#undef  PL_keyword_plugin_mutex
#define PL_keyword_plugin_mutex	(*Perl_Gkeyword_plugin_mutex_ptr(NULL))
#undef  PL_lc_numeric_mutex
#define PL_lc_numeric_mutex	(*Perl_Glc_numeric_mutex_ptr(NULL))
#undef  PL_locale_mutex
#define PL_locale_mutex		(*Perl_Glocale_mutex_ptr(NULL))
#undef  PL_malloc_mutex
#define PL_malloc_mutex		(*Perl_Gmalloc_mutex_ptr(NULL))
#undef  PL_mmap_page_size
#define PL_mmap_page_size	(*Perl_Gmmap_page_size_ptr(NULL))
#undef  PL_my_ctx_mutex
#define PL_my_ctx_mutex		(*Perl_Gmy_ctx_mutex_ptr(NULL))
#undef  PL_my_cxt_index
#define PL_my_cxt_index		(*Perl_Gmy_cxt_index_ptr(NULL))
#undef  PL_my_cxt_keys
#define PL_my_cxt_keys		(*Perl_Gmy_cxt_keys_ptr(NULL))
#undef  PL_my_cxt_keys_size
#define PL_my_cxt_keys_size	(*Perl_Gmy_cxt_keys_size_ptr(NULL))
#undef  PL_op_mutex
#define PL_op_mutex		(*Perl_Gop_mutex_ptr(NULL))
#undef  PL_op_seq
#define PL_op_seq		(*Perl_Gop_seq_ptr(NULL))
#undef  PL_op_sequence
#define PL_op_sequence		(*Perl_Gop_sequence_ptr(NULL))
#undef  PL_perlio_debug_fd
#define PL_perlio_debug_fd	(*Perl_Gperlio_debug_fd_ptr(NULL))
#undef  PL_perlio_fd_refcnt
#define PL_perlio_fd_refcnt	(*Perl_Gperlio_fd_refcnt_ptr(NULL))
#undef  PL_perlio_fd_refcnt_size
#define PL_perlio_fd_refcnt_size	(*Perl_Gperlio_fd_refcnt_size_ptr(NULL))
#undef  PL_perlio_mutex
#define PL_perlio_mutex		(*Perl_Gperlio_mutex_ptr(NULL))
#undef  PL_perllib_sep
#define PL_perllib_sep		(*Perl_Gperllib_sep_ptr(NULL))
#undef  PL_ppaddr
#define PL_ppaddr		(*Perl_Gppaddr_ptr(NULL))
#undef  PL_sh_path
#define PL_sh_path		(*Perl_Gsh_path_ptr(NULL))
#undef  PL_sig_defaulting
#define PL_sig_defaulting	(*Perl_Gsig_defaulting_ptr(NULL))
#undef  PL_sig_handlers_initted
#define PL_sig_handlers_initted	(*Perl_Gsig_handlers_initted_ptr(NULL))
#undef  PL_sig_ignoring
#define PL_sig_ignoring		(*Perl_Gsig_ignoring_ptr(NULL))
#undef  PL_sig_trapped
#define PL_sig_trapped		(*Perl_Gsig_trapped_ptr(NULL))
#undef  PL_sigfpe_saved
#define PL_sigfpe_saved		(*Perl_Gsigfpe_saved_ptr(NULL))
#undef  PL_strategy_accept
#define PL_strategy_accept	(*Perl_Gstrategy_accept_ptr(NULL))
#undef  PL_strategy_dup
#define PL_strategy_dup		(*Perl_Gstrategy_dup_ptr(NULL))
#undef  PL_strategy_dup2
#define PL_strategy_dup2	(*Perl_Gstrategy_dup2_ptr(NULL))
#undef  PL_strategy_mkstemp
#define PL_strategy_mkstemp	(*Perl_Gstrategy_mkstemp_ptr(NULL))
#undef  PL_strategy_open
#define PL_strategy_open	(*Perl_Gstrategy_open_ptr(NULL))
#undef  PL_strategy_open3
#define PL_strategy_open3	(*Perl_Gstrategy_open3_ptr(NULL))
#undef  PL_strategy_pipe
#define PL_strategy_pipe	(*Perl_Gstrategy_pipe_ptr(NULL))
#undef  PL_strategy_socket
#define PL_strategy_socket	(*Perl_Gstrategy_socket_ptr(NULL))
#undef  PL_strategy_socketpair
#define PL_strategy_socketpair	(*Perl_Gstrategy_socketpair_ptr(NULL))
#undef  PL_sv_placeholder
#define PL_sv_placeholder	(*Perl_Gsv_placeholder_ptr(NULL))
#undef  PL_thr_key
#define PL_thr_key		(*Perl_Gthr_key_ptr(NULL))
#undef  PL_timesbase
#define PL_timesbase		(*Perl_Gtimesbase_ptr(NULL))
#undef  PL_use_safe_putenv
#define PL_use_safe_putenv	(*Perl_Guse_safe_putenv_ptr(NULL))
#undef  PL_user_def_props
#define PL_user_def_props	(*Perl_Guser_def_props_ptr(NULL))
#undef  PL_user_def_props_aTHX
#define PL_user_def_props_aTHX	(*Perl_Guser_def_props_aTHX_ptr(NULL))
#undef  PL_user_prop_mutex
#define PL_user_prop_mutex	(*Perl_Guser_prop_mutex_ptr(NULL))
#undef  PL_utf8_charname_begin
#define PL_utf8_charname_begin	(*Perl_Gutf8_charname_begin_ptr(NULL))
#undef  PL_utf8_charname_continue
#define PL_utf8_charname_continue	(*Perl_Gutf8_charname_continue_ptr(NULL))
#undef  PL_utf8_foldclosures
#define PL_utf8_foldclosures	(*Perl_Gutf8_foldclosures_ptr(NULL))
#undef  PL_utf8_idcont
#define PL_utf8_idcont		(*Perl_Gutf8_idcont_ptr(NULL))
#undef  PL_utf8_idstart
#define PL_utf8_idstart		(*Perl_Gutf8_idstart_ptr(NULL))
#undef  PL_utf8_mark
#define PL_utf8_mark		(*Perl_Gutf8_mark_ptr(NULL))
#undef  PL_utf8_perl_idcont
#define PL_utf8_perl_idcont	(*Perl_Gutf8_perl_idcont_ptr(NULL))
#undef  PL_utf8_perl_idstart
#define PL_utf8_perl_idstart	(*Perl_Gutf8_perl_idstart_ptr(NULL))
#undef  PL_utf8_tofold
#define PL_utf8_tofold		(*Perl_Gutf8_tofold_ptr(NULL))
#undef  PL_utf8_tolower
#define PL_utf8_tolower		(*Perl_Gutf8_tolower_ptr(NULL))
#undef  PL_utf8_tosimplefold
#define PL_utf8_tosimplefold	(*Perl_Gutf8_tosimplefold_ptr(NULL))
#undef  PL_utf8_totitle
#define PL_utf8_totitle		(*Perl_Gutf8_totitle_ptr(NULL))
#undef  PL_utf8_toupper
#define PL_utf8_toupper		(*Perl_Gutf8_toupper_ptr(NULL))
#undef  PL_utf8_xidcont
#define PL_utf8_xidcont		(*Perl_Gutf8_xidcont_ptr(NULL))
#undef  PL_utf8_xidstart
#define PL_utf8_xidstart	(*Perl_Gutf8_xidstart_ptr(NULL))
#undef  PL_veto_cleanup
#define PL_veto_cleanup		(*Perl_Gveto_cleanup_ptr(NULL))
#undef  PL_watch_pvx
#define PL_watch_pvx		(*Perl_Gwatch_pvx_ptr(NULL))

#endif /* !PERL_CORE */
#endif /* MULTIPLICITY && PERL_GLOBAL_STRUCT */

#endif /* __perlapi_h__ */

/* ex: set ro: */
