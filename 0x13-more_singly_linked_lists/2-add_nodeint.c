#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_nodeint - adds a new node at the beginging of a listint_t list
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;
	ptr = *head;

	listint_t *temp = malloc(sizeof(listint_t));
	
	if(temp != NULL)
	{
		temp->next = ptr;
		temp->n = n;
		*head = temp;
		ptr = *head;
	}

	else
	{
		*head = NULL;
	}
	
	return(temp);
}
