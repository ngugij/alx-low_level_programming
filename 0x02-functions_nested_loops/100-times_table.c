#include <stdio.h>
#include "main.h"

/**
 * print_times_table - print time table for multiples of 0 - 15
 * @n: should work only if the number is between 0 and 15
 * Return: nothing
 */

void print_times_table(int n)
{
	int a, b;
	int result;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				result = a * b;
				if (b == 0)
				{
					_putchar(result + '0');
				} else if (result < 10 && b != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar(32);
					_putchar(result + '0');
				} else if (result >= 10 && result < 100)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				} else if (result >= 100)
				{
					_putchar(44);
					_putchar(32);
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
				}
			}
			_putchar(10);
		}
	}
}
