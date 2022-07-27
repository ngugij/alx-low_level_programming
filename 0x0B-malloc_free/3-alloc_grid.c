#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * alloc_grid - allocates memory for a 2 dimensional array of integers
 * @width: width of 2 dimesional array
 * @height: height of 2 dimensional array
 *
 * Return: pointer to the 2 dimensional array
 * Otherwise return NULL on failure or if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int i;
	int a;
	int b;
	int c;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(height * sizeof(int *));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (a = 0; a >= 0; a--)
			{
				free(p[a]);
			}
			free(p);
			return (NULL);
		}
	}
	for (b = 0; b < height; b++)
	{
		for (c = 0; c < width; c++)
		{
			p[b][c] = 0;
		}
	}
	return (p);
}
