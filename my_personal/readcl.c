#include "main.h"


/**
  * main - reads values from the command line
  * @av: strings typed to the cl
  *
  * Return: return nothing
  */

void main(int, char** av)
{
	int n = 0;
	n = words_counter(av);
	cl_to_file(n, av[1], av);
}
