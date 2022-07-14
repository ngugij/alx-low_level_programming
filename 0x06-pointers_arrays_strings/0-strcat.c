#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: string to be appended
 * @dest: string to be concatenated
 *
 * Return: a pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int lenDest = 0;

	while (dest[i++])
	{
		lenDest++;
	}

	for (i = 0; src[i]; i++)
	{
		dest[lenDest++] = src[i];
	
	}
	return (dest);
}
