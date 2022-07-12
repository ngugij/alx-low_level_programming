#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - prints every other character in a string
 * starting with the first character
 * @str: string from which characters are to be printed
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i;
	int len;

	len = strlen(str);

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
