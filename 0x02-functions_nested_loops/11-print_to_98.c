#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - print sequence from given number to 98
 * @n: number to begin sequence from
 *
 * Return: nothing
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; )
	{
		if (n == 98)
		{
			printf("%d\n", i);
		}
		else if (n < 98)
		{
			printf("%d, ", i);
			i++;
		}
		else
		{
			printf("%d, ", i);
			i--;
		}
	}

}
