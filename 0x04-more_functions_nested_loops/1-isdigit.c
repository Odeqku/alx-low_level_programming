#include "main.h"

/**
 * _isdigit - A that checks for digit 0 to 9
 * @c: input
 *
 * Return: This returns 1 if c is a digit,otherwise it returns 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
{
	return (1);
}
	else
{
	return (0);
}
}
