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
	unsigned int j = 0;

		if (s[0] == '-')
		{
			sign = -1;
			i++;
		}

		while (s[a] >= 0 && s[a] <= 9)
		{
			i = 1;
			j = (j * 10) + (s[a] - '0');
			a++;
		}

		if (i == 1)
		{
			break;
		}

		a++;
	j = j * sign;
	return (j);
}
