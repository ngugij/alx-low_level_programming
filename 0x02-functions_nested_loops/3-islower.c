#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - checks for lowercase characters
 *
 * Return: 1 if c is lowercase
 * otherwise return 0
 */

int _islower(int c)
{

	if (islower(c))
	{
		_putchar(49);
	}
	else
	{
		_putchar(48);
	}

	return;
}
