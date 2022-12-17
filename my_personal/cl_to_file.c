#include "main.h"

/**
  * cl_to_file - write to a file from cl, creates the file
  * if not exits and appends to it if already exits
  * @n: number of words to be written
  * @filename: the name of the file which shall be passeed also
  * @av: other strings from cl (the texts)
  *
  * Return: 0 if open successfull, -1 if failed
  */


int cl_to_file(int n, const char *filename, char **av )
{
        int fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);

        if (fd == -1)
                exit(-1);

        char *arr = " ";
        char *arr1 = "\n";
        int j;

        for (j = 0; j < n; j++)
        {
                if (j > 1)
                {
                        write(fd, av[j], char_counter(j, av));
                        write(fd, arr, 1);

                }
        }

        write(fd, arr1, 1);
        close(fd);
        return (0);
}
