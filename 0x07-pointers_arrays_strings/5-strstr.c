#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be reviewed
 * @needle: substring to be searched for
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int a;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (a = 0; needle[a] != '\0'; a++)
		{
			if (haystack[i + a] != needle[a])
			{
				break;
			}
		}
		if (!needle[a])
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
