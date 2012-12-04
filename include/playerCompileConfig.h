/*
 * playerCompileConfig.h
 *
 *  Created on: Jul 26, 2012
 *      Author: gregorytkach
 *      Description: This file contains cross-platform code which uses in all realizations of player.
 */

#ifndef PLAYERCOMPILECONFIG_H_
#define PLAYERCOMPILECONFIG_H_

#include "compileConfig.h"

#include "config/playerCompileConfigLinux.h"
#include "config/playerCompileConfigOSX.h"

/*
 * Constants
 */

#define fileConfig "assets/config.xml"
//__attribute__ ((unused)) static const c8* fileConfig = "assets/config.xml";

#endif /* PLAYERCOMPILECONFIG_H_ */
