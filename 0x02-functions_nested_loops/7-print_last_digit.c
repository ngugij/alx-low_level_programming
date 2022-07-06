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

	int last_digit;

	last_digit = (n % 10);
	_putchar(37'd', last_digit);

	return last_digit;
}
