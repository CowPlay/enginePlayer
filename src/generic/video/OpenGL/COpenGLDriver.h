/*
 * COpenGLDriver.h
 *
 *  Created on: Oct 11, 2012
 *      Author: gregorytkach
 */

#include "playerCompileConfig.h"

#ifdef VIDEO_DRIVER_OPENGL

#ifndef COPENGLDRIVER_H_
#define COPENGLDRIVER_H_

#include "IEnginePlayer.h"

#include "generic/video/Null/CNullDriver.h"
#include "generic/video/Null/SUserClipPlane.h"
#include "generic/video/Null/ERenderTarget.h"
#include "generic/video/Null/ERenderMode.h"

#include "video/ETransformationState.h"
#include "video/material/SMaterial.h"
#include "video/vertex/EIndexType.h"
#include "video/vertex/EVertexType.h"
#include "video/color/SColorf.h"

#include "OpenGL/gl.h"
#include "OpenGL/glu.h"
#include "OpenGL/glext.h"
//#include <GLUT/glut.h>



namespace irrgame
{
	namespace video
	{
		//! Implementation of OpenGL driver
		/*
		 * IMPORTANT! This class implement specification of OpenGL at least v2.0 ES
		 */
		class COpenGLDriver: public CNullDriver
		{
			public:
				//! Default constructor
				COpenGLDriver(IEnginePlayer* player);

				//!Destructor
				virtual ~COpenGLDriver();

				//! Applications must call this method before performing any rendering.
				virtual void beginScene(SColor color, bool backBuffer,
						bool zBuffer, recti* sourceRect);

				//! Presents the rendered image to the screen.
				//! Must be overriden for every player realization
				virtual void endScene();

				//! Sets the fog mode.
				virtual void setFog(FogEntry* value);

				//! set or reset render target
				bool setRenderTarget(ITexture* texture, bool clearBackBuffer,
						bool clearZBuffer, SColor color);

				//! Draws a pixel.
				virtual void drawPixel(u32 x, u32 y, const SColor &color);

				//! draws a 2d image, using a color and the alpha channel of the texture if
				//! desired. The image is drawn at pos, clipped against clipRect (if != 0).
				//! Only the subtexture defined by sourceRect is used.
				void draw2DImage(const video::ITexture* texture,
						const vector2di& pos, const recti& sourceRect,
						const recti* clipRect, SColor color,
						bool useAlphaChannelOfTexture);

				//! get render target size
				const dimension2du& getCurrentRenderTargetSize() const;

				//! sets the current Texture
				//! Returns whether setting was a success or not.
				bool setActiveTexture(u32 stage, const ITexture* texture);

				//! Returns the maximum texture size supported.
				virtual dimension2du getMaxTextureSize() const;

				//! Returns true if OpenGL have errors.
				virtual bool haveError() const;

				//! Setup current material
				void setMaterial(const SMaterial& material);

			private:

				bool genericDriverInit();

				void clearBuffers(bool backBuffer, bool zBuffer,
						bool stencilBuffer, SColor color);

				//! Sets transformation matrices.
				/** \param state Transformation type to be set, e.g. view,
				 world, or projection.
				 \param mat Matrix describing the transformation. */
				void setTransform(ETransformationState state,
						const matrix4f& mat);

				//! helper function doing the actual rendering.
				void renderArray(const void* indexList, u32 primitiveCount,
						scene::EPrimitiveType pType, EIndexType iType);

				//! sets the needed renderstates
				void setRenderStates3DMode();
				void setRenderStates2DMode(bool alpha, bool texture,
						bool alphaChannel);

				//! creates a transposed matrix in supplied GLfloat array to pass to OpenGL
				inline void createGLMatrix(GLfloat gl_matrix[16],
						const matrix4f& m);
				inline void createGLTextureMatrix(GLfloat gl_matrix[16],
						const matrix4f& m);

				//! apply prepared clip plane
				void uploadClipPlane(u32 index);

				//! create all material renderers
				void createMaterialRenderers();

				//! disables all textures beginning with the optional fromStage parameter. Otherwise all texture stages are disabled.
				//! Returns whether disabling was successful or not.
				bool disableTextures(u32 fromStage = 0);

				//! Setup 3D ambient lighting, dark-color
				void setAmbientLight(const SColorf& color);

				//! Returns the transformation set by setTransform
				const matrix4f& getTransform(ETransformationState state) const;

				//! Render primitive lists
				void drawVertexPrimitiveList(const void* vertices,
						u32 vertexCount, const void* indexList,
						u32 primitiveCount, EVertexType vType,
						scene::EPrimitiveType pType, EIndexType iType);

				//! draws a vertex primitive list in 2d
				void draw2DVertexPrimitiveList(const void* vertices,
						u32 vertexCount, const void* indexList,
						u32 primitiveCount, EVertexType vType,
						scene::EPrimitiveType pType, EIndexType iType);

				//! helper function for render setup.
				void createColorBuffer(const void* vertices, u32 vertexCount,
						EVertexType vType);

				//! Draws a part of the texture into the rectangle.
				void draw2DImage(const video::ITexture* texture,
						const recti& destRect,
						const recti& sourceRect,
						const recti* clipRect,
						const video::SColor* const colors,
						bool useAlphaChannelOfTexture);

				//! draws a set of 2d images, using a color and the alpha channel of the
				//! texture if desired. The images are drawn beginning at pos and concatenated
				//! in one line. All drawings are clipped against clipRect (if != 0).
				//! The subtextures are defined by the array of sourceRects and are chosen
				//! by the indices given.
				void draw2DImage(const video::ITexture* texture,
						const vector2di& pos,
						const core::array<recti>& sourceRects,
						const arrayi& indices, const recti* clipRect,
						SColor color, bool useAlphaChannelOfTexture);

			private:
				core::array<SUserClipPlane> UserClipPlanes;

				//! bool to make all renderstates reset if set to true.
				//TODO: review, mb need delete
				bool ResetRenderStates;
				ERenderMode CurrentRenderMode;
				matrix4f Matrices[ETS_COUNT];
				matrix4f TextureFlipMatrix;
				bool Transformation3DChanged;

				core::array<u8> ColorBuffer;

				//! Texture buffers
				const ITexture* CurrentTexture[MaterialMaxTextures];

				//TODO:make comment
				ERenderTarget CurrentTarget;
				//TODO:make comment
				ITexture* RenderTargetTexture;
				//TODO:make comment
				dimension2du CurrentRendertargetSize;

				//TODO:make comment
				SMaterial Material;
				//TODO:make comment
				SMaterial LastMaterial;

				//TODO:make comment
				bool Doublebuffer;
				//TODO:make comment
				bool Stereo;

				u8 AntiAlias;

		};
	} /* namespace video */
} /* namespace irrgame */

#endif /* COPENGLDRIVER_H_ */

#endif /* VIDEO_DRIVER_OPENGL */
