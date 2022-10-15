#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
{
	putchar(c);
}
{
	putchar(toupper(c));
}
{
	putchar('\n');
}
	return (0);
}
