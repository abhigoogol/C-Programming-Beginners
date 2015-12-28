/*
 * =====================================================================================
 *
 *       Filename:  multiplesource.c
 *
 *    Description:  Using multiple source
 *
 *        Version:  1.0
 *        Created:  Monday 28 December 2015 04:34:41  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Abhishek Singh Sambyal (AbhiSam), abhishek.sambyal@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

/* To write the prototype is optional. It might work even without the
 * statement below. But it is a good practice to mention the prototype.*/
int addNumbers(int a, int b);

int main(){

		int total;
		total = addNumbers(4,5);
		printf("The sum of two numbers is: %d\n", total);

		return 0;
}
