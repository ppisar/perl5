/*
 *    keywords.h
 *
 *    Copyright (c) 1997-2003, Larry Wall
 *
 *    You may distribute under the terms of either the GNU General Public
 *    License or the Artistic License, as specified in the README file.
 *
 * !!!!!!!   DO NOT EDIT THIS FILE   !!!!!!!
 *  This file is built by keywords.pl from its data.  Any changes made here
 *  will be lost!
 */
#define KEY_NULL		0
#define KEY___FILE__		1
#define KEY___LINE__		2
#define KEY___PACKAGE__		3
#define KEY___DATA__		4
#define KEY___END__		5
#define KEY_AUTOLOAD		6
#define KEY_BEGIN		7
#define KEY_CORE		8
#define KEY_DESTROY		9
#define KEY_END			10
#define KEY_INIT		11
#define KEY_CHECK		12
#define KEY_abs			13
#define KEY_accept		14
#define KEY_alarm		15
#define KEY_and			16
#define KEY_atan2		17
#define KEY_bind		18
#define KEY_binmode		19
#define KEY_bless		20
#define KEY_caller		21
#define KEY_chdir		22
#define KEY_chmod		23
#define KEY_chomp		24
#define KEY_chop		25
#define KEY_chown		26
#define KEY_chr			27
#define KEY_chroot		28
#define KEY_close		29
#define KEY_closedir		30
#define KEY_cmp			31
#define KEY_connect		32
#define KEY_continue		33
#define KEY_cos			34
#define KEY_crypt		35
#define KEY_dbmclose		36
#define KEY_dbmopen		37
#define KEY_defined		38
#define KEY_delete		39
#define KEY_die			40
#define KEY_do			41
#define KEY_dump		42
#define KEY_each		43
#define KEY_else		44
#define KEY_elsif		45
#define KEY_endgrent		46
#define KEY_endhostent		47
#define KEY_endnetent		48
#define KEY_endprotoent		49
#define KEY_endpwent		50
#define KEY_endservent		51
#define KEY_eof			52
#define KEY_eq			53
#define KEY_eval		54
#define KEY_exec		55
#define KEY_exists		56
#define KEY_exit		57
#define KEY_exp			58
#define KEY_fcntl		59
#define KEY_fileno		60
#define KEY_flock		61
#define KEY_for			62
#define KEY_foreach		63
#define KEY_fork		64
#define KEY_format		65
#define KEY_formline		66
#define KEY_ge			67
#define KEY_getc		68
#define KEY_getgrent		69
#define KEY_getgrgid		70
#define KEY_getgrnam		71
#define KEY_gethostbyaddr	72
#define KEY_gethostbyname	73
#define KEY_gethostent		74
#define KEY_getlogin		75
#define KEY_getnetbyaddr	76
#define KEY_getnetbyname	77
#define KEY_getnetent		78
#define KEY_getpeername		79
#define KEY_getpgrp		80
#define KEY_getppid		81
#define KEY_getpriority		82
#define KEY_getprotobyname	83
#define KEY_getprotobynumber	84
#define KEY_getprotoent		85
#define KEY_getpwent		86
#define KEY_getpwnam		87
#define KEY_getpwuid		88
#define KEY_getservbyname	89
#define KEY_getservbyport	90
#define KEY_getservent		91
#define KEY_getsockname		92
#define KEY_getsockopt		93
#define KEY_glob		94
#define KEY_gmtime		95
#define KEY_goto		96
#define KEY_grep		97
#define KEY_gt			98
#define KEY_hex			99
#define KEY_if			100
#define KEY_index		101
#define KEY_int			102
#define KEY_ioctl		103
#define KEY_join		104
#define KEY_keys		105
#define KEY_kill		106
#define KEY_last		107
#define KEY_lc			108
#define KEY_lcfirst		109
#define KEY_le			110
#define KEY_length		111
#define KEY_link		112
#define KEY_listen		113
#define KEY_local		114
#define KEY_localtime		115
#define KEY_lock		116
#define KEY_log			117
#define KEY_lstat		118
#define KEY_lt			119
#define KEY_m			120
#define KEY_map			121
#define KEY_mkdir		122
#define KEY_msgctl		123
#define KEY_msgget		124
#define KEY_msgrcv		125
#define KEY_msgsnd		126
#define KEY_my			127
#define KEY_ne			128
#define KEY_next		129
#define KEY_no			130
#define KEY_not			131
#define KEY_oct			132
#define KEY_open		133
#define KEY_opendir		134
#define KEY_or			135
#define KEY_ord			136
#define KEY_our			137
#define KEY_pack		138
#define KEY_package		139
#define KEY_pipe		140
#define KEY_pop			141
#define KEY_pos			142
#define KEY_print		143
#define KEY_printf		144
#define KEY_prototype		145
#define KEY_push		146
#define KEY_q			147
#define KEY_qq			148
#define KEY_qr			149
#define KEY_quotemeta		150
#define KEY_qw			151
#define KEY_qx			152
#define KEY_rand		153
#define KEY_read		154
#define KEY_readdir		155
#define KEY_readline		156
#define KEY_readlink		157
#define KEY_readpipe		158
#define KEY_recv		159
#define KEY_redo		160
#define KEY_ref			161
#define KEY_rename		162
#define KEY_require		163
#define KEY_reset		164
#define KEY_return		165
#define KEY_reverse		166
#define KEY_rewinddir		167
#define KEY_rindex		168
#define KEY_rmdir		169
#define KEY_s			170
#define KEY_scalar		171
#define KEY_seek		172
#define KEY_seekdir		173
#define KEY_select		174
#define KEY_semctl		175
#define KEY_semget		176
#define KEY_semop		177
#define KEY_send		178
#define KEY_setgrent		179
#define KEY_sethostent		180
#define KEY_setnetent		181
#define KEY_setpgrp		182
#define KEY_setpriority		183
#define KEY_setprotoent		184
#define KEY_setpwent		185
#define KEY_setservent		186
#define KEY_setsockopt		187
#define KEY_shift		188
#define KEY_shmctl		189
#define KEY_shmget		190
#define KEY_shmread		191
#define KEY_shmwrite		192
#define KEY_shutdown		193
#define KEY_sin			194
#define KEY_sleep		195
#define KEY_socket		196
#define KEY_socketpair		197
#define KEY_sort		198
#define KEY_splice		199
#define KEY_split		200
#define KEY_sprintf		201
#define KEY_sqrt		202
#define KEY_srand		203
#define KEY_stat		204
#define KEY_study		205
#define KEY_sub			206
#define KEY_substr		207
#define KEY_symlink		208
#define KEY_syscall		209
#define KEY_sysopen		210
#define KEY_sysread		211
#define KEY_sysseek		212
#define KEY_system		213
#define KEY_syswrite		214
#define KEY_tell		215
#define KEY_telldir		216
#define KEY_tie			217
#define KEY_tied		218
#define KEY_time		219
#define KEY_times		220
#define KEY_tr			221
#define KEY_truncate		222
#define KEY_uc			223
#define KEY_ucfirst		224
#define KEY_umask		225
#define KEY_undef		226
#define KEY_unless		227
#define KEY_unlink		228
#define KEY_unpack		229
#define KEY_unshift		230
#define KEY_untie		231
#define KEY_until		232
#define KEY_use			233
#define KEY_utime		234
#define KEY_values		235
#define KEY_vec			236
#define KEY_wait		237
#define KEY_waitpid		238
#define KEY_wantarray		239
#define KEY_warn		240
#define KEY_while		241
#define KEY_write		242
#define KEY_x			243
#define KEY_xor			244
#define KEY_y			245
