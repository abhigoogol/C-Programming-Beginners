/*
 * =====================================================================================
 *
 *       Filename:  sprintfSTR.c
 *
 *    Description:  Using sprintf
 *
 *        Version:  1.0
 *        Created:  Monday 28 December 2015 05:31:38  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Abhishek Singh Sambyal (AbhiSam), abhishek.sambyal@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){
	char name[100];
	int x;
	x = 5;
	/* Example 1 */
	/* sprintf is different from printf. It first takes the string and store
	 * it in a variable here "name" and then print the variable unlike 
	 * directly showing on the screen.*/
	sprintf(name, "Abhishek");
	printf("name>My name is: %s\n", name);

	/* Example 2 
	 * The integer value is first given to the %d and then the whole
	 * string is given to the "name" variable. */
	sprintf(name, "The value of number x is: %d", x);
	printf("name>%s\n", name);

	/* Example strlen */
	int len = strlen(name);
	printf("The length of the string is: %d\n", len);
	
	/* Example strcopy */
	char str2[100];
	strcpy(str2, name);
	printf("str2>The copied string is: \"%s\"\n", str2);

	/* Example memset
	 * memset will fill the memory with some char(constant byte)*/
	memset(str2, 'a', 5);
	printf("str2>The str2 is now: \"%s\"\n", str2);
	
	return 0;
}

