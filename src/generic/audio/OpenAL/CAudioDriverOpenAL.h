/*
 * CAudioDriver.h
 *
 *  Created on: Oct 29, 2012
 *      Author: litirvi
 */

#include "playerCompileConfig.h"

#ifdef AUDIO_DRIVER_OPENAL

#ifndef CAUDIODRIVEROPENAL_H_
#define CAUDIODRIVEROPENAL_H_

#include "audio/IAudioDriver.h"
#include "OpenAL/AL/alc.h"

namespace irrgame
{
	namespace audio
	{

		//TODO: write comment
		class CAudioDriverOpenAL: public IAudioDriver
		{

			public:

				//! Constructor
				CAudioDriverOpenAL();

				//! Destructor
				virtual ~CAudioDriverOpenAL();

			protected:

				//! Pointer to current AL device
				ALCdevice* Device;
				//! Pointer to current AL context
				ALCcontext* Context;
		};

	} // end namespace audio
} // end namespace irrgame

#endif /* CAUDIODRIVEROPENAL_H_ */

#endif /* AUDIO_DRIVER_OPENAL */
