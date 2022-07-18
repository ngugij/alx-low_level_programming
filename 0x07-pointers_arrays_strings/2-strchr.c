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

	while (1)
	{
		i = s++;

		if (i ==c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}
