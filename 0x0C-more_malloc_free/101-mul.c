#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * is_digit - checks if there is a non-digit character in a string
 * @str: string to be reviewed
 *
 * Return: 0 (Success)
 * Otherwise return 1
 */

int is_digit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}


/**
 * _strlen - checks length of a string
 * @str: string to be reviewed
 *
 * Return: length of string
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - checks for errors
 *
 * Return: nothing
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}


/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0 (Success)
 */


int main(int argc, char *argv[])
{
	char *a, *b;
	int len1, len2, len, i, rem, n, m, *mul, c = 0;

	a = argv[1], b = argv[2];
	if (argc != 3 || !is_digit(a) || !is_digit(b))
		errors();
	len1 = _strlen(a);
	len2 = _strlen(b);
	len = len1 + len2 + 1;
	mul = malloc(sizeof(int) * len);
	if (!mul)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		mul[i] = 0;
	for (len1 -= 1; len1 >= 0; len1--)
	{
		n = a[len1] - '0';
		rem = 0;
		for (len2 = _strlen(b) - 1; len2 >= 0; len2--)
		{
			m = b[len2] - '0';
			rem += mul[len1 + len2 + 1] + (n * m);
			mul[len1 + len2 + 1] = rem % 10;
			rem = rem / 10;
		}
		if (rem > 0)
			mul[len1 + len2 + 1] += rem;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (mul[i])
			c = 1;
		if (c)
			_putchar(mul[i] + '0');
	}
	if (!c)
		_putchar('0');
	_putchar(10);
	free(mul);
	return (0);
}
