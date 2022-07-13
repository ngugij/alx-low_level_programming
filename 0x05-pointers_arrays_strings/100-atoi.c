#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * _atoi - convert a string into an integer
 * @s: string to be converted into an integer
 *
 * Return: 0 where there are no numbers in the string
 */

int _atoi(char *s)
{
	char *i = s;
	int sign = 1;
	unsigned int base = 0;

	while (*i != '\0' && (*i < '0' || *i > '9'))
	{
		if (*i == '-')
		{
			sign *= -1;
		}
		i++;
	}

	if (*i != '\0')
	{
		do {
			base = base * 10 + (*i - '0');
			i++;
		} while (*i >= '0' && *i <= '9');
	}
	return (base * sign);
}
