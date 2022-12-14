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
	int i = 0;
	int  fd = open(filename, O_WRONLY | O_APPEND);

	while (text_content[i])
		i++;

	if (fd > 0 && strcmp(text_content, "NULL") != 0)
	{
		write(fd, text_content, i);
		close(fd);
		return (1);
	}

	else if (fd > 0 && strcmp(text_content, "NULL") == 0)
	{
		close(fd);
		return (1);
	}

	return (fd);
}
