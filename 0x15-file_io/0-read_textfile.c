#include "main.h"




ssize_t read_textfile(const char *filename, size_t letters)
{
	char str[1025];

	int fd = open("Requiescat.txt", O_RDONLY);


	if( fd < 0)
	{
		perror("Error");

		return (0);
	}


	ssize_t read_num = read(fd, filename,  letters);

	ssize_t write_num = write(STDOUT_FILENO,filename, read_num );
	
	if(write_num < read_num)
	{
		return (0);
	}
	else if (write_num == read_num)
		return(read_num);


	close(fd);
}
