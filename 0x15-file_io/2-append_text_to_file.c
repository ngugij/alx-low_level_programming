#include "main.h"


/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */


int append_text_to_file(const char *filename, char *text_content)
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

	a = open(filename, O_WRONLY | O_APPEND);
	if (a == -1)
	{
		result = -1;
		return (result);
	}
	if (text_content && a > 0)
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
	return (result);
}
