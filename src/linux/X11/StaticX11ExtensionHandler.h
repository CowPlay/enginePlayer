/*
 * StaticX11ExtensionHandler.h
 *
 *  Created on: Dec 3, 2012
 *      Author: developer08
 */
#include "playerCompileConfig.h"

#ifdef TARGET_OS_LINUX

#ifndef STATICX11EXTENSIONHANDLER_H_
#define STATICX11EXTENSIONHANDLER_H_

#include "X11/Xlib.h"

namespace irrgame
{

	class StaticX11ExtensionHandler
	{
		public:
			static s32 onXError(Display* display, XErrorEvent *event);
	};

}  // namespace irrgame

#endif /* STATICX11EXTENSIONHANDLER_H_ */

#endif /* TARGET_OS_LINUX */
