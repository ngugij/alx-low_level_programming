#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0 (Success)
 * Otherwise 1 (Error)
 */

int main(int argc, char *argv[])
{
	int i, num, change = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			num = num - coins[i];
			change++;
		}
	}
	printf("%d\n", change);
	return (0);
}
