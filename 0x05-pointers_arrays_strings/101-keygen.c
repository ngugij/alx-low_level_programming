#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * random_password_gen - generates random passwords
 *
 * Return: 0 (Success)
 */

int random_password_gen(void)
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
