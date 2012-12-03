/*
 * CEnginePlayerGeneric.h
 *
 *  Created on: Dec 3, 2012
 *      Author: developer08
 */

#ifndef CENGINEPLAYERGENERIC_H_
#define CENGINEPLAYERGENERIC_H_

#include "IEnginePlayer.h"
#include "events/user/IUserEventHandler.h"
#include "video/driver/IVideoModeList.h"
#include "utils/ITimer.h"

namespace irrgame
{

	class CEnginePlayerGeneric: public IEnginePlayer
	{
		public:

			//! Destructor
			virtual ~CEnginePlayerGeneric();

			//! Return pointer to current audio driver
			virtual audio::IAudioDriver* getAudioDriver();

			//! Return pointer to current video driver
			virtual video::IVideoDriver* getVideoDriver();

			//! Return pointer to config reader
			virtual io::IPlayerConfigReader* getConfigReader();

			//! Return pointer to scene manager
			virtual scene::ISceneManager* getSceneManager();

			//! Return pointer to user event handler
			/* If you want handle any user event - you must work with this object. */
			virtual events::IUserEventHandler* getUserEventsHandler();

			//! Run engine application
			virtual void run(IEngineApplication* application);

		protected:
			//! Default constructor
			CEnginePlayerGeneric();

		protected:

			//! Run player internal. Must be overriden in every realization of player.
			/* Need for handle user events, update timers etc. */
			virtual bool runInternal() = 0;

		protected:

			//! Pointer to current audio driver
			audio::IAudioDriver* AudioDriver;
			//! Pointer to current video driver
			video::IVideoDriver* VideoDriver;
			//! Pointer list of all support video modes
			video::IVideoModeList* VideoModeList;
			//! Pointer to config reader.
			io::IPlayerConfigReader* ConfigReader;
			//! Pointer to scene manager.
			scene::ISceneManager* SceneManager;
			//! Pointer to user event handler
			events::IUserEventHandler* UserEventsHandler;
			//! Pointer to player timer
			utils::ITimer* Timer;
	};

}  // namespace irrgame

#endif /* CENGINEPLAYERGENERIC_H_ */
