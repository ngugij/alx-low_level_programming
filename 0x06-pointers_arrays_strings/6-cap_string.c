#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @str: string to be reviewed
 *
 * Return: updated string
 */

char *cap_string(char *str)
{
	int i = 0;
	int a;
	char special[] = {32, 9, 10, ',', ';', '.', '!', '?', '"', '(', ')', '{', '{'};
	int len = 13;

	while (str[i])
	{
		a = 0;
		while (a < len)
		{
			if ((i == 0 || str[i - 1] == special[a]) &&
			     (str[i] >= 97 && str[i] <= 122))
			{
				str[i] -= 32;
			}
			a++;
		}
		i++;
	}
	return (str);
}
