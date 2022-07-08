#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square
 * followed by a new line
 * @size: size of square
 * Return: nothing
 */

void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
