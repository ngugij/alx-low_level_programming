#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws diagonal line on the terminal
 * @n: number of times character \ is printed
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
