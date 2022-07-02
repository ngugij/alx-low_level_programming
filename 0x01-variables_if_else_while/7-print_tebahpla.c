#include <stdio.h>

/**
 * main - entry point
 * print lowercase in reverse
 * using putchar
 * Return: 0 (Success)
 */

int main(void)
{
	int c;

	for (c = 122; c >= 97; c--)
	{
		putchar(c);
	}
	putchar(10);
	return (0);
}
