#include "main.h"




ssize_t read_textfile(const char *filename, size_t letters)
{
	char str[1025];

	int fd = open(filename, O_RDONLY| O_CREAT, S_IRUSR | S_IWUSR);


	if( fd < 0)
	{
		perror("Error");

		return (0);
	}


	ssize_t read_num = read(fd, str,  letters);

	ssize_t write_num = write(STDOUT_FILENO, str, read_num );
	
	if(write_num < read_num)
	{
		return (0);
	}
	else if (write_num == read_num)
		return(read_num);


	close(fd);
}
