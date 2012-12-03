/*
 * StaticOpenALExtension.h
 *
 *  Created on: Nov 22, 2012
 *      Author: developer08
 */
#include "playerCompileConfig.h"

#ifdef AUDIO_DRIVER_OPENAL

#ifndef STATICOPENALEXTENSION_H_
#define STATICOPENALEXTENSION_H_

#include "audio/EAudioFormat.h"

namespace irrgame
{
	namespace audio
	{

		class StaticOpenALExtension
		{
			public:

				//! Converts audio format from EAudioFormat in AlFormat
				static s32 getAlFormat(EAudioFormat format);
		};

	} /* namespace audio */
} /* namespace irrgame */

#endif /* STATICOPENALEXTENSION_H_ */

#endif /* AUDIO_DRIVER_OPENAL */
