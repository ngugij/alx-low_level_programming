#include <stdio.h>
#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: number 1
 * @n2: number 2
 * @r: buffer that stores result
 * @size_r: buffer size
 *
 * Return: result stored in r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int change = 0;
	int add = 0;
	int strt = 0;
	int tens = 0;
	int a = 0, b = 0, c = 0;

	while (n1[a] != 0)
	{
		a++;
	}
	while (n2[b] != 0)
	{
		b++;
	}
	a--;
	b--;
	if (a > size_r || b > size_r)
	{
		return (0);
	}
	for ( ; c < size_r; a--, b--, c++)
	{
		add = tens;
		if (a >= 0)
		{
			add = add + n1[a] - '0';
		}
		if (b >= 0)
		{
			add = add + n2[b] - '0';
		}
		if (a < 0 && b < 0 && add == 0)
		{
			break;
		}
		tens = add / 10;
		r[c] = add % 10 + '0';
	}
	if (a >= 0 || b >= 0 || add > 0)
	{
		return (0);
	}
	r[c] = '\0';
	c--;
	for ( ; strt < c; c--, strt++)
	{
		change = r[c];
		r[c] = r[strt];
		r[strt] = change;
	}
	return (r);
}
