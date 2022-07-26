#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: string to be duplicated
 *
 * Return: pointer to the duplicated string
 * Otherwise returns NULL if insufficient memory was available
 */


char *_strdup(char *str)
{
	int i = 1;
	int a = 0;
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	s = (char *)malloc(i * sizeo(char) + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	while (a < i)
	{
		c[a] = str[a];
		a++;
	}
	c[a] = '\0';
	return (c);
}
