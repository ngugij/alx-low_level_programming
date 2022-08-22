#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */


int create_file(const char *filename, char *text_content)
{
	int result = 1;
	int a = 0;
	int i = 0;
	int len = 0;

	if (filename == NULL)
	{
		result = -1;
		return (result);
	}

	a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (a == -1)
	{
		result = -1;
		return (result);
	}
	if (text_content)
	{
		while (text_content[i])
		{
			i++;
		}
		len = write(a, text_content, i);
		if (len != i)
		{
			result = -1;
		}
	}
	close(a);
	return (result);
}
