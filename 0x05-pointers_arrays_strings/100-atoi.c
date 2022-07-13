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

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (i >= '0' && i <= '9')
	{
		for ( ; s[i] != '\0'; ++i)
		{
			base = base * 10 + s[i] - '0';
		}
	}
	return (base * sign);
}
