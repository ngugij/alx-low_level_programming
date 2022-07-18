#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: source memory area
 * @dest: destination to be copied to
 * @n: bytes to be copied
 *
 * Return: destination dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
