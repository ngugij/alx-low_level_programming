#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to a newly allocated space in memory
 * Otherwise return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i])
		i++;
	while (s2[a])
		a++;
	b = i + a;
	s = (char *)malloc(b * sizeof(char) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (c < b)
	{
		if (c < i)
		{
			s[c] = s1[c];
		}
		if (c >= i)
		{
			s[c] = s2[a];
			a++;
		}
		c++;
	}
	s[c] = '\0';
	return (s);
}
