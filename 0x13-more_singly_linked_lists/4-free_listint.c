#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * free_listint - is a function that frees a listint_t list
  *
  *@*head: the only arguement it accepts which is a pointer to listint_t
  *
  * Return: It returns nothing.
  */

void free_listint(listint_t *head)
{

	if (head == NULL)
		return;
	
	free_listint(head->next);
	free(head);
}
