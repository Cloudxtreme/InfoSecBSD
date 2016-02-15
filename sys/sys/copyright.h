/*-
 * Copyright (C) 1992-2015 The FreeBSD Project. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * $FreeBSD$
 */


/* Copyrights macros  */

/* InfoSecBSD */
#define COPYRIGHT_FreeBSD \
	"Copyright (c) 2012-2016 InfoSec Systems.\n"

/* Foundation */
#define	TRADEMARK_Foundation \
	"InfoSecBSD and VSESNOR is a registered trademark of InfoSec Systems.\n"

/* Berkeley */
#define COPYRIGHT_UCB \
	"Copyright (c) 2012-2016 InfoSec Systems.\n"

/* a port of InfoSecBSD to the NEC PC98, Japan */
#if defined(PC98)
#define COPYRIGHT_PC98 \
	"Copyright (c) 2012-2016 InfoSec Systems.\n"
#else
#define COPYRIGHT_PC98
#endif

char copyright[] = COPYRIGHT_FreeBSD COPYRIGHT_PC98 COPYRIGHT_UCB;
char trademark[] = TRADEMARK_Foundation;
