/*
 * CPOSIXThread.h
 *
 *  Created on: Aug 13, 2012
 *      Author: gregorytkach
 */

#include "playerCompileConfig.h"

#ifdef THREADS_POSIX

#ifndef CPOSIXTHREAD_H_
#define CPOSIXTHREAD_H_

#include "threads/IThread.h"
#include "pthread.h"
#include "core/collections/stringc.h"

namespace irrgame
{
	namespace threads
	{
		extern "C" typedef void *(*pthread_callback)(void *);

		class CPOSIXThread: public IThread
		{
			public:

				//! Default constructor
				//! Platform dependent
				CPOSIXThread(delegateThreadCallback* callback,
						void* callbackArg = 0, EThreadPriority prior =
								ETP_NORMAL);

				//! Destructor
				virtual ~CPOSIXThread();

				//! Causes the operating system to start thread, and optionally supplies an object containing data to be used by the method the thread executes
				//! Platform dependent
				virtual void start();

				//! Blocks the calling thread until a thread terminates.
				//! Platform dependent
				virtual void join();

				//! Causes the operating system to kill thread
				//! Platform dependent
//				virtual void kill();

			protected:
				//! Use for simply run func in individual thread
				static void ProceedFunc(IThread* who);

			private:
				//! Thread priority
				EThreadPriority Priority;
				//! Thread HANDLE
				pthread_t Handle;
				//! Thread init attributes
				pthread_attr_t Attributes;
		};

	}
}

#endif /* CPOSIXTHREAD_H_ */

#endif /* THREADS_POSIX */
