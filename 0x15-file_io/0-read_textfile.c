/**
  * read_textfile - reads file
  * @filename: is the file name to be read
  * @letters: number of characters to be read
  *
  * Return: returns number of letters written
  */



#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *str = malloc(sizeof(str) * letters);
	ssize_t read_num;
	ssize_t write_num;

	int fd = open(filename, O_RDONLY | O_CREAT, S_IRUSR | S_IRGRP | S_IROTH);


	if (fd < 0 || (strcmp(filename, "NULL") == 0))
	{
		return (0);
	}
	else
	{
		read_num = read(fd, str,  letters);
		write_num = write(STDOUT_FILENO, str, read_num);
	}

	if (write_num != read_num)
	{
		return (0);
	}
	else
		return (read_num);

	free(str);
	close(fd);
	return (0);
}
