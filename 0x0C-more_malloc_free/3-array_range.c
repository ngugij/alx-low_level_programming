#include <stdio.h>
#include <stdlib>
#include "main.h"


/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to newly created array
 * Otherwise if min > max || fail return NULL
 */


int *array_range(int min, int max)
{
	int *p;
	int i;
	int range;

	if (min > max)
	{
		return (NULL);
	}
	range = max - min + 1;

	p = malloc(sizeof(int) * range);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		p[i] = min++;
	}
	return (p);
}
