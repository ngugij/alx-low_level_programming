#include <stdio.h>

/**
 * main - entry point
 * print combination of numbers
 * using putchar
 * Return: 0 (Success)
 */

int main(void)
{
	int j;
	int n;
	int i;
	int x;
	int comma = 44;
	int space = 32;

	for (j = 48; j <= 57; j++)
	{
		for (n = 48; n <= 57; n++)
		{
			for (i =j; i <= 57; i++)
			{
				for (; x <= 57; x++)
				{
					if (i == j)
					{
						(x = n + 1);
					}
					else
					{
						(x =0);
					}
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
	}
	putchar(10);
	return (0);
}

