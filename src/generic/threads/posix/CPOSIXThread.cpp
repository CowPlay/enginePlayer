/*
 * CPOSIXThread.cpp
 *
 *  Created on: Aug 13, 2012
 *      Author: gregorytkach
 */

#include "CPOSIXThread.h"

#ifdef THREADS_POSIX

//#include <sys/syscall.h>
//#include <sys/types.h>
//#include "signal.h"
//#include "sched.h"

#include "pthread.h"
#include "unistd.h"

namespace irrgame
{
	namespace threads
	{
		//! IThread creator
		IThread* IThread::createThread(delegateThreadCallback* callback,
				void* callbackArg, EThreadPriority prior)
		{
			return new CPOSIXThread(callback, callbackArg, prior);
		}

		//! Causes the operating system to sleep current thread.
		void IThread::sleep(s32 time)
		{
			usleep(time * 1000);
		}
//
//		//! Returns current thread id
//		s32 IThread::getCurrentThreadID()
//		{
//			return syscall(SYS_gettid);
//		}
//
		//! Use for simply run func in each platform
		void CPOSIXThread::ProceedFunc(IThread* who)
		{
			//make thread sensitive for pthread_cancel()
			int prevCancelType;
			pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS, &prevCancelType);

			(*(who->getCallback()))(who->getCallbackArg());
		}

		//! Default constructor
		CPOSIXThread::CPOSIXThread(delegateThreadCallback* callback,
				void* callbackArg, EThreadPriority prior) :
				Priority(prior), Handle(0)
		{
#ifdef DEBUG
			setDebugName("CPOSIXThread");
#endif
			Callback = callback;
			CallbackArg = callbackArg;
		}

		//! Destructor
		CPOSIXThread::~CPOSIXThread()
		{
			if (Handle)
				pthread_cancel(Handle);
		}

		//! Causes the operating system to start thread, and optionally supplies an object containing data to be used by the method the thread executes
		void CPOSIXThread::start()
		{
			s32 error = 0;

			sched_param param;
			s32 policy = SCHED_FIFO;

//			pthread_attr_t attr;
			// init attr
//			error = pthread_attr_init(&attr);
//			IRR_ASSERT(error == 0);

//			error = pthread_attr_setscope(&attr, PTHREAD_SCOPE_PROCESS);
//			IRR_ASSERT(error == 0);

//			error = pthread_attr_setinheritsched(&attr, PTHREAD_EXPLICIT_SCHED);
//			IRR_ASSERT(error == 0);

//			error = pthread_attr_setschedpolicy(&attr, policy);
//			IRR_ASSERT(error == 0);

			error = pthread_create(&Handle, 0,
					reinterpret_cast<pthread_callback>(ProceedFunc), this);

			if (error)
				IRR_ASSERT(false);

//			error = pthread_attr_destroy(&attr);
//			IRR_ASSERT(error == 0);

			//init param
			error = pthread_getschedparam(Handle, &policy, &param);
			IRR_ASSERT(error == 0);

			s32 minPrio = sched_get_priority_min(SCHED_FIFO);
			s32 maxPrio = sched_get_priority_max(SCHED_FIFO);
			s32 deltaPrio = maxPrio - minPrio;

			switch (Priority)
			{
				case ETP_LOW:
				{
					param.sched_priority = minPrio + deltaPrio * 0.2;
					break;
				}

				case ETP_NORMAL:
				{
					param.sched_priority = minPrio + deltaPrio / 2;
					break;
				}
				case ETP_HIGH:
				{
					param.sched_priority = maxPrio - deltaPrio * 0.2;
					break;
				}
				default:
				{
					//Not implemented
					IRR_ASSERT(false);
					break;
				}
			}

			error = pthread_setschedparam(Handle, policy, &param);
			IRR_ASSERT(error == 0);

//			//check param
//			error = pthread_getschedparam(Handle, &policy, &param);
//			IRR_ASSERT(error == 0);
		}

		//! Blocks the calling thread until a thread terminates.
		//! Platform dependent
		void CPOSIXThread::join()
		{
			pthread_join(Handle, 0);
		}
//
//		//! Causes the operating system to kill thread
//		//! Platform dependent
////		void CPOSIXThread::kill()
////		{
////
////		}
//
	}
}

#endif /* THREADS_POSIX */

