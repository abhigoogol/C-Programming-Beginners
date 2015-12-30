/*
 * =====================================================================================
 *
 *       Filename:  fork.c
 *
 *    Description:  fork system call
 *
 *        Version:  1.0
 *        Created:  Wednesday 30 December 2015 01:26:04  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Abhishek Singh Sambyal (AbhiSam), abhishek.sambyal@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int pid, count_child = 0, count_parent = 0;
	
	/* You can check the number of processes running at a time by cmd below.
	 * $ ps -aux | grep fork
	 * At this point, the number of running process named fork will be one.
	 * But soon after 5 seconds, re-running the cmd above will give 2 processes
	 * with name fork. */
	printf("Waiting 5 sececonds, you can type \nps -aux | grep fork\ncommand in other terminal and see the number of running process at this time\n");
	sleep(5);

	/* fork call returns an id which is given to the pid variable and fork the
	 * new process.
	 * For parent process i.e. the program which first executes fork will have id
	 * in pid variable, but for the process which is being forked will not have
	 * any value in pid. So, when if block checks for the pid, parent process
	 * will have pid greater than 0 and fork process will have pid equal to 0. */
	pid = fork();

	if (pid == 0){
		while (count_child < 5){
			printf("Entering child process %d\n", count_child);
			sleep(1);
			count_child++;
		}
	} else {
		while (count_parent < 10){
			printf("Entering parent process %d\n", count_parent);
			sleep(1);
			count_parent++;
		}
	}
	
	return 0;
}
