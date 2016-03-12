/******************************************************************************
 *  (C) Copyright CogniVue Corporation. 2014 All right reserved.
 * 
 *  Confidential Information
 *
 *  All parts of the CogniVue Program Source are protected by copyright law
 *  and all rights are reserved.
 *  This documentation may not, in whole or in part, be copied, photocopied,
 *  reproduced, translated, or reduced to any electronic medium or machine
 *  readable form without prior consent, in writing, from CogniVue.
 ******************************************************************************/
/*!*********************************************************************************
*  \file apexcv_histogram.hpp
*  \brief Host-ACF interface for box 3x3 filter
***********************************************************************************/

#ifndef _APEXCV_HISTOGRAM_HPP_
#define _APEXCV_HISTOGRAM_HPP_

#ifndef APEX2_EMULATE
#include <icp_data.h>
using namespace icp;
#include <HISTOGRAM.hpp>
#else
#include "apu_lib.hpp"
#include "apu_extras.hpp"
#include "acf_lib.hpp"
using namespace APEX2;

#include "histogram_apu_process_desc.hpp"
REGISTER_PROCESS_TYPE(HISTOGRAM, histogram_apu_process_desc);

#endif

/*!*********************************************************************************
*  \brief Host-ACF interface for histogram.
*
*  This template class is an interface for creating, initializing, processing and releasing
*  the APU implementation of histogram on the host.
***********************************************************************************/

class apexcv_histogram
{
   public:
/*!*********************************************************************************
*  \brief Default constructor.
***********************************************************************************/
      apexcv_histogram()  {};
   
/*!*********************************************************************************
*  \brief Destructor.
***********************************************************************************/   
      ~apexcv_histogram() {};
   
/*!*********************************************************************************
*  \brief Initialize the process.
*
*  \return Error code for the initialization (zero on success).
*
*  We initialize the process on the host by initializing the ACF process
*
***********************************************************************************/                     
      int Initialize( DataDescriptor& lInput0,
                      DataDescriptor& lOutput0 );
                       
/*!*********************************************************************************
*  \brief Release the process.
*
*  \return Error code for the release (zero on success).
***********************************************************************************/					  
      int Release();
   
/*!*********************************************************************************
*  \brief Execute the process.
*
*  \return Error code for the execution (zero on success).
*
***********************************************************************************/   
      int Process();

   private:
   
/*!*********************************************************************************
*  \brief Process declaration for histogram
***********************************************************************************/
      HISTOGRAM  mProcess;
};

#endif /* _APEXCV_HISTOGRAM_HPP_ */