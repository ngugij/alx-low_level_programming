#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int bytes;
	int i;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		pritf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", array[i]);
			break;
		}
		printf("%02hhx ", array[i]);
	}
	return (0);
}
