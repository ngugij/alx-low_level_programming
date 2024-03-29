#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"


/**
 * int_index - searches for an integer
 * @array: array to be reviewed
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: index of the first element for which the cmp does not return 0
 * Otherwise if no element matches || if size <= 0 return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
