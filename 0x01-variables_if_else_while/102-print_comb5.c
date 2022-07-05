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
	int j;
	int k;
	int l;
	int comma = 44;
	int space = 32;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = i; k <= 57; k++)
			{
				for (; l <= 57; l++)
				{
					if (k == i)
					{
						(l = j + 1);
					}
					else
					{
						(l = 0);
					}

					putchar(i);
					putchar(j);
					putchar(space);
					putchar(k);
					putchar(l);
					if (i != 57 && j != 56)
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

