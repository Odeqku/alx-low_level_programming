/**
  * append_text_to_file - adds text to the end of the file
  * @filename: is the variable for the filename
  * @text_content: is the variable for the text to be appended
  * 
  * Return: 1 upon success but -1 upon failure
  * Author: Soyoye Abdulganiyu: Alx-Africa SE Student
  */

#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{

	int fd = open(filename, O_RDWR | O_APPEND);

/*	printf("%s", text_content);
*/
	if (fd < 3)
	{
		perror("Program");
		return (-1);
		exit(0);
	}
	else
	{
		if (text_content != NULL)
		{
			write(fd, text_content, strlen(text_content));
			return (1);
		}
	}

	close(fd);
	return (0);
}
