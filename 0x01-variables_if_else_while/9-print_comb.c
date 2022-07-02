#include <stdio.h>

/**
 * main - entry point
 * print single numbers between 0 and 10
 * separated by , and space
 * using putchar
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	int space = 32;
	int comma = 44;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(comma);
			putchar(space);
		}
	}
	putchar(10);
	return (0);
}
