#include <stdio.h>
#include <stdlib.h>


/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0 (Success)
 * Otherwise 1 (Error)
 */

int main(int argc, char *argv[])
{
	int add = 0;
	int i;
	int num;
	int a;
	int b;

	for (i = 1; i < argc; i++)
	{
		for (a = 0; argv[i][a] != '\0'; a++)
		{
			if (argv[i][a] > '9' || argv[i][a] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	for (b = 1; b < argc; b++)
	{
		num = atoi(argv[b]);
		add = add + num;
	}
	printf("%d\n", add);
	return (0);
}
