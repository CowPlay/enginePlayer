/*
 * main.cpp
 *
 *  Created on: Jul 24, 2012
 *      Author: gregorytkach
 */
#include "engine.h"
#include "playerCompileConfig.h"

using namespace irrgame;

using namespace audio;
using namespace events;
using namespace io;
using namespace threads;
using namespace video;

#include <stdio.h>
#include <dlfcn.h>

#include <typeinfo>

int some(int a)
{
	return 0;
}

#define signature_app_creator IEngineApplication* (*)()

#include "stdlib.h"

int main()
{
	printf("aaa\n");
	printf("aaa\n");
	printf("aaa\n");
	printf("aaa\n");
	printf("aaa\n");
	printf("aaa\n");
	printf("aaa\n");

//	IEnginePlayer* player = 	IEnginePlayer::createEnginePlayer();
//
//	IAudioDriver* audioDrv = player->getAudioDriver();
//
//	ISoundManager* mngr = player->getSoundManager();
//
//	SAudioSource* src =  mngr->getAudioSource("/home/developer08/Music/test.wav");
//
//	mngr->addSoundNode(src);
//
//	player->getConfigReader()->read(fileConfig);
//
//	void* appHandle = 0;
//
//	IEngineApplication* (*createIrrgameApp)();
//
//	//open your application as static lib
//	appHandle = dlopen(player->getConfigReader()->getEntry()->AppFile.cStr(),
//			RTLD_NOW);
//
//	c8* error = 0;
//	error = dlerror();
//	if(error)
//	{
//		//we have error
//		IRR_ASSERT(false);
//	}
//
//	createIrrgameApp = (signature_app_creator) dlsym(appHandle,
//			player->getConfigReader()->getEntry()->AppCreator.cStr());
//
//	error = dlerror();
//	IRR_ASSERT(error == 0);
//
//	IEngineApplication* app = createIrrgameApp();
//
//	IRR_ASSERT(app != 0);
//
//	player->run(app);
}
