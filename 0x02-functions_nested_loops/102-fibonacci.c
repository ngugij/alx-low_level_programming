#include <stdio.h>
#include "main.h"

/**
 * main - prints the first 50 Fibonacci numbers
 * starting with 1 and 2
 *
 * Return: 0 (Success)
 */

int main(void)
{
	long int a;
	long int b;
	long int c;
	long int d;

	b = 1;
	c = 2;

	for (a = 1; a <= 50; ++a)
	{
		if (b != 20365011074)
		{
			printf("%ld, ", b);
		}
		else
		{
			printf("%ld\n", b);
		}
		d = b + c;
		b = c;
		c = d;
	}
	return (0);
}
