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
	int len = 5;
	char alp[5] = {'A', 'E', 'O', 'T', 'L'};
	char num[5] = {'4', '3', '0', '7', '1'};

	while (str[i])
	{
		a = 0;

		while (a < len)
		{
			if (str[i] == alp[a] || str[i] - 32 == alp[a])
			{
				str[i] = num[a];
			}
			a++;
		}
		i++;
	}
	return (str);
}
