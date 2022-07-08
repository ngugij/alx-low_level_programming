#include <stdio.h>

/**
 * main - print numbers 1 to 100
 * multiples of 3 = Fizz
 * multiples of 5 = Buzz
 * multiples of 5 & 3 = Fizz Buzz
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
		printf("\n");

		return (0);
	}
}
