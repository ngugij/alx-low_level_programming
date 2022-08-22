#include "main.h"


/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file to be read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int a;
	ssize_t len1, len2;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	a = open(filename, O_RDONLY);
	if (a == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(a);
		return (0);
	}
	len1 = read(a, buf, letters);
	close(a);
	if (len1 == -1)
	{
		free(buf);
		return (0);
	}
	len2 = write(STDOUT_FILENO, buf, len1);
	free(buf);
	if (len1 != len2)
	{
		return (0);
	}
	return (len2);
}
