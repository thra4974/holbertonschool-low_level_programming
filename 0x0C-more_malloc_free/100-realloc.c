#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memcpy - copies memory.
 * @dest: pointer to dest string.
 * @src: pointer to source.
 * @n: byte size to be copied.
 *
 * Return: nothing.
 */

void _memcpy(void *dest, void *src, unsigned int n)
{
	char *csrc = (char *)src;
	char *cdest = (char *)dest;
	unsigned int i;

	for (i = 0; i < n; i++)
		cdest[i] = csrc[i];
}

/**
 * _realloc - reallocates a mem block using malloc and free.
 * @ptr: pointer to mem prev allocated.
 * @old_size: size in bytes of allocated space for ptr.
 * @new_size: size, in bytes of new mem block.
 *
 * Return: pointer to new mem block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (!ptr)
	{
		return (malloc(new_size));
	}
	else if (new_size <= old_size)
	{
		return (ptr);
	}
	else
	{
		void *ptrnew = malloc(new_size);

		if (ptrnew)
		{
			_memcpy(ptrnew, ptr, old_size);
			free(ptr);
		}
		return (ptrnew);
	}
}
