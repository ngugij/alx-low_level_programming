#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * string_nconcat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to concatenate
 *
 * Return: pointer to a newly allocated space in memory
 * Otherwise retun NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len = n;
	unsigned int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
	{
		len++;
	}
	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	len = 0;

	for (i = 0; s1[i]; i++)
	{
		s[len++] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		s[len++] = s2[i];
	}
	s[len] = '\0';

	return (s);
}
