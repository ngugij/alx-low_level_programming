#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * print lowercase alphabets using putchar
 * Return: 0 (Success)
 */

int main(void)
{
	int c;

	for (c = 97; c <= 122; ++c)
	{
		putchar(c);
	}
	putchar(10);
	return (0);
}
