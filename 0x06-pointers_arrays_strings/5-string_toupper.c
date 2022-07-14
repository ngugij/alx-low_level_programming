#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * Return: string
 */

char *string_toupper(char *)
{
	char *str;
	int i;

	while (str[i++])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}