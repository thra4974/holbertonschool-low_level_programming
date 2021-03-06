#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function allocates mem for array with malloc.
 * @nmemb: number of elements of size bytes.
 * @size: size of bytes.
 * Return: pointer to allocated mem.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int b;

	char *p;
	char *q;

	b = nmemb * size;
	p = q = malloc(b);

	if (p != NULL)
	{
		for (i = 0; i < b; i++)
		{
			*p++ = 0;
		}
	}

	return (q);

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}
}
