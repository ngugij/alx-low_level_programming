#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: number to review
 * @m: number to flip to
 *
 * Return: the number of bits you would need to flip
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, num = 0;

	while (xor > 0)
	{
		num = num + (xor & 1);
		xor >>= 1;
	}

	return (num);
}
