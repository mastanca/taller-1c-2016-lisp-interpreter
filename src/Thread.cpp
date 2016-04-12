/*
 * Thread.cpp
 *
 *  Created on: Apr 12, 2016
 *      Author: mastanca
 */

#include "Thread.h"

#include <stddef.h>

Thread::~Thread() {
}

void Thread::start() {
}

void Thread::join() {
	pthread_join(myThread, NULL);
}
