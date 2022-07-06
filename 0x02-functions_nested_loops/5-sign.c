#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints sign depending on number entered
 * @n: number to be checked
 *
 * Return: 1 and print + if n is greater than 0
 * Else return 0 and print 0 if n is 0
 * Otherwise return -1 and print - if n is less than zero
 */

int print_sign(int n)
{

	if (n > 0)
	{
		return (1);
		_putchar(43);
	}
	else if (n == 0)
	{
		return(0);
		_putchar(48);
	}
	else
	{
		return (-1);
		_putchar(45);
	}
}
