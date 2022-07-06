#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 * followed by a new line
 *
 * Return: 0 (Success)
 */

void print_alphabet(void)
{

	int c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		_putchar(c);
	}
	putchar('\n');
	return (0);
}
