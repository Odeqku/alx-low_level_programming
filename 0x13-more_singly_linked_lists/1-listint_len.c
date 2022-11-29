#include "lists.h"

/**
  * listint_len - counts the number of the elements in a linked listint_t list
  * @h: the only argument of listint_len
  *
  *Return: returns the number of element in the list
  */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;
	listint_t *ptr = h;

	while (ptr != NULL)
	{

		counter++;
		ptr = ptr->next;
	}
	return (counter);
}



