#include <stdio.h>
#include "main.h"

/**
 * sum_multiples - prints sum of multiples of 3 and 5
 * below 1024
 *
 * Return: 0 (Success)
 */

int sum_multiples(void)
{
	int a;
	unsigned long int total1, total2;
	unsigned long int sum;

	total1 = total2 = sum = 0;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0)
		{
			total1 = total1 + a;
		}
		else if ((a % 5) == 0)
		{
			total2 = total2 + a;
		}
	}
	sum = total1 + total2;
	printf("%lu\n", sum);
	return (0);
}
