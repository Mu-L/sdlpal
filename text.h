/* -*- mode: c; tab-width: 4; c-basic-offset: 4; c-file-style: "linux" -*- */
//
// Copyright (c) 2009-2011, Wei Mingzhi <whistler_wmz@users.sf.net>.
// Copyright (c) 2011-2017, SDLPAL development team.
// All rights reserved.
//
// This file is part of SDLPAL.
//
// SDLPAL is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#ifndef _TEXT_H
#define _TEXT_H

#include "common.h"

typedef enum tagDIALOGPOSITION
{
   kDialogUpper       = 0,
   kDialogCenter,
   kDialogLower,
   kDialogCenterWindow
} DIALOGLOCATION;

PAL_C_LINKAGE_BEGIN

extern LPWSTR g_rcCredits[12];

INT
PAL_InitText(
   VOID
);

VOID
PAL_FreeText(
   VOID
);

LPCWSTR
PAL_GetWord(
   int        iNumWord
);

LPCWSTR
PAL_GetMsg(
   int        iNumMsg
);

int
PAL_GetMsgNum(
   int        iIndex,
   int        iOrder
);

VOID
PAL_DrawText(
   LPCWSTR    lpszText,
   PAL_POS    pos,
   BYTE       bColor,
   BOOL       fShadow,
   BOOL       fUpdate,
   BOOL       fUse8x8Font
);

VOID
PAL_DialogSetDelayTime(
   INT          iDelayTime
);

VOID
PAL_StartDialog(
   BYTE         bDialogLocation,
   BYTE         bFontColor,
   INT          iNumCharFace,
   BOOL         fPlayingRNG
);

VOID
PAL_ShowDialogText(
   LPCWSTR    lpszText
);

VOID
PAL_ClearDialog(
   BOOL         fWaitForKey
);

VOID
PAL_EndDialog(
   VOID
);

BOOL
PAL_IsInDialog(
   VOID
);

BOOL
PAL_DialogIsPlayingRNG(
   VOID
);

INT
PAL_MultiByteToWideChar(
   LPCSTR        mbs,
   int           mbslength,
   LPWSTR        wcs,
   int           wcslength
);

INT
PAL_MultiByteToWideCharCP(
	CODEPAGE      cp,
	LPCSTR        mbs,
	int           mbslength,
	LPWSTR        wcs,
	int           wcslength
	);

WCHAR
PAL_GetInvalidChar(
   CODEPAGE      uCodePage
);

CODEPAGE
PAL_GetCodePage(
	void
);

void
PAL_SetCodePage(
	CODEPAGE    uCodePage
);

INT
PAL_swprintf(
	LPWSTR buffer,
	size_t count,
	LPCWSTR format,
	...
);

PAL_C_LINKAGE_END

#endif
