#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number whose square root is to be computed
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive square root
 * @n: number whose square root is to be computed
 * @i: integer
 *
 * Return: squareroot of n
 */

int _sqrt(int n, int i)
{

	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt(n, i + 1));
	}
}
