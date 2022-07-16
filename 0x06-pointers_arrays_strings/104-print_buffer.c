#include <stdio.h>
#include "main.h"

/**
 * print_buffer - prints a buffer 10 bytes per line
 * @b: buffer
 * @size: bytes to be printed
 *
 * Return: nothing
 */

void print_buffer(char *b, int size)
{
	int i;
	int j;

	for (j = 0; j < size; j += 10)
	{
		printf("%08x: ", j);

		for (i = 0; i < 10; i++)
		{
			if ((i + j) >= size)
			{
				printf("  ");
			}
			else
			{
				printf("%02x", *(b + i + j));
			}
			if ((i % 2) != 0 && i != 0)
				printf(" ");
		}
		for (i = 0; i < 10; i++)
		{
			if ((i + j) >= size)
				break;
			else if (*(b + i + j) >= 31 &&
				 *(b + i + j) <= 126)
				printf("%c", *(b + i + j));
			else
				printf(".");
		}
		if (j >= size)
		{
			continue;
		}
		printf("\n");
	}
	if (size <= 0)
	{
		printf("\n");
	}
}
