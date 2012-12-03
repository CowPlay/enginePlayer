/*
 * CUserEventHandlerLinux.h
 *
 *  Created on: Dec 3, 2012
 *      Author: developer08
 */

#include "playerCompileConfig.h"

#ifdef TARGET_OS_LINUX

#ifndef CUSEREVENTHANDLERLINUX_H_
#define CUSEREVENTHANDLERLINUX_H_

#include "events/user/IUserEventHandler.h"

namespace irrgame
{
	namespace events
	{

		class CUserEventHandlerLinux: IUserEventHandler
		{
			public:
				//! Default constructor
				CUserEventHandlerLinux();

				//! Destructor
				virtual ~CUserEventHandlerLinux();

				//! This func must call from player when any key event from user detected.
				//Platform dependent
				virtual void handleKeyEvent(void* e);

				//! This func must call from player when any mouse event from user detected.
				//Platform dependent
				virtual void handleMouseEvent(void* e);

			protected:
				//Platform dependent
				virtual void initKeyMap();
				//Platform dependent
				virtual void initCursorsInfo();
		};

	}  // namespace events

}  // namespace irrgame

#endif /* CUSEREVENTHANDLERLINUX_H_ */

#endif /* TARGET_OS_LINUX */
