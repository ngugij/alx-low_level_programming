#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: digit to be reviewed
 *
 * Return: last digit of a number
 */

int print_last_digit(int n)
{

	int last_digit;

	if (n < 0)
	{
		n = n * -1;
	}
	last_digit = (n % 10);
	_putchar(last_digit + '0');
	return (last_digit);

}
