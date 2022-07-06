#include <stdio.h>
#include "main.h"

/**
 * times_table - return the multiplication table 
 * upto multiples of 9
 *
 * Return: nothing
 */

void times_table(void)
{

	int a;
	int b;
	int result;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++);
		{
			result = a * b;
			if(b == 0)
			{
				_putchar(result + '0');
			}
			else if (b != 0 && result <= 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(result + '0');
			}
			else
			{
				_putchar(44);
				_putchar(32);
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar(10);
	}
}
