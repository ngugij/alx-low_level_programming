#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: digit to be reviewed
 *
 * Return: last digit of a number
 */

int print_last_digit(int n)
{

	if (n < 0)
	{
		n = -n;
	}
	_putchar(n % 10 + '0');
	return (n % 10);

}
