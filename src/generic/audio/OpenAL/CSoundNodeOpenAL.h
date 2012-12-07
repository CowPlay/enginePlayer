/*
 * CSoundNodeStreamed.h
 *
 *  Created on: Nov 22, 2012
 *      Author: developer08
 */

#include "playerCompileConfig.h"

#ifdef AUDIO_DRIVER_OPENAL

#ifndef CSOUNDNODESTREAMED_H_
#define CSOUNDNODESTREAMED_H_

#include "audio/ISoundNode.h"
#include "audio/SAudioSource.h"
#include "audio/sfx/SSoundEffect.h"
#include "core/collections/map/map.h"

namespace irrgame
{
	namespace audio
	{

		class CSoundNodeOpenAL: public ISoundNode
		{
			public:

				//! Default constructor
				CSoundNodeOpenAL(ISoundNode* parent, SAudioSource* source);

				//! Destructor
				virtual ~CSoundNodeOpenAL();

				//! Plays a sound source
				/* @param pos the position at which to begin playing
				 * @param loop means that our sound will be played endlessly in a loop
				 */
				virtual void play(u32 pos = 0, bool loop = false);

				//! Stop playing.
				/* When you call play() after stop() playback starts from the beginning.
				 */
				virtual void stop();

				//! Pause playing.
				/* When you call play() after pause() playback starts from where it paused.
				 */
				virtual void pause();

				//! Set volume of this node
				virtual void setVolume(const f32 value);

				//! Returns volume of this node
				virtual f32 getVolume();

				//! Check the sound is loaded entirely into memory, or streamed in parts.
				/* @returns true if sound loaded parts. Otherwise returns false.
				 */
				virtual bool isStreamed();

				//! Connect directly to the sound of the filter.
				/* @param value: a pointer to the effect to apply.
				 */
				virtual void applyEffect(SSoundEffect* value);

				//! Disconnected from the source directly effect.
				/* @param value: a pointer to the effect to remove.
				 */
				virtual void removeEffect(SSoundEffect* value);

				//! Connect directly to the sound of the filter.
				/* @param value: a pointer to the filter to apply,
				 * @param lfGain: low frequency part of the gain. Range: 0.0..1.0 (default 1.0)
				 * @param hfGain: high frequency part of the gain. Range: 0.0..1.0 (default 1.0)
				 * @param gain: value is given only for the filter ESET_BANDPASS.
				 * Range: 0.0..1.0 (default 1.0).
				 */
				virtual void applyFilter(ESoundFilterType value, f32 gainLf,
						f32 GainHf, f32 gain = 1.0);

				//! Disconnected from the source directly filter.
				/* @param value: a pointer to the filter to remove.
				 */
				virtual void removeFilter(ESoundFilterType value);

			protected:

				//! Replaces the buffer for streaming audio.
				void update();

			private:
				//! Pointer to the source which played
				SAudioSource* Source;

				//! id's of the sound buffer

				u32 AlBufferSize;
				u32 AlBufferCount;

				u32* AlBuffer;

				//! ID of al source
				u32 AlSourceID;

				u32 CurrentBuffer;

				bool Looping;

//				core::map<ESoundEffectType, SSoundEffect*> Effects;
//
//				core::map<ESoundFilterType, u32> Filters;
		};

	} /* namespace audio */
} /* namespace irrgame */

#endif /* CSOUNDNODESTREAMED_H_ */

#endif /* AUDIO_DRIVER_OPENAL */
