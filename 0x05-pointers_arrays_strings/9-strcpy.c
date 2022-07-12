#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcpy - copies string including terminating null byte
 * @dest: buffer destination
 * @src: source to copy from
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}
