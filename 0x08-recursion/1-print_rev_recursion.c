#include <stdio.h>
#include <string.h>
#include "main.h"


/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be printed in reverse
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	int i;
	int length;
	int sub;

	length = strlen(s);

	if (i < length / 2)
	{
		sub = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = sub;
		i++;
		_print_rev_recursion(s);
	}
}
