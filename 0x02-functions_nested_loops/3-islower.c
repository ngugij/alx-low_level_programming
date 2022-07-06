#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - checks for lowercase characters
 *
 * @c: character to be checked
 * Return: 1 if c is lowercase
 * otherwise return 0
 */

int _islower(int c)
{

	if (islower(c))
	{
		return (1);
	}

	return (0);
}
