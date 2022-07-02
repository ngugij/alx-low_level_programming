#include <stdio.h>

/**
 * main - entry point
 * print single numbers between 0 and 10
 * using putchar
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
