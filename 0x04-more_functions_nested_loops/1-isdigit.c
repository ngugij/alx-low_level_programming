#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks for a digit 0 - 9
 * @c: value to be checked
 *
 * Return: 1 if c is a digit
 * Otherwise return 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}

