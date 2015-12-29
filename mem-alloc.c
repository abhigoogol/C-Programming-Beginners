/*
 * =====================================================================================
 *
 *       Filename:  mem-alloc.c
 *
 *    Description:  memory allocation using malloc
 *
 *        Version:  1.0
 *        Created:  Tuesday 29 December 2015 12:38:01  IST
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
#include <string.h>

int main(int argc, char* argv[]){
	char* ptr;
	
	/* malloc will assign 50 bytes to the pointer "ptr"
	 * we have to cast the malloc because malloc gives us the void pointer. 
	 * So, we have to cast the returned pointer to our respective pointer type
	 * which is "char" here. */
	ptr = (char*) malloc(50);

	/* ptr = "Memory is given by malloc function" 
	 * The above statement will not work because after the assignment, ptr  will 
	 * be pointing to the text written above but ptr is pointing to the memory
	 * allocated by malloc. So, we will use strcpy to give data to ptr. */
	strcpy(ptr, "Memory is given by malloc function");

	/* lu format specifier is used because pointer memory is bigger than the 
	 * integer type. So, we cant cast from bigger to smaller.
	 * %d and %u don't work properly, they give warning. */
	printf("ptr: %s length: %lu\n", ptr, strlen(ptr));
	free(ptr);
	
	return 0;
}

