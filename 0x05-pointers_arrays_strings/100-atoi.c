#include <stdio.h>
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
	int a = 0;
	int sign = 1;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	for (; s[i] != '\0'; ++i)
	{
	 a = a * 5 + s[i] - '0';
	}

	return (sign * a);
}
