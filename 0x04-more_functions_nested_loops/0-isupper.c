#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: character to be checked
 *
 * Return: 1 if c is uppercase
 * Otherwise return 0
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}
