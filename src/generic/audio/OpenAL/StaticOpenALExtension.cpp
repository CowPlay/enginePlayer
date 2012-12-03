/*
 * StaticOpenALExtension.cpp
 *
 *  Created on: Nov 22, 2012
 *      Author: developer08
 */

#include "StaticOpenALExtension.h"

#ifdef AUDIO_DRIVER_OPENAL

namespace irrgame
{
	namespace audio
	{

		s32 StaticOpenALExtension::getAlFormat(EAudioFormat format)
		{
			s32 result = 0;

			switch (format)
			{

				case EAF_MONO8:
				{
					result = 0x1100;
					break;
				}
				case EAF_MONO16:
				{
					result = 0x1101;
					break;
				}
				case EAF_STEREO8:
				{
					result = 0x1102;
					break;
				}
				case EAF_STEREO16:
				{
					result = 0x1103;
					break;
				}
				default:
				{
					//Not implemented
					IRR_ASSERT(false);
					break;
				}
			};

			return result;
		}

	} /* namespace audio */
} /* namespace irrgame */

#endif /* AUDIO_DRIVER_OPENAL */
