#include "main.h"

void check_IO_stat(int stat, int a, char *filename, char mode);

/**
 * main - copies contents of one file to another
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 1 (Success)
 */


int main(int argc, char *argv[])
{
	int src, dest, rea = 1024, wrote, close_src, close_dest;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	check_IO_stat(src, -1, argv[1], 'O');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_IO_stat(dest, -1, argv[2], 'W');
	while (rea == 1024)
	{
		rea = read(src, buf, sizeof(buf));
		if (rea == -1)
		{
			check_IO_stat(-1, -1, argv[1], 'O');
		}
		wrote = write(dest, buf, rea);
		if (wrote == -1)
		{
			check_IO_stat(-1, -1, argv[2], 'W');
		}
	}
	close_src = close(src);
	check_IO_stat(close_src, src, NULL, 'c');
	close_dest = close(dest);
	check_IO_stat(close_dest, dest, NULL, 'C');
	return (0);
}

/**
 * check_IO_stat - checks if a file can be opened or closed
 * @stat: fileto be opened description
 * @filename: name of file
 * @mode: close or open
 * @a: file descriptor
 *
 * Return: nothing
 */

void check_IO_stat(int stat, int a, char *filename, char mode)
{
	if (mode == 'c' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", a);
		exit(100);
	}
	else if (mode == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
