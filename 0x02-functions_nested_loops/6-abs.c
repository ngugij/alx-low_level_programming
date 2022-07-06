#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _abs - computes absolute value of an integer
 *@j: integer to be checked
 *
 * Return: 0 (Success)
 */

int _abs(int j)
{

	j = abs(j);
	printf("%d", j);

	return (0);
}
