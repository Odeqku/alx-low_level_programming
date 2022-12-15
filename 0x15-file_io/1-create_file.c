#include "main.h"

/**
 * create_file - it creates a file if the file does not
 *already exist and truncates it if it exists with content
 * @filename: the placeholder for the filename to be passed
 *by the caller function (the main function in this case)
 * @text_content: the variable name that contains the text
 *be written into the file if it is not NULL
 *
 * Return: returns -1 upon failure to create or open an
 *existing file with the name, 1 upon success
 */


int create_file(const char *filename, char *text_content)
{
	ssize_t len = strlen(text_content);
	int fp;

	if (strcmp(text_content, "NULL") == 0 && strcmp(filename, "NULL") != 0)
	{
		fp = open(filename, O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
		if (fp < 0)
		{
			return (-1);
		}
		else
		{
			close(fp);
			return (0);
		}
	}
	if (strcmp(filename, "NULL") == 0)
		return (-1);

	else
	{
		fp = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
		if (fp < 0)
		{
			return (-1);
		}
		else if (write(fp, text_content, len) == len)
		{
			close(fp);
			return (1);
		}
		else
		{
			close(fp);
			return (-1);

		}
	}
	return (0);
}
