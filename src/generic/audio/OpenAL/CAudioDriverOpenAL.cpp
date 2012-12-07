/*
 * CAudioDriver.cpp
 *
 *  Created on: Oct 29, 2012
 *      Author: litirvi
 */

#include "CAudioDriverOpenAL.h"

#ifdef AUDIO_DRIVER_OPENAL

#include "alut/include/alut.h"

namespace irrgame
{
	namespace audio
	{

		//! Constructor
		CAudioDriverOpenAL::CAudioDriverOpenAL() :
				Device(0), Context(0)
		{
			//if alutInit returns false - something wrong
			IRR_ASSERT(alutInit(0, NULL));

			//audio context to which it applies all changes in the
			Context = alcGetCurrentContext();

			IRR_ASSERT(Context);

			//open the audio device, the default.
			//If you want to explicitly specify the desired device, instead of NULL pass the string with the name of your device.
			Device = alcGetContextsDevice(Context);

			IRR_ASSERT(Device);

			IRR_ASSERT(alcGetError(Device) == ALC_NO_ERROR);
		}

		//! Destructor
		CAudioDriverOpenAL::~CAudioDriverOpenAL()
		{
			//Close device and destroy context
			alutExit();
		}

		//! Internal function. Please do not use.
		IAudioDriver* createAudioDriver()
		{
			return new CAudioDriverOpenAL;
		}

	} // end namespace audio
} // end namespace irrgame.

#endif /* AUDIO_DRIVER_OPENAL */

