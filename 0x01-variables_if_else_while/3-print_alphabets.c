#include <stdio.h>

/**
 * main - entry point
 * print lower case followed by uppercase alphabets
 * using putchar
 * Return: 0 (Success)
 */

int main(void)
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		putchar(c);
	
	}
	for (c = 65; c <= 90; c++)
	{
		putchar(c);
	}
	putchar(10);
	return (0);
}
