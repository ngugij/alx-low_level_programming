#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: pointer to reallocated memory block
 * Otherwise NULL/
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *pp;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	p = malloc(new_size);
	if (!ptr)
	{
		return (NULL);
	}
	pp = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			p[i] = pp[i];
		}
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			p[i] = pp[i];
		}
	}
	free(ptr);
	return (p);
}
