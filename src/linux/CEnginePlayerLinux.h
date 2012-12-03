/*
 * CEnginePlayerLinux.h
 *
 *  Created on: Dec 3, 2012
 *      Author: developer08
 */
#include "playerCompileConfig.h"

#ifdef TARGET_OS_LINUX

#ifndef CENGINEPLAYERLINUX_H_
#define CENGINEPLAYERLINUX_H_

#include "generic/CEnginePlayerGeneric.h"

namespace irrgame
{

	//! Player which can runs on linux platforms.
	class CEnginePlayerLinux: public CEnginePlayerGeneric
	{
		public:
			//! Default constructor.
			CEnginePlayerLinux();

			//! Destructor.
			virtual ~CEnginePlayerLinux();

		private:
	};

}  // namespace irrgame

#endif /* CENGINEPLAYERLINUX_H_ */

#endif /* TARGET_OS_LINUX */
