#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - checks for lowercase characters
 *
 * Return: 1 if c is lowercase
 * Return: 0 otherwise
 */

int _islower(int c)
{

	c = 't';
	_putchar(islower(c));

	c = 'D';
	_putchar(islower(c));

	return (0);
}
