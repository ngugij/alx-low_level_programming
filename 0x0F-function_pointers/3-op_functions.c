#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"


/**
 * op_add - returns sum of a and b
 * @a: integer 1
 * @b: integer 2
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - returns difference of a and b
 * @a: integer 1
 * @b: integer 2
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - returns product of a and b
 * @a: integer 1
 * @b: integer 2
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - returns the division of a by b
 * @a: integer 1
 * @b: integer 2
 *
 * Return: division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - returns the remainder of division of a by b
 * @a: integer 1
 * @b: integer 2
 *
 * Return: remainder of division of a by b
 */


int op_mod(int a, int b)
{
	return (a % b);
}
