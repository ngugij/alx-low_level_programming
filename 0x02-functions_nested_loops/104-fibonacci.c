#include <stdio.h>
#include "main.h"

/**
 * main - prints first Fibonacci numbers
 * 
 * Return: 0 (Success)
 */

int main(void)
{
	unsigned long int a, b, c, x, y, z, n;

	b = 1;
	c = 2;

	printf("%lu", b);

	for (a = 1; a < 91; a++)
	{
		printf(", %lu", c);
		c = c + b;
		b = c - b;
	}

	x = b / 1000000000;
	y = b % 1000000000;
	z = c / 1000000000;
	n = c % 1000000000;

	for (a = 92; a <99; ++a)
	{
		printf(", %lu", z + (n / 1000000000));
		printf("%lu", n % 1000000000);
		z = z + x;
		x = z - x;
		n = n + y;
		y = n - y;
	}
	printf("\n");

	return (0);
}
