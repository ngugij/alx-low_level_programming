#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers from 0 - 9
 * followed by a new line
 *
 * Return: nothing
 */

void print_numbers(void)
{

	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
