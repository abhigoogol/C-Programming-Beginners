/*
 * =====================================================================================
 *
 *       Filename:  pre-macro.c
 *
 *    Description:  Preprocessors
 *
 *        Version:  1.0
 *        Created:  Tuesday 29 December 2015 10:54:40  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Abhishek Singh Sambyal (AbhiSam), abhishek.sambyal@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>


/* The substitution of the preprocessor can be seen by the command given below:
 *
 * Usage: $ gcc -E pre-macro.c 
 * 
 * It will not compile the program but will substitute the preprocessor to 
 * their respective places.
 * stdio.h contents will be displayed and NUM will be substituted by 3 in the 
 * program. */

#define NUM 3	/* NUM will be substituted by 3 when we compile the program */

#define ADD		/* USED FOR #ifdef. It is not necessary to assign value to add
to check for the condition for #ifdef */

int main(int argc, char* argv[]){
	int i,j, k;
	i = 10;
	j = NUM;
	printf("The value of NUM is: %d and i is: %d\n", j, i);

	/* If ADD macro is defined then if block will execute otherwise else block 
	 * will execute.*/
#ifdef ADD
	k = i + j;
#else
	k = i + j + NUM;
#endif
	printf("ADD(T): 13 or ADD(F): 23\nThe value of ADD is: %d\n", k);
	
	return 0;
}

