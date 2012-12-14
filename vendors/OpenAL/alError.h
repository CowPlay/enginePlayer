#ifndef _AL_ERROR_H_
#define _AL_ERROR_H_

#include "OpenAL/AL/al.h"
#include "OpenAL/AL/alc.h"

#ifdef __cplusplus
extern "C" {
#endif

ALvoid alSetError(ALCcontext *Context, ALenum errorCode);

#ifdef __cplusplus
}
#endif

#endif
