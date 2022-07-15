#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to be reviewed
 *
 * Return: updated string
 */

char *leet(char *str)
{
	int i = 0;
	int a;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[++i])
	{
		for (a = 0; a <= 7; a++)
		{
			if (str[i] == leet[a] ||
			    str[i] - 32 == leet[a])
			{
				str[i] = a + '0';
			}
		}
	}
	return (str);
}
