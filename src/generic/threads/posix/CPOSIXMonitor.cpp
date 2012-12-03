/*
 * CPOSIXMonitor.cpp
 *
 *  Created on: Aug 14, 2012
 *      Author: gregorytkach
 */

#include "CPOSIXMonitor.h"

#ifdef THREADS_POSIX

namespace irrgame
{
	namespace threads
	{
		//! IMonitor creator.
		IMonitor* IMonitor::createMonitor()
		{
			return new CPOSIXMonitor();
		}

		//! Default constructor
		CPOSIXMonitor::CPOSIXMonitor()
		{
#ifdef DEBUG
			setDebugName("CPOSIXMonitor");
#endif
			pthread_mutex_init(&Handle, 0);
		}

		//! Destructor
		CPOSIXMonitor::~CPOSIXMonitor()
		{
			pthread_mutex_destroy(&Handle);
		}

		//! Acquires a lock for an object. This action also marks the beginning of a critical section.
		//! No other thread can enter the critical section unless it is executing the instructions
		//! in the critical section using a different locked object.
		void CPOSIXMonitor::enter()
		{
			grab();
			pthread_mutex_lock(&Handle);
		}

		//! Releases the lock on an object. This action also marks the end of a critical section protected by the locked object.
		void CPOSIXMonitor::exit()
		{
			drop();
			pthread_mutex_unlock(&Handle);
		}

	}
}

#endif /* THREADS_POSIX */
