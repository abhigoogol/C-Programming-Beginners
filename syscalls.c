/*
 * =====================================================================================
 *
 *       Filename:  syscalls.c
 *
 *    Description:  Open, read, write system calls
 *
 *        Version:  1.0
 *        Created:  Tuesday 29 December 2015 04:43:30  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Abhishek Singh Sambyal (AbhiSam), abhishek.sambyal@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

int main(int argc, char* argv[]){
	int fd;
	char* buf, buf_read[20];
	buf = "Hello World!\n";
	
	/* Creating and writing a file
	 * open(filename, flags, mode)
	 * See:$ man 2 open*/
	fd = open("myfile.txt", O_CREAT | O_WRONLY, 0600);

	if(fd == -1){
		printf("Something wrong in creating or writing a file.");
		exit(1);	//Needs stdlib.h
	}
	
	/* Writes up to count bytes from the buffer pointed buf to the file referred 
	 * to by the file descriptor fd. 
	 * see:$ man 2 write
	 * transfer 13 bytes from buf -> fd*/
	write(fd, buf, 13);
	close(fd);
	


	/* Reading a file */
	fd = open("myfile.txt", O_RDONLY);

	if(fd == -1){
		printf("Something wrong in opening and reading the file.");
		exit(1);
	}
	/* Reading 10 bytes from fd -> buf_read */
	read(fd, buf_read, 10);
	buf_read[10] = '\0';
	printf("The string read from the file mytfile.txt: %s", buf_read);

	return 0;
}
