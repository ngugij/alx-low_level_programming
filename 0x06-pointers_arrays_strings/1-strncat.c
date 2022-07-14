#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concatenate two strings that use at most n bytes from src
 * @dest: string to be concatenated
 * @src: string to append
 * @n: number of bytes to be used from src
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int lenDest = 0;

	while (dest[i++])
	{
		lenDest++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[lenDest++] = src[i];
	}
	return (dest);
}
