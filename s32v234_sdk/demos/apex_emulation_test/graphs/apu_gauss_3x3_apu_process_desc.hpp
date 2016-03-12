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
#ifndef ACF_APU_GAUSS_3x3_APU_PROCESS_DESC_HPP
#define ACF_APU_GAUSS_3x3_APU_PROCESS_DESC_HPP



#ifndef APEX2_EMULATE // This is needed only for the Target Compiler
#include <acf_process_desc_apu.hpp>
#endif

#include "apu_gauss_3x3_graph.hpp"

class apu_gauss_3x3_process_desc : public ACF_Process_Desc_APU
{
public:

   void Create()
   {
	  Initialize(mGraph, GAUSS_3x3_GN );
	  //GAUSS_3x3_GN
	  SetInputChunkSize(GAUSS_3x3_GRAPH_IN, 8, 8/*16*/);
   }

   apu_gauss_3x3_graph mGraph;
};


#endif