#include <stdio.h>
#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 *
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		m = n * -1;
		_putchar(45);
	}
	else
	{
		m = n;
	}

	if (m >= 10)
	{
		_putchar((m / 10) + '0');
	}
	_putchar((m % 10) + '0');
}
