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

	while (str[++i])
	{
		while (!(str[i] >= 97 && str[i] <= 122))
		{
			i++;
		}
		if (str[i - 1] == ' ' ||
				str[i - 1] == '\t' ||
				str[i - 1] == '\n' ||
				str[i - 1] == ',' ||
				str[i - 1] == ';' ||
				str[i - 1] == '.' ||
				str[i - 1] == '!' ||
				str[i - 1] == '?' ||
				str[i - 1] == '"' ||
				str[i - 1] == '(' ||
				str[i - 1] == ')' ||
				str[i - 1] == '{' ||
				str[i - 1] == '}')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
