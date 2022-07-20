#include <stdio.h>
#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number whose factorial is to be computed
 *
 * Return: factorial of a number n
 * Or -1 to indicate an error if n is less than 0
 * Or 1 if n is equal to 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
