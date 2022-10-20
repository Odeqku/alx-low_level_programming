#include "main.h"

/**
 * _isdigit - A that checks for digit 0 to 9
 *
 * Return: This returns 1 if c is a digit,otherwise it returns 0
 */

int _isdigit(int c)
{
	if ((c >= 0) || (c <= 9))
{
	return (1);
}
	else
{
	return (0);
}
}
