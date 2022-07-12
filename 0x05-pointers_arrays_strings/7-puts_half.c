#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: string to be reviewed
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int len;
	int b;
	int i;

	len = strlen(str);

	if (len % 2 == 1)
	{
		b = len / 2 + 1;
	}
	else
	{
		b = len / 2;
	}
	for (i = b; i < len; i++)
	{
		_putchar (str[i]);
	}
	_putchar(10);
}
