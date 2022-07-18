#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be reviewed
 * @c: character to be located
 *
 * Return: pointer to first occurrence of the character or NULL
 * if not found
 */

char *_strchr(char *s, char c)
{
	int i;
	int a = 0;

	while (s[a])
	{
		a++;
	}
	for (i = 0; i < a; i++)
	{
		if (c == s[i])
		{
			s = s + i;
		}
		return (s);
	}
	return ('\0');
}
