#include <stdio.h>

/**
 * main - entry point
 * print combinations of three numbers
 * using putchar
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	int x;
	int n;
	int comma = 44;
	int space = 32;

	for (i = 48; i <= 57; i++)
	{
		for (x = 49; x <=57; x++)
		{
			for (n = 50; n <= 57; n++)
			{
				if (x > i && n > x)
				{
					putchar(i);
					putchar(x);
					putchar(n);
					if (i != 55)
					{
						putchar(comma);
						putchar(space);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
