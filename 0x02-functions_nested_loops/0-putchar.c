#include <main.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

	int main(void)
{
	char *sh = "Holberton";

	while (*sh)
{
	putchar(*sh);
	sh++;
}
	putchar('\n');

	return (0);
}
