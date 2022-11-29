#include <stdio.h>
#include "lists.h"



/**
  * print_listint - a function that print elements of listint_t
  * @h: it takes one argument which is a pointer to listint_t
  *
  * Return: an integer in the number of nodes
  */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;
	listint_t *ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		counter++;
	}

	return (counter);
}
