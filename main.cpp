/*
 * main.cpp
 *
 *  Created on: Jul 24, 2012
 *      Author: gregorytkach
 */
#include "engine.h"
#include "playerCompileConfig.h"

using namespace irrgame;

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

int main()
{

	typedef delegate<int, int> Tdel;

	Tdel* d = new Tdel;

	(*d) += NewDelegate(&some);
	(*d) += NewDelegate(&some);
	(*d) += NewDelegate(&some);

	(*d) -= NewDelegate(&some);

	IEnginePlayer * player = 	IEnginePlayer::createEnginePlayer();

	player->getConfigReader()->read(fileConfig);

	void* appHandle = 0;

	IEngineApplication* (*createIrrgameApp)();

	//open your application as static lib
	appHandle = dlopen(player->getConfigReader()->getEntry()->AppFile.cStr(),
			RTLD_NOW);

	c8* error = 0;
	error = dlerror();
	if(error)
	{
		//we have error
		IRR_ASSERT(false);
	}

	createIrrgameApp = (signature_app_creator) dlsym(appHandle,
			player->getConfigReader()->getEntry()->AppCreator.cStr());

	error = dlerror();
	IRR_ASSERT(error == 0);

	IEngineApplication* app = createIrrgameApp();

	IRR_ASSERT(app != 0);

	player->run(app);
}
