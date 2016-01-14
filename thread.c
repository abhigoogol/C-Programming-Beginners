/*
 * =====================================================================================
 *
 *       Filename:  thread.c
 *
 *    Description:  Programming in threads
 *
 *        Version:  1.0
 *        Created:  Thursday 14 January 2016 01:20:35  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Abhishek Singh Sambyal (AbhiSam), abhishek.sambyal@gmail.com
 *   Organization:  
 *
 * ====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

#include <pthread.h>	// Library for pthread

void *speed_func();
void *speed_func1();

int main(int argc, char* argv[]){
	
	// pthread_t will declare a variable which will store the ID of the thread
	// which will be created by pthread_create function
	pthread_t first_thread, second_thread;

	printf("Main function is starting here\n");
	
	// pthread_create will create the thread with four arguments
	// First Arg: address of the  variable which will store the thread ID created
	// by the pthread_create.
	// Second Arg: pthread attribute(attachable or detachable - default
	// attachable). NULL means default value.
	// Third Arg: function which you want to execute using thread
	// Fourth Arg: arguments of the functions which you are using in the function
	pthread_create(&first_thread, NULL, speed_func, NULL);
	pthread_create(&second_thread, NULL, speed_func1, NULL);
	
	// pthread_join will wait for the thread to complete and then will terminate
	// the main process(thread). The first argument is the ID of the thread for
	// whom the main has to wait. The second argument is the return value of the
	// function which is executing in the thread. It is not safe to return the
	// value from the thread and use it. USE IT WITH CAUTION.
	// If we don't write pthread_join, the main program will terminate before the
	// thread terminates, which will  make the thread to terminate as well i.e.
	// if main terminates the thread inside its scope will also terminate, so to
	// stop this cascading effect we will use pthread_join to stop the main
	// thread to terminate before the threads in its scope terminates.
	pthread_join(first_thread, NULL);
	pthread_join(second_thread, NULL);
	
	return 0;
}

// Normal routines which are used in thread
void *speed_func()
{
	int i;
	for(i = 0; i < 5; i++)
	{
		printf("The value of first thread: %d\n", i);
		sleep(1);
	}
	return NULL;
}

void *speed_func1()
{
	int j;
	for(j = 5; j > 0; j--)
	{
		printf("The value of second thread: %d\n", j);
		sleep(1);
	}
	return NULL;
}
