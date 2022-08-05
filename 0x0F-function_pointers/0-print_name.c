#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * print_name - prints name
 * @name: name to print
 * @f: function pointer
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
	{
		return;
	}
	f(name);
}
