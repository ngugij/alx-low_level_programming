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
	int base = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ')
	{
		i++;
	}

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	for ( ; s[i] != '\0'; ++i)
	{
		base = base * 10 + s[i] - '0';
	}

	if (s[i] == '-' || s[i] == '+')
	{
		sign = 1 - 2 * (s[i++] == '-');
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (base > INT_MAX / 10 ||
		    (base == INT_MAX / 10 &&
		     s[i] - '0' > 7))
		{
			if (sign == 1)
			{
				return (INT_MAX);
			}
			else
			{
				return (INT_MIN);
			}
			base = base * 10 + (s[i++] - '0');
		}
	}
	return (base * sign);
}
