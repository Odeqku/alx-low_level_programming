/**
  * append_text_to_file - adds text to the end of the file
  * @filename: is the variable for the filename
  * @text_content: is the variable for the text to be append  * ed
  *
  * Return: 1 upon success but -1 upon failure
  * Author: Soyoye Abdulganiyu: Alx-Africa SE Student
  */

#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int  fd = open(filename, O_WRONLY | O_APPEND);

	if (fd > 0 && strcmp(text_content, "NULL") != 0)
	{
		write(fd, text_content, strlen(text_content));
		close(fd);
		return (1);
	}
	else if (fd < 0)
	{
		return (-1);
	}


	if (strcmp(filename, "NULL") == 0)
	{
		return (-1);
	}
	else if (fd > 0 && strcmp(text_content, "NULL") == 0)
	{
		close(fd);
		return (1);
	}
	else if (strcmp(text_content, "NULL") == 0 && fd < 0)
	{
		return (-1);
	}
	else if (fd < 0 && strcmp(text_content, "NULL") != 0)
	{
		return (-1);
	}

	return (0);
}
