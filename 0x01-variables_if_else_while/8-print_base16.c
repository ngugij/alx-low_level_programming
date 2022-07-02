#include <stdio.h>

/**
 * main - entry point
 * print all base 16 numbers in lowercase
 * using putchar
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	int c;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (c = 97; c <= 102; c++)
	{
		putchar(c);
	}
	putchar(10);
	return (0);
}
