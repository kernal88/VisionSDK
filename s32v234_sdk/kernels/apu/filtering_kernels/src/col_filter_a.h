/*****************************************************************************
*
* Freescale Confidential Proprietary
*
* Copyright (c) 2013 Freescale Semiconductor;
* All Rights Reserved
*
*****************************************************************************
*
* THIS SOFTWARE IS PROVIDED BY FREESCALE "AS IS" AND ANY EXPRESSED OR
* IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
* IN NO EVENT SHALL FREESCALE OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
* INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
* HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
* STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
* IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
* THE POSSIBILITY OF SUCH DAMAGE.
*
****************************************************************************/

#ifndef APU_COL_FILTER_H
#define  APU_COL_FILTER_H

#include "stringify_macros.h"

#define	COL_FILTER_K		col_filter
#define COL_FILTER_KN		XSTR(COL_FILTER_K)

#define COL_FILTER_KN_SRC		"SRC"
#define COL_FILTER_KN_COEFFS	"COEFFS"
#define COL_FILTER_KN_DST		"DST"

#ifdef APEX2_EMULATE
#include "acf_kernel.hpp"
using namespace APEX2;

extKernelInfoDecl(COL_FILTER_K);
void COL_FILTER_K(kernel_io_desc src, kernel_io_desc coeffs, kernel_io_desc dst);
#endif

#endif 

