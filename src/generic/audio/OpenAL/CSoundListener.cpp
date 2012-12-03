/*
 * CAudioListener.cpp
 *
 *  Created on: Nov 21, 2012
 *      Author: developer08
 */

#include "CSoundListener.h"

#ifdef AUDIO_DRIVER_OPENAL

#include "OpenAL/AL/al.h"

namespace irrgame
{
	namespace audio
	{
		CSoundListener::CSoundListener()
		{
			Position = vector3df(0, 0, 0);
			Velocity = vector3df(0, 0, 0);
			RotationAt = vector3df(0, 0, -1);
			RotationUp = vector3df(0, 1, 0);

			ALfloat ListenerPosition[3] =
			{ Position.X, Position.Y, Position.Z };

			alListenerfv(AL_POSITION, ListenerPosition);

			ALfloat ListenerVelocity[3] =
			{ Velocity.X, Velocity.Y, Velocity.Z };

			alListenerfv(AL_VELOCITY, ListenerVelocity);

			ALfloat ListenerOrientation[6] =
			{ RotationAt.X, RotationAt.Y, RotationAt.Z, RotationUp.X,
					RotationUp.Y, RotationUp.Z };

			alListenerfv(AL_ORIENTATION, ListenerOrientation);

			IRR_ASSERT(alGetError() == AL_NO_ERROR);
		}

		CSoundListener::~CSoundListener()
		{
		}

		void CSoundListener::setPosition(vector3df value)
		{
			ALfloat ListenerPosition[3] =
			{ value.X, value.Y, value.Z };

			alListenerfv(AL_POSITION, ListenerPosition);

			IRR_ASSERT(alGetError() == AL_NO_ERROR);
		}

		vector3df& CSoundListener::getPosition()
		{
			return Position;
		}

		void CSoundListener::setVelocity(vector3df value)
		{
			ALfloat ListenerVelocity[3] =
			{ value.X, value.Y, value.Z };

			alListenerfv(AL_VELOCITY, ListenerVelocity);

			IRR_ASSERT(alGetError() == AL_NO_ERROR);
		}

		vector3df& CSoundListener::getVelocity()
		{
			return Velocity;
		}

		void CSoundListener::setRotation(vector3df valueAt, vector3df valueUp)
		{
			ALfloat ListenerOrientation[6] =
			{ valueAt.X, valueAt.Y, valueAt.Z, valueUp.X, valueUp.Y, valueUp.Z };

			alListenerfv(AL_ORIENTATION, ListenerOrientation);

			IRR_ASSERT(alGetError() == AL_NO_ERROR);
		}

		//! Gets the current listener 3d rotation "at".
		vector3df& CSoundListener::getRotationAt()
		{
			return RotationAt;
		}

		//! Gets the current listener 3d rotation "up".
		vector3df& CSoundListener::getRotationUp()
		{
			return RotationUp;
		}
	}  // namespace audio
}  // namespace irrgame

#endif /* AUDIO_DRIVER_OPENAL */
