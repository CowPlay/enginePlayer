///*
// * irrgamePlayerStub.h
// *
// *  Created on: Jul 26, 2012
// *      Author: gregorytkach
// */
//
//#ifndef IRRGAMEPLAYERSTUB_H_
//#define IRRGAMEPLAYERSTUB_H_
//
//#include "core/collections.h"
//#include "scene/ISceneManager.h"
//#include "video/driver/IVideoDriver.h"
//#include "video/driver/IVideoModeList.h"
//#include "events/user/IUserEventHandler.h"
//#include "events/user/SCursorInfo.h"
//#include "events/user/EUserKeys.h"
//#include "events/user/EUserKeyStates.h"
//#include "utils/ITimer.h"
//
//namespace irrgame
//{
//	class irrgamePlayerStub: public IEnginePlayer
//	{
//		public:
//
//			//! Gets pointer to config reader
//			//! @return - pointer to config reader
//			virtual io::IPlayerConfigReader* getConfigReader();
//
//			virtual scene::ISceneManager* getSceneManager();
//
//			virtual video::IVideoDriver* getVideoDriver();
//
//			//! Returns user event receiver
//			/* If you want handle any user event - you must work with this object.
//			 * */
//			virtual events::IUserEventHandler* getUserEventsHandler();
//
//			//! Returns player timer
////			virtual utils::ITimer* getTimer();
//
//			virtual void run(IEngineApplication* application);
//
//		protected:
//
//			//! Default constructor
//			irrgamePlayerStub();
//
//			//! Run player internal. Must be overriden in every realization of player.
//			//! Return True if player still work. Otherwise - return False.
//			/*
//			 * Handle user events in this func.
//			 * */
//			virtual bool runInternal() = 0;
//
//		protected:
//
//			io::IPlayerConfigReader* ConfigReader;
//			scene::ISceneManager* SceneManager;
//			video::IVideoDriver* VideoDriver;
//			video::IVideoModeList* VideoModeList;
//			events::IUserEventHandler* UserEventsHandler;
//			utils::ITimer* Timer;
//	};
//}
//
//#endif /* IRRGAMEPLAYERSTUB_H_ */
