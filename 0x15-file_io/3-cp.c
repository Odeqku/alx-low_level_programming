/**
  * main - reads its arguments from the command line
  * @ac: number of argument read from the cl
  * @av: the argument(s) read of the cl
  *
  * Author: Abdulganiyu Soyoye - Student at Alx-Africa SE
  * Return: returns 0 always
  */


#include "main.h"

int main(int ac, char **av)
{
	ssize_t res;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	res = cp_file_from_file_to(av[1], av[2]);
	printf("-> %li)\n", res);

	return (0);
}

/**
  * cp_file_from_file_to - cp the contents from a file to another
  * @file1: the name of the file to copy from
  * @file2: the name of the file to copy to
  *
  * Return: returns 0 at EOC & 1 upon success of write(),
  * among other exit() values
  *
  * Author: Soyoye Abdulganiyu - Student at Alx-Africa SE
  */

ssize_t cp_file_from_file_to(const char *file1, const char *file2)
{
	ssize_t fp1, fp2, res1, res2, res3;
	char *str = malloc(3000 * sizeof(char));

	fp1 = open(file1, O_RDONLY, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	fp2 = open(file2, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (fp1 < 0)
	{
		dprintf(2, "Error: Can't read from %s\n", file1);
		exit(98);
	}
	if (fp2 < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", file2);
		exit(99);
	}
	else
	{
		res3 = read(fp1, str, 3000);
		write(fp2, str, res3);
		res1 = close(fp1);
		res2 = close(fp2);
		free(str);

		if (res1 != 0 && res2 != 0)
		{
			dprintf(2, "Error: Can't close fd's %ld\n", fp1);
			dprintf(2, "Error: Can't close fd's %ld\n", fp2);
			exit(100);
		}
		else if (res1 != 0)
		{
			dprintf(2, "Error: Can't close fd's %ld\n", fp1);
			exit(100);
		}
		else if (res2 != 0)
		{
			dprintf(2, "Error: Can't close fd's %ld\n", fp2);
			exit(100);
		}
		return (1);
	}

		return (0);
}
