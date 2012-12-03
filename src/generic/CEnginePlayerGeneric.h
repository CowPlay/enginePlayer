/*
 * CEnginePlayerGeneric.h
 *
 *  Created on: Dec 3, 2012
 *      Author: developer08
 */

#ifndef CENGINEPLAYERGENERIC_H_
#define CENGINEPLAYERGENERIC_H_

#include "IEnginePlayer.h"

namespace irrgame
{

	class CEnginePlayerGeneric: public IEnginePlayer
	{
		public:

			//! Destructor
			virtual ~CEnginePlayerGeneric();

		protected:
			//! Default constructor
			CEnginePlayerGeneric();

		private:
	};

}  // namespace irrgame

#endif /* CENGINEPLAYERGENERIC_H_ */
