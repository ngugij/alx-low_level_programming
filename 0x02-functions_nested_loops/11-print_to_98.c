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
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		else if (n < 98)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(44);
			_putchar(32);
			i++;
		}
		else
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(44);
			_putchar(32);
			i--;
		}
	}
	_putchar(10);

}
