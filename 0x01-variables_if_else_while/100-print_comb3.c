#include <stdio.h>

/**
 * main - entry point
 * print combination of numbers
 * using putchar
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	int x;
	int comma = 44;
	int space = 32;

	for  (i = 48; i <= 57; i++)
	{
		for (x = 49; x <= 57; x++)
		{
			if (x > i)
			{
				putchar(i);
				putchar(x);
				if (i != 56)
				{
					putchar(comma);
					putchar(space);
				}
			}
		}
	}
	putchar(10);
	return (0);
}	
