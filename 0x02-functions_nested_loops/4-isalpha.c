#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 *
 * Return: 1 if c is a letter
 * Otherwise return 0
 */

int _isalpha(int c)
{

	if (isalpha(c))
	{
		return (1);
	}

	return (0);
}
