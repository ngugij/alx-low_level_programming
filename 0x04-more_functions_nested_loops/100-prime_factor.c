#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: 0 (Success)
 */

int main(void)
{
	long int a;
	long int b;
	long int largest;

	a = 612852475143;
	largest = -1;

	while (a % 2 == 0)
	{
		largest = 2;
		a = a / 2;
	}

	for (b = 3; b <= sqrt(a); b += 2)
	{
		while (a % b == 0)
		{
			largest = b;
			a = a / b;
		}
	}

	if (a > 2)
	{
		largest = a;
	}
	printf("%ld\n", largest);

	return (0);
}
