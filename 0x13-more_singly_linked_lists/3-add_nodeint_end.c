#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_int_end - adds a new node at the end of a listint_t list
 * @head: a pointer argument of type listint_t*
 * @n: the data of listint_t list as the second argument
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	if (*head == NULL)
	{

		listint_t *ptr = malloc(sizeof(listint_t));

		ptr->n = n;
		ptr->next = NULL;
		*head = ptr;
		return(*head);
	}

	listint_t *ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	listint_t *temp = malloc(sizeof(listint_t));

	if (n != 0 && temp != NULL)
	{
		temp->n = n;
		temp->next = NULL;
		ptr->next = temp;
	}
	return (temp);
}
