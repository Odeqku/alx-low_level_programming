#include "main.h"

/**
 * _islower - Checks for lowercase charater
 * @c: The character to be checked
 *
 * Return: Return 1 for lower case and 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
{
	return (1);
}
	return (0);
}
