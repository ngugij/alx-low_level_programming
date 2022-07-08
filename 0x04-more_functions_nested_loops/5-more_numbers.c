#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print numbers from 1 to 14
 * using _putchar
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int n;
	int m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 15; m++)
		{
			if (m >= 10)
				_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
		}
		_putchar(10);
	}
}

