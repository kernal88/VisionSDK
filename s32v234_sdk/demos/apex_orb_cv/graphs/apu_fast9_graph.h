/*****************************************************************************
*
* Freescale Confidential Proprietary
*
* Copyright (c) 2014 Freescale Semiconductor;
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
#ifndef FAST9_GRAPH_DEF_H
#define FAST9_GRAPH_DEF_H

// PI stands for Process Identifier
// GN stands for Graph Name
#include "stringify_macros.h"

#define FAST9_PI			APU_FAST9
#define FAST9_GN			XSTR(FAST9_PI)

#define FAST9_GR_IN0		"INPUT_0"
#define FAST9_GR_IN1		"INPUT_1"
#define FAST9_GR_OUT0		"OUTPUT_0"
#define FAST9_GR_OUT1		"OUTPUT_1"


#define FAST9_GRAPH_THR		"THRESHOLD"
#define FAST9_GRAPH_MARK	"MARK_COLOR_CHANNEL"

#endif