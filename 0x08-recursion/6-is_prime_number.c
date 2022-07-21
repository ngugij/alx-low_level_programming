#include <stdio.h>
#include "main.h"

/**
 * is_prime_number -  checks for prime numbers
 * @n: number to be reviewed
 *
 * Return: the recursive function
 */

int is_prime_number(int n)
{
	return (_prime(n, 1));
}

/**
 * _prime - checks if an integer is a prime number
 * @n: number to be reviewed
 * @i: iterator
 *
 * Return: 1 if integer is a prime number
 * Otherwise return 0
 */

int _prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	else
	{
		return (_prime(n, i + 1));
	}
}
