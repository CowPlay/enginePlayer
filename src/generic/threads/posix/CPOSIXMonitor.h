/*
 * CPOSIXMonitor.h
 *
 *  Created on: Aug 14, 2012
 *      Author: gregorytkach
 */

#include "playerCompileConfig.h"

#ifdef THREADS_POSIX

#ifndef CPOSIXMONITOR_H_
#define CPOSIXMONITOR_H_

#include "threads/IMonitor.h"
#include "pthread.h"

namespace irrgame
{
	namespace threads
	{
		class CPOSIXMonitor: public IMonitor
		{
			public:

				//! Default constructor
				CPOSIXMonitor();

				//! Destructor
				virtual ~CPOSIXMonitor();

				//! Acquires a lock for an object. This action also marks the beginning of a critical section.
				//! No other thread can enter the critical section unless it is executing the instructions
				//! in the critical section using a different locked object.
				virtual void enter();

				//! Releases the lock on an object. This action also marks the end of a critical section protected by the locked object.
				virtual void exit();

			private:
				//! POSIX mutex realization
				pthread_mutex_t Handle;
		};
	}
}

#endif /* CPOSIXMONITOR_H_ */

#endif /* THREADS_POSIX */
