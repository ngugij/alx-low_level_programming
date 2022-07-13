#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - generates random passwords
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int password;
	int add;

	srand(time(NULL));
	add = 0;

	while (add <= 2645)
	{
		password = (rand() % 128);
		add = add + password;
		printf("%c", password);
	}
	printf("%c", 2772 - add);

	return (0);
}
