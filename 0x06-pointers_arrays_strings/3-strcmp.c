#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result = 0;

	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			break;
		}
		else if (s1[i] == '\0')
		{
			result = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			result = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			break;
		}
		else
		{
			i++;
		}
	}

	return (0);
}
