/*
 * playerCompileConfigLinux.h
 *
 *  Created on: Nov 14, 2012
 *      Author: developer08
 *      Description: This file contains code which uses only in linux player realization.
 */

#include "config/compileConfigLinux.h"

#ifdef DEV_OS_LINUX

#ifndef PLAYERCOMPILECONFIGLINUX_H_
#define PLAYERCOMPILECONFIGLINUX_H_

/*
 * Target OS.
 * For select target OS please uncomment specify define.
 */
#define TARGET_OS_LINUX
//#define TARGET_OS_ANDROID

#ifdef TARGET_OS_LINUX
//!audio
#define AUDIO_DRIVER_OPENAL

//! threads
#define THREADS_POSIX

//! video
#define VIDEO_DRIVER_OPENGL
#endif /* TARGET_OS_LINUX */

#ifdef TARGET_OS_ANDROID
//!audio
#define AUDIO_DRIVER_OPENAL

//! threads
#define THREADS_POSIX

//! video
#define VIDEO_DRIVER_OPENGLES2
#endif /* TARGET_OS_ANDROID */

#endif /* PLAYERCOMPILECONFIGLINUX_H_ */

#endif /* DEV_OS_LINUX */
