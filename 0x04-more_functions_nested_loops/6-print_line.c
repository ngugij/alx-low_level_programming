#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 * @n: number of times character _ should be printed
 *
 * Return: nothing
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
