#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: argument count
 * @argv: argument value i.e said name
 *
 * Return: 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
