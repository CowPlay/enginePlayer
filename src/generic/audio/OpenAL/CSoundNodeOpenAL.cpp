/*
 * CSoundNodeStreamed.cpp
 *
 *  Created on: Nov 22, 2012
 *      Author: developer08
 */

#include "CSoundNodeOpenAL.h"

#ifdef AUDIO_DRIVER_OPENAL

#include "OpenAL/al.h"
#include "OpenAL/efx.h"

namespace irrgame
{
	namespace audio
	{

		//! Default constructor
		CSoundNodeOpenAL::CSoundNodeOpenAL(ISoundNode* parent,
				SAudioSource* source) :
				ISoundNode(parent, source), AlBufferSize(65536), AlBufferCount(
						2), AlBuffer(0), AlSourceID(0), CurrentBuffer(0), Looping(
						false)
		{
			Source->grab();

			//generate source id
			alGenSources(1, &AlSourceID);

			IRR_ASSERT(!alGetError());

			AlBuffer = new u32[AlBufferCount];
		}

		//! Destructor
		CSoundNodeOpenAL::~CSoundNodeOpenAL()
		{
			alSourceStop(AlSourceID);

			if (Source)
				Source->drop();

			delete[] AlBuffer;

			if (alIsSource(AlSourceID))
			{
				alDeleteSources(1, &AlSourceID);
			}
		}

		//! Plays a sound source
		void CSoundNodeOpenAL::play(u32 pos, bool loop)
		{
			Looping = loop;
			alSourcei(AlSourceID, AL_LOOPING, loop ? AL_TRUE : AL_FALSE);

			s32 state = 0;

			alGetSourcei(AlSourceID, AL_SOURCE_STATE, &state);

			// if the sound is played
			IRR_ASSERT(state != AL_PLAYING);

			if (state != AL_PAUSED && Source->isStreamed())
			{
				for (u32 i = 0; i < AlBufferCount; i++)
				{
					Source->update(AlBufferSize);

					alBufferData(AlBuffer[i], Source->Format, Source->Buffer,
							Source->BufferSize, Source->Rate);
				}
			}

			alSourcePlay(AlSourceID);
		}

		//! Stop playing
		void CSoundNodeOpenAL::stop()
		{
			alSourceStop(AlSourceID);

			Source->File->seek(0, false);

			if (Source->isStreamed())
			{
				s32 queued;

				alGetSourcei(AlSourceID, AL_BUFFERS_QUEUED, &queued);

				if (queued > 0)
				{
					alSourceUnqueueBuffers(AlSourceID, 2, AlBuffer);
				}

				CurrentBuffer = 0;
			}
		}

		//! Pause playing
		void CSoundNodeOpenAL::pause()
		{
			alSourcePause(AlSourceID);
		}

		//! Returns True if the sound is loaded entirely into memory. Otherwise returns False and sound are streamed in parts.
		bool CSoundNodeOpenAL::isStreamed()
		{
			return Source->isStreamed();
		}

		//! Set volume of this node
		void CSoundNodeOpenAL::setVolume(const f32 value)
		{
			IRR_ASSERT(value >= 0.0);
			//TODO: check max value

			alSourcef(AlSourceID, AL_GAIN, value);
		}

		//! Returns volume of this node
		f32 CSoundNodeOpenAL::getVolume()
		{
			f32 result = IrrNotFound;

			alGetSourcef(AlSourceID, AL_GAIN, &result);

			return result;
		}

		void CSoundNodeOpenAL::applyEffect(SSoundEffect* value)
		{

		}

		void CSoundNodeOpenAL::removeEffect(SSoundEffect* value)
		{

		}

