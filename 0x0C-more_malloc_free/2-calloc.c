#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: elements in array
 * @size: bytes per element
 *
 * Return: pointer to the allocated memory
 * Otherwise if nmemb = 0 || size = 0 or fail
 * return NULL
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(size * nmemb);

	if (p == NULL)
	{
		return (NULL);
	}
	s = p;

	for (i = 0; i < (size * nmemb); i++)
	{
		s[i] = '\0';
	}
	return (p);
}
