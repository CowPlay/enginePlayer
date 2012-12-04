/*
 * irrgamePlayerMac.h
 *
 *  Created on: Oct 18, 2012
 *      Author: gregorytkach
 */

#ifndef IRRGAMEPLAYERMAC_H_
#define IRRGAMEPLAYERMAC_H_

#ifdef VIDEO_DRIVER_OPENGL

//#include <OpenGL/OpenGL.h>

#include "support/vendors/OpenGL/gl.h"
#include "support/vendors/OpenGL/glu.h"
#include "support/vendors/OpenGL/glext.h"
//#include <OpenGL/gl.h>
//#include <OpenGL/glu.h>
//#include <OpenGL/glext.h>
//#include <GLUT/glut.h>

#include <objc/objc.h>

namespace irrgame
{
	class irrgamePlayerMac: public irrgamePlayerStub
	{
		public:
		//! Default consructor
		irrgamePlayerMac();

		//! Destructor
		virtual ~irrgamePlayerMac();

		void flush();

		protected:

		//! Run player internal. Must be overriden in every realization of player.
		//! Handle user events in this func
		bool runInternal();

		private:

		//! Internal macosx application launching
		void applicationLaunching();

		//! Will create macosx cocoa window (not x11)
		void createWindow();

		private:
		//pointer to window
		id Window;
		//pointer to CGL context
		CGLContextObj CGLContext;//TODO: move to opengl driver
		//pointer to OpenGL context
		id OGLContext;//TODO: move to opengl driver

		bool IsActive;
	};

} /* namespace irrgame */
#endif /* IRRGAMEPLAYERMAC_H_ */

#endif /* VIDEO_DRIVER_OPENGL */
