/*
 * CEnginePlayerLinux.cpp
 *
 *  Created on: Dec 3, 2012
 *      Author: developer08
 */
#include "CEnginePlayerLinux.h"

#ifdef TARGET_OS_LINUX

namespace irrgame
{

	//! Default constructor
	CEnginePlayerLinux::CEnginePlayerLinux() :
			CEnginePlayerGeneric()
	{

	}

	//! Destructor.
	CEnginePlayerLinux::~CEnginePlayerLinux()
	{
	}

	//! Internal function. Please do not use.
	IEnginePlayer* IEnginePlayer::createEnginePlayer()
	{
		return new CEnginePlayerLinux;
	}

}  // namespace irrgame

#endif /* TARGET_OS_LINUX */
