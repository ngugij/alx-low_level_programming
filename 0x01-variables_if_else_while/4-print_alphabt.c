#include <stdio.h>

/**
 * main - entry point
 * print all lowercase
 * except q and e
 * Return: 0 (Success)
 */

int main(void)
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		if (c != 101 && c != 113)
		{
			putchar(c);
		}
	}
	putchar(10);
	return (0);
}
