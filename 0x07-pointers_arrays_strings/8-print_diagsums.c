#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix
 * @size: size of square matrix
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	unsigned int suma, sumb;

	suma = 0;
	sumb = 0;

	for (i = 0; i < size; i++)
	{
		suma = suma + a[(size * i) + i];
		sumb = sumb + a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", suma, sumb);
}
