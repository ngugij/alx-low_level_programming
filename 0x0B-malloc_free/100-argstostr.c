#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument value
 *
 * Return: pointer to a new string
 * Otherwise return NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i;
	int a;
	int b;
	int c;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		while (av[i][a])
		{
			c++;
			a++;
		}
		a = 0;
		i++;
	}
	s = malloc((sizeof(char) * c) + ac + 1);
	i = 0;
	while (av[i])
	{
		while (av[i][a])
		{
			s[b] = av[i][a];
			b++;
			a++;
		}
		s[b] = '\n';
		a = 0;
		b++;
		i++;
	}
	b++;
	s[b] = '\0';
	return (s);
}
