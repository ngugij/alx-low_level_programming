#include <stdio.h>
#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: value to be changed
 * @to: value to set to
 *
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
