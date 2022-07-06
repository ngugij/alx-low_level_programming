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
	if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n < 98)
	{
		printf("%d, ", n);
		n = n + 1;
	}
	else
	{
		printf("%d, ", n);
		n = n - 1;
	}

}
