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

	if (j < 0)
	{
		j = -j;
	}
	return (j);
}
