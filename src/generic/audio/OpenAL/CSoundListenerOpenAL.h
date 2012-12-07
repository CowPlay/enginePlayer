/*
 * CAudioListener.h
 *
 *  Created on: Nov 21, 2012
 *      Author: developer08
 */

#include "playerCompileConfig.h"

#ifdef AUDIO_DRIVER_OPENAL

#ifndef CAUDIOLISTENER_H_
#define CAUDIOLISTENER_H_

#include "audio/ISoundListener.h"

namespace irrgame
{
	namespace audio
	{

		class CSoundListenerOpenAL: public ISoundListener
		{
			public:
				//! Default constructor
				CSoundListenerOpenAL();

				//! Destructor
				virtual ~CSoundListenerOpenAL();

				//! Sets new volume of listener.
				/* @param value New volume of listener. Range: 0.0 to TODO
				 */
				virtual void setVolume(const f32 value);

				//! Returns volume of listener.
				virtual f32 getVolume();

				//! Sets the current listener 3d position.
				/* When playing sounds in 3D, updating the position of the listener every frame should be
				 * done using this function.
				 * @param value New position of the listener.
				 */
				virtual void setPosition(const vector3df& value);

				//! Gets the current listener 3d position.
				virtual vector3df& getPosition();

				//! Sets the current listener velocity.
				/*
				 * Position and velocity can unrelated - the speed is only used for the Doppler effect,
				 * the observer must move yourself.
				 * @param vel Velocity of the listener.
				 */
				virtual void setVelocity(const vector3df& value);

				//! Gets the current listener 3d velocity.
				virtual vector3df& getVelocity();

				//! Sets the current listener 3d rotation.
				/* Rotation contains an "at" vector and an "up" vector, where the "at" vector represents
				 * the "forward" direction of the listener and the orthogonal projection of the "up" vector
				 * into the subspace perpendicular to the "at" vector represents the "up" direction for the
				 * listener. The initial orientation is (vector3df (0, 0, (-1)), vector3df (0, 1, 0)), i.e. looking down
				 * the Z axis with the Y axis pointing upwards.
				 * @param valueAt "at" vector of the listener
				 * @param valueUp "up" vector of the listener
				 */
				virtual void setRotation(const vector3df& valueAt,
						const vector3df& valueUp = vector3df(0, 1, 0));

				//! Gets the current listener 3d rotation "at".
				virtual vector3df& getRotationAt();

				//! Gets the current listener 3d rotation "up".
				virtual vector3df& getRotationUp();
		};

	}  // namespace audio
}  // namespace irrgame

#endif /* CAUDIOLISTENER_H_ */

#endif /* AUDIO_DRIVER_OPENAL */
