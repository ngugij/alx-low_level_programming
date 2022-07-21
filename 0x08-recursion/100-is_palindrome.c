#include <stdio.h>
#include "main.h"

/**
 * is_palindrome - checks whether the string is a palindrome or not
 * @s: string to be reviewed
 *
 * Return: 1 if palindrome 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (checker(s, 0, _strlen_(s)));
	}
}

/**
 * _strlen_ - checks length of a string
 * @s: string to be reviewed
 *
 * Return: length of string s
 */

int _strlen_(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_(s + 1));
	}
}

/**
 * checker - checks for palindrome recursively
 * @s: string to be reviewed
 * @i: iterator
 * @len: length of string s
 *
 * Return: 1 if palindrome 0 if not
 */

int checker(char *s, int i, int len)
{
	if (*(s + 1) != *(s + len - 1))
	{
		return (0);
	}
	if (i > len)
	{
		return (1);
	}
	else
	{
		return (checker(s, i + 1, len - 1));
	}
}
