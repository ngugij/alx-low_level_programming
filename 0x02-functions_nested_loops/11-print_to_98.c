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

	for (; n = 98; )
	{
		if (n == 98)
		{
			_putchar(n + '0');
		}
		else if (n < 98)
		{
			_putchar(n + '0');
			_putchar(44);
			_putchar(32);
			n++;
		}
		else
		{
			_putchar(n + '0');
			_putchar(44);
			_putchar(32);
			n--;
		}
	}
	_putchar(10);

}
