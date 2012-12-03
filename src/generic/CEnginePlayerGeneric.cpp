/*
 * CEnginePlayerGeneric.cpp
 *
 *  Created on: Dec 3, 2012
 *      Author: developer08
 */
#include "CEnginePlayerGeneric.h"
#include "audio/IAudioDriver.h"
#include "events/engine/SharedEventScheduler.h"
#include "events/user/IUserEventHandler.h"
#include "scene/ISceneManager.h"
#include "video/driver/IVideoDriver.h"
#include "video/driver/IVideoModeList.h"

namespace irrgame
{
	//!Default constructor
	CEnginePlayerGeneric::CEnginePlayerGeneric() :
			AudioDriver(0), VideoDriver(0), VideoModeList(0), ConfigReader(0), SceneManager(
					0), UserEventsHandler(0), Timer(0)
	{
		//		ConfigReader = io::createPlayerConfigReader();
		//
		//		SceneManager = scene::createSceneManager();
		//
		//		//FIXME: read config from file or make default config for device before create video driver
		//
		//		VideoModeList = video::createVideoModeList();
		//
		//		//create
		//		UserEventsHandler = events::createUserEventsHandler();
		//
		//create and run actions pool
		events::SharedEventScheduler::getInstance().startProcess();
	}

	//! Destructor
	CEnginePlayerGeneric::~CEnginePlayerGeneric()
	{
		if (AudioDriver)
			AudioDriver->drop();

		if (VideoDriver)
			VideoDriver->drop();

		if (ConfigReader)
			ConfigReader->drop();

		if (SceneManager)
			SceneManager->drop();

		if (UserEventsHandler)
			UserEventsHandler->drop();
	}

	//! Return pointer to current audio driver
	audio::IAudioDriver* CEnginePlayerGeneric::getAudioDriver()
	{
		return AudioDriver;
	}

	//! Return pointer to current video driver
	video::IVideoDriver* CEnginePlayerGeneric::getVideoDriver()
	{
		return VideoDriver;
	}

	//! Return pointer to config reader
	io::IPlayerConfigReader* CEnginePlayerGeneric::getConfigReader()
	{
		return ConfigReader;
	}

	//! Return pointer to scene manager
	scene::ISceneManager* CEnginePlayerGeneric::getSceneManager()
	{
		return SceneManager;
	}

	//! Return pointer to user event handler
	/* If you want handle any user event - you must work with this object. */
	events::IUserEventHandler* CEnginePlayerGeneric::getUserEventsHandler()
	{
		return UserEventsHandler;
	}

	//! Run engine application
	void CEnginePlayerGeneric::run(IEngineApplication* application)
	{
		//TODO: run app in other thread

		//start events handler
		UserEventsHandler->startEventProcess();

		while (runInternal())
		{
			utils::ITimer::tick();

			events::SharedEventScheduler::getInstance().proceedNextRealTimeEvent();

			VideoDriver->beginScene();

			//	scenemanager->drawAll();

			VideoDriver->endScene();
		}

		//stop events handler
		UserEventsHandler->stopEventProcess();
	}

}  // namespace irrgame

