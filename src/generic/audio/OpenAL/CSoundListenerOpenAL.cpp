/*
 * CAudioListener.cpp
 *
 *  Created on: Nov 21, 2012
 *      Author: developer08
 */

#include "CSoundListenerOpenAL.h"

#ifdef AUDIO_DRIVER_OPENAL

#include "OpenAL/al.h"

namespace irrgame
{
	namespace audio
	{
		//! Default constructor
		CSoundListenerOpenAL::CSoundListenerOpenAL()
		{
			Volume = 0.0f;
			Position = vector3df(0, 0, 0);
			Velocity = vector3df(0, 0, 0);
			RotationAt = vector3df(0, 0, -1);
			RotationUp = vector3df(0, 1, 0);

			alGetListenerf(AL_GAIN, &Volume);

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

		//! Destructor
		CSoundListenerOpenAL::~CSoundListenerOpenAL()
		{

		}

		//! Sets new volume of listener.
		void CSoundListenerOpenAL::setVolume(const f32 value)
		{
			//TODO: check max value
			IRR_ASSERT(value >=0.0);

			alListenerf(AL_GAIN, value);
		}

		//! Returns volume of listener.
		f32 CSoundListenerOpenAL::getVolume()
		{
			f32 result = IrrNotFound;

			alGetListenerf(AL_GAIN, &result);

			return result;
		}

		//! Sets the current listener 3d position.
		void CSoundListenerOpenAL::setPosition(const vector3df& value)
		{
			ALfloat ListenerPosition[3] =
			{ value.X, value.Y, value.Z };

			alListenerfv(AL_POSITION, ListenerPosition);

			IRR_ASSERT(alGetError() == AL_NO_ERROR);
		}

		//! Gets the current listener 3d position.
		vector3df& CSoundListenerOpenAL::getPosition()
		{
			return Position;
		}

		//! Gets the current listener 3d position.
		void CSoundListenerOpenAL::setVelocity(const vector3df& value)
		{
			ALfloat ListenerVelocity[3] =
			{ value.X, value.Y, value.Z };

			alListenerfv(AL_VELOCITY, ListenerVelocity);

			IRR_ASSERT(alGetError() == AL_NO_ERROR);
		}

		//! Gets the current listener 3d velocity.
		vector3df& CSoundListenerOpenAL::getVelocity()
		{
			return Velocity;
		}

		//! Sets the current listener 3d rotation.
		void CSoundListenerOpenAL::setRotation(const vector3df& valueAt,
				const vector3df& valueUp)
		{
			ALfloat ListenerOrientation[6] =
			{ valueAt.X, valueAt.Y, valueAt.Z, valueUp.X, valueUp.Y, valueUp.Z };

			alListenerfv(AL_ORIENTATION, ListenerOrientation);

			IRR_ASSERT(alGetError() == AL_NO_ERROR);
		}

		//! Gets the current listener 3d rotation "at".
		vector3df& CSoundListenerOpenAL::getRotationAt()
		{
			return RotationAt;
		}

		//! Gets the current listener 3d rotation "up".
		vector3df& CSoundListenerOpenAL::getRotationUp()
		{
			return RotationUp;
		}

		//! Internal function. Please do not use.
		ISoundListener* createSoundListener()
		{
			return new CSoundListenerOpenAL;
		}

	}  // namespace audio
}  // namespace irrgame

#endif /* AUDIO_DRIVER_OPENAL */
