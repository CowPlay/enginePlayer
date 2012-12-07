/*
 * playerCompileConfigMacOSX.h
 *
 *  Created on: Nov 2, 2012
 *      Author: gregorytkach
 */

#include "config/compileConfigOSX.h"

#ifdef DEV_OS_OSX

#ifndef PLAYERCOMPILECONFIGMACOSX_H_
#define PLAYERCOMPILECONFIGMACOSX_H_

/*
 * Target OS.
 * For select target OS please uncomment specify define.
 */
#define TARGET_OS_OSX
//#define TARGET_OS_IOS

#ifdef TARGET_OS_OSX
//!audio
#define AUDIO_DRIVER_OPENAL

//! threads
#define THREADS_POSIX

//! video
#define VIDEO_DRIVER_OPENGL
#endif /* TARGET_OS_OSX */

#ifdef TARGET_OS_IOS
//!audio
#define AUDIO_DRIVER_OPENAL

//! threads
#define THREADS_POSIX

//! video
#define VIDEO_DRIVER_OPENGLES2
#endif /* TARGET_OS_IOS */

#endif /* PLAYERCOMPILECONFIGMACOSX_H_ */

#endif /* DEV_OS_OSX */
