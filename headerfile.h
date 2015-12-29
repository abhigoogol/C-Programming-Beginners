/*
 * =====================================================================================
 *
 *       Filename:  headerfile.h
 *
 *    Description:  Header file
 *    				It only contains declarations and macro definations
 *
 *        Version:  1.0
 *        Created:  Tuesday 29 December 2015 04:12:05  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Abhishek Singh Sambyal (AbhiSam), abhishek.sambyal@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

/* ifndef - if not defined, is used to check that the file is not being copied
 * more than once. If any file includes this header file, this file first checks
 * whether __MYHEADER__ is being defined of not. __MYHEADER__ not defined means
 * the file is not being included. __MYHEADER__ defined means no need to include 
 * this file because it has already been included. */
#ifndef __MYHEADER__

/* Once it is checked that __MYHEADER__ is not defined, first define
 * __MYHEADER__ so that no other file can again include the same file which will 
 * cause duplicacy. */
#define __MYHEADER__

/* Declarations and macro definations
 * Defination of these declarations are present in another file.*/
#define sum(a, b) a+b
int addNumbers(int a, int b);

#endif
