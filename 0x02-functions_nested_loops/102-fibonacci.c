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
	int a;
	int b;
	int c;
	int d;

	b = 1;
	c = 2;

	for (a = 0; a <= 50; a++)
	{
		if (b != 20365011074)
		{
			printf("%d, ", b);
		}
		else
		{
			printf("%d\n", b);
		}
		d = b + c;
		b = c;
		c = d;
	}
	return (0);
}
