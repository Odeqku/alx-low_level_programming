#include <stdio.h>
#include <stdlib.h>
/**
  * main - prints the name of the current file
  *
  * Return: Always 0.
  */
int main(void)
{
	printf("%s\n", __BASE_FILE__);

	return (0);
}
