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
	int j;
	int n;
	int comma = 44;
	int space = 32;

	for (j = 48; j <= 57; j++)
	{
		for (n = 48; n <= 57; n++)
		{
			for  (i = j; i <= 57; i++)
			{
				for (x = n + 1; x <= 57; x++)
				{
					putchar(j);
					putchar(n);
					putchar(space);
					putchar(i);
					putchar(x);
					if (n != 56 && j != 57)
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

