#include <stdio.h>
#include "main.h"

/**
 * main - prints sum of even numbers in the Fibonacci
 * sequence below 4000000
 *
 * Return: 0 (Success)
 */

int main(void)
{

	int a;
	unsigned long int b, c, d, sum;

	b = 1;
	c = 2;
	sum = 0;

	for (a = 1; a <= 33; ++a)
	{
		if (b < 4000000 && (b % 2) == 0)
		{
			sum = sum + b;
		}
		d = b + c;
		b = c;
		c = d;
	}
	print("%lu\n", sum);

	return (0);
}
