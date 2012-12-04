/*
 * StaticX11ExtensionHandler.cpp
 *
 *  Created on: Dec 3, 2012
 *      Author: developer08
 */

#include "StaticX11ExtensionHandler.h"

#ifdef TARGET_OS_LINUX

#include "stdio.h"

namespace irrgame
{

	s32 StaticX11ExtensionHandler::onXError(Display *display,
			XErrorEvent *event)
	{
		c8 msg[256];	//X Error
		c8 msg2[256];	//From call

		snprintf(msg, 256, "%d", event->request_code);
		XGetErrorDatabaseText(display, "XRequest", msg, "unknown", msg2, 256);
		XGetErrorText(display, event->error_code, msg, 256);

		IRR_ASSERT(false);

		return 0;
	}

} // namespace irrgame

#endif /* TARGET_OS_LINUX */
