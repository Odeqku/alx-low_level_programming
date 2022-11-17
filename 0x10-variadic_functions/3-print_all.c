#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - prints string arguments with a separator
 *
 * @separator: - thing to print between strings
 * @n: - number of arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *sep, *ptr;
	unsigned int i;
	va_list list;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(list, n);

	if (n > 0)
		printf("%s", va_arg(list, char *));
	for (i = 1; i < n; i++)
	{
		ptr = va_arg(list, char*);
		if (ptr == NULL)
			ptr = "(nil)";
		printf("%s%s", sep, ptr);
	}
	printf("\n");
	va_end(list);
}
 55  
0x0F-variadic_functions/3-print_all.c
@@ -0,0 +1,55 @@
#include <stdio.h>
#include <stdarg.h>
/**
 * goto_valid - return pointer to first valid specifier in string
 *
 * @str: string
 *
 * Return: pointer to first valid specifier in format string
 */
const char *goto_valid(const char *str)
{
	while (*str != 'c' && *str != 'i' && *str != 'f'
	      && *str != 's' && *str != 0)
		str++;
	return (str);
}

/**
 * print_all - prints various types given a format string for the arguments
 *
 * @format: string containing type information for args
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	const char *ptr;
	va_list list;

	va_start(list, format);
	ptr = goto_valid(format);
	while (*ptr)
	{
		printf("Top of while %s\n", ptr);
		switch (*ptr)
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%i", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			printf("%s", va_arg(list, char *));
		}
		ptr++;
		ptr = goto_valid(ptr);
		if (*ptr)
			printf(", ");
	}
	printf("\n");
}
