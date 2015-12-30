/*
 * =====================================================================================
 *
 *       Filename:  openDir.c
 *
 *    Description:  opendir() and readdir() system calls
 *
 *        Version:  1.0
 *        Created:  Wednesday 30 December 2015 12:39:55  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Abhishek Singh Sambyal (AbhiSam), abhishek.sambyal@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

#include <sys/types.h>
#include <dirent.h>

#include <stdlib.h>

int main(int argc, char* argv[]){
	DIR * dir;
	struct dirent * read_dir;	//See: $ man readdir

	dir = opendir(".");

	if(dir == NULL)
	{
		printf("Error opening the directory");
		exit(1);
	}
	
	/* readdir(dir) will automatically increment to every entry in the directory
	 * until it reaches the last entry of the directory. 
	 * See: $ man opendir
	 * 		$ man readdir*/
	while((read_dir = readdir(dir)) != NULL){
		printf("%s\n", read_dir->d_name);
	}

	closedir(dir);
}
