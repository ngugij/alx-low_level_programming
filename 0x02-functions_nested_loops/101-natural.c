#include <stdio.h>
#include "main.h"

/**
 * main - prints sum of multiples of 3 and 5
 * below 1024
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int a;
	int total1, total2;
	int sum;

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
	printf("%d\n", sum);
	return (0);
}