		void CSoundNodeOpenAL::applyFilter(ESoundFilterType value, f32 gainLf,
				f32 gainHf, f32 gain)
		{

//			core::map<ESoundFilterType, u32>::Node* node = Filters.find(value);
//
//			if (node)
//			{
//				u32 existsFilter = node->getValue();
//				alDeleteFilters(1, &existsFilter);
//				Filters.remove(node->getKey());
//			}
//
//			u32 id;
//			alGenFilters(1, &id);
//
//			switch (value)
//			{
//				case ESFT_LOWPASS:
//				{
//					alFilteri(id, AL_FILTER_TYPE, AL_FILTER_LOWPASS);
//
//					alFilterf(id, AL_LOWPASS_GAIN, gainLf);
//					alFilterf(id, AL_LOWPASS_GAINHF, gainHf);
//
//					break;
//				}
//				case ESFT_HIGHPASS:
//				{
//					alFilteri(id, AL_FILTER_TYPE, AL_FILTER_HIGHPASS);
//
//					alFilterf(id, AL_HIGHPASS_GAIN, gainLf);
//					alFilterf(id, AL_HIGHPASS_GAINLF, gainHf);
//
//					break;
//				}
//				case ESFT_BANDPASS:
//				{
//					alFilteri(id, AL_FILTER_TYPE, AL_FILTER_BANDPASS);
//
//					alFilterf(id, AL_BANDPASS_GAIN, gain);
//					alFilterf(id, AL_BANDPASS_GAINLF, gainLf);
//					alFilterf(id, AL_BANDPASS_GAINHF, gainHf);
//
//					break;
//				}
//				default:
//				{
//					//Not implemented
//					IRR_ASSERT(false);
//
//					break;
//				}
//			}
//			IRR_ASSERT(alGetError() == AL_NO_ERROR);
//
//			Filters.insert(value, id);
		}

		void CSoundNodeOpenAL::removeFilter(ESoundFilterType value)
		{
//			u32 id = 0;
//
//			id = Filters.delink(value);
//
//			alDeleteFilters(1, &id);
//
//			IRR_ASSERT(alGetError() == AL_NO_ERROR);
		}

		void CSoundNodeOpenAL::update()
		{
			if (Source->isStreamed())
			{
				s32 processed = 0;

				alGetSourcei(AlSourceID, AL_BUFFERS_PROCESSED, &processed);

				IRR_ASSERT(alGetError() == AL_NO_ERROR);

				if (processed == 1)
				{
					alSourceUnqueueBuffers(AlSourceID, 1,
							&AlBuffer[CurrentBuffer]);

					IRR_ASSERT(alGetError() == AL_NO_ERROR);

					Source->update(AlBufferSize);

					if (Source->BufferSize > 0
							|| (Source->BufferSize == 0 && Looping))
					{

						alBufferData(AlBuffer[CurrentBuffer], Source->Format,
								Source->Buffer, Source->BufferSize,
								Source->Rate);

						alSourceQueueBuffers(AlSourceID, 1,
								&AlBuffer[CurrentBuffer]);

						IRR_ASSERT(alGetError() == AL_NO_ERROR);

						if (Source->BufferSize < AlBufferSize && Looping)
						{
							//TODO:review
							Source->File->seek(0, false);

						}
					}
					else
					{
						s32 queued;

						alGetSourcei(AlSourceID, AL_BUFFERS_QUEUED, &queued);

						IRR_ASSERT(alGetError() == AL_NO_ERROR);

						if (queued == 0)
						{
							Source->File->seek(0, false);
						}
					}

					CurrentBuffer = 1 - CurrentBuffer;
				}
				else if (processed == 2)
				{
					alSourceUnqueueBuffers(AlSourceID, 2, AlBuffer);

					IRR_ASSERT(alGetError() == AL_NO_ERROR);

					CurrentBuffer = 0;

					play();
				}
			}
		}

		//! Internal function. Please do not use.
		ISoundNode* createSoundNode(ISoundNode* parent, SAudioSource* source)
		{
			IRR_ASSERT(parent && source);

			return new CSoundNodeOpenAL(parent, source);
		}

	} /* namespace audio */
} /* namespace irrgame */

#endif /* AUDIO_DRIVER_OPENAL */
