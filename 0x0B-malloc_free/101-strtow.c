#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * count_words - counts number of words in a string
 * @s: string
 *
 * Return: number of words
 */

int count_words(char *s)
{
	int i;
	int a;
	int b;

	a = 0;
	b = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			a = 0;
		}
		else if (a == 0)
		{
			a = 1;
			b++;
		}
	}
	return (b);
}

/**
 * strtow - splits a string into words
 * @str: string
 *
 * Return: pointer to array of words
 * Otherwise NULL on failure
 */

char **strtow(char *str)
{
	int i, a = 0, b = 0, start, end, len = 0, words;
	char **s, *p;

	while (*(str + len))
		len++;
	words = count_words(str);
	if (words == 0)
		return (NULL);
	s = (char **) malloc(sizeof(char *) * (words + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (b)
			{
				end = i;
				p = (char *) malloc(sizeof(char) * (b + 1));
				if (p == NULL)
					return (NULL);
				while (start < end)
				{
					*p++ = str[start++];
				}
				*p = '\0';
				s[a] = p - b;
				a++;
				b = 0;
			}
		}
		else if (c++ == 0)
		{
			start = i;
		}
	}
	s[a] = NULL;
	return (s);
}
