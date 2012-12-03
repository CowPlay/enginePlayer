/*
 * COpenGLMaterialRenderer.cpp
 *
 *  Created on: Oct 29, 2012
 *      Author: gregorytkach
 */

#include "COpenGLMaterialRenderer.h"

#ifdef VIDEO_DRIVER_OPENGL

namespace irrgame
{
	namespace video
	{

		//! Default constructor
		COpenGLMaterialRenderer::COpenGLMaterialRenderer(IVideoDriver* driver) :
				Driver(driver)
		{
		}

		//! Destructor
		COpenGLMaterialRenderer::~COpenGLMaterialRenderer()
		{
		}

	}  // namespace video
}  // namespace irrgame

#endif /* VIDEO_DRIVER_OPENGL */
