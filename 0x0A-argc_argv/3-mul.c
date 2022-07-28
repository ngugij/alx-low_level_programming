#include <stdio.h>


/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0 (Success)
 * Otherwise return 1 (Error)
 */

int main(int argc, char *argv[])
{
	int mult;
	int a;
	int b;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mult = a * b;

	printf("%d\n", mult);
	return (0);
}
