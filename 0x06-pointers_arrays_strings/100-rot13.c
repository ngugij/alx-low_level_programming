#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rot13 - encodes a string using rot 13
 * @str: string to be encoded
 *
 * Return: encoded string
 */

char *rot13(char *str)
{
	int i;
	int a;
	char alp[52] = {ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz};
	char rot13[52] = {NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm};

	while (str[++i])
	{
		for (a = 0; a < 52; a++)
		{
			if (str[i] == alp[a])
			{
				str[i] = rot13[a];
				break;
			}
		}
	}
	return (str);
}
