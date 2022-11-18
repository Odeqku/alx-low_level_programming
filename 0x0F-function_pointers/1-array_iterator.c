#include "function_pointers.h"

/**
 * array_iterator - execute a function pointer on each element of an array
 * @array: array of integers
 * @size: size of array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i; /* declare iter var */

	/* set condition for if array & size point to nothing */
	if (array == NULL || action  == NULL)
		return;

	/* iterate through array */
	for (i = 0; size > 0; i++)
	{
		action(*array); /* function call */
		array++; /* update array step */
		size--; /* decrease size */
	}
}
