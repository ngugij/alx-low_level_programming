#include <stdio.h>
#include "main.h"

/**
 * print_triangle - draws a triangle on the terminal
 * @size: size of the triangle
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = a; b <= size; b++)
			{
				_putchar(32);
			}
			for (b = 1; b <= a; b++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
