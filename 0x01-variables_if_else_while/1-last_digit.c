#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * print last digit generated randomly to variable n
 * and if it is zero, below six or greater than five
 * Return: 0 (Success)
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	printf("Last digit of %d is %d", n, last_digit);
	if (n > 5)
	{
		printf("and is greater than 5");
	}
	if (n == 0)
	{
		printf("and is 0");
	}
	if (n < 6 && n != 0)
	{
		printf("and is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
