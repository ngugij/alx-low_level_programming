#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * generate a random number to variable n
 * and print whether it is a positive or negative
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	if (n == 0)
	{
		printf("%d is zero", n);
	}
	if (n < 0)
	{
		printf("%d is negative", n);
	}
	printf("\n");
	return (0);
}
