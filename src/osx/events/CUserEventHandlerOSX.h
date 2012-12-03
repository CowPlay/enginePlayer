/*
 * CUserEventHandlerOSX.h
 *
 *  Created on: Oct 23, 2012
 *      Author: gregorytkach
 */

#include "playerCompileConfig.h"

#ifdef COMPILECONFIGMACOSX_H_

#ifndef CUSEREVENTHANDLEROSX_H_
#define CUSEREVENTHANDLEROSX_H_

#include "events/user/IUserEventHandler.h"

namespace irrgame
{
	namespace events
	{

		class CUserEventHandlerOSX: public IUserEventHandler
		{
			public:
			//! Default constructor
			CUserEventHandlerOSX();

			//! Destructor
			virtual ~CUserEventHandlerOSX();

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

	} /* namespace events */
} /* namespace irrgame */

#endif /* CUSEREVENTHANDLEROSX_H_ */

#endif /* COMPILECONFIGMACOSX_H_ */
