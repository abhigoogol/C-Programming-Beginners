/*
 * =====================================================================================
 *
 *       Filename:  linked_list.c
 *
 *    Description:  Linked list program
 *
 *        Version:  1.0
 *        Created:  Thursday 14 January 2016 06:36:27  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Abhishek Singh Sambyal (AbhiSam), abhishek.sambyal@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>		// For exit(1)
#include <string.h>		// For sercpy

// Record of each person.
typedef struct records {
	char first_name[20];
	char last_name[20];
	int age;
	struct records *next;
} p_rec;

int main(int argc, char *agrv[]){
	p_rec *head = NULL;
	p_rec *new, *list;
	
	// Data which will be entered in the linked list.
	char *name[] = {"John", "Ron", "Vince", "Shane", NULL};
	char *last[] = {"Wick", "Howrd", "Kate", "Dough", NULL};
	unsigned int age[] = {20, 24, 19, 45};
	
	int i = 0;
	while(name[i])
	{
		// malloc returns a void pointes, so to make it the p_rec struct
		// pointer, we will cast it with p_rec *.
		new = (p_rec *) malloc(sizeof(p_rec));
		if(new == NULL)
		{
			fprintf(stderr, "Unable to allocate memory.\n");
			exit(1);	//stdlib.h header file needed
		}
		strcpy(new->first_name, name[i]);
		strcpy(new->last_name, last[i]);
		new->age = age[i];
		
		new->next = head;
		head = new;
		i++;
	}
	
	// Traverse throught the list and print all the enteries in it.
	int person_no = 1;
	list = head;
	while(list != NULL)
	{
		printf("PERSON %d\n",person_no);
		printf("First name: %s\n", list->first_name);
		printf("Last name: %s\n", list->last_name);
		printf("Age: %d\n\n", list->age);

		list = list->next;
		person_no++;
	}

	// Traverse through ever node and free it.
	list = head;
	while(list != NULL)
	{
		head = list->next;
		free(list);
		list = head;
	}
	
	return 0;
}
