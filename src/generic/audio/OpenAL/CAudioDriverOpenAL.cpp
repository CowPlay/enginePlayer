/*
 * CAudioDriver.cpp
 *
 *  Created on: Oct 29, 2012
 *      Author: litirvi
 */

#include "CAudioDriverOpenAL.h"

#ifdef AUDIO_DRIVER_OPENAL

#include "alut/include/AL/alut.h"

namespace irrgame
{
	namespace audio
	{

		CAudioDriver::CAudioDriver() :
				Device(0), Context(0)
		{
			alutInit(0, NULL);

			//open the audio device, the default.
			//If you want to explicitly specify the desired device, instead of NULL pass the string with the name of your device.
			Device = alcOpenDevice(0);

			IRR_ASSERT(Device);

			//audio context to which it applies all changes in the
			Context = alcCreateContext(Device, 0);

			IRR_ASSERT(alcGetError(Device) == ALC_NO_ERROR);

			alcMakeContextCurrent(Context);

		}

		CAudioDriver::~CAudioDriver()
		{
			alcMakeContextCurrent(0);

			alcDestroyContext(Context);

			alcCloseDevice(Device);

			alutExit();

		}

		IAudioDriver* createAudioDriver()
		{
		return new 	CAudioDriver();
		}

	} // end namespace audio
} // end namespace irrgame.

#endif /* AUDIO_DRIVER_OPENAL */

