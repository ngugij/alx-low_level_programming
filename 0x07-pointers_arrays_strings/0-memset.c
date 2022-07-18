#include <stdio.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: points to memory area
 * @n: bytes to be filled
 * @b: constat byte
 *
 * Return: memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
