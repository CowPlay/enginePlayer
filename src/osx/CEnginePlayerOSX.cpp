/*
 * CEnginePlayerOSX.cpp
 *
 *  Created on: Dec 3, 2012
 *      Author: developer08
 */
#include "CEnginePlayerOSX.h"

#ifdef TARGET_OS_OSX

namespace irrgame
{

	//! Default constructor
	CEnginePlayerOSX::CEnginePlayerOSX() : CEnginePlayerGeneric()
	{

	}

	//! Internal function. Please do not use.
	IEnginePlayer* createEnginePlayer()
	{
		return new CEnginePlayerOSX;
	}

}  // namespace irrgame

#endif /* TARGET_OS_OSX */

